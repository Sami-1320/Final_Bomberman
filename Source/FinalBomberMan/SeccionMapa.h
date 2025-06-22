// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IElementoMapa.h"
#include "SeccionMapa.generated.h"

UCLASS()
class FINALBOMBERMAN_API ASeccionMapa : public AActor, public IIElementoMapa
{
    GENERATED_BODY()

public:
    ASeccionMapa();

    // IIElementoMapa implementation
    virtual void Renderizar() override;
    virtual void Actualizar(float DeltaTime) override;
    virtual bool EsDestructible() const override;
    virtual void RecibirDano(int32 Dano) override;
    virtual FVector2D ObtenerPosicion() const override;
    virtual void EstablecerPosicion(FVector2D NuevaPosicion) override;

    // Métodos del Composite
    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    void AgregarElemento(TScriptInterface<IIElementoMapa> Elemento);

    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    void RemoverElemento(TScriptInterface<IIElementoMapa> Elemento);

    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    TArray<TScriptInterface<IIElementoMapa>> ObtenerElementos() const;

    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    int32 ObtenerCantidadElementos() const;

    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    void LimpiarElementos();

    // Métodos específicos para secciones
    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    void ConfigurarSeccion(FVector2D PosicionInicial, FVector2D Tamano);

    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    bool ContienePosicion(FVector2D Posicion) const;

    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    TArray<TScriptInterface<IIElementoMapa>> ObtenerElementosEnPosicion(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "Sección Mapa")
    void AplicarExplosionEnCadena(FVector2D PosicionInicial, int32 RadioExplosion);

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    TArray<TScriptInterface<IIElementoMapa>> ElementosHijos;

    FVector2D PosicionSeccion;
    FVector2D TamanoSeccion;
    bool bEsDestructible;

    void ProcesarExplosionRecursiva(FVector2D Posicion, int32 RadioRestante, TSet<TScriptInterface<IIElementoMapa>>& ElementosAfectados);
    float CalcularDistancia(FVector2D Pos1, FVector2D Pos2) const;
}; 