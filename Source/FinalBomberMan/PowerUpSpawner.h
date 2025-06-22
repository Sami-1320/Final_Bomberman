// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUp.h"
#include "PowerUpSpawner.generated.h"

UCLASS()
class FINALBOMBERMAN_API APowerUpSpawner : public AActor
{
    GENERATED_BODY()

public:
    APowerUpSpawner();

protected:
    virtual void BeginPlay() override;

public:
    /** Spawn a power-up at the specified location */
    UFUNCTION(BlueprintCallable, Category = "PowerUp Spawner")
    APowerUp* SpawnPowerUp(FVector Location);

    /** Spawn a random power-up at the specified location */
    UFUNCTION(BlueprintCallable, Category = "PowerUp Spawner")
    APowerUp* SpawnRandomPowerUp(FVector Location);

    /** Get a random power-up type */
    UFUNCTION(BlueprintCallable, Category = "PowerUp Spawner")
    ETipoPowerUp GetRandomPowerUpType();

private:
    /** Power-up class to spawn */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp Spawner", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<APowerUp> PowerUpClass;

    /** Probability of spawning a power-up when a block is destroyed (0.0 to 1.0) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp Spawner", meta = (AllowPrivateAccess = "true"))
    float SpawnProbability = 0.3f;

    /** Array of power-up types that can be spawned */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp Spawner", meta = (AllowPrivateAccess = "true"))
    TArray<ETipoPowerUp> AvailablePowerUpTypes;
}; 