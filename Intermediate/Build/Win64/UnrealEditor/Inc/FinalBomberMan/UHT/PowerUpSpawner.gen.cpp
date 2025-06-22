// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/PowerUpSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUpSpawner();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUpSpawner_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class APowerUpSpawner Function GetRandomPowerUpType
struct Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics
{
	struct PowerUpSpawner_eventGetRandomPowerUpType_Parms
	{
		ETipoPowerUp ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a random power-up type */" },
#endif
		{ "ModuleRelativePath", "PowerUpSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a random power-up type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUpSpawner_eventGetRandomPowerUpType_Parms, ReturnValue), Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, METADATA_PARAMS(0, nullptr) }; // 162526442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUpSpawner, nullptr, "GetRandomPowerUpType", nullptr, nullptr, Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::PowerUpSpawner_eventGetRandomPowerUpType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::PowerUpSpawner_eventGetRandomPowerUpType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUpSpawner::execGetRandomPowerUpType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETipoPowerUp*)Z_Param__Result=P_THIS->GetRandomPowerUpType();
	P_NATIVE_END;
}
// End Class APowerUpSpawner Function GetRandomPowerUpType

// Begin Class APowerUpSpawner Function SpawnPowerUp
struct Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics
{
	struct PowerUpSpawner_eventSpawnPowerUp_Parms
	{
		FVector Location;
		APowerUp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn a power-up at the specified location */" },
#endif
		{ "ModuleRelativePath", "PowerUpSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn a power-up at the specified location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUpSpawner_eventSpawnPowerUp_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUpSpawner_eventSpawnPowerUp_Parms, ReturnValue), Z_Construct_UClass_APowerUp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUpSpawner, nullptr, "SpawnPowerUp", nullptr, nullptr, Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::PowerUpSpawner_eventSpawnPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::PowerUpSpawner_eventSpawnPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUpSpawner::execSpawnPowerUp)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APowerUp**)Z_Param__Result=P_THIS->SpawnPowerUp(Z_Param_Location);
	P_NATIVE_END;
}
// End Class APowerUpSpawner Function SpawnPowerUp

// Begin Class APowerUpSpawner Function SpawnRandomPowerUp
struct Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics
{
	struct PowerUpSpawner_eventSpawnRandomPowerUp_Parms
	{
		FVector Location;
		APowerUp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn a random power-up at the specified location */" },
#endif
		{ "ModuleRelativePath", "PowerUpSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn a random power-up at the specified location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUpSpawner_eventSpawnRandomPowerUp_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUpSpawner_eventSpawnRandomPowerUp_Parms, ReturnValue), Z_Construct_UClass_APowerUp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUpSpawner, nullptr, "SpawnRandomPowerUp", nullptr, nullptr, Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::PowerUpSpawner_eventSpawnRandomPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::PowerUpSpawner_eventSpawnRandomPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUpSpawner::execSpawnRandomPowerUp)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APowerUp**)Z_Param__Result=P_THIS->SpawnRandomPowerUp(Z_Param_Location);
	P_NATIVE_END;
}
// End Class APowerUpSpawner Function SpawnRandomPowerUp

// Begin Class APowerUpSpawner
void APowerUpSpawner::StaticRegisterNativesAPowerUpSpawner()
{
	UClass* Class = APowerUpSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRandomPowerUpType", &APowerUpSpawner::execGetRandomPowerUpType },
		{ "SpawnPowerUp", &APowerUpSpawner::execSpawnPowerUp },
		{ "SpawnRandomPowerUp", &APowerUpSpawner::execSpawnRandomPowerUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerUpSpawner);
UClass* Z_Construct_UClass_APowerUpSpawner_NoRegister()
{
	return APowerUpSpawner::StaticClass();
}
struct Z_Construct_UClass_APowerUpSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpSpawner.h" },
		{ "ModuleRelativePath", "PowerUpSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PowerUp Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Power-up class to spawn */" },
#endif
		{ "ModuleRelativePath", "PowerUpSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Power-up class to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProbability_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PowerUp Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Probability of spawning a power-up when a block is destroyed (0.0 to 1.0) */" },
#endif
		{ "ModuleRelativePath", "PowerUpSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Probability of spawning a power-up when a block is destroyed (0.0 to 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailablePowerUpTypes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PowerUp Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of power-up types that can be spawned */" },
#endif
		{ "ModuleRelativePath", "PowerUpSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of power-up types that can be spawned" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PowerUpClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnProbability;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AvailablePowerUpTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AvailablePowerUpTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailablePowerUpTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APowerUpSpawner_GetRandomPowerUpType, "GetRandomPowerUpType" }, // 4205104541
		{ &Z_Construct_UFunction_APowerUpSpawner_SpawnPowerUp, "SpawnPowerUp" }, // 3690179025
		{ &Z_Construct_UFunction_APowerUpSpawner_SpawnRandomPowerUp, "SpawnRandomPowerUp" }, // 383198763
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUpSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_PowerUpClass = { "PowerUpClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUpSpawner, PowerUpClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APowerUp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerUpClass_MetaData), NewProp_PowerUpClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_SpawnProbability = { "SpawnProbability", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUpSpawner, SpawnProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnProbability_MetaData), NewProp_SpawnProbability_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_AvailablePowerUpTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_AvailablePowerUpTypes_Inner = { "AvailablePowerUpTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, METADATA_PARAMS(0, nullptr) }; // 162526442
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_AvailablePowerUpTypes = { "AvailablePowerUpTypes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUpSpawner, AvailablePowerUpTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailablePowerUpTypes_MetaData), NewProp_AvailablePowerUpTypes_MetaData) }; // 162526442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerUpSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_PowerUpClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_SpawnProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_AvailablePowerUpTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_AvailablePowerUpTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUpSpawner_Statics::NewProp_AvailablePowerUpTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APowerUpSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerUpSpawner_Statics::ClassParams = {
	&APowerUpSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APowerUpSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_APowerUpSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APowerUpSpawner()
{
	if (!Z_Registration_Info_UClass_APowerUpSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerUpSpawner.OuterSingleton, Z_Construct_UClass_APowerUpSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APowerUpSpawner.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<APowerUpSpawner>()
{
	return APowerUpSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUpSpawner);
APowerUpSpawner::~APowerUpSpawner() {}
// End Class APowerUpSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APowerUpSpawner, APowerUpSpawner::StaticClass, TEXT("APowerUpSpawner"), &Z_Registration_Info_UClass_APowerUpSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerUpSpawner), 2523663311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_2744808523(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
