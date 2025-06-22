// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerUp.h"
#include "Enemigo.h"
#include "GameplayFacade.generated.h"

class UConstructorMapa;
class UDirectorNiveles;
class UGameEventManager;
class UVFXManager;
class UUIManager;
class ABomba;
class APowerUp;
class AEnemigo;
class AFinalBomberManCharacter;

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UGameplayFacade : public UObject
{
    GENERATED_BODY()

public:
    UGameplayFacade();

    // Inicialización del juego
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void InicializarJuego(UWorld* Mundo);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void IniciarJuego(int32 NumJugadores);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void PausarJuego();

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void ReanudarJuego();

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void TerminarJuego();

    // Gestión de niveles
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void CargarNivel(int32 NumeroNivel);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void CompletarNivel();

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void ReiniciarNivel();

    // Gestión de bombas
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    ABomba* ColocarBomba(FVector2D Posicion, int32 RadioExplosion = 1);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void DetonarBomba(ABomba* Bomba);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void CancelarBomba(ABomba* Bomba);

    // Gestión de power-ups
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    APowerUp* CrearPowerUp(ETipoPowerUp Tipo, FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void AplicarPowerUp(AFinalBomberManCharacter* Jugador, ETipoPowerUp Tipo);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void RemoverPowerUp(AFinalBomberManCharacter* Jugador, ETipoPowerUp Tipo);

    // Gestión de enemigos
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    AEnemigo* SpawnearEnemigo(ETipoEnemigo Tipo, FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void EliminarEnemigo(AEnemigo* Enemigo);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    TArray<AEnemigo*> ObtenerEnemigosVivos();

    // Gestión de jugadores
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void HerirJugador(AFinalBomberManCharacter* Jugador, int32 Dano);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void MatarJugador(AFinalBomberManCharacter* Jugador);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void RespawnearJugador(AFinalBomberManCharacter* Jugador, FVector2D Posicion);

    // Gestión de UI
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void MostrarMensaje(const FString& Mensaje, float Duracion = 3.0f);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void ActualizarPuntuacion(int32 NuevaPuntuacion);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void MostrarPantallaMuerte();

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void MostrarPantallaVictoria();

    // Gestión de efectos
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void CrearEfectoExplosion(FVector2D Posicion, int32 Radio);

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    void CrearEfectoDestruccion(FVector2D Posicion);

    // Información del juego
    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    int32 ObtenerPuntuacionActual() const;

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    int32 ObtenerNivelActual() const;

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    bool EstaJuegoPausado() const;

    UFUNCTION(BlueprintCallable, Category = "Gameplay Facade")
    bool EstaJuegoTerminado() const;

private:
    UPROPERTY()
    UWorld* MundoActual;

    UPROPERTY()
    UConstructorMapa* ConstructorMapa;

    UPROPERTY()
    UDirectorNiveles* DirectorNiveles;

    UPROPERTY()
    UGameEventManager* GameEventManager;

    UPROPERTY()
    UVFXManager* VFXManager;

    UPROPERTY()
    UUIManager* UIManager;

    // Estado del juego
    int32 NivelActual;
    int32 PuntuacionActual;
    bool bJuegoPausado;
    bool bJuegoTerminado;
    TArray<ABomba*> BombasActivas;
    TArray<APowerUp*> PowerUpsActivos;
    TArray<AEnemigo*> EnemigosActivos;

    void ConfigurarSistemas();
    void LimpiarNivel();
}; 