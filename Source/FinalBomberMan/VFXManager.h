// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGameObserver.h"
#include "VFXManager.generated.h"

class AFinalBomberManCharacter;
class APowerUp;
class UParticleSystem;

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UVFXManager : public UObject, public IIGameObserver
{
    GENERATED_BODY()

public:
    UVFXManager();

    // IIGameObserver implementation
    virtual void OnBombaColocada(FVector2D Posicion, int32 RadioExplosion) override;
    virtual void OnBombaExplotada(FVector2D Posicion, int32 RadioExplosion) override;
    virtual void OnJugadorMuerto(AFinalBomberManCharacter* Jugador) override;
    virtual void OnPowerUpRecogido(APowerUp* PowerUp) override;
    virtual void OnBloqueDestruido(FVector2D Posicion) override;
    virtual void OnEnemigoEliminado(FVector2D Posicion) override;
    virtual void OnNivelCompletado() override;
    virtual void OnJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano) override;

    // VFX methods
    UFUNCTION(BlueprintCallable, Category = "VFX")
    void CrearEfectoExplosion(FVector2D Posicion, int32 Radio);

    UFUNCTION(BlueprintCallable, Category = "VFX")
    void CrearEfectoDestruccion(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "VFX")
    void CrearEfectoPowerUp(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "VFX")
    void CrearEfectoMuerte(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "VFX")
    void CrearEfectoVictoria();

    UFUNCTION(BlueprintCallable, Category = "VFX")
    void CrearEfectoDano(FVector2D Posicion);

private:
    UPROPERTY()
    UWorld* MundoActual;

    void ConfigurarMundo(UWorld* Mundo);
    FVector ConvertirPosicion2DTo3D(FVector2D Posicion2D);
}; 