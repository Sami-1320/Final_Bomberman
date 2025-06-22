// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBloqueInterfaz.h"
#include "BloqueMadera.generated.h"

UCLASS()
class FINALBOMBERMAN_API ABloqueMadera : public AActor, public IIBloqueInterfaz
{
    GENERATED_BODY()

public:
    ABloqueMadera();

    // Propiedades del bloque de madera
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
    float Resistencia = 80.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
    int32 Durabilidad = 40;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
    FString TipoMaterial = TEXT("Madera");

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* MeshComponent;

    // Implementaci�n de IBloqueInterfaz
    virtual void ConfigurarBloque() override;
    virtual FString ObtenerTipoBloque() const override { return TEXT("Madera"); }
    virtual bool EsDestructible() const override { return true; }

    // Implementaci�n del Patr�n Prototype
    virtual AActor* Clone() const override;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
};