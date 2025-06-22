// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IIterator.h"
#include "MapTileIterator.generated.h"

class ATile;
class UConstructorMapa;

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UMapTileIterator : public UObject, public IIIterator
{
    GENERATED_BODY()

public:
    UMapTileIterator();

    // Constructor con parámetros
    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    static UMapTileIterator* CrearIterator(UConstructorMapa* Constructor);

    // IIIterator implementation
    virtual void First() override;
    virtual void Next() override;
    virtual bool IsDone() const override;
    virtual UObject* CurrentItem() override;

    // Métodos específicos para tiles
    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    ATile* ObtenerTileActual() const;

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    FVector2D ObtenerPosicionActual() const;

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    ETipoTile ObtenerTipoTileActual() const;

    // Iteradores especializados
    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    void FirstDestructible();

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    void NextDestructible();

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    void FirstEmpty();

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    void NextEmpty();

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    void FirstConBloque();

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    void NextConBloque();

    // Información del iterador
    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    int32 ObtenerIndiceActual() const;

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    int32 ObtenerTotalTiles() const;

    UFUNCTION(BlueprintCallable, Category = "Map Tile Iterator")
    void Reiniciar();

private:
    UPROPERTY()
    UConstructorMapa* ConstructorMapa;

    TArray<ATile*> Tiles;
    int32 CurrentIndex;
    int32 TotalTiles;

    void ConfigurarTiles();
    bool EsTileValido(ATile* Tile) const;
    bool EsTileDestructible(ATile* Tile) const;
    bool EsTileVacio(ATile* Tile) const;
    bool EsTileConBloque(ATile* Tile) const;
}; 