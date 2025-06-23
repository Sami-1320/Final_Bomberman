// Copyright Epic Games, Inc. All Rights Reserved.
#include "Enemigo.h"
#include "IPrototype.h"
#include "FinalBomberManCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueAcero.h"

AEnemigo::AEnemigo()
{
    PrimaryActorTick.bCanEverTick = true;

    // Configurar componentes
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);
    
    // Cargar la malla de cono especificada
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ConeMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone"));
    if (ConeMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(ConeMeshAsset.Object);
        UE_LOG(LogTemp, Log, TEXT("Enemigo: Malla de cono cargada correctamente"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemigo: No se pudo cargar la malla de cono"));
    }
    

    SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
    
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->SetSphereRadius(50.0f);
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo::OnOverlapBegin);

    // Configuración por defecto
    TipoEnemigo = ETipoEnemigo::Basico;
    Vida = 100;
    Dano = 50;
    Velocidad = 200.0f;
    Puntuacion = 100;
    EsExplosivo = false;
    RadioExplosion = 200.0f;
    RangoDeteccion = 500.0f;
    DistanciaMinimaJugador = 100.0f;
    
    bEstaVivo = true;
    bEstaPersiguiendo = false;
    JugadorObjetivo = nullptr;
    TiempoUltimoAtaque = 0.0f;
    CooldownAtaque = 1.0f;
    PosicionInicial = FVector::ZeroVector;
    
    UE_LOG(LogTemp, Warning, TEXT("Enemigo: Constructor completado exitosamente"));
}

void AEnemigo::BeginPlay()
{
    Super::BeginPlay();
    ConfigurarComportamiento();
    
    // Guardar posición inicial
    PosicionInicial = GetActorLocation();
    
    // Configurar colisión para que no atraviese bloques
    if (MeshComponent)
    {
        MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        MeshComponent->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
        MeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
        MeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
    }
}

void AEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    if (bEstaVivo)
    {
        ActualizarComportamiento(DeltaTime);
    }
}

UObject* AEnemigo::Clone()
{
    AEnemigo* Clon = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), GetActorLocation(), GetActorRotation());
    if (Clon)
    {
        Clon->TipoEnemigo = TipoEnemigo;
        Clon->Vida = Vida;
        Clon->Dano = Dano;
        Clon->Velocidad = Velocidad;
        Clon->Puntuacion = Puntuacion;
        Clon->EsExplosivo = EsExplosivo;
        Clon->RadioExplosion = RadioExplosion;
        
        UE_LOG(LogTemp, Log, TEXT("Enemigo: Clon creado del tipo %d"), (int32)TipoEnemigo);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Enemigo: Falló al crear clon"));
    }
    return Clon;
}

void AEnemigo::RecibirDano(int32 DanoRecibido)
{
    if (!bEstaVivo)
    {
        return;
    }

    Vida -= DanoRecibido;
    UE_LOG(LogTemp, Warning, TEXT("Enemigo: Recibió %d de daño. Vida restante: %d"), DanoRecibido, Vida);

    if (Vida <= 0)
    {
        Morir();
    }
}

void AEnemigo::Morir()
{
    if (!bEstaVivo)
    {
        return;
    }

    bEstaVivo = false;
    UE_LOG(LogTemp, Warning, TEXT("Enemigo: Muerto"));

    // Mostrar mensaje en pantalla
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("ENEMIGO DESTRUIDO"));
    }

    // Si es explosivo, crear explosión
    if (EsExplosivo)
    {
        // Aquí se implementaría la lógica de explosión
        UE_LOG(LogTemp, Warning, TEXT("Enemigo: Explosión al morir"));
    }

    // Destruir el actor después de un pequeño delay
    SetLifeSpan(0.1f);
}

