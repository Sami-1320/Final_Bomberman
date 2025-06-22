// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TipoTile.h"  // AGREGAR INCLUDE
#include "ITileInterfaz.generated.h"

class AActor;

UINTERFACE(MinimalAPI)
class UITileInterfaz : public UInterface
{
    GENERATED_BODY()
};

class FINALBOMBERMAN_API IITileInterfaz
{
    GENERATED_BODY()

public:
    virtual void EstablecerTipoTile(ETipoTile NuevoTipo) = 0;
    virtual void EstablecerPosicionGrid(FVector2D NuevaPosicion) = 0;
    virtual void ColocarBloque(AActor* Bloque) = 0;
    virtual void RemoverBloque() = 0;
    virtual bool TieneBloque() const = 0;
};