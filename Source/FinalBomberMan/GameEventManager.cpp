// Copyright Epic Games, Inc. All Rights Reserved.
#include "GameEventManager.h"
#include "IGameObserver.h"
#include "Engine/Engine.h"

UGameEventManager::UGameEventManager()
{
}

void UGameEventManager::AgregarObserver(TScriptInterface<IIGameObserver> Observer)
{
    UE_LOG(LogTemp, Warning, TEXT("GameEventManager AgregarObserver: INICIANDO"));
    
    if (Observer.GetInterface())
    {
        UE_LOG(LogTemp, Warning, TEXT("GameEventManager AgregarObserver: Observer válido - Clase: %s"), *Observer.GetObject()->GetClass()->GetName());
        
        if (!Observers.Contains(Observer))
        {
            Observers.Add(Observer);
            UE_LOG(LogTemp, Warning, TEXT("GameEventManager AgregarObserver: Observer agregado exitosamente. Total observers: %d"), Observers.Num());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("GameEventManager AgregarObserver: Observer ya existe en la lista"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GameEventManager AgregarObserver: ERROR - Observer.GetInterface() es NULL"));
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
    UE_LOG(LogTemp, Warning, TEXT("GameEventManager NotificarBloqueDestruido: INICIANDO - Posición: (%f, %f)"), Posicion.X, Posicion.Y);
    UE_LOG(LogTemp, Warning, TEXT("GameEventManager NotificarBloqueDestruido: Número de observers: %d"), Observers.Num());
    
    NotificarObservers([Posicion](TScriptInterface<IIGameObserver> Observer) {
        if (Observer.GetInterface())
        {
            UE_LOG(LogTemp, Warning, TEXT("GameEventManager NotificarBloqueDestruido: Notificando observer: %s"), *Observer.GetObject()->GetClass()->GetName());
            Observer->OnBloqueDestruido(Posicion);
            UE_LOG(LogTemp, Warning, TEXT("GameEventManager NotificarBloqueDestruido: Observer notificado exitosamente"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("GameEventManager NotificarBloqueDestruido: ERROR - Observer.GetInterface() es NULL"));
        }
    });
    
    UE_LOG(LogTemp, Warning, TEXT("GameEventManager NotificarBloqueDestruido: COMPLETADO"));
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