// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPrototype.generated.h"

UINTERFACE(MinimalAPI)
class UIPrototype : public UInterface
{
    GENERATED_BODY()
};

class FINALBOMBERMAN_API IIPrototype
{
    GENERATED_BODY()

public:
    virtual UObject* Clone() = 0;
}; 