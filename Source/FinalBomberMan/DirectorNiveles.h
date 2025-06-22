// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DirectorNiveles.generated.h"

class UConstructorMapa;
class ATile;
class ABloqueMadera;
class ABloqueLadrillo;

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UDirectorNiveles : public UObject
{
    GENERATED_BODY()

public:
    UDirectorNiveles();

    UFUNCTION(BlueprintCallable, Category = "Director Niveles")
    static UConstructorMapa* CrearNivel1(UWorld* Mundo);

    UFUNCTION(BlueprintCallable, Category = "Director Niveles")
    static UConstructorMapa* CrearNivel2(UWorld* Mundo);

    UFUNCTION(BlueprintCallable, Category = "Director Niveles")
    static UConstructorMapa* CrearConstructorMapa();

private:
    static void ColocarBloquesDestructiblesNivel1(UConstructorMapa* Constructor, UWorld* Mundo);
    static void ColocarBloquesDestructiblesNivel2(UConstructorMapa* Constructor, UWorld* Mundo);
};