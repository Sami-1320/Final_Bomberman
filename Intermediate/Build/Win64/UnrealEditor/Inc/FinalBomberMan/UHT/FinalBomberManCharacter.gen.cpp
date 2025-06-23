// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/FinalBomberManCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalBomberManCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ABomba_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class AFinalBomberManCharacter Function ActivarPowerUpSalto
struct Z_Construct_UFunction_AFinalBomberManCharacter_ActivarPowerUpSalto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funciones para manejar saltos del power up\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funciones para manejar saltos del power up" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_ActivarPowerUpSalto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "ActivarPowerUpSalto", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_ActivarPowerUpSalto_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_ActivarPowerUpSalto_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_ActivarPowerUpSalto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_ActivarPowerUpSalto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execActivarPowerUpSalto)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivarPowerUpSalto();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function ActivarPowerUpSalto

// Begin Class AFinalBomberManCharacter Function BloquearMovimiento
struct Z_Construct_UFunction_AFinalBomberManCharacter_BloquearMovimiento_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funciones para controlar el bloqueo de movimiento\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funciones para controlar el bloqueo de movimiento" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_BloquearMovimiento_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "BloquearMovimiento", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_BloquearMovimiento_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_BloquearMovimiento_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_BloquearMovimiento()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_BloquearMovimiento_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execBloquearMovimiento)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BloquearMovimiento();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function BloquearMovimiento

// Begin Class AFinalBomberManCharacter Function DesbloquearMovimiento
struct Z_Construct_UFunction_AFinalBomberManCharacter_DesbloquearMovimiento_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_DesbloquearMovimiento_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "DesbloquearMovimiento", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_DesbloquearMovimiento_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_DesbloquearMovimiento_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_DesbloquearMovimiento()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_DesbloquearMovimiento_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execDesbloquearMovimiento)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DesbloquearMovimiento();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function DesbloquearMovimiento

// Begin Class AFinalBomberManCharacter Function EstaMovimientoBloqueado
struct Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics
{
	struct FinalBomberManCharacter_eventEstaMovimientoBloqueado_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FinalBomberManCharacter_eventEstaMovimientoBloqueado_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FinalBomberManCharacter_eventEstaMovimientoBloqueado_Parms), &Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "EstaMovimientoBloqueado", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::FinalBomberManCharacter_eventEstaMovimientoBloqueado_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::FinalBomberManCharacter_eventEstaMovimientoBloqueado_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execEstaMovimientoBloqueado)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EstaMovimientoBloqueado();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function EstaMovimientoBloqueado

// Begin Class AFinalBomberManCharacter Function EstaMuerto
struct Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics
{
	struct FinalBomberManCharacter_eventEstaMuerto_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FinalBomberManCharacter_eventEstaMuerto_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FinalBomberManCharacter_eventEstaMuerto_Parms), &Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "EstaMuerto", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::FinalBomberManCharacter_eventEstaMuerto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::FinalBomberManCharacter_eventEstaMuerto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execEstaMuerto)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EstaMuerto();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function EstaMuerto

// Begin Class AFinalBomberManCharacter Function GanarVida
struct Z_Construct_UFunction_AFinalBomberManCharacter_GanarVida_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_GanarVida_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "GanarVida", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GanarVida_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_GanarVida_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_GanarVida()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_GanarVida_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execGanarVida)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GanarVida();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function GanarVida

