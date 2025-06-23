// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IPrototype.h"
#include "Enemigo.generated.h"

UENUM(BlueprintType)
enum class ETipoEnemigo : uint8
{
    Basico        UMETA(DisplayName = "Básico"),
    Rapido        UMETA(DisplayName = "Rápido"),
    Tanque        UMETA(DisplayName = "Tanque"),
    Explosivo     UMETA(DisplayName = "Explosivo"),
    Volador       UMETA(DisplayName = "Volador")
};

UCLASS()
class FINALBOMBERMAN_API AEnemigo : public AActor, public IIPrototype
{
    GENERATED_BODY()

public:
    AEnemigo();

    // Propiedades del enemigo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    ETipoEnemigo TipoEnemigo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    int32 Vida = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    int32 Dano = 50;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    float Velocidad = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    int32 Puntuacion = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    bool EsExplosivo = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    float RadioExplosion = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    float RangoDeteccion = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    float DistanciaMinimaJugador = 100.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class USphereComponent* CollisionComponent;

    // Implementación de IIPrototype
    virtual UObject* Clone() override;

    // Métodos del enemigo
    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    void RecibirDano(int32 DanoRecibido);

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    void Morir();

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    void MoverHaciaJugador(class AFinalBomberManCharacter* Jugador);

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    void AtacarJugador(class AFinalBomberManCharacter* Jugador);

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    bool EstaVivo() const;

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    int32 ObtenerVida() const;

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    ETipoEnemigo ObtenerTipo() const;

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    int32 ObtenerPuntuacion() const;

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    bool EstaPersiguiendoJugador() const;

    UFUNCTION(BlueprintCallable, Category = "Enemigo")
    float ObtenerDistanciaAlJugador() const;

    // Función para recibir daño del sistema de Unreal Engine
    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    bool bEstaVivo;
    bool bEstaPersiguiendo;
    class AFinalBomberManCharacter* JugadorObjetivo;
    float TiempoUltimoAtaque;
    float CooldownAtaque;
    FVector PosicionInicial;

    void ConfigurarComportamiento();
    void ActualizarComportamiento(float DeltaTime);
    void BuscarJugadorMasCercano();
    void AplicarEfectosEspecificos();
    bool EstaJugadorEnRango() const;
    bool PuedeMoverseHacia(FVector Direccion) const;
    void MoverConColision(FVector Direccion, float DeltaTime);
    void VolverAPosicionInicial(float DeltaTime);
}; 