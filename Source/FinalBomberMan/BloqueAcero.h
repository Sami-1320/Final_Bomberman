// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBloqueInterfaz.h"
#include "BloqueAcero.generated.h"

UCLASS()
class FINALBOMBERMAN_API ABloqueAcero : public AActor, public IIBloqueInterfaz
{
    GENERATED_BODY()

public:
    ABloqueAcero();

    // Propiedades del bloque de acero
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
    float Resistencia = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
    int32 Durabilidad = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
    FString TipoMaterial = TEXT("Acero");

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* MeshComponent;

    // Implementación de IBloqueInterfaz
    virtual void ConfigurarBloque() override;
    virtual FString ObtenerTipoBloque() const override { return TEXT("Acero"); }
    virtual bool EsDestructible() const override { return false; }

    // Implementación del Patrón Prototype
    virtual AActor* Clone() const override;

protected:
    virtual void BeginPlay() override;
};