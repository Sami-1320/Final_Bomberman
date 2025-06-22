// Copyright Epic Games, Inc. All Rights Reserved.
#include "PowerUpSpawner.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

APowerUpSpawner::APowerUpSpawner()
{
    PrimaryActorTick.bCanEverTick = false;

    // Set default power-up class
    PowerUpClass = APowerUp::StaticClass();

    // Initialize available power-up types
    AvailablePowerUpTypes = {
        ETipoPowerUp::BombaExtra,
        ETipoPowerUp::RadioExplosion,
        ETipoPowerUp::Velocidad,
        ETipoPowerUp::Escudo,
        ETipoPowerUp::BombaRemota,
        ETipoPowerUp::Inmortalidad
    };
}

void APowerUpSpawner::BeginPlay()
{
    Super::BeginPlay();
}

APowerUp* APowerUpSpawner::SpawnPowerUp(FVector Location)
{
    if (!GetWorld() || !PowerUpClass)
    {
        return nullptr;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;

    APowerUp* NewPowerUp = GetWorld()->SpawnActor<APowerUp>(PowerUpClass, Location, FRotator::ZeroRotator, SpawnParams);
    
    if (NewPowerUp)
    {
        // Set random power-up type
        NewPowerUp->TipoPowerUp = GetRandomPowerUpType();
        
        UE_LOG(LogTemp, Log, TEXT("PowerUp spawned at location: %s, Type: %d"), 
            *Location.ToString(), (int32)NewPowerUp->TipoPowerUp);
    }

    return NewPowerUp;
}

APowerUp* APowerUpSpawner::SpawnRandomPowerUp(FVector Location)
{
    // Check probability
    if (FMath::FRand() > SpawnProbability)
    {
        return nullptr;
    }

    return SpawnPowerUp(Location);
}

ETipoPowerUp APowerUpSpawner::GetRandomPowerUpType()
{
    if (AvailablePowerUpTypes.Num() == 0)
    {
        return ETipoPowerUp::BombaExtra;
    }

    int32 RandomIndex = FMath::RandRange(0, AvailablePowerUpTypes.Num() - 1);
    return AvailablePowerUpTypes[RandomIndex];
} 