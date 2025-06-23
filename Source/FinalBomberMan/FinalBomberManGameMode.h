// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameplayFacade.h"
#include "FinalBomberManGameMode.generated.h"

class UConstructorMapa;
class UDirectorNiveles;
class ATile;
class APowerUp;
class AEnemigo;
class UGameplayFacade;

UCLASS(minimalapi)
class AFinalBomberManGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AFinalBomberManGameMode();

    // Referencia al Blueprint del bloque destructible
    UPROPERTY(EditDefaultsOnly, Category = "Blueprints")
    TSubclassOf<AActor> BloqueDestructibleBlueprint;

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, Category = "PowerUps")
    TSubclassOf<APowerUp> PowerUpClass;

    UPROPERTY(EditDefaultsOnly, Category = "PowerUps")
    int32 NumeroDePowerUpsAlInicio = 5;

    UPROPERTY(EditDefaultsOnly, Category = "Enemigos")
    TSubclassOf<AEnemigo> EnemigoClass;

    UPROPERTY(EditDefaultsOnly, Category = "Enemigos")
    int32 NumeroDeEnemigosAlInicio = 2;

private:
    UPROPERTY()
    UConstructorMapa* ConstructorMapaActual;

    UPROPERTY()
    UDirectorNiveles* DirectorNivelesActual;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nivel", meta = (AllowPrivateAccess = "true"))
    int32 NivelActual = 1;

    // Cambiar de TArray<TArray<ATile*>> a UConstructorMapa*
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Nivel", meta = (AllowPrivateAccess = "true"))
    UConstructorMapa* MapaActual;

    UPROPERTY()
    UGameplayFacade* GameplayFacade;

public:
    UFUNCTION(BlueprintCallable, Category = "Nivel")
    void CargarNivel(int32 NumeroNivel);

    UFUNCTION(BlueprintCallable, Category = "Nivel")
    void SiguienteNivel();

    UFUNCTION(BlueprintCallable, Category = "Nivel")
    void ReiniciarNivel();

    UFUNCTION(BlueprintCallable, Category = "Nivel")
    int32 ObtenerNivelActual() const { return NivelActual; }

    // Nueva función para obtener tile específico
    UFUNCTION(BlueprintCallable, Category = "Nivel")
    ATile* ObtenerTileEn(int32 X, int32 Y) const;

    // Funciones para obtener dimensiones del mapa
    UFUNCTION(BlueprintCallable, Category = "Nivel")
    int32 ObtenerAnchoMapa() const;

    UFUNCTION(BlueprintCallable, Category = "Nivel")
    int32 ObtenerAltoMapa() const;

    void SpawnPowerUpsAleatorios();

    UFUNCTION(BlueprintCallable, Category = "Game Mode")
    void SpawnEnemigosAleatorios();

    void SpawnPowerUpsEspecificos();

    // Función estática para actualizar puntos desde cualquier lugar
    UFUNCTION(BlueprintCallable, Category = "Game Mode")
    static void ActualizarContadorPuntosGlobal(int32 PuntosActuales, int32 PuntosMaximos = 10, bool bEsEnemigo = false);

    // Acceso al GameplayFacade
    UFUNCTION(BlueprintCallable, Category = "Game Mode")
    UGameplayFacade* ObtenerGameplayFacade() const { return GameplayFacade; }

private:
    void LimpiarMapaActual();
    void ConfigurarCamaraParaMapa();
};