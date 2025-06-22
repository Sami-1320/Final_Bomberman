// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPrototype.h"
#include "Bomba.generated.h"

class APowerUpSpawner;

UENUM(BlueprintType)
enum class ETipoBomba : uint8
{
    Normal       UMETA(DisplayName = "Normal"),
    Remota       UMETA(DisplayName = "Remota"),
    Cronometro   UMETA(DisplayName = "Cronómetro"),
    Cascada      UMETA(DisplayName = "Cascada")
};

UCLASS()
class FINALBOMBERMAN_API ABomba : public AActor, public IIPrototype
{
    GENERATED_BODY()

public:
    ABomba();

    // Propiedades de la bomba
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
    ETipoBomba TipoBomba;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
    int32 RadioExplosion = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
    float TiempoExplosion = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
    bool EsRemota = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
    int32 Dano = 100;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* MeshComponent;

    // Implementación de IIPrototype
    virtual UObject* Clone() override;

    // Métodos de la bomba
    UFUNCTION(BlueprintCallable, Category = "Bomba")
    void IniciarExplosion();

    UFUNCTION(BlueprintCallable, Category = "Bomba")
    void Detonar();

    UFUNCTION(BlueprintCallable, Category = "Bomba")
    void CancelarExplosion();

    UFUNCTION(BlueprintCallable, Category = "Bomba")
    float ObtenerTiempoRestante() const;

    UFUNCTION(BlueprintCallable, Category = "Bomba")
    bool EstaActivada() const;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    class UWorld* MundoActual;

    UPROPERTY()
    APowerUpSpawner* PowerUpSpawner;

    bool bExplosionIniciada;
    float TiempoInicio;
    FTimerHandle TimerExplosion;

    void ConfigurarMesh();
    void OnExplosionCompleta();
    void RealizarExplosionEnTodasDirecciones(FVector2D PosicionCentro);
    void DestruirBloque(AActor* Bloque);
    bool EsBloqueDestructible(AActor* Actor);
    bool EsBloqueIndestructible(AActor* Actor);
}; 