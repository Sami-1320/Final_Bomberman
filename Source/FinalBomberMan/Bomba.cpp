// Copyright Epic Games, Inc. All Rights Reserved.
#include "Bomba.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameEventManager.h"
#include "VFXManager.h"
#include "UIManager.h"
#include "Kismet/GameplayStatics.h"
#include "PowerUpSpawner.h"
#include "GameFramework/DamageType.h"

ABomba::ABomba()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Configurar propiedades por defecto
    TipoBomba = ETipoBomba::Normal;
    RadioExplosion = 1;
    TiempoExplosion = 3.0f;
    EsRemota = false;
    Dano = 100;
    bExplosionIniciada = false;
    TiempoInicio = 0.0f;

    ConfigurarMesh();
}

void ABomba::BeginPlay()
{
    Super::BeginPlay();
    MundoActual = GetWorld();
    
    // Find PowerUpSpawner in the world
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APowerUpSpawner::StaticClass(), FoundActors);
    if (FoundActors.Num() > 0)
    {
        PowerUpSpawner = Cast<APowerUpSpawner>(FoundActors[0]);
    }
}

UObject* ABomba::Clone()
{
    if (!GetWorld())
    {
        return nullptr;
    }

    ABomba* NuevaBomba = GetWorld()->SpawnActor<ABomba>(GetClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    if (NuevaBomba)
    {
        NuevaBomba->TipoBomba = TipoBomba;
        NuevaBomba->RadioExplosion = RadioExplosion;
        NuevaBomba->TiempoExplosion = TiempoExplosion;
        NuevaBomba->EsRemota = EsRemota;
        NuevaBomba->Dano = Dano;
        NuevaBomba->MeshComponent->SetStaticMesh(MeshComponent->GetStaticMesh());
        NuevaBomba->MeshComponent->SetMaterial(0, MeshComponent->GetMaterial(0));
        NuevaBomba->SetActorScale3D(GetActorScale3D());
    }
    return NuevaBomba;
}

void ABomba::IniciarExplosion()
{
    if (!bExplosionIniciada)
    {
        bExplosionIniciada = true;
        TiempoInicio = GetWorld()->GetTimeSeconds();

        // Configurar timer para explosión automática
        if (!EsRemota)
        {
            GetWorldTimerManager().SetTimer(TimerExplosion, this, &ABomba::OnExplosionCompleta, TiempoExplosion, false);
        }

        UE_LOG(LogTemp, Log, TEXT("Bomba iniciada - Explosión en %.1f segundos"), TiempoExplosion);
    }
}

void ABomba::Detonar()
{
    if (bExplosionIniciada)
    {
        OnExplosionCompleta();
    }
}

void ABomba::CancelarExplosion()
{
    if (bExplosionIniciada)
    {
        bExplosionIniciada = false;
        GetWorldTimerManager().ClearTimer(TimerExplosion);
        UE_LOG(LogTemp, Log, TEXT("Explosión de bomba cancelada"));
    }
}

float ABomba::ObtenerTiempoRestante() const
{
    if (!bExplosionIniciada)
    {
        return TiempoExplosion;
    }

    float TiempoTranscurrido = GetWorld()->GetTimeSeconds() - TiempoInicio;
    return FMath::Max(0.0f, TiempoExplosion - TiempoTranscurrido);
}

bool ABomba::EstaActivada() const
{
    return bExplosionIniciada;
}

void ABomba::ConfigurarMesh()
{
    // Cargar la malla de esfera especificada
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (SphereMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(SphereMeshAsset.Object);
    }

    // Cargar el nuevo material pulsante para la bomba
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialPulso(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
    if (MaterialPulso.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialPulso.Object);
    }

    SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));
}

