// Copyright Epic Games, Inc. All Rights Reserved.
#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/World.h"

ABloqueAcero::ABloqueAcero()
{
    PrimaryActorTick.bCanEverTick = false;

    // Crear el componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Cargar la malla del cubo
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (CubeMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(CubeMeshAsset.Object);
    }

    // Cargar material de acero
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAcero(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    if (MaterialAcero.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialAcero.Object);
    }

    SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ABloqueAcero::BeginPlay()
{
    Super::BeginPlay();
    ConfigurarBloque();
}

void ABloqueAcero::ConfigurarBloque()
{
    // Configuración específica del bloque de acero
    SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
}

AActor* ABloqueAcero::Clone() const
{
    if (!GetWorld())
    {
        return nullptr;
    }

    ABloqueAcero* NewBlock = GetWorld()->SpawnActor<ABloqueAcero>(GetClass(), FVector::ZeroVector, FRotator::ZeroRotator);
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