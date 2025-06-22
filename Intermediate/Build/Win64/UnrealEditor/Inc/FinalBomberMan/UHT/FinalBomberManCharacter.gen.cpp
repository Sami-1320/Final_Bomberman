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
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ABomba_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

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

// Begin Class AFinalBomberManCharacter
void AFinalBomberManCharacter::StaticRegisterNativesAFinalBomberManCharacter()
{
	UClass* Class = AFinalBomberManCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBombCount", &AFinalBomberManCharacter::execGetBombCount },
		{ "GetExplosionRadius", &AFinalBomberManCharacter::execGetExplosionRadius },
		{ "PlaceBombAtLocation", &AFinalBomberManCharacter::execPlaceBombAtLocation },
		{ "SetBombCount", &AFinalBomberManCharacter::execSetBombCount },
		{ "SetExplosionRadius", &AFinalBomberManCharacter::execSetExplosionRadius },
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
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_GetBombCount, "GetBombCount" }, // 2696958941
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_GetExplosionRadius, "GetExplosionRadius" }, // 2672237267
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_PlaceBombAtLocation, "PlaceBombAtLocation" }, // 4014513628
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_SetBombCount, "SetBombCount" }, // 318695466
		{ &Z_Construct_UFunction_AFinalBomberManCharacter_SetExplosionRadius, "SetExplosionRadius" }, // 1247267615
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalBomberManCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
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
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalBomberManCharacter, AFinalBomberManCharacter::StaticClass, TEXT("AFinalBomberManCharacter"), &Z_Registration_Info_UClass_AFinalBomberManCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalBomberManCharacter), 492956089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_509170324(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
