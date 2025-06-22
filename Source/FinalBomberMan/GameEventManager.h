// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameEventManager.generated.h"

class IIGameObserver;
class AFinalBomberManCharacter;
class ABomba;
class APowerUp;

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UGameEventManager : public UObject
{
    GENERATED_BODY()

public:
    UGameEventManager();

    // Observer management
    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void AgregarObserver(TScriptInterface<IIGameObserver> Observer);

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void RemoverObserver(TScriptInterface<IIGameObserver> Observer);

    // Event notifications
    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarBombaColocada(FVector2D Posicion, int32 RadioExplosion);

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarBombaExplotada(FVector2D Posicion, int32 RadioExplosion);

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarJugadorMuerto(AFinalBomberManCharacter* Jugador);

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarPowerUpRecogido(APowerUp* PowerUp);

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarBloqueDestruido(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarEnemigoEliminado(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarNivelCompletado();

    UFUNCTION(BlueprintCallable, Category = "Game Events")
    void NotificarJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano);

private:
    UPROPERTY()
    TArray<TScriptInterface<IIGameObserver>> Observers;

    void NotificarObservers(std::function<void(TScriptInterface<IIGameObserver>)> Notificacion);
}; 