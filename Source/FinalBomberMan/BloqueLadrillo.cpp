// Copyright Epic Games, Inc. All Rights Reserved.
#include "BloqueLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/World.h"

ABloqueLadrillo::ABloqueLadrillo()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla esttica
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Cargar la malla del cubo
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (CubeMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(CubeMeshAsset.Object);
    }

    // Cargar material de ladrillo
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialLadrillo(TEXT("/Script/Engine.Material'/Game/Pack_Bonus/Materials/M_Pack_Bonus_Tile_1.M_Pack_Bonus_Tile_1'"));
    if (MaterialLadrillo.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialLadrillo.Object);
    }

    SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ABloqueLadrillo::BeginPlay()
{
    Super::BeginPlay();
    ConfigurarBloque();
}

void ABloqueLadrillo::ConfigurarBloque()
{
    SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
}

AActor* ABloqueLadrillo::Clone() const
{
    if (!GetWorld())
    {
        return nullptr;
    }

    ABloqueLadrillo* NewBlock = GetWorld()->SpawnActor<ABloqueLadrillo>(GetClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    if (NewBlock)
    {
        NewBlock->Resistencia = Resistencia;
        NewBlock->Durabilidad = Durabilidad;
        NewBlock->TipoMaterial = TipoMaterial;
        NewBlock->MeshComponent->SetStaticMesh(MeshComponent->GetStaticMesh());
        NewBlock->MeshComponent->SetMaterial(0, MeshComponent->GetMaterial(0));
        NewBlock->SetActorScale3D(GetActorScale3D());
    }
    return NewBlock;
}

void ABloqueLadrillo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

float ABloqueLadrillo::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    const float DamageApplied = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
    if (DamageApplied > 0.f)
    {
        UE_LOG(LogTemp, Warning, TEXT("BloqueLadrillo ha recibido daño y será destruido."));
        Destroy();
    }
    return DamageApplied;
}