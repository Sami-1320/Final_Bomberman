// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGameObserver.h"
#include "UIManager.generated.h"

class AFinalBomberManCharacter;
class APowerUp;

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UUIManager : public UObject, public IIGameObserver
{
    GENERATED_BODY()

public:
    UUIManager();

    // IIGameObserver implementation
    virtual void OnBombaColocada(FVector2D Posicion, int32 RadioExplosion) override;
    virtual void OnBombaExplotada(FVector2D Posicion, int32 RadioExplosion) override;
    virtual void OnJugadorMuerto(AFinalBomberManCharacter* Jugador) override;
    virtual void OnPowerUpRecogido(APowerUp* PowerUp) override;
    virtual void OnBloqueDestruido(FVector2D Posicion) override;
    virtual void OnEnemigoEliminado(FVector2D Posicion) override;
    virtual void OnNivelCompletado() override;
    virtual void OnJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano) override;

    // UI methods
    UFUNCTION(BlueprintCallable, Category = "UI")
    void ActualizarContadorBombas(int32 BombasDisponibles);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void ActualizarContadorEnemigos(int32 EnemigosRestantes);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void ActualizarPuntuacion(int32 NuevaPuntuacion);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void MostrarMensaje(const FString& Mensaje, float Duracion = 3.0f);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void MostrarPantallaMuerte();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void MostrarPantallaVictoria();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void MostrarPowerUpRecogido(const FString& TipoPowerUp);

    UFUNCTION(BlueprintCallable, Category = "UI")
    void ActualizarVidaJugador(int32 VidaActual, int32 VidaMaxima);

    // Métodos para el sistema de puntos
    UFUNCTION(BlueprintCallable, Category = "UI")
    void AgregarPuntoPorBloque();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void ReiniciarPuntos();

    UFUNCTION(BlueprintCallable, Category = "UI")
    int32 ObtenerPuntosPorBloques() const { return PuntosPorBloques; }

    UFUNCTION(BlueprintCallable, Category = "UI")
    void CambiarNivelPorPuntos();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void MostrarContadorPuntosPermanente();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void InicializarUIManager();

    // Función para establecer referencia al GameplayFacade
    UFUNCTION(BlueprintCallable, Category = "UI")
    void EstablecerGameplayFacade(class UGameplayFacade* Facade);

private:
    int32 PuntuacionActual;
    int32 EnemigosRestantes;
    int32 BombasDisponibles;
    int32 VidaJugador;
    int32 VidaMaximaJugador;
    
    // Sistema de puntos para cambio de nivel
    int32 PuntosPorBloques;
    int32 PuntosNecesariosParaCambioNivel;
    bool bCambioNivelPendiente;
    
    // Referencia al GameplayFacade
    UPROPERTY()
    class UGameplayFacade* GameplayFacadeRef;
}; 