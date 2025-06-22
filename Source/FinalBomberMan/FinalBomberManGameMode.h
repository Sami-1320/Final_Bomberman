// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FinalBomberManGameMode.generated.h"

class UConstructorMapa;
class UDirectorNiveles;
class ATile;
class APowerUp;
class AEnemigo;

UCLASS(minimalapi)
class AFinalBomberManGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AFinalBomberManGameMode();

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

    void SpawnEnemigosAleatorios();

private:
    void LimpiarMapaActual();
    void ConfigurarCamaraParaMapa();
};