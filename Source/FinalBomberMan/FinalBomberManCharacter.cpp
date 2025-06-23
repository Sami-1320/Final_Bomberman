// Copyright Epic Games, Inc. All Rights Reserved.

#include "FinalBomberManCharacter.h"
#include "FinalBomberManGameMode.h"
#include "Bomba.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "PowerUp.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "UIManager.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AFinalBomberManCharacter

AFinalBomberManCharacter::AFinalBomberManCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 0.f; // Deshabilitar salto normal
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
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

	// Reiniciar vidas al inicio del juego
	VidasJugador = MaxVidasJugador;

	// Activar el power up de salto alto al inicio del juego
	ActivarPowerUpSalto();

	if (!BombClass)
	{
		BombClass = ABomba::StaticClass();
	}

	if (GEngine)
	{
		const int32 BombCountMessageKey = 101; 
		GEngine->AddOnScreenDebugMessage(BombCountMessageKey, 5.f, FColor::Cyan, FString::Printf(TEXT("Bombas: %d"), BombCount));
		// Mostrar vidas iniciales
		const int32 VidasMessageKey = 104;
		GEngine->AddOnScreenDebugMessage(VidasMessageKey, 5.f, FColor::Red, FString::Printf(TEXT("Vidas: %d/%d"), VidasJugador, MaxVidasJugador));
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFinalBomberManCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("PlaceBomb", IE_Pressed, this, &AFinalBomberManCharacter::PlaceBombPressed);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFinalBomberManCharacter::SaltoAltoPressed);
	PlayerInputComponent->BindAction("CambiarNivel1", IE_Pressed, this, &AFinalBomberManCharacter::CambiarANivel1);
	PlayerInputComponent->BindAction("CambiarNivel2", IE_Pressed, this, &AFinalBomberManCharacter::CambiarANivel2);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFinalBomberManCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFinalBomberManCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AFinalBomberManCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AFinalBomberManCharacter::LookUp);
	
	UE_LOG(LogTemp, Warning, TEXT("Input de salto configurado correctamente"));
}

void AFinalBomberManCharacter::MoveForward(float Value)
{
	// Si el movimiento está bloqueado (durante salto alto), no permitir movimiento
	if (bMovimientoBloqueado)
	{
		return;
	}

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
	// Si el movimiento está bloqueado (durante salto alto), no permitir movimiento
	if (bMovimientoBloqueado)
	{
		return;
	}

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

void AFinalBomberManCharacter::SaltoAltoPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("Tecla espacio presionada"));
	UE_LOG(LogTemp, Warning, TEXT("bTienePowerUpSalto: %s"), bTienePowerUpSalto ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("SaltosDisponibles: %d"), SaltosDisponibles);
	
	if (PuedeSaltarAlto())
	{
		UE_LOG(LogTemp, Warning, TEXT("Puede saltar alto - ejecutando salto"));
		UsarSaltoAlto();
	}
	else if (bTienePowerUpSalto && SaltosDisponibles <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No tienes más saltos disponibles"));
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("No tienes más saltos disponibles"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No puede saltar alto - no tiene el power up"));
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange, TEXT("No tienes el power up de salto alto"));
		}
	}
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
		case ETipoPowerUp::SaltoAlto:
		{
			ActivarPowerUpSalto();
			// El mensaje ya se maneja dentro de ActivarPowerUpSalto
			return; // Salimos para evitar mostrar un mensaje vacío
		}
		case ETipoPowerUp::VidaExtra:
		{
			GanarVida();
			// El mensaje ya se maneja dentro de GanarVida
			return; // Salimos para evitar mostrar un mensaje vacío
		}
		default:
			break;
	}

	if (GEngine && MessageKey != -1)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 4.f, FColor::Green, Message);
	}
}

