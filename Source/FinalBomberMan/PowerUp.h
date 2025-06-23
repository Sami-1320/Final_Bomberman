// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPrototype.h"
#include "PowerUp.generated.h"

UENUM(BlueprintType)
enum class ETipoPowerUp : uint8
{
    BombaExtra      UMETA(DisplayName = "Bomba Extra"),
    RadioExplosion  UMETA(DisplayName = "Radio Explosión"),
    Velocidad       UMETA(DisplayName = "Velocidad"),
    Escudo          UMETA(DisplayName = "Escudo"),
    BombaRemota     UMETA(DisplayName = "Bomba Remota"),
    Inmortalidad    UMETA(DisplayName = "Inmortalidad"),
    SaltoAlto       UMETA(DisplayName = "Salto Alto"),
    VidaExtra       UMETA(DisplayName = "Vida Extra")
};

UCLASS()
class FINALBOMBERMAN_API APowerUp : public AActor, public IIPrototype
{
    GENERATED_BODY()

public:
    APowerUp();

    // Propiedades del PowerUp
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp")
    ETipoPowerUp TipoPowerUp;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp")
    float Duracion = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp")
    int32 Valor = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp")
    bool EsPermanente = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class USphereComponent* CollisionComponent;

    // Implementación de IIPrototype
    virtual UObject* Clone() override;

    // Métodos del PowerUp
    UFUNCTION(BlueprintCallable, Category = "PowerUp")
    void AplicarPowerUp(class AFinalBomberManCharacter* Jugador);

    UFUNCTION(BlueprintCallable, Category = "PowerUp")
    void RemoverPowerUp(class AFinalBomberManCharacter* Jugador);

    UFUNCTION(BlueprintCallable, Category = "PowerUp")
    ETipoPowerUp ObtenerTipo() const;

    UFUNCTION(BlueprintCallable, Category = "PowerUp")
    float ObtenerDuracion() const;

    UFUNCTION(BlueprintCallable, Category = "PowerUp")
    int32 ObtenerValor() const;

    UFUNCTION(BlueprintCallable, Category = "PowerUp")
    bool EsPowerUpPermanente() const;

    // Función para hacer que los power-ups sean inmunes a las bombas
    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    // Material references loaded in constructor
    UPROPERTY()
    UMaterialInterface* MaterialBombaExtra;
    
    UPROPERTY()
    UMaterialInterface* MaterialRadioExplosion;
    
    UPROPERTY()
    UMaterialInterface* MaterialVelocidad;
    
    UPROPERTY()
    UMaterialInterface* MaterialEscudo;
    
    UPROPERTY()
    UMaterialInterface* MaterialBombaRemota;
    
    UPROPERTY()
    UMaterialInterface* MaterialInmortalidad;
    
    UPROPERTY()
    UMaterialInterface* MaterialSaltoAlto;
    
    UPROPERTY()
    UMaterialInterface* MaterialVidaExtra;
    
    UPROPERTY()
    UMaterialInterface* MaterialDorado;

    void ConfigurarMesh();
    void ConfigurarMeshBasico();
    void ConfigurarCollision();
    void AplicarEfectoEspecifico(class AFinalBomberManCharacter* Jugador);
    void RemoverEfectoEspecifico(class AFinalBomberManCharacter* Jugador);
    UMaterialInterface* ObtenerMaterialPorTipo(ETipoPowerUp Tipo);
    int32 ContarPowerUpsRestantes();
}; 