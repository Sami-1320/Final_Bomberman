// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGameObserver.generated.h"

class AFinalBomberManCharacter;
class APowerUp;

UINTERFACE(MinimalAPI)
class UIGameObserver : public UInterface
{
    GENERATED_BODY()
};

class FINALBOMBERMAN_API IIGameObserver
{
    GENERATED_BODY()

public:
    virtual void OnBombaColocada(FVector2D Posicion, int32 RadioExplosion) = 0;
    virtual void OnBombaExplotada(FVector2D Posicion, int32 RadioExplosion) = 0;
    virtual void OnJugadorMuerto(AFinalBomberManCharacter* Jugador) = 0;
    virtual void OnPowerUpRecogido(APowerUp* PowerUp) = 0;
    virtual void OnBloqueDestruido(FVector2D Posicion) = 0;
    virtual void OnEnemigoEliminado(FVector2D Posicion) = 0;
    virtual void OnNivelCompletado() = 0;
    virtual void OnJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano) = 0;
}; 