// Begin Class AFinalBomberManCharacter Function GetBombCount
struct Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics
{
	struct FinalBomberManCharacter_eventGetBombCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the number of bombs the player can place */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of bombs the player can place" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManCharacter_eventGetBombCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "GetBombCount", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::FinalBomberManCharacter_eventGetBombCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::FinalBomberManCharacter_eventGetBombCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execGetBombCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBombCount();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function GetBombCount

// Begin Class AFinalBomberManCharacter Function GetExplosionRadius
struct Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics
{
	struct FinalBomberManCharacter_eventGetExplosionRadius_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the explosion radius of the player's bombs */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the explosion radius of the player's bombs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManCharacter_eventGetExplosionRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "GetExplosionRadius", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::FinalBomberManCharacter_eventGetExplosionRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::FinalBomberManCharacter_eventGetExplosionRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execGetExplosionRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetExplosionRadius();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function GetExplosionRadius

// Begin Class AFinalBomberManCharacter Function GetSaltosDisponibles
struct Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics
{
	struct FinalBomberManCharacter_eventGetSaltosDisponibles_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManCharacter_eventGetSaltosDisponibles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "GetSaltosDisponibles", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::FinalBomberManCharacter_eventGetSaltosDisponibles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::FinalBomberManCharacter_eventGetSaltosDisponibles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execGetSaltosDisponibles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSaltosDisponibles();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function GetSaltosDisponibles

// Begin Class AFinalBomberManCharacter Function GetVidasJugador
struct Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics
{
	struct FinalBomberManCharacter_eventGetVidasJugador_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funciones para manejar vidas\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funciones para manejar vidas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManCharacter_eventGetVidasJugador_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "GetVidasJugador", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::FinalBomberManCharacter_eventGetVidasJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::FinalBomberManCharacter_eventGetVidasJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execGetVidasJugador)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetVidasJugador();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function GetVidasJugador

// Begin Class AFinalBomberManCharacter Function MostrarMensajeSaltos
struct Z_Construct_UFunction_AFinalBomberManCharacter_MostrarMensajeSaltos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_MostrarMensajeSaltos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "MostrarMensajeSaltos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_MostrarMensajeSaltos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_MostrarMensajeSaltos_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_MostrarMensajeSaltos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_MostrarMensajeSaltos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execMostrarMensajeSaltos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarMensajeSaltos();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function MostrarMensajeSaltos

// Begin Class AFinalBomberManCharacter Function PerderVida
struct Z_Construct_UFunction_AFinalBomberManCharacter_PerderVida_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_PerderVida_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "PerderVida", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_PerderVida_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_PerderVida_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_PerderVida()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_PerderVida_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execPerderVida)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerderVida();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function PerderVida

// Begin Class AFinalBomberManCharacter Function PlaceBombAtLocation
struct Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Place a bomb at the current location */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Place a bomb at the current location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "PlaceBombAtLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execPlaceBombAtLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceBombAtLocation();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function PlaceBombAtLocation

// Begin Class AFinalBomberManCharacter Function PuedeSaltarAlto
struct Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics
{
	struct FinalBomberManCharacter_eventPuedeSaltarAlto_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FinalBomberManCharacter_eventPuedeSaltarAlto_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FinalBomberManCharacter_eventPuedeSaltarAlto_Parms), &Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "PuedeSaltarAlto", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::FinalBomberManCharacter_eventPuedeSaltarAlto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::FinalBomberManCharacter_eventPuedeSaltarAlto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execPuedeSaltarAlto)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PuedeSaltarAlto();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function PuedeSaltarAlto

// Begin Class AFinalBomberManCharacter Function SetBombCount
struct Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics
{
	struct FinalBomberManCharacter_eventSetBombCount_Parms
	{
		int32 NewBombCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the number of bombs the player can place */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the number of bombs the player can place" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewBombCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::NewProp_NewBombCount = { "NewBombCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManCharacter_eventSetBombCount_Parms, NewBombCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::NewProp_NewBombCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "SetBombCount", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::FinalBomberManCharacter_eventSetBombCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::FinalBomberManCharacter_eventSetBombCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execSetBombCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewBombCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBombCount(Z_Param_NewBombCount);
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function SetBombCount

// Begin Class AFinalBomberManCharacter Function SetExplosionRadius
struct Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics
{
	struct FinalBomberManCharacter_eventSetExplosionRadius_Parms
	{
		int32 NewRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the explosion radius of the player's bombs */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the explosion radius of the player's bombs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManCharacter_eventSetExplosionRadius_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::NewProp_NewRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "SetExplosionRadius", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::FinalBomberManCharacter_eventSetExplosionRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::FinalBomberManCharacter_eventSetExplosionRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execSetExplosionRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosionRadius(Z_Param_NewRadius);
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function SetExplosionRadius

// Begin Class AFinalBomberManCharacter Function SetVidasJugador
struct Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics
{
	struct FinalBomberManCharacter_eventSetVidasJugador_Parms
	{
		int32 NuevasVidas;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NuevasVidas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::NewProp_NuevasVidas = { "NuevasVidas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManCharacter_eventSetVidasJugador_Parms, NuevasVidas), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::NewProp_NuevasVidas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "SetVidasJugador", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::FinalBomberManCharacter_eventSetVidasJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::FinalBomberManCharacter_eventSetVidasJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execSetVidasJugador)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NuevasVidas);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVidasJugador(Z_Param_NuevasVidas);
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function SetVidasJugador

// Begin Class AFinalBomberManCharacter Function UsarSaltoAlto
struct Z_Construct_UFunction_AFinalBomberManCharacter_UsarSaltoAlto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManCharacter_UsarSaltoAlto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManCharacter, nullptr, "UsarSaltoAlto", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManCharacter_UsarSaltoAlto_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManCharacter_UsarSaltoAlto_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManCharacter_UsarSaltoAlto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManCharacter_UsarSaltoAlto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManCharacter::execUsarSaltoAlto)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UsarSaltoAlto();
	P_NATIVE_END;
}
// End Class AFinalBomberManCharacter Function UsarSaltoAlto

// Begin Class AFinalBomberManCharacter
void AFinalBomberManCharacter::StaticRegisterNativesAFinalBomberManCharacter()
{
	UClass* Class = AFinalBomberManCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivarPowerUpSalto", &AFinalBomberManCharacter::execActivarPowerUpSalto },
		{ "BloquearMovimiento", &AFinalBomberManCharacter::execBloquearMovimiento },
		{ "DesbloquearMovimiento", &AFinalBomberManCharacter::execDesbloquearMovimiento },
		{ "EstaMovimientoBloqueado", &AFinalBomberManCharacter::execEstaMovimientoBloqueado },
		{ "EstaMuerto", &AFinalBomberManCharacter::execEstaMuerto },
		{ "GanarVida", &AFinalBomberManCharacter::execGanarVida },
		{ "GetBombCount", &AFinalBomberManCharacter::execGetBombCount },
		{ "GetExplosionRadius", &AFinalBomberManCharacter::execGetExplosionRadius },
		{ "GetSaltosDisponibles", &AFinalBomberManCharacter::execGetSaltosDisponibles },
		{ "GetVidasJugador", &AFinalBomberManCharacter::execGetVidasJugador },
		{ "MostrarMensajeSaltos", &AFinalBomberManCharacter::execMostrarMensajeSaltos },
		{ "PerderVida", &AFinalBomberManCharacter::execPerderVida },
		{ "PlaceBombAtLocation", &AFinalBomberManCharacter::execPlaceBombAtLocation },
		{ "PuedeSaltarAlto", &AFinalBomberManCharacter::execPuedeSaltarAlto },
		{ "SetBombCount", &AFinalBomberManCharacter::execSetBombCount },
		{ "SetExplosionRadius", &AFinalBomberManCharacter::execSetExplosionRadius },
		{ "SetVidasJugador", &AFinalBomberManCharacter::execSetVidasJugador },
		{ "UsarSaltoAlto", &AFinalBomberManCharacter::execUsarSaltoAlto },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFinalBomberManCharacter);
UClass* Z_Construct_UClass_AFinalBomberManCharacter_NoRegister()
{
	return AFinalBomberManCharacter::StaticClass();
}
struct Z_Construct_UClass_AFinalBomberManCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FinalBomberManCharacter.h" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VidasJugador_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sistema de vidas\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sistema de vidas" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVidasJugador_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaltosDisponibles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sistema de saltos del power up\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sistema de saltos del power up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSaltosDisponibles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTienePowerUpSalto_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosicionSalto_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovimientoBloqueado_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Control de movimiento durante salto\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control de movimiento durante salto" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of bombs the player can place */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of bombs the player can place" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBombCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of bombs the player can place */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of bombs the player can place" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explosion radius of the player's bombs */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explosion radius of the player's bombs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombPlaceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance in front of player to place bomb */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance in front of player to place bomb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBombs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of active bombs placed by this player */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of active bombs placed by this player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bomb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bomb class to spawn */" },
#endif
		{ "ModuleRelativePath", "FinalBomberManCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bomb class to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VidasJugador;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVidasJugador;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SaltosDisponibles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSaltosDisponibles;
	static void NewProp_bTienePowerUpSalto_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTienePowerUpSalto;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosicionSalto;
	static void NewProp_bMovimientoBloqueado_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovimientoBloqueado;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BombCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBombCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BombPlaceDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveBombs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveBombs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BombClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_ActivarPowerUpSalto, "ActivarPowerUpSalto" }, // 3077863404
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_BloquearMovimiento, "BloquearMovimiento" }, // 1620420018
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_DesbloquearMovimiento, "DesbloquearMovimiento" }, // 222243674
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_EstaMovimientoBloqueado, "EstaMovimientoBloqueado" }, // 2112986158
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_EstaMuerto, "EstaMuerto" }, // 2442464383
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_GanarVida, "GanarVida" }, // 3733779579
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount, "GetBombCount" }, // 2696958941
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius, "GetExplosionRadius" }, // 2672237267
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_GetSaltosDisponibles, "GetSaltosDisponibles" }, // 3613168960
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_GetVidasJugador, "GetVidasJugador" }, // 48599518
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_MostrarMensajeSaltos, "MostrarMensajeSaltos" }, // 2710744152
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_PerderVida, "PerderVida" }, // 3846739434
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation, "PlaceBombAtLocation" }, // 4014513628
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_PuedeSaltarAlto, "PuedeSaltarAlto" }, // 3968110765
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount, "SetBombCount" }, // 318695466
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius, "SetExplosionRadius" }, // 1247267615
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_SetVidasJugador, "SetVidasJugador" }, // 4084525733
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_UsarSaltoAlto, "UsarSaltoAlto" }, // 4059530291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalBomberManCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_VidasJugador = { "VidasJugador", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, VidasJugador), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VidasJugador_MetaData), NewProp_VidasJugador_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_MaxVidasJugador = { "MaxVidasJugador", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, MaxVidasJugador), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVidasJugador_MetaData), NewProp_MaxVidasJugador_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_SaltosDisponibles = { "SaltosDisponibles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, SaltosDisponibles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaltosDisponibles_MetaData), NewProp_SaltosDisponibles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_MaxSaltosDisponibles = { "MaxSaltosDisponibles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, MaxSaltosDisponibles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSaltosDisponibles_MetaData), NewProp_MaxSaltosDisponibles_MetaData) };
void Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bTienePowerUpSalto_SetBit(void* Obj)
{
	((AFinalBomberManCharacter*)Obj)->bTienePowerUpSalto = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bTienePowerUpSalto = { "bTienePowerUpSalto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFinalBomberManCharacter), &Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bTienePowerUpSalto_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTienePowerUpSalto_MetaData), NewProp_bTienePowerUpSalto_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_PosicionSalto = { "PosicionSalto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, PosicionSalto), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosicionSalto_MetaData), NewProp_PosicionSalto_MetaData) };
void Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bMovimientoBloqueado_SetBit(void* Obj)
{
	((AFinalBomberManCharacter*)Obj)->bMovimientoBloqueado = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bMovimientoBloqueado = { "bMovimientoBloqueado", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFinalBomberManCharacter), &Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bMovimientoBloqueado_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovimientoBloqueado_MetaData), NewProp_bMovimientoBloqueado_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_BombCount = { "BombCount", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, BombCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombCount_MetaData), NewProp_BombCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_MaxBombCount = { "MaxBombCount", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, MaxBombCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBombCount_MetaData), NewProp_MaxBombCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_BombPlaceDistance = { "BombPlaceDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, BombPlaceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombPlaceDistance_MetaData), NewProp_BombPlaceDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_ActiveBombs_Inner = { "ActiveBombs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_ActiveBombs = { "ActiveBombs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, ActiveBombs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBombs_MetaData), NewProp_ActiveBombs_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_BombClass = { "BombClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, BombClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombClass_MetaData), NewProp_BombClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFinalBomberManCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_VidasJugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_MaxVidasJugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_SaltosDisponibles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_MaxSaltosDisponibles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bTienePowerUpSalto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_PosicionSalto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_bMovimientoBloqueado,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_BombCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_MaxBombCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_ExplosionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_BombPlaceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_ActiveBombs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_ActiveBombs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_BombClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFinalBomberManCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::ClassParams = {
	&AFinalBomberManCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFinalBomberManCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFinalBomberManCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFinalBomberManCharacter()
{
	if (!Z_Registration_Info_UClass_AFinalBomberManCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalBomberManCharacter.OuterSingleton, Z_Construct_UClass_AFinalBomberManCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFinalBomberManCharacter.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<AFinalBomberManCharacter>()
{
	return AFinalBomberManCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalBomberManCharacter);
AFinalBomberManCharacter::~AFinalBomberManCharacter() {}
// End Class AFinalBomberManCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalBomberManCharacter, AFinalBomberManCharacter::StaticClass, TEXT("AFinalBomberManCharacter"), &Z_Registration_Info_UClass_AFinalBomberManCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalBomberManCharacter), 4076234032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManCharacter_h_4045716953(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
