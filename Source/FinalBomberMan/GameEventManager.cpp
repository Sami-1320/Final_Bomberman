// Copyright Epic Games, Inc. All Rights Reserved.
#include "GameEventManager.h"
#include "IGameObserver.h"

UGameEventManager::UGameEventManager()
{
}

void UGameEventManager::AgregarObserver(TScriptInterface<IIGameObserver> Observer)
{
    if (Observer.GetInterface() && !Observers.Contains(Observer))
    {
        Observers.Add(Observer);
    }
}

void UGameEventManager::RemoverObserver(TScriptInterface<IIGameObserver> Observer)
{
    if (Observer.GetInterface())
    {
        Observers.Remove(Observer);
    }
}

void UGameEventManager::NotificarBombaColocada(FVector2D Posicion, int32 RadioExplosion)
{
    NotificarObservers([Posicion, RadioExplosion](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnBombaColocada(Posicion, RadioExplosion);
        }
    });
}

void UGameEventManager::NotificarBombaExplotada(FVector2D Posicion, int32 RadioExplosion)
{
    NotificarObservers([Posicion, RadioExplosion](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnBombaExplotada(Posicion, RadioExplosion);
        }
    });
}

void UGameEventManager::NotificarJugadorMuerto(AFinalBomberManCharacter* Jugador)
{
    NotificarObservers([Jugador](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnJugadorMuerto(Jugador);
        }
    });
}

void UGameEventManager::NotificarPowerUpRecogido(APowerUp* PowerUp)
{
    NotificarObservers([PowerUp](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnPowerUpRecogido(PowerUp);
        }
    });
}

void UGameEventManager::NotificarBloqueDestruido(FVector2D Posicion)
{
    NotificarObservers([Posicion](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnBloqueDestruido(Posicion);
        }
    });
}

void UGameEventManager::NotificarEnemigoEliminado(FVector2D Posicion)
{
    NotificarObservers([Posicion](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnEnemigoEliminado(Posicion);
        }
    });
}

void UGameEventManager::NotificarNivelCompletado()
{
    NotificarObservers([](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnNivelCompletado();
        }
    });
}

void UGameEventManager::NotificarJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano)
{
    NotificarObservers([Jugador, Dano](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            Observer->OnJugadorHerido(Jugador, Dano);
        }
    });
}

void UGameEventManager::NotificarObservers(std::function<void(TScriptInterface<IIGameObserver>)> Notificacion)
{
    for (TScriptInterface<IIGameObserver> Observer : Observers)
    {
        if (Observer.GetInterface())
        {
            Notificacion(Observer);
        }
    }
} 