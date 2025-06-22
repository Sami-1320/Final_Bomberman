// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IIterator.generated.h"

UINTERFACE(MinimalAPI)
class UIIterator : public UInterface
{
    GENERATED_BODY()
};

class FINALBOMBERMAN_API IIIterator
{
    GENERATED_BODY()

public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual UObject* CurrentItem() = 0;
}; 