// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ITileInterfaz.h"
#include "IElementoMapa.h"
#include "TipoTile.h"  // AGREGAR INCLUDE
#include "Tile.generated.h"

class UStaticMeshComponent;
class UMaterial;

// QUITAR LA DEFINICIÓN DE ETipoTile - YA NO ESTÁ AQUÍ

UCLASS()
class FINALBOMBERMAN_API ATile : public AActor, public IITileInterfaz, public IIElementoMapa
{
    GENERATED_BODY()

public:
    ATile();

    // Propiedades del tile
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    ETipoTile TipoTile;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    FVector2D PosicionGrid;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // Referencias a materiales (cargados en constructor)
    UPROPERTY()
    UMaterial* MaterialPiso;

    UPROPERTY()
    UMaterial* MaterialPared;

    UPROPERTY()
    UMaterial* MaterialSpawn;

    // Referencia al bloque colocado en este tile
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile")
    AActor* BloqueColocado;

    // Implementación de ITileInterfaz
    virtual void EstablecerTipoTile(ETipoTile NuevoTipo) override;
    virtual void EstablecerPosicionGrid(FVector2D NuevaPosicion) override;
    virtual void ColocarBloque(AActor* Bloque) override;
    virtual void RemoverBloque() override;
    virtual bool TieneBloque() const override;

    // Implementación de IIElementoMapa (Patrón Composite)
    virtual void Renderizar() override;
    virtual void Actualizar(float DeltaTime) override;
    virtual bool EsDestructible() const override;
    virtual void RecibirDano(int32 Dano) override;
    virtual FVector2D ObtenerPosicion() const override;
    virtual void EstablecerPosicion(FVector2D NuevaPosicion) override;

    // Funciones adicionales
    UFUNCTION(BlueprintCallable, Category = "Tile")
    ETipoTile ObtenerTipoTile() const;

    UFUNCTION(BlueprintCallable, Category = "Tile")
    FVector2D ObtenerPosicionGrid() const;

    UFUNCTION(BlueprintCallable, Category = "Tile")
    AActor* ObtenerBloque() const;

    void DestruirBloque();

protected:
    virtual void BeginPlay() override;

private:
    void ConfigurarAparienciaTile();
};