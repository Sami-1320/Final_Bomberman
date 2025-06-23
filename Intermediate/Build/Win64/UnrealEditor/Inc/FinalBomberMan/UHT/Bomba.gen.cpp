// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/Bomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomba() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ABomba();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ABomba_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUpSpawner_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoBomba();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Enum ETipoBomba
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETipoBomba;
static UEnum* ETipoBomba_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETipoBomba.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETipoBomba.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FinalBomberMan_ETipoBomba, (UObject*)Z_Construct_UPackage__Script_FinalBomberMan(), TEXT("ETipoBomba"));
	}
	return Z_Registration_Info_UEnum_ETipoBomba.OuterSingleton;
}
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoBomba>()
{
	return ETipoBomba_StaticEnum();
}
struct Z_Construct_UEnum_FinalBomberMan_ETipoBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cascada.DisplayName", "Cascada" },
		{ "Cascada.Name", "ETipoBomba::Cascada" },
		{ "Cronometro.DisplayName", "Cron\xc3\xb3metro" },
		{ "Cronometro.Name", "ETipoBomba::Cronometro" },
		{ "ModuleRelativePath", "Bomba.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "ETipoBomba::Normal" },
		{ "Remota.DisplayName", "Remota" },
		{ "Remota.Name", "ETipoBomba::Remota" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETipoBomba::Normal", (int64)ETipoBomba::Normal },
		{ "ETipoBomba::Remota", (int64)ETipoBomba::Remota },
		{ "ETipoBomba::Cronometro", (int64)ETipoBomba::Cronometro },
		{ "ETipoBomba::Cascada", (int64)ETipoBomba::Cascada },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FinalBomberMan_ETipoBomba_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FinalBomberMan,
	nullptr,
	"ETipoBomba",
	"ETipoBomba",
	Z_Construct_UEnum_FinalBomberMan_ETipoBomba_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoBomba_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoBomba_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FinalBomberMan_ETipoBomba_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoBomba()
{
	if (!Z_Registration_Info_UEnum_ETipoBomba.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETipoBomba.InnerSingleton, Z_Construct_UEnum_FinalBomberMan_ETipoBomba_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETipoBomba.InnerSingleton;
}
// End Enum ETipoBomba

// Begin Class ABomba Function CancelarExplosion
struct Z_Construct_UFunction_ABomba_CancelarExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomba_CancelarExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomba, nullptr, "CancelarExplosion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_CancelarExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomba_CancelarExplosion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomba_CancelarExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomba_CancelarExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomba::execCancelarExplosion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelarExplosion();
	P_NATIVE_END;
}
// End Class ABomba Function CancelarExplosion

// Begin Class ABomba Function Detonar
struct Z_Construct_UFunction_ABomba_Detonar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomba_Detonar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomba, nullptr, "Detonar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_Detonar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomba_Detonar_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomba_Detonar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomba_Detonar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomba::execDetonar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Detonar();
	P_NATIVE_END;
}
// End Class ABomba Function Detonar

// Begin Class ABomba Function EstaActivada
struct Z_Construct_UFunction_ABomba_EstaActivada_Statics
{
	struct Bomba_eventEstaActivada_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABomba_EstaActivada_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Bomba_eventEstaActivada_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABomba_EstaActivada_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Bomba_eventEstaActivada_Parms), &Z_Construct_UFunction_ABomba_EstaActivada_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomba_EstaActivada_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomba_EstaActivada_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_EstaActivada_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomba_EstaActivada_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomba, nullptr, "EstaActivada", nullptr, nullptr, Z_Construct_UFunction_ABomba_EstaActivada_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_EstaActivada_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomba_EstaActivada_Statics::Bomba_eventEstaActivada_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_EstaActivada_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomba_EstaActivada_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomba_EstaActivada_Statics::Bomba_eventEstaActivada_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomba_EstaActivada()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomba_EstaActivada_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomba::execEstaActivada)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EstaActivada();
	P_NATIVE_END;
}
// End Class ABomba Function EstaActivada

// Begin Class ABomba Function IniciarExplosion
struct Z_Construct_UFunction_ABomba_IniciarExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos de la bomba\n" },
#endif
		{ "ModuleRelativePath", "Bomba.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos de la bomba" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomba_IniciarExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomba, nullptr, "IniciarExplosion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_IniciarExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomba_IniciarExplosion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomba_IniciarExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomba_IniciarExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomba::execIniciarExplosion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IniciarExplosion();
	P_NATIVE_END;
}
// End Class ABomba Function IniciarExplosion

// Begin Class ABomba Function ObtenerTiempoRestante
struct Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics
{
	struct Bomba_eventObtenerTiempoRestante_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bomba_eventObtenerTiempoRestante_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomba, nullptr, "ObtenerTiempoRestante", nullptr, nullptr, Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::Bomba_eventObtenerTiempoRestante_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::Bomba_eventObtenerTiempoRestante_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomba_ObtenerTiempoRestante()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomba_ObtenerTiempoRestante_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomba::execObtenerTiempoRestante)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ObtenerTiempoRestante();
	P_NATIVE_END;
}
// End Class ABomba Function ObtenerTiempoRestante