void AFinalBomberManCharacter::SetVidasJugador(int32 NuevasVidas)
{
	VidasJugador = FMath::Max(0, NuevasVidas); // Permitir cualquier valor positivo, mínimo 0
	
	if (GEngine)
	{
		const int32 VidasMessageKey = 104;
		GEngine->AddOnScreenDebugMessage(VidasMessageKey, 5.f, FColor::Red, FString::Printf(TEXT("Vidas: %d/%d"), VidasJugador, MaxVidasJugador));
	}
}

void AFinalBomberManCharacter::PerderVida()
{
	VidasJugador = FMath::Max(0, VidasJugador - 1);
	
	if (GEngine)
	{
		const int32 VidasMessageKey = 104;
		GEngine->AddOnScreenDebugMessage(VidasMessageKey, 5.f, FColor::Red, FString::Printf(TEXT("Vidas: %d/%d"), VidasJugador, MaxVidasJugador));
		
		if (VidasJugador <= 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, TEXT("REINICIO"));
			
			// Reiniciar el nivel
			AFinalBomberManGameMode* GameMode = Cast<AFinalBomberManGameMode>(GetWorld()->GetAuthGameMode());
			if (GameMode)
			{
				GameMode->ReiniciarNivel();
			}
		}
	}
}

void AFinalBomberManCharacter::GanarVida()
{
	VidasJugador++; // Permitir ganar vidas sin límite superior
	
	if (GEngine)
	{
		const int32 VidasMessageKey = 104;
		GEngine->AddOnScreenDebugMessage(VidasMessageKey, 5.f, FColor::Green, FString::Printf(TEXT("Vidas: %d/%d"), VidasJugador, MaxVidasJugador));
	}
}

void AFinalBomberManCharacter::ActivarPowerUpSalto()
{
	UE_LOG(LogTemp, Warning, TEXT("=== ACTIVANDO POWER UP SALTO ALTO ==="));
	
	bTienePowerUpSalto = true;
	SaltosDisponibles = MaxSaltosDisponibles;
	PosicionSalto = GetActorLocation();
	
	UE_LOG(LogTemp, Warning, TEXT("bTienePowerUpSalto: %s"), bTienePowerUpSalto ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("SaltosDisponibles: %d"), SaltosDisponibles);
	UE_LOG(LogTemp, Warning, TEXT("PosicionSalto: %s"), *PosicionSalto.ToString());
	
	MostrarMensajeSaltos();
	
	UE_LOG(LogTemp, Warning, TEXT("Power Up Salto activado - Saltos disponibles: %d"), SaltosDisponibles);
}

void AFinalBomberManCharacter::UsarSaltoAlto()
{
	if (!PuedeSaltarAlto())
	{
		return;
	}
	
	// Bloquear el movimiento horizontal durante el salto
	BloquearMovimiento();
	
	// Guardar la posición actual para volver a ella
	FVector PosicionActual = GetActorLocation();
	
	// Realizar el salto alto
	float AlturaSaltoOriginal = GetCharacterMovement()->JumpZVelocity;
	GetCharacterMovement()->JumpZVelocity = 1500.0f;
	
	// Forzar el salto
	Jump();
	
	// Restaurar la velocidad de salto original después de un frame
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, AlturaSaltoOriginal]()
	{
		GetCharacterMovement()->JumpZVelocity = AlturaSaltoOriginal;
	}, 0.1f, false);
	
	// Reducir saltos disponibles
	SaltosDisponibles--;
	
	// Mostrar mensaje de saltos restantes
	MostrarMensajeSaltos();
	
	// Configurar timer para volver a la posición original después de 3 segundos
	FTimerHandle TimerPosicion;
	GetWorld()->GetTimerManager().SetTimer(TimerPosicion, [this, PosicionActual]()
	{
		SetActorLocation(PosicionActual);
		
		// Desbloquear el movimiento cuando el jugador aterriza
		DesbloquearMovimiento();
		
		// Si no quedan saltos, desactivar el power up
		if (SaltosDisponibles <= 0)
		{
			bTienePowerUpSalto = false;
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Power Up Salto terminado"));
			}
		}
	}, 3.0f, false);
	
	UE_LOG(LogTemp, Warning, TEXT("Salto alto usado - Saltos restantes: %d"), SaltosDisponibles);
}

