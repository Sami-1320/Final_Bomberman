// Copyright Epic Games, Inc. All Rights Reserved.

#include "FinalBomberManCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Bomba.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "PowerUp.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AFinalBomberManCharacter

AFinalBomberManCharacter::AFinalBomberManCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// El personaje se orienta a la dirección del movimiento
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->bOrientRotationToMovement = true; 

	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Configurar el brazo de la cámara (Camera Boom)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true; // El boom sigue la rotación del control (mouse)

	// Configurar la cámara que sigue al jugador
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false; 
}

void AFinalBomberManCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (!BombClass)
	{
		BombClass = ABomba::StaticClass();
	}

	if (GEngine)
	{
		const int32 BombCountMessageKey = 101; 
		GEngine->AddOnScreenDebugMessage(BombCountMessageKey, 5.f, FColor::Cyan, FString::Printf(TEXT("Bombas: %d"), BombCount));
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFinalBomberManCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("PlaceBomb", IE_Pressed, this, &AFinalBomberManCharacter::PlaceBombPressed);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFinalBomberManCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFinalBomberManCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AFinalBomberManCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AFinalBomberManCharacter::LookUp);
}

void AFinalBomberManCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AFinalBomberManCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AFinalBomberManCharacter::Turn(float Rate)
{
	AddControllerYawInput(Rate);
}

void AFinalBomberManCharacter::LookUp(float Rate)
{
	AddControllerPitchInput(Rate);
}

void AFinalBomberManCharacter::PlaceBombPressed()
{
	UE_LOG(LogTemplateCharacter, Warning, TEXT("--- PlaceBomb Action was triggered! ---"));
	PlaceBombAtLocation();
}

void AFinalBomberManCharacter::PlaceBombAtLocation()
{
	// Check if player can place a bomb
	if (BombCount <= 0)
	{
		UE_LOG(LogTemplateCharacter, Warning, TEXT("Player cannot place more bombs. Current count: %d"), BombCount);
		return;
	}

	// Get the world
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	// Get player location and forward direction
	FVector PlayerLocation = GetActorLocation();
	FVector ForwardDirection = GetActorForwardVector();
	
	// Calculate bomb position in front of player
	FVector BombLocation = PlayerLocation + (ForwardDirection * BombPlaceDistance);
	
	// Round to grid position
	FVector GridLocation = FVector(
		FMath::RoundToFloat(BombLocation.X / 200.0f) * 200.0f,
		FMath::RoundToFloat(BombLocation.Y / 200.0f) * 200.0f,
		0.0f
	);

	// Check if there's already a bomb at this location
	for (ABomba* Bomb : ActiveBombs)
	{
		if (Bomb && FVector::Dist(Bomb->GetActorLocation(), GridLocation) < 50.0f)
		{
			UE_LOG(LogTemplateCharacter, Warning, TEXT("Bomb already exists at this location"));
			return;
		}
	}

	// Spawn the bomb
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;

	ABomba* NewBomb = World->SpawnActor<ABomba>(BombClass, GridLocation, FRotator::ZeroRotator, SpawnParams);
	
	if (NewBomb)
	{
		// Configure the bomb properties
		NewBomb->RadioExplosion = ExplosionRadius;
		NewBomb->TiempoExplosion = 2.0f;
		NewBomb->Dano = 100;
		
		// Start the explosion timer
		NewBomb->IniciarExplosion();
		
		// Add to active bombs array
		ActiveBombs.Add(NewBomb);
		
		// Decrease bomb count and update UI
		SetBombCount(GetBombCount() - 1);
		
		UE_LOG(LogTemp, Log, TEXT("Bomb placed at location: %s. Bombs remaining: %d"), 
			*GridLocation.ToString(), BombCount);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("Failed to spawn bomb"));
	}
}

void AFinalBomberManCharacter::SetBombCount(int32 NewBombCount) 
{ 
	BombCount = NewBombCount;
	if (GEngine)
	{
		const int32 BombCountMessageKey = 101;
		GEngine->AddOnScreenDebugMessage(BombCountMessageKey, 5.f, FColor::Cyan, FString::Printf(TEXT("Bombas: %d"), BombCount));
	}
}

void AFinalBomberManCharacter::AplicarBonus(ETipoPowerUp Tipo)
{
	int32 MessageKey = -1;
	FString Message = "";

	switch (Tipo)
	{
		case ETipoPowerUp::Velocidad:
		{
			BonusVelocidad += 1.f;
			GetCharacterMovement()->MaxWalkSpeed += 50.f; // Aumento fijo de velocidad
			MessageKey = 102; // Key para el mensaje de velocidad
			Message = FString::Printf(TEXT("Aumento de velocidad: %.0f%%"), BonusVelocidad);
			break;
		}
		case ETipoPowerUp::BombaExtra:
		{
			SetBombCount(GetBombCount() + 1);
			// El mensaje ya se maneja dentro de SetBombCount
			return; // Salimos para evitar mostrar un mensaje vacío
		}
		case ETipoPowerUp::RadioExplosion:
		{
			SetExplosionRadius(GetExplosionRadius() + 1);
			MessageKey = 103;
			Message = FString::Printf(TEXT("Radio de Explosion: %d"), GetExplosionRadius());
			break;
		}
		default:
			break;
	}

	if (GEngine && MessageKey != -1)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 4.f, FColor::Green, Message);
	}
}