// Begin Class ABomba
void ABomba::StaticRegisterNativesABomba()
{
	UClass* Class = ABomba::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelarExplosion", &ABomba::execCancelarExplosion },
		{ "Detonar", &ABomba::execDetonar },
		{ "EstaActivada", &ABomba::execEstaActivada },
		{ "IniciarExplosion", &ABomba::execIniciarExplosion },
		{ "ObtenerTiempoRestante", &ABomba::execObtenerTiempoRestante },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomba);
UClass* Z_Construct_UClass_ABomba_NoRegister()
{
	return ABomba::StaticClass();
}
struct Z_Construct_UClass_ABomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bomba.h" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipoBomba_MetaData[] = {
		{ "Category", "Bomba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propiedades de la bomba\n" },
#endif
		{ "ModuleRelativePath", "Bomba.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedades de la bomba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioExplosion_MetaData[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoExplosion_MetaData[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EsRemota_MetaData[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dano_MetaData[] = {
		{ "Category", "Bomba" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffectComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticleSystem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia al sistema de part\xc3\xad""culas de explosi\xc3\xb3n\n" },
#endif
		{ "ModuleRelativePath", "Bomba.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al sistema de part\xc3\xad""culas de explosi\xc3\xb3n" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MundoActual_MetaData[] = {
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerUpSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TipoBomba_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TipoBomba;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioExplosion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoExplosion;
	static void NewProp_EsRemota_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EsRemota;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dano;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffectComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticleSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MundoActual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PowerUpSpawner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomba_CancelarExplosion, "CancelarExplosion" }, // 104377082
		{ &Z_Construct_UFunction_ABomba_Detonar, "Detonar" }, // 3638138728
		{ &Z_Construct_UFunction_ABomba_EstaActivada, "EstaActivada" }, // 734011623
		{ &Z_Construct_UFunction_ABomba_IniciarExplosion, "IniciarExplosion" }, // 3446424718
		{ &Z_Construct_UFunction_ABomba_ObtenerTiempoRestante, "ObtenerTiempoRestante" }, // 1523077130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_TipoBomba_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_TipoBomba = { "TipoBomba", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, TipoBomba), Z_Construct_UEnum_FinalBomberMan_ETipoBomba, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipoBomba_MetaData), NewProp_TipoBomba_MetaData) }; // 184315029
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_RadioExplosion = { "RadioExplosion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, RadioExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioExplosion_MetaData), NewProp_RadioExplosion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_TiempoExplosion = { "TiempoExplosion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, TiempoExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoExplosion_MetaData), NewProp_TiempoExplosion_MetaData) };
void Z_Construct_UClass_ABomba_Statics::NewProp_EsRemota_SetBit(void* Obj)
{
	((ABomba*)Obj)->EsRemota = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_EsRemota = { "EsRemota", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABomba), &Z_Construct_UClass_ABomba_Statics::NewProp_EsRemota_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EsRemota_MetaData), NewProp_EsRemota_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, Dano), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dano_MetaData), NewProp_Dano_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_ExplosionEffectComponent = { "ExplosionEffectComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, ExplosionEffectComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionEffectComponent_MetaData), NewProp_ExplosionEffectComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_ExplosionParticleSystem = { "ExplosionParticleSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, ExplosionParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionParticleSystem_MetaData), NewProp_ExplosionParticleSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_MundoActual = { "MundoActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, MundoActual), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MundoActual_MetaData), NewProp_MundoActual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_PowerUpSpawner = { "PowerUpSpawner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, PowerUpSpawner), Z_Construct_UClass_APowerUpSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerUpSpawner_MetaData), NewProp_PowerUpSpawner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_TipoBomba_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_TipoBomba,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_RadioExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_TiempoExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_EsRemota,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_Dano,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_ExplosionEffectComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_ExplosionParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_MundoActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_PowerUpSpawner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABomba_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(ABomba, IIPrototype), false },  // 1544610603
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomba_Statics::ClassParams = {
	&ABomba::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABomba_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomba()
{
	if (!Z_Registration_Info_UClass_ABomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomba.OuterSingleton, Z_Construct_UClass_ABomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomba.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<ABomba>()
{
	return ABomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomba);
ABomba::~ABomba() {}
// End Class ABomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETipoBomba_StaticEnum, TEXT("ETipoBomba"), &Z_Registration_Info_UEnum_ETipoBomba, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 184315029U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomba, ABomba::StaticClass, TEXT("ABomba"), &Z_Registration_Info_UClass_ABomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomba), 1171610396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_17971103(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