void AFinalBomberManCharacter::MostrarMensajeSaltos()
{
	if (GEngine)
	{
		const int32 SaltosMessageKey = 106;
		FString Mensaje = FString::Printf(TEXT("Power Up Salto: %d"), SaltosDisponibles);
		GEngine->AddOnScreenDebugMessage(SaltosMessageKey, 5.f, FColor::Cyan, Mensaje);
	}
}

void AFinalBomberManCharacter::BloquearMovimiento()
{
	bMovimientoBloqueado = true;
	UE_LOG(LogTemp, Warning, TEXT("Movimiento bloqueado durante salto alto"));
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Orange, TEXT("Movimiento bloqueado"));
	}
}

void AFinalBomberManCharacter::DesbloquearMovimiento()
{
	bMovimientoBloqueado = false;
	UE_LOG(LogTemp, Warning, TEXT("Movimiento desbloqueado"));
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Movimiento desbloqueado"));
	}
}

void AFinalBomberManCharacter::CambiarANivel1()
{
	UE_LOG(LogTemp, Warning, TEXT("Cambiando al nivel 1"));
	
	// Obtener el GameMode
	AFinalBomberManGameMode* GameMode = Cast<AFinalBomberManGameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		// Reiniciar estadísticas del jugador
		VidasJugador = MaxVidasJugador; // Reiniciar a 5 vidas
		BombCount = MaxBombCount; // Reiniciar bombas
		
		// Desactivar power up de salto
		bTienePowerUpSalto = false;
		SaltosDisponibles = 0;
		
		// Limpiar bombas activas
		for (ABomba* Bomb : ActiveBombs)
		{
			if (Bomb && IsValid(Bomb))
			{
				Bomb->Destroy();
			}
		}
		ActiveBombs.Empty();
		
		// Reiniciar puntos del sistema de conteo
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), UUIManager::StaticClass(), FoundActors);
		if (FoundActors.Num() > 0)
		{
			UUIManager* UIManager = Cast<UUIManager>(FoundActors[0]);
			if (UIManager)
			{
				UIManager->ReiniciarPuntos();
			}
		}
		
		// Mostrar mensaje de cambio de nivel
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("¡CAMBIO AL NIVEL 1!"));
		}
		
		// Cargar el nivel 1
		GameMode->CargarNivel(1);
		
		// Activar power up de salto en el nuevo nivel
		ActivarPowerUpSalto();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo obtener el GameMode"));
	}
}

void AFinalBomberManCharacter::CambiarANivel2()
{
	UE_LOG(LogTemp, Warning, TEXT("Cambiando al nivel 2"));
	
	// Obtener el GameMode
	AFinalBomberManGameMode* GameMode = Cast<AFinalBomberManGameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		// Reiniciar estadísticas del jugador
		VidasJugador = MaxVidasJugador; // Reiniciar a 5 vidas
		BombCount = MaxBombCount; // Reiniciar bombas
		
		// Desactivar power up de salto
		bTienePowerUpSalto = false;
		SaltosDisponibles = 0;
		
		// Limpiar bombas activas
		for (ABomba* Bomb : ActiveBombs)
		{
			if (Bomb && IsValid(Bomb))
			{
				Bomb->Destroy();
			}
		}
		ActiveBombs.Empty();
		
		// Reiniciar puntos del sistema de conteo
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), UUIManager::StaticClass(), FoundActors);
		if (FoundActors.Num() > 0)
		{
			UUIManager* UIManager = Cast<UUIManager>(FoundActors[0]);
			if (UIManager)
			{
				UIManager->ReiniciarPuntos();
			}
		}
		
		// Mostrar mensaje de cambio de nivel
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("¡CAMBIO AL NIVEL 2!"));
		}
		
		// Cargar el nivel 2
		GameMode->CargarNivel(2);
		
		// Activar power up de salto en el nuevo nivel
		ActivarPowerUpSalto();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo obtener el GameMode"));
	}
}