void AEnemigo::MoverHaciaJugador(AFinalBomberManCharacter* Jugador)
{
    if (!Jugador || !bEstaVivo)
    {
        return;
    }

    FVector Direccion = (Jugador->GetActorLocation() - GetActorLocation()).GetSafeNormal();
    FVector NuevaPosicion = GetActorLocation() + (Direccion * Velocidad * GetWorld()->GetDeltaSeconds());
    
    SetActorLocation(NuevaPosicion);
}

void AEnemigo::AtacarJugador(AFinalBomberManCharacter* Jugador)
{
    if (!Jugador || !bEstaVivo)
    {
        return;
    }

    float TiempoActual = GetWorld()->GetTimeSeconds();
    if (TiempoActual - TiempoUltimoAtaque >= CooldownAtaque)
    {
        // Quitar vida al jugador
        Jugador->PerderVida();
        
        UE_LOG(LogTemp, Warning, TEXT("Enemigo: Atacando al jugador - Vida restante: %d"), Jugador->GetVidasJugador());
        
        TiempoUltimoAtaque = TiempoActual;
    }
}

bool AEnemigo::EstaVivo() const
{
    return bEstaVivo;
}

int32 AEnemigo::ObtenerVida() const
{
    return Vida;
}

ETipoEnemigo AEnemigo::ObtenerTipo() const
{
    return TipoEnemigo;
}

int32 AEnemigo::ObtenerPuntuacion() const
{
    return Puntuacion;
}

float AEnemigo::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    // Llamar a la función de recibir daño existente
    RecibirDano(DamageAmount);
    
    // Retornar el daño aplicado
    return DamageAmount;
}

void AEnemigo::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    AFinalBomberManCharacter* Jugador = Cast<AFinalBomberManCharacter>(OtherActor);
    if (Jugador && bEstaVivo)
    {
        // Mostrar mensaje de advertencia más llamativo
        if (GEngine)
        {
            // Mensaje principal en rojo grande
            GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red, TEXT("¡CUIDADO!"));
            
            // Mensaje secundario con información del enemigo
            FString MensajeEnemigo = FString::Printf(TEXT("Enemigo %s te ha alcanzado!"), 
                TipoEnemigo == ETipoEnemigo::Basico ? TEXT("Básico") :
                TipoEnemigo == ETipoEnemigo::Rapido ? TEXT("Rápido") :
                TipoEnemigo == ETipoEnemigo::Tanque ? TEXT("Tanque") :
                TipoEnemigo == ETipoEnemigo::Explosivo ? TEXT("Explosivo") :
                TipoEnemigo == ETipoEnemigo::Volador ? TEXT("Volador") : TEXT("Desconocido"));
            
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange, MensajeEnemigo);
            
            // Mensaje de daño
            FString MensajeDano = FString::Printf(TEXT("Daño recibido: %d"), Dano);
            GEngine->AddOnScreenDebugMessage(-1, 2.5f, FColor::Yellow, MensajeDano);
        }
        
        UE_LOG(LogTemp, Warning, TEXT("¡CUIDADO! Enemigo %s colisionó con el jugador - Daño: %d"), 
            TipoEnemigo == ETipoEnemigo::Basico ? TEXT("Básico") :
            TipoEnemigo == ETipoEnemigo::Rapido ? TEXT("Rápido") :
            TipoEnemigo == ETipoEnemigo::Tanque ? TEXT("Tanque") :
            TipoEnemigo == ETipoEnemigo::Explosivo ? TEXT("Explosivo") :
            TipoEnemigo == ETipoEnemigo::Volador ? TEXT("Volador") : TEXT("Desconocido"), Dano);
        
        // Aplicar daño al jugador
        AtacarJugador(Jugador);
    }
}

