// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PatronesIntegracion.generated.h"

class UGameplayFacade;
class UConstructorMapa;
class UMapTileIterator;
class ASeccionMapa;

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UPatronesIntegracion : public UObject
{
    GENERATED_BODY()

public:
    UPatronesIntegracion();

    // Ejemplo de integración de todos los patrones
    UFUNCTION(BlueprintCallable, Category = "Patrones Integración")
    void EjemploIntegracionCompleta(UWorld* Mundo);

    // Ejemplo usando BUILDER + FACADE
    UFUNCTION(BlueprintCallable, Category = "Patrones Integración")
    void EjemploBuilderConFacade(UWorld* Mundo);

    // Ejemplo usando OBSERVER + PROTOTYPE
    UFUNCTION(BlueprintCallable, Category = "Patrones Integración")
    void EjemploObserverConPrototype(UWorld* Mundo);

    // Ejemplo usando ITERATOR + COMPOSITE
    UFUNCTION(BlueprintCallable, Category = "Patrones Integración")
    void EjemploIteratorConComposite(UWorld* Mundo);

    // Ejemplo de explosión en cadena usando COMPOSITE
    UFUNCTION(BlueprintCallable, Category = "Patrones Integración")
    void EjemploExplosionEnCadena(UWorld* Mundo, FVector2D Posicion, int32 Radio);

    // Ejemplo de creación de enemigos usando PROTOTYPE
    UFUNCTION(BlueprintCallable, Category = "Patrones Integración")
    void EjemploCreacionEnemigos(UWorld* Mundo, int32 Cantidad);

    // Ejemplo de búsqueda de tiles usando ITERATOR
    UFUNCTION(BlueprintCallable, Category = "Patrones Integración")
    void EjemploBusquedaTiles(UWorld* Mundo);

private:
    UPROPERTY()
    UGameplayFacade* GameplayFacade;

    UPROPERTY()
    UConstructorMapa* ConstructorMapa;

    UPROPERTY()
    UMapTileIterator* TileIterator;

    UPROPERTY()
    ASeccionMapa* SeccionPrincipal;

    void ConfigurarSistemas(UWorld* Mundo);
    void CrearSeccionMapa(UWorld* Mundo);
    void ConfigurarObservers();
}; 