void ABomba::OnExplosionCompleta()
{
    if (!bExplosionIniciada)
    {
        return;
    }

    bExplosionIniciada = false;
    GetWorldTimerManager().ClearTimer(TimerExplosion);

    FVector2D PosicionBomba = FVector2D(GetActorLocation().X, GetActorLocation().Y);

    // Notificar eventos (se maneja a través del GameplayFacade)
    UE_LOG(LogTemp, Warning, TEXT("¡BOOM! Bomba explotó en (%f, %f) con radio %d"), PosicionBomba.X, PosicionBomba.Y, RadioExplosion);

    // Realizar explosión en todas las direcciones
    RealizarExplosionEnTodasDirecciones(PosicionBomba);

    // Destruir la bomba
    Destroy();
}

void ABomba::RealizarExplosionEnTodasDirecciones(FVector2D PosicionCentro)
{
    if (!GetWorld())
    {
        return;
    }

    // Direcciones: Norte, Sur, Este, Oeste
    TArray<FVector2D> Direcciones = {
        FVector2D(0, 1),   // Norte
        FVector2D(0, -1),  // Sur
        FVector2D(1, 0),   // Este
        FVector2D(-1, 0)   // Oeste
    };

    float DistanciaTile = 200.0f; // Distancia entre tiles

    for (const FVector2D& Direccion : Direcciones)
    {
        for (int32 Radio = 1; Radio <= RadioExplosion; Radio++)
        {
            FVector2D PosicionExplosion = PosicionCentro + (Direccion * DistanciaTile * Radio);
            
            // Realizar trace para detectar bloques
            FVector StartLocation = FVector(PosicionExplosion.X, PosicionExplosion.Y, 100.0f);
            FVector EndLocation = FVector(PosicionExplosion.X, PosicionExplosion.Y, -100.0f);
            
            FHitResult HitResult;
            FCollisionQueryParams QueryParams;
            QueryParams.AddIgnoredActor(this);
            
            bool bHit = GetWorld()->LineTraceSingleByChannel(
                HitResult,
                StartLocation,
                EndLocation,
                ECollisionChannel::ECC_WorldStatic,
                QueryParams
            );

            if (bHit)
            {
                AActor* HitActor = HitResult.GetActor();
                if (HitActor)
                {
                    // Intentar destruir el bloque
                    DestruirBloque(HitActor);
                    
                    // Si es un bloque indestructible, detener la explosión en esta dirección
                    if (EsBloqueIndestructible(HitActor))
                    {
                        break;
                    }
                }
            }
        }
    }
}

void ABomba::DestruirBloque(AActor* Bloque)
{
    if (!Bloque)
    {
        return;
    }

    // Verificar si es un bloque destructible
    if (EsBloqueDestructible(Bloque))
    {
        // Aplicar daño al bloque usando UGameplayStatics
        UGameplayStatics::ApplyDamage(Bloque, Dano, GetInstigatorController(), this, UDamageType::StaticClass());
        
        UE_LOG(LogTemp, Log, TEXT("Bloque destruido: %s"), *Bloque->GetName());

        // Intentar generar un power-up en la posición del bloque destruido
        if (PowerUpSpawner)
        {
            FVector BloqueLocation = Bloque->GetActorLocation();
            PowerUpSpawner->SpawnRandomPowerUp(BloqueLocation);
        }
    }
}

bool ABomba::EsBloqueDestructible(AActor* Actor)
{
    if (!Actor)
    {
        return false;
    }

    // Verificar si es un bloque destructible basado en el nombre o clase
    FString ActorName = Actor->GetName().ToLower();
    return ActorName.Contains(TEXT("ladrillo")) || 
           ActorName.Contains(TEXT("madera")) || 
           ActorName.Contains(TEXT("destructible"));
}

bool ABomba::EsBloqueIndestructible(AActor* Actor)
{
    if (!Actor)
    {
        return false;
    }

    // Verificar si es un bloque indestructible basado en el nombre o clase
    FString ActorName = Actor->GetName().ToLower();
    return ActorName.Contains(TEXT("acero")) || 
           ActorName.Contains(TEXT("indestructible"));
} 