void AEnemigo::ConfigurarComportamiento()
{
    switch (TipoEnemigo)
    {
    case ETipoEnemigo::Basico:
        Vida = 100;
        Dano = 50;
        Velocidad = 200.0f;
        Puntuacion = 100;
        break;
        
    case ETipoEnemigo::Rapido:
        Vida = 75;
        Dano = 30;
        Velocidad = 350.0f;
        Puntuacion = 150;
        break;
        
    case ETipoEnemigo::Tanque:
        Vida = 200;
        Dano = 75;
        Velocidad = 150.0f;
        Puntuacion = 200;
        break;
        
    case ETipoEnemigo::Explosivo:
        Vida = 125;
        Dano = 100;
        Velocidad = 180.0f;
        Puntuacion = 250;
        EsExplosivo = true;
        break;
        
    case ETipoEnemigo::Volador:
        Vida = 80;
        Dano = 40;
        Velocidad = 300.0f;
        Puntuacion = 175;
        break;
    }
    
    UE_LOG(LogTemp, Log, TEXT("Enemigo: Configurado tipo %d - Vida: %d, Dano: %d, Velocidad: %f"), 
           (int32)TipoEnemigo, Vida, Dano, Velocidad);
}

void AEnemigo::ActualizarComportamiento(float DeltaTime)
{
    // Buscar jugador más cercano si no tenemos objetivo
    if (!JugadorObjetivo)
    {
        BuscarJugadorMasCercano();
    }

    // Verificar si el jugador está en rango
    if (JugadorObjetivo && EstaJugadorEnRango())
    {
        if (!bEstaPersiguiendo)
        {
            UE_LOG(LogTemp, Warning, TEXT("Enemigo: ¡Jugador detectado! Iniciando persecución"));
        }
        
        bEstaPersiguiendo = true;
        FVector Direccion = (JugadorObjetivo->GetActorLocation() - GetActorLocation()).GetSafeNormal();
        
        // Verificar si puede moverse hacia esa dirección
        if (PuedeMoverseHacia(Direccion))
        {
            MoverConColision(Direccion, DeltaTime);
        }
        else
        {
            // Intentar movimientos alternativos si está bloqueado
            FVector DireccionesAlternativas[] = {
                FVector(1, 0, 0), FVector(-1, 0, 0), FVector(0, 1, 0), FVector(0, -1, 0)
            };
            
            for (FVector DirAlt : DireccionesAlternativas)
            {
                if (PuedeMoverseHacia(DirAlt))
                {
                    MoverConColision(DirAlt, DeltaTime);
                    break;
                }
            }
        }
    }
    else
    {
        // Si el jugador no está en rango, volver a la posición inicial
        if (bEstaPersiguiendo)
        {
            bEstaPersiguiendo = false;
            UE_LOG(LogTemp, Log, TEXT("Enemigo: Jugador fuera de rango, volviendo a posición inicial"));
        }
        
        if (FVector::Dist(GetActorLocation(), PosicionInicial) > 50.0f)
        {
            VolverAPosicionInicial(DeltaTime);
        }
    }
}

void AEnemigo::BuscarJugadorMasCercano()
{
    // Buscar jugadores en el mundo
    TArray<AActor*> JugadoresEncontrados;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFinalBomberManCharacter::StaticClass(), JugadoresEncontrados);
    
    float DistanciaMasCercana = RangoDeteccion;
    AFinalBomberManCharacter* JugadorMasCercano = nullptr;
    
    for (AActor* Actor : JugadoresEncontrados)
    {
        AFinalBomberManCharacter* Jugador = Cast<AFinalBomberManCharacter>(Actor);
        if (Jugador)
        {
            float Distancia = FVector::Dist(GetActorLocation(), Jugador->GetActorLocation());
            if (Distancia < DistanciaMasCercana)
            {
                DistanciaMasCercana = Distancia;
                JugadorMasCercano = Jugador;
            }
        }
    }
    
    JugadorObjetivo = JugadorMasCercano;
    
    if (JugadorObjetivo)
    {
        UE_LOG(LogTemp, Log, TEXT("Enemigo: Jugador encontrado a distancia %f"), DistanciaMasCercana);
    }
}

void AEnemigo::AplicarEfectosEspecificos()
{
    // Aquí se aplicarían efectos específicos según el tipo de enemigo
    switch (TipoEnemigo)
    {
    case ETipoEnemigo::Volador:
        // Efectos para enemigo volador
        break;
    case ETipoEnemigo::Explosivo:
        // Efectos para enemigo explosivo
        break;
    default:
        break;
    }
}

bool AEnemigo::EstaJugadorEnRango() const
{
    if (!JugadorObjetivo)
        return false;

    float Distancia = FVector::Dist(GetActorLocation(), JugadorObjetivo->GetActorLocation());
    return Distancia <= RangoDeteccion;
}

bool AEnemigo::PuedeMoverseHacia(FVector Direccion) const
{
    if (!GetWorld())
        return false;

    FVector PosicionActual = GetActorLocation();
    FVector PosicionObjetivo = PosicionActual + (Direccion * 100.0f);

    // Realizar un trace para verificar si hay bloques (obstáculos estáticos)
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);
    QueryParams.AddIgnoredActor(JugadorObjetivo); // Ignorar al jugador para permitir pasar por él

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        PosicionActual,
        PosicionObjetivo,
        ECollisionChannel::ECC_WorldStatic, // Solo detectar objetos estáticos (bloques)
        QueryParams
    );

    // Si hay hit, verificar si es un bloque
    if (bHit)
    {
        AActor* HitActor = HitResult.GetActor();
        if (HitActor)
        {
            // Verificar si es un bloque (puedes agregar más tipos de bloques aquí)
            if (HitActor->IsA<ABloqueMadera>() || HitActor->IsA<ABloqueLadrillo>() || HitActor->IsA<ABloqueAcero>())
            {
                UE_LOG(LogTemp, Log, TEXT("Enemigo: Bloque detectado, no puede moverse en esta dirección"));
                return false;
            }
        }
    }

    return true; // Puede moverse si no hay bloques
}

void AEnemigo::MoverConColision(FVector Direccion, float DeltaTime)
{
    if (!bEstaVivo)
        return;

    FVector Movimiento = Direccion * Velocidad * DeltaTime;
    FVector NuevaPosicion = GetActorLocation() + Movimiento;

    // Realizar movimiento con colisión, pero ignorando al jugador
    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);
    QueryParams.AddIgnoredActor(JugadorObjetivo); // Ignorar al jugador

    bool bHit = GetWorld()->SweepSingleByChannel(
        HitResult,
        GetActorLocation(),
        NuevaPosicion,
        FQuat::Identity,
        ECollisionChannel::ECC_WorldStatic, // Solo detectar objetos estáticos (bloques)
        FCollisionShape::MakeSphere(25.0f),
        QueryParams
    );

    if (!bHit)
    {
        SetActorLocation(NuevaPosicion);
    }
    else
    {
        // Si hay colisión con un bloque, intentar moverse solo una parte del camino
        AActor* HitActor = HitResult.GetActor();
        if (HitActor && (HitActor->IsA<ABloqueMadera>() || HitActor->IsA<ABloqueLadrillo>() || HitActor->IsA<ABloqueAcero>()))
        {
            // Es un bloque, no moverse
            UE_LOG(LogTemp, Log, TEXT("Enemigo: Colisión con bloque, movimiento bloqueado"));
        }
        else
        {
            // No es un bloque, moverse parcialmente
            FVector PosicionParcial = FMath::Lerp(GetActorLocation(), NuevaPosicion, 0.5f);
            SetActorLocation(PosicionParcial);
        }
    }
}

void AEnemigo::VolverAPosicionInicial(float DeltaTime)
{
    FVector Direccion = (PosicionInicial - GetActorLocation()).GetSafeNormal();
    MoverConColision(Direccion, DeltaTime);
}

bool AEnemigo::EstaPersiguiendoJugador() const
{
    return bEstaPersiguiendo;
}

float AEnemigo::ObtenerDistanciaAlJugador() const
{
    if (!JugadorObjetivo)
        return 999999.0f;

    return FVector::Dist(GetActorLocation(), JugadorObjetivo->GetActorLocation());
} 