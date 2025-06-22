// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IElementoMapa.generated.h"

UINTERFACE(MinimalAPI)
class UIElementoMapa : public UInterface
{
    GENERATED_BODY()
};

class FINALBOMBERMAN_API IIElementoMapa
{
    GENERATED_BODY()

public:
    virtual void Renderizar() = 0;
    virtual void Actualizar(float DeltaTime) = 0;
    virtual bool EsDestructible() const = 0;
    virtual void RecibirDano(int32 Dano) = 0;
    virtual FVector2D ObtenerPosicion() const = 0;
    virtual void EstablecerPosicion(FVector2D NuevaPosicion) = 0;
}; 
 