// Copyright Epic Games, Inc. All Rights Reserved.
#include "Tile.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/Material.h"
#include "Engine/Engine.h"
#include "IElementoMapa.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// En el constructor de ATile, cambiar la escala y posicin
ATile::ATile()
{
    PrimaryActorTick.bCanEverTick = false;

    // Crear componente de mesh
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Cargar mesh del cubo por defecto
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube"));
    if (CubeMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(CubeMeshAsset.Object);
    }

    // CARGAR MATERIALES EN EL CONSTRUCTOR
    static ConstructorHelpers::FObjectFinder<UMaterial> FloorMaterialAsset(TEXT("/Script/Engine.Material'/Game/Pack_Bonus/Materials/M_Pack_Bonus_Grass_3.M_Pack_Bonus_Grass_3'"));
    if (FloorMaterialAsset.Succeeded())
    {
        MaterialPiso = FloorMaterialAsset.Object;
    }

    static ConstructorHelpers::FObjectFinder<UMaterial> WallMaterialAsset(TEXT("/Game/StarterContent/Materials/M_Concrete_Tiles"));
    if (WallMaterialAsset.Succeeded())
    {
        MaterialPared = WallMaterialAsset.Object;
    }

    static ConstructorHelpers::FObjectFinder<UMaterial> SpawnMaterialAsset(TEXT("/Game/StarterContent/Materials/M_Metal_Gold"));
    if (SpawnMaterialAsset.Succeeded())
    {
        MaterialSpawn = SpawnMaterialAsset.Object;
    }

    // Inicializar valores por defecto
    TipoTile = ETipoTile::Vacio;
    PosicionGrid = FVector2D::ZeroVector;
    BloqueColocado = nullptr;

    // NUEVA ESCALA - hacer los tiles ms delgados y del tamao correcto
    SetActorScale3D(FVector(2.0f, 2.0f, 0.2f)); // Ms delgados (0.2 en Z)
}

void ATile::BeginPlay()
{
    Super::BeginPlay();
    ConfigurarAparienciaTile();
}

void ATile::EstablecerTipoTile(ETipoTile NuevoTipo)
{
    TipoTile = NuevoTipo;
    ConfigurarAparienciaTile();
}

void ATile::EstablecerPosicionGrid(FVector2D NuevaPosicion)
{
    PosicionGrid = NuevaPosicion;
}

void ATile::ColocarBloque(AActor* Bloque)
{
    BloqueColocado = Bloque;
    if (BloqueColocado)
    {
        // CALCULAR POSICIN AL RAS
        FVector PosicionTile = GetActorLocation();

        // Tile con escala 0.2 en Z = altura de 20 unidades
        FVector PosicionBloque = PosicionTile + FVector(0, 0, 20);
        BloqueColocado->SetActorLocation(PosicionBloque);

        // Asegurar escala correcta
        BloqueColocado->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));

        UE_LOG(LogTemp, Log, TEXT("Bloque colocado al ras en tile (%f, %f)"), PosicionGrid.X, PosicionGrid.Y);
    }
}

void ATile::RemoverBloque()
{
    if (BloqueColocado && IsValid(BloqueColocado))
    {
        BloqueColocado->Destroy();
        BloqueColocado = nullptr;
        UE_LOG(LogTemp, Log, TEXT("Bloque removido de tile (%f, %f)"), PosicionGrid.X, PosicionGrid.Y);
    }
}

bool ATile::TieneBloque() const
{
    return BloqueColocado != nullptr && IsValid(BloqueColocado);
}

// Implementación de IIElementoMapa (Patrón Composite)
void ATile::Renderizar()
{
    // El tile se renderiza automáticamente por Unreal Engine
    // Aquí podríamos agregar lógica adicional de renderizado si fuera necesario
    UE_LOG(LogTemp, Verbose, TEXT("Tile renderizado en posición (%f, %f)"), PosicionGrid.X, PosicionGrid.Y);
}

void ATile::Actualizar(float DeltaTime)
{
    // Los tiles son estáticos, pero podrían tener animaciones o efectos
    // Por ejemplo, tiles que cambian de color o tienen efectos especiales
    if (TipoTile == ETipoTile::SpawnJugador || TipoTile == ETipoTile::SpawnEnemigo)
    {
        // Efecto de parpadeo para tiles de spawn
        static float TiempoAcumulado = 0.0f;
        TiempoAcumulado += DeltaTime;
        
        if (MeshComponent)
        {
            float Intensidad = 0.5f + 0.5f * FMath::Sin(TiempoAcumulado * 2.0f);
            MeshComponent->SetVisibility(Intensidad > 0.3f);
        }
    }
}

bool ATile::EsDestructible() const
{
    // Un tile es destructible si tiene un bloque destructible
    if (BloqueColocado)
    {
        // Verificar si el bloque implementa la interfaz de bloque destructible
        if (Cast<ABloqueMadera>(BloqueColocado) || Cast<ABloqueLadrillo>(BloqueColocado))
        {
            return true;
        }
    }
    
    // También es destructible si es del tipo BloqueDestructible
    return TipoTile == ETipoTile::BloqueDestructible;
}

void ATile::RecibirDano(int32 Dano)
{
    if (EsDestructible())
    {
        // Aplicar daño al bloque si existe
        if (BloqueColocado)
        {
            // Usar el sistema de daño de Unreal Engine
            UGameplayStatics::ApplyDamage(BloqueColocado, Dano, nullptr, this, nullptr);
        }
        
        // Si no hay bloque pero el tile es destructible, destruir el tile
        if (TipoTile == ETipoTile::BloqueDestructible && !BloqueColocado)
        {
            UE_LOG(LogTemp, Log, TEXT("Tile destructible destruido en (%f, %f)"), PosicionGrid.X, PosicionGrid.Y);
            // Aquí podríamos cambiar el tipo de tile a Vacio
            TipoTile = ETipoTile::Vacio;
            ConfigurarAparienciaTile();
        }
    }
}

FVector2D ATile::ObtenerPosicion() const
{
    return PosicionGrid;
}

void ATile::EstablecerPosicion(FVector2D NuevaPosicion)
{
    PosicionGrid = NuevaPosicion;
    // Actualizar la posición en el mundo 3D
    FVector PosicionMundo = FVector(NuevaPosicion.X * 200.0f, NuevaPosicion.Y * 200.0f, 0.0f);
    SetActorLocation(PosicionMundo);
}

void ATile::ConfigurarAparienciaTile()
{
    if (!MeshComponent)
        return;

    // USAR MATERIALES YA CARGADOS EN EL CONSTRUCTOR
    UMaterial* MaterialAUsar = nullptr;

    switch (TipoTile)
    {
    case ETipoTile::Vacio:
    case ETipoTile::BloqueDestructible:
        MaterialAUsar = MaterialPiso;
        break;
    case ETipoTile::BloqueIndestructible:
        MaterialAUsar = MaterialPared;
        break;
    case ETipoTile::SpawnJugador:
    case ETipoTile::SpawnEnemigo:
        MaterialAUsar = MaterialSpawn;
        break;
    case ETipoTile::SalidaNivel:
        MaterialAUsar = MaterialSpawn; // Usar el mismo material dorado para la salida
        break;
    default:
        MaterialAUsar = MaterialPiso;
        break;
    }

    if (MaterialAUsar)
    {
        MeshComponent->SetMaterial(0, MaterialAUsar);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Material no encontrado para tile tipo %d"), (int32)TipoTile);
    }
}

ETipoTile ATile::ObtenerTipoTile() const
{
    return TipoTile;
}

FVector2D ATile::ObtenerPosicionGrid() const
{
    return PosicionGrid;
}

AActor* ATile::ObtenerBloque() const
{
    return BloqueColocado;
}

void ATile::DestruirBloque()
{
    if (BloqueColocado)
    {
        BloqueColocado->Destroy();
        BloqueColocado = nullptr;
    }
}