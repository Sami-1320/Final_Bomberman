// Copyright Epic Games, Inc. All Rights Reserved.
#include "MapTileIterator.h"
#include "IIterator.h"
#include "ConstructorMapa.h"
#include "Tile.h"
#include "TipoTile.h"

UMapTileIterator::UMapTileIterator()
{
    ConstructorMapa = nullptr;
    CurrentIndex = 0;
    TotalTiles = 0;
}

UMapTileIterator* UMapTileIterator::CrearIterator(UConstructorMapa* Constructor)
{
    UMapTileIterator* Iterator = NewObject<UMapTileIterator>();
    if (Iterator)
    {
        Iterator->ConstructorMapa = Constructor;
        Iterator->ConfigurarTiles();
    }
    return Iterator;
}

void UMapTileIterator::First()
{
    CurrentIndex = 0;
    UE_LOG(LogTemp, Log, TEXT("MapTileIterator: First() - Índice actual: %d"), CurrentIndex);
}

void UMapTileIterator::Next()
{
    if (!IsDone())
    {
        CurrentIndex++;
        UE_LOG(LogTemp, Log, TEXT("MapTileIterator: Next() - Índice actual: %d"), CurrentIndex);
    }
}

bool UMapTileIterator::IsDone() const
{
    return CurrentIndex >= TotalTiles;
}

UObject* UMapTileIterator::CurrentItem()
{
    if (!IsDone() && Tiles.IsValidIndex(CurrentIndex))
    {
        return Tiles[CurrentIndex];
    }
    return nullptr;
}

ATile* UMapTileIterator::ObtenerTileActual() const
{
    if (!IsDone() && Tiles.IsValidIndex(CurrentIndex))
    {
        return Tiles[CurrentIndex];
    }
    return nullptr;
}

FVector2D UMapTileIterator::ObtenerPosicionActual() const
{
    ATile* TileActual = ObtenerTileActual();
    if (TileActual)
    {
        return TileActual->ObtenerPosicionGrid();
    }
    return FVector2D::ZeroVector;
}

ETipoTile UMapTileIterator::ObtenerTipoTileActual() const
{
    ATile* TileActual = ObtenerTileActual();
    if (TileActual)
    {
        return TileActual->ObtenerTipoTile();
    }
    return ETipoTile::Vacio;
}

void UMapTileIterator::FirstDestructible()
{
    CurrentIndex = 0;
    while (!IsDone() && !EsTileDestructible(Tiles[CurrentIndex]))
    {
        CurrentIndex++;
    }
    UE_LOG(LogTemp, Log, TEXT("MapTileIterator: FirstDestructible() - Índice: %d"), CurrentIndex);
}

void UMapTileIterator::NextDestructible()
{
    if (!IsDone())
    {
        CurrentIndex++;
        while (!IsDone() && !EsTileDestructible(Tiles[CurrentIndex]))
        {
            CurrentIndex++;
        }
    }
}

void UMapTileIterator::FirstEmpty()
{
    CurrentIndex = 0;
    while (!IsDone() && !EsTileVacio(Tiles[CurrentIndex]))
    {
        CurrentIndex++;
    }
    UE_LOG(LogTemp, Log, TEXT("MapTileIterator: FirstEmpty() - Índice: %d"), CurrentIndex);
}

void UMapTileIterator::NextEmpty()
{
    if (!IsDone())
    {
        CurrentIndex++;
        while (!IsDone() && !EsTileVacio(Tiles[CurrentIndex]))
        {
            CurrentIndex++;
        }
    }
}

void UMapTileIterator::FirstConBloque()
{
    CurrentIndex = 0;
    while (!IsDone() && !EsTileConBloque(Tiles[CurrentIndex]))
    {
        CurrentIndex++;
    }
    UE_LOG(LogTemp, Log, TEXT("MapTileIterator: FirstConBloque() - Índice: %d"), CurrentIndex);
}

void UMapTileIterator::NextConBloque()
{
    if (!IsDone())
    {
        CurrentIndex++;
        while (!IsDone() && !EsTileConBloque(Tiles[CurrentIndex]))
        {
            CurrentIndex++;
        }
    }
}

int32 UMapTileIterator::ObtenerIndiceActual() const
{
    return CurrentIndex;
}

int32 UMapTileIterator::ObtenerTotalTiles() const
{
    return TotalTiles;
}

void UMapTileIterator::Reiniciar()
{
    CurrentIndex = 0;
    UE_LOG(LogTemp, Log, TEXT("MapTileIterator: Reiniciado"));
}

void UMapTileIterator::ConfigurarTiles()
{
    if (ConstructorMapa)
    {
        // Obtener todos los tiles del constructor
        int32 Ancho = ConstructorMapa->ObtenerAncho();
        int32 Alto = ConstructorMapa->ObtenerAlto();
        
        Tiles.Empty();
        for (int32 Y = 0; Y < Alto; Y++)
        {
            for (int32 X = 0; X < Ancho; X++)
            {
                ATile* Tile = ConstructorMapa->ObtenerTileEn(X, Y);
                if (Tile)
                {
                    Tiles.Add(Tile);
                }
            }
        }
        
        TotalTiles = Tiles.Num();
        UE_LOG(LogTemp, Log, TEXT("MapTileIterator: Configurado con %d tiles"), TotalTiles);
    }
}

bool UMapTileIterator::EsTileValido(ATile* Tile) const
{
    return Tile != nullptr && IsValid(Tile);
}

bool UMapTileIterator::EsTileDestructible(ATile* Tile) const
{
    if (!EsTileValido(Tile))
    {
        return false;
    }
    
    ETipoTile Tipo = Tile->ObtenerTipoTile();
    return Tipo == ETipoTile::BloqueDestructible;
}

bool UMapTileIterator::EsTileVacio(ATile* Tile) const
{
    if (!EsTileValido(Tile))
    {
        return false;
    }
    
    ETipoTile Tipo = Tile->ObtenerTipoTile();
    return Tipo == ETipoTile::Vacio;
}

bool UMapTileIterator::EsTileConBloque(ATile* Tile) const
{
    if (!EsTileValido(Tile))
    {
        return false;
    }
    
    ETipoTile Tipo = Tile->ObtenerTipoTile();
    return Tipo == ETipoTile::BloqueDestructible || Tipo == ETipoTile::BloqueIndestructible;
} 