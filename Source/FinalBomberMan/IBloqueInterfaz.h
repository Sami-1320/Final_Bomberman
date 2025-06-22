// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBloqueInterfaz.generated.h"

UINTERFACE(MinimalAPI)
class UIBloqueInterfaz : public UInterface
{
    GENERATED_BODY()
};

class FINALBOMBERMAN_API IIBloqueInterfaz
{
    GENERATED_BODY()

public:
    virtual void ConfigurarBloque() = 0;
    virtual FString ObtenerTipoBloque() const = 0;
    virtual AActor* Clone() const = 0;
    virtual bool EsDestructible() const = 0;
};