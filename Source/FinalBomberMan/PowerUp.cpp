// Copyright Epic Games, Inc. All Rights Reserved.
#include "PowerUp.h"
#include "IPrototype.h"
#include "FinalBomberManCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "Materials/MaterialInterface.h"
#include "GameEventManager.h"
#include "Kismet/GameplayStatics.h"

APowerUp::APowerUp()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Crear el componente de colisión
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->SetSphereRadius(50.0f);
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APowerUp::OnOverlapBegin);

    // Configurar propiedades por defecto
    TipoPowerUp = ETipoPowerUp::BombaExtra;
    Duracion = 10.0f;
    Valor = 1;
    EsPermanente = false;

    ConfigurarMesh();
}

void APowerUp::BeginPlay()
{
    Super::BeginPlay();
    ConfigurarMesh();
    ConfigurarCollision();
}

void APowerUp::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Rotar el power-up constantemente
    if (MeshComponent)
    {
        FRotator CurrentRotation = MeshComponent->GetRelativeRotation();
        CurrentRotation.Yaw += DeltaTime * 90.0f; // 90 grados por segundo
        MeshComponent->SetRelativeRotation(CurrentRotation);
    }
}

UObject* APowerUp::Clone()
{
    APowerUp* Clon = GetWorld()->SpawnActor<APowerUp>(APowerUp::StaticClass(), GetActorLocation(), GetActorRotation());
    if (Clon)
    {
        Clon->TipoPowerUp = TipoPowerUp;
        Clon->Duracion = Duracion;
        Clon->Valor = Valor;
        Clon->EsPermanente = EsPermanente;
        
        UE_LOG(LogTemp, Log, TEXT("PowerUp: Clon creado del tipo %d"), (int32)TipoPowerUp);
    }
    return Clon;
}

void APowerUp::AplicarPowerUp(AFinalBomberManCharacter* Jugador)
{
    if (!Jugador)
    {
        return;
    }

    Jugador->AplicarBonus(TipoPowerUp);
    
    Destroy();
}

void APowerUp::RemoverPowerUp(AFinalBomberManCharacter* Jugador)
{
    if (!Jugador)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("PowerUp: Removido del jugador - Tipo: %d"), (int32)TipoPowerUp);
}

ETipoPowerUp APowerUp::ObtenerTipo() const
{
    return TipoPowerUp;
}

float APowerUp::ObtenerDuracion() const
{
    return Duracion;
}

int32 APowerUp::ObtenerValor() const
{
    return Valor;
}

bool APowerUp::EsPowerUpPermanente() const
{
    return EsPermanente;
}

float APowerUp::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    // Los power-ups son completamente inmunes a las bombas
    // No reciben ningún daño y no se destruyen
    return 0.0f;
}

void APowerUp::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    AFinalBomberManCharacter* Jugador = Cast<AFinalBomberManCharacter>(OtherActor);
    if (Jugador)
    {
        // Aplicar el efecto del power-up al jugador
        AplicarPowerUp(Jugador);
        
        // Contar power-ups restantes antes de destruir este
        int32 PowerUpsRestantes = ContarPowerUpsRestantes();
        
        // Obtener el nombre del tipo de power-up
        FString NombreTipo = "";
        switch (TipoPowerUp)
        {
        case ETipoPowerUp::BombaExtra: NombreTipo = "Bomba Extra"; break;
        case ETipoPowerUp::RadioExplosion: NombreTipo = "Radio Explosión"; break;
        case ETipoPowerUp::Velocidad: NombreTipo = "Velocidad"; break;
        case ETipoPowerUp::Escudo: NombreTipo = "Escudo"; break;
        case ETipoPowerUp::BombaRemota: NombreTipo = "Bomba Remota"; break;
        case ETipoPowerUp::Inmortalidad: NombreTipo = "Inmortalidad"; break;
        }
        
        // Mostrar mensaje con power-ups restantes
        FString Mensaje = FString::Printf(TEXT("¡%s recogido! Power-ups restantes: %d"), *NombreTipo, PowerUpsRestantes);
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, Mensaje);
        }
        
        UE_LOG(LogTemp, Warning, TEXT("PowerUp recogido: %s. Power-ups restantes: %d"), *NombreTipo, PowerUpsRestantes);
    }
}

void APowerUp::ConfigurarMesh()
{
    // Cargar la malla de cápsula estrecha especificada
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsuleMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_NarrowCapsule"));
    if (CapsuleMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(CapsuleMeshAsset.Object);
        UE_LOG(LogTemp, Log, TEXT("PowerUp: Malla de cápsula estrecha cargada correctamente"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PowerUp: No se pudo cargar la malla de cápsula estrecha"));
    }

    // Configurar material según el tipo de power-up
    UMaterialInterface* Material = ObtenerMaterialPorTipo(TipoPowerUp);
    if (Material)
    {
        MeshComponent->SetMaterial(0, Material);
    }

    // Configurar escala y propiedades físicas
    SetActorScale3D(FVector(0.8f, 0.8f, 0.8f));
    
    // Configurar propiedades físicas
    MeshComponent->SetSimulatePhysics(false);
    MeshComponent->SetEnableGravity(false);
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision); // La colisión se maneja con el SphereComponent
}

UMaterialInterface* APowerUp::ObtenerMaterialPorTipo(ETipoPowerUp Tipo)
{
    // Usar el material dorado para todos los power-ups
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialDorado(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
    if (MaterialDorado.Succeeded())
    {
        return MaterialDorado.Object;
    }
    
    // Fallback a materiales básicos si el dorado no se encuentra
    switch (Tipo)
    {
    case ETipoPowerUp::BombaExtra:
        {
            static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Black.M_Basic_Black'"));
            return Material.Succeeded() ? Material.Object : nullptr;
        }
    case ETipoPowerUp::RadioExplosion:
        {
            static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Red.M_Basic_Red'"));
            return Material.Succeeded() ? Material.Object : nullptr;
        }
    case ETipoPowerUp::Velocidad:
        {
            static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Green.M_Basic_Green'"));
            return Material.Succeeded() ? Material.Object : nullptr;
        }
    case ETipoPowerUp::Escudo:
        {
            static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Blue.M_Basic_Blue'"));
            return Material.Succeeded() ? Material.Object : nullptr;
        }
    case ETipoPowerUp::BombaRemota:
        {
            static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Purple.M_Basic_Purple'"));
            return Material.Succeeded() ? Material.Object : nullptr;
        }
    case ETipoPowerUp::Inmortalidad:
        {
            static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Yellow.M_Basic_Yellow'"));
            return Material.Succeeded() ? Material.Object : nullptr;
        }
    default:
        return nullptr;
    }
}

void APowerUp::ConfigurarCollision()
{
    // Configurar la colisión para que solo detecte al jugador
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CollisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    CollisionComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

int32 APowerUp::ContarPowerUpsRestantes()
{
    int32 Contador = 0;
    
    // Buscar todos los power-ups en el mundo
    TArray<AActor*> PowerUpsEncontrados;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APowerUp::StaticClass(), PowerUpsEncontrados);
    
    // Contar solo los power-ups válidos (excluyendo este que está siendo destruido)
    for (AActor* Actor : PowerUpsEncontrados)
    {
        if (Actor && Actor != this && IsValid(Actor))
        {
            Contador++;
        }
    }
    
    return Contador;
} 