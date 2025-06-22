// Copyright Epic Games, Inc. All Rights Reserved.
#include "UIManager.h"
#include "IGameObserver.h"
#include "FinalBomberManCharacter.h"
#include "PowerUp.h"

UUIManager::UUIManager()
{
    PuntuacionActual = 0;
    EnemigosRestantes = 0;
    BombasDisponibles = 0;
    VidaJugador = 100;
    VidaMaximaJugador = 100;
}

void UUIManager::OnBombaColocada(FVector2D Posicion, int32 RadioExplosion)
{
    UE_LOG(LogTemp, Log, TEXT("UIManager: Bomba colocada en (%f, %f) con radio %d"), Posicion.X, Posicion.Y, RadioExplosion);
    ActualizarContadorBombas(BombasDisponibles - 1);
}

void UUIManager::OnBombaExplotada(FVector2D Posicion, int32 RadioExplosion)
{
    UE_LOG(LogTemp, Log, TEXT("UIManager: Bomba explotada en (%f, %f) con radio %d"), Posicion.X, Posicion.Y, RadioExplosion);
}

void UUIManager::OnJugadorMuerto(AFinalBomberManCharacter* Jugador)
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Jugador muerto"));
    MostrarPantallaMuerte();
}

void UUIManager::OnPowerUpRecogido(APowerUp* PowerUp)
{
    if (PowerUp)
    {
        ETipoPowerUp Tipo = PowerUp->ObtenerTipo();
        UE_LOG(LogTemp, Log, TEXT("UIManager: PowerUp recogido - Tipo: %d"), (int32)Tipo);
        MostrarPowerUpRecogido(TEXT("PowerUp Recogido"));
    }
}

void UUIManager::OnBloqueDestruido(FVector2D Posicion)
{
    UE_LOG(LogTemp, Log, TEXT("UIManager: Bloque destruido en (%f, %f)"), Posicion.X, Posicion.Y);
}

void UUIManager::OnEnemigoEliminado(FVector2D Posicion)
{
    EnemigosRestantes--;
    PuntuacionActual += 100;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Enemigo eliminado en (%f, %f). Restantes: %d"), Posicion.X, Posicion.Y, EnemigosRestantes);
    ActualizarContadorEnemigos(EnemigosRestantes);
    ActualizarPuntuacion(PuntuacionActual);
}

void UUIManager::OnNivelCompletado()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Nivel completado"));
    MostrarPantallaVictoria();
}

void UUIManager::OnJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano)
{
    VidaJugador -= Dano;
    if (VidaJugador < 0) VidaJugador = 0;
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Jugador herido. Dano: %d, Vida restante: %d"), Dano, VidaJugador);
    ActualizarVidaJugador(VidaJugador, VidaMaximaJugador);
    
    if (VidaJugador <= 0)
    {
        MostrarPantallaMuerte();
    }
}

void UUIManager::ActualizarContadorBombas(int32 BombasDisponiblesNuevas)
{
    BombasDisponibles = BombasDisponiblesNuevas;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Bombas disponibles actualizadas: %d"), BombasDisponibles);
}

void UUIManager::ActualizarContadorEnemigos(int32 EnemigosRestantesNuevos)
{
    EnemigosRestantes = EnemigosRestantesNuevos;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Enemigos restantes actualizados: %d"), EnemigosRestantes);
}

void UUIManager::ActualizarPuntuacion(int32 NuevaPuntuacion)
{
    PuntuacionActual = NuevaPuntuacion;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Puntuación actualizada: %d"), PuntuacionActual);
}

void UUIManager::MostrarMensaje(const FString& Mensaje, float Duracion)
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Mensaje mostrado - %s"), *Mensaje);
}

void UUIManager::MostrarPantallaMuerte()
{
    UE_LOG(LogTemp, Error, TEXT("UIManager: Pantalla de muerte mostrada"));
}

void UUIManager::MostrarPantallaVictoria()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Pantalla de victoria mostrada"));
}

void UUIManager::MostrarPowerUpRecogido(const FString& TipoPowerUp)
{
    UE_LOG(LogTemp, Log, TEXT("UIManager: PowerUp recogido mostrado - %s"), *TipoPowerUp);
}

void UUIManager::ActualizarVidaJugador(int32 VidaActual, int32 VidaMaxima)
{
    VidaJugador = VidaActual;
    VidaMaximaJugador = VidaMaxima;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Vida del jugador actualizada: %d/%d"), VidaJugador, VidaMaximaJugador);
} 