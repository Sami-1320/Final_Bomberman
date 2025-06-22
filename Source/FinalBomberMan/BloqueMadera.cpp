// Copyright Epic Games, Inc. All Rights Reserved.
#include "BloqueMadera.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/World.h"

ABloqueMadera::ABloqueMadera()
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

    // Cargar material de madera
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialMadera(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
    if (MaterialMadera.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialMadera.Object);
    }

    SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ABloqueMadera::BeginPlay()
{
    Super::BeginPlay();
    ConfigurarBloque();
}

void ABloqueMadera::ConfigurarBloque()
{
    SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
}

AActor* ABloqueMadera::Clone() const
{
    if (!GetWorld())
    {
        return nullptr;
    }

    ABloqueMadera* NewBlock = GetWorld()->SpawnActor<ABloqueMadera>(GetClass(), FVector::ZeroVector, FRotator::ZeroRotator);
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

void ABloqueMadera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

float ABloqueMadera::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    const float DamageApplied = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
    if (DamageApplied > 0.f)
    {
        UE_LOG(LogTemp, Warning, TEXT("BloqueMadera ha recibido daño y será destruido."));
        Destroy();
    }
    return DamageApplied;
}