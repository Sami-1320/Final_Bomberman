// Copyright Epic Games, Inc. All Rights Reserved.
#include "Bomba.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameEventManager.h"
#include "VFXManager.h"
#include "UIManager.h"
#include "Kismet/GameplayStatics.h"
#include "PowerUpSpawner.h"
#include "GameFramework/DamageType.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Enemigo.h"
#include "FinalBomberManGameMode.h"
#include "GameplayFacade.h"

ABomba::ABomba()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Crear el componente de partículas para el efecto de explosión
    ExplosionEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionEffectComponent"));
    ExplosionEffectComponent->SetupAttachment(RootComponent);
    ExplosionEffectComponent->SetAutoActivate(false); // No activar automáticamente

    // Cargar el sistema de partículas de explosión
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
    if (ExplosionParticleAsset.Succeeded())
    {
        ExplosionParticleSystem = ExplosionParticleAsset.Object;
        UE_LOG(LogTemp, Warning, TEXT("Bomba Constructor: Sistema de partículas de explosión cargado correctamente"));
    }
    else
    {
        ExplosionParticleSystem = nullptr;
        UE_LOG(LogTemp, Error, TEXT("Bomba Constructor: ERROR - No se pudo cargar el sistema de partículas de explosión"));
    }

    // Configurar propiedades por defecto
    TipoBomba = ETipoBomba::Normal;
    RadioExplosion = 1;
    TiempoExplosion = 1.5f;
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

    SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
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

    // Reproducir efecto de explosión
    ReproducirEfectoExplosion();

    // Realizar explosión en todas las direcciones
    RealizarExplosionEnTodasDirecciones(PosicionBomba);

    // Destruir la bomba después de un pequeño delay para que se vea el efecto
    FTimerHandle TimerDestruccion;
    GetWorldTimerManager().SetTimer(TimerDestruccion, [this]() {
        Destroy();
    }, 0.1f, false); // Reducido de 0.5s a 0.1s para que sea casi instantáneo
}

void ABomba::RealizarExplosionEnTodasDirecciones(FVector2D PosicionCentro)
{
    if (!GetWorld())
    {
        return;
    }

    // Primero, buscar enemigos en el radio de explosión usando overlap
    float RadioExplosionUnidades = RadioExplosion * 200.0f; // Convertir a unidades del mundo
    TArray<AActor*> ActoresEnRadio;
    TArray<TEnumAsByte<EObjectTypeQuery>> TiposObjeto;
    TiposObjeto.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
    
    UClass* ClaseEnemigo = AEnemigo::StaticClass();
    
    UKismetSystemLibrary::SphereOverlapActors(
        GetWorld(),
        FVector(PosicionCentro.X, PosicionCentro.Y, 100.0f),
        RadioExplosionUnidades,
        TiposObjeto,
        ClaseEnemigo,
        TArray<AActor*>(),
        ActoresEnRadio
    );

    // Aplicar daño a todos los enemigos encontrados
    for (AActor* Enemigo : ActoresEnRadio)
    {
        if (Enemigo && EsEnemigo(Enemigo))
        {
            UGameplayStatics::ApplyDamage(Enemigo, Dano, GetInstigatorController(), this, UDamageType::StaticClass());
            UE_LOG(LogTemp, Warning, TEXT("Enemigo dañado por explosión: %s"), *Enemigo->GetName());
        }
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

        // Notificar al GameEventManager que se destruyó un bloque
        FVector2D PosicionBloque = FVector2D(Bloque->GetActorLocation().X, Bloque->GetActorLocation().Y);
        
        // Obtener el GameplayFacade a través del GameMode
        AFinalBomberManGameMode* GameMode = Cast<AFinalBomberManGameMode>(GetWorld()->GetAuthGameMode());
        if (GameMode)
        {
            UGameplayFacade* GameplayFacade = GameMode->ObtenerGameplayFacade();
            if (GameplayFacade)
            {
                UGameEventManager* GameEventManager = GameplayFacade->ObtenerGameEventManager();
                if (GameEventManager)
                {
                    GameEventManager->NotificarBloqueDestruido(PosicionBloque);
                    UE_LOG(LogTemp, Warning, TEXT("Bomba DestruirBloque: Notificación enviada al GameEventManager a través de GameMode"));
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Bomba DestruirBloque: ERROR - GameEventManager es NULL"));
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Bomba DestruirBloque: ERROR - GameplayFacade es NULL"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Bomba DestruirBloque: ERROR - No se pudo obtener GameMode"));
        }
        
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

bool ABomba::EsEnemigo(AActor* Actor)
{
    if (!Actor)
    {
        return false;
    }

    // Verificar si es un enemigo basado en el nombre o clase
    FString ActorName = Actor->GetName().ToLower();
    return ActorName.Contains(TEXT("enemigo")) || 
           ActorName.Contains(TEXT("enemy")) ||
           Actor->GetClass()->GetName().Contains(TEXT("Enemigo"));
}

void ABomba::ReproducirEfectoExplosion()
{
    if (!GetWorld() || !ExplosionParticleSystem)
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: No se puede reproducir efecto de explosión - Mundo o sistema de partículas no válido"));
        return;
    }

    // Crear el efecto de explosión en la posición de la bomba
    FVector PosicionExplosion = GetActorLocation();
    UGameplayStatics::SpawnEmitterAtLocation(
        GetWorld(),
        ExplosionParticleSystem,
        PosicionExplosion,
        FRotator::ZeroRotator,
        FVector(1.0f, 1.0f, 1.0f), // Escala normal
        true, // Auto destroy
        EPSCPoolMethod::AutoRelease
    );

    UE_LOG(LogTemp, Warning, TEXT("Efecto de explosión reproducido en (%f, %f, %f)"), PosicionExplosion.X, PosicionExplosion.Y, PosicionExplosion.Z);
} 