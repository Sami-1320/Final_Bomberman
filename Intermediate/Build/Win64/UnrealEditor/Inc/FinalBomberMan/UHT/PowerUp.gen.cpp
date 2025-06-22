// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/PowerUp.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUp();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Enum ETipoPowerUp
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETipoPowerUp;
static UEnum* ETipoPowerUp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETipoPowerUp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETipoPowerUp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, (UObject*)Z_Construct_UPackage__Script_FinalBomberMan(), TEXT("ETipoPowerUp"));
	}
	return Z_Registration_Info_UEnum_ETipoPowerUp.OuterSingleton;
}
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoPowerUp>()
{
	return ETipoPowerUp_StaticEnum();
}
struct Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BombaExtra.DisplayName", "Bomba Extra" },
		{ "BombaExtra.Name", "ETipoPowerUp::BombaExtra" },
		{ "BombaRemota.DisplayName", "Bomba Remota" },
		{ "BombaRemota.Name", "ETipoPowerUp::BombaRemota" },
		{ "Escudo.DisplayName", "Escudo" },
		{ "Escudo.Name", "ETipoPowerUp::Escudo" },
		{ "Inmortalidad.DisplayName", "Inmortalidad" },
		{ "Inmortalidad.Name", "ETipoPowerUp::Inmortalidad" },
		{ "ModuleRelativePath", "PowerUp.h" },
		{ "RadioExplosion.DisplayName", "Radio Explosi\xc3\xb3n" },
		{ "RadioExplosion.Name", "ETipoPowerUp::RadioExplosion" },
		{ "Velocidad.DisplayName", "Velocidad" },
		{ "Velocidad.Name", "ETipoPowerUp::Velocidad" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETipoPowerUp::BombaExtra", (int64)ETipoPowerUp::BombaExtra },
		{ "ETipoPowerUp::RadioExplosion", (int64)ETipoPowerUp::RadioExplosion },
		{ "ETipoPowerUp::Velocidad", (int64)ETipoPowerUp::Velocidad },
		{ "ETipoPowerUp::Escudo", (int64)ETipoPowerUp::Escudo },
		{ "ETipoPowerUp::BombaRemota", (int64)ETipoPowerUp::BombaRemota },
		{ "ETipoPowerUp::Inmortalidad", (int64)ETipoPowerUp::Inmortalidad },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FinalBomberMan,
	nullptr,
	"ETipoPowerUp",
	"ETipoPowerUp",
	Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp()
{
	if (!Z_Registration_Info_UEnum_ETipoPowerUp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETipoPowerUp.InnerSingleton, Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETipoPowerUp.InnerSingleton;
}
// End Enum ETipoPowerUp

// Begin Class APowerUp Function AplicarPowerUp
struct Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics
{
	struct PowerUp_eventAplicarPowerUp_Parms
	{
		AFinalBomberManCharacter* Jugador;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos del PowerUp\n" },
#endif
		{ "ModuleRelativePath", "PowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos del PowerUp" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventAplicarPowerUp_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::NewProp_Jugador,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "AplicarPowerUp", nullptr, nullptr, Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::PowerUp_eventAplicarPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::PowerUp_eventAplicarPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUp_AplicarPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUp_AplicarPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUp::execAplicarPowerUp)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AplicarPowerUp(Z_Param_Jugador);
	P_NATIVE_END;
}
// End Class APowerUp Function AplicarPowerUp

// Begin Class APowerUp Function EsPowerUpPermanente
struct Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics
{
	struct PowerUp_eventEsPowerUpPermanente_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PowerUp_eventEsPowerUpPermanente_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PowerUp_eventEsPowerUpPermanente_Parms), &Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "EsPowerUpPermanente", nullptr, nullptr, Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::PowerUp_eventEsPowerUpPermanente_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::PowerUp_eventEsPowerUpPermanente_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUp_EsPowerUpPermanente()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUp_EsPowerUpPermanente_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUp::execEsPowerUpPermanente)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EsPowerUpPermanente();
	P_NATIVE_END;
}
// End Class APowerUp Function EsPowerUpPermanente

// Begin Class APowerUp Function ObtenerDuracion
struct Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics
{
	struct PowerUp_eventObtenerDuracion_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventObtenerDuracion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "ObtenerDuracion", nullptr, nullptr, Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::PowerUp_eventObtenerDuracion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::PowerUp_eventObtenerDuracion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUp_ObtenerDuracion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUp_ObtenerDuracion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUp::execObtenerDuracion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ObtenerDuracion();
	P_NATIVE_END;
}
// End Class APowerUp Function ObtenerDuracion

// Begin Class APowerUp Function ObtenerTipo
struct Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics
{
	struct PowerUp_eventObtenerTipo_Parms
	{
		ETipoPowerUp ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventObtenerTipo_Parms, ReturnValue), Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, METADATA_PARAMS(0, nullptr) }; // 162526442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "ObtenerTipo", nullptr, nullptr, Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::PowerUp_eventObtenerTipo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::PowerUp_eventObtenerTipo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUp_ObtenerTipo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUp_ObtenerTipo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUp::execObtenerTipo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETipoPowerUp*)Z_Param__Result=P_THIS->ObtenerTipo();
	P_NATIVE_END;
}
// End Class APowerUp Function ObtenerTipo

// Begin Class APowerUp Function ObtenerValor
struct Z_Construct_UFunction_APowerUp_ObtenerValor_Statics
{
	struct PowerUp_eventObtenerValor_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventObtenerValor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "ObtenerValor", nullptr, nullptr, Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::PowerUp_eventObtenerValor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::PowerUp_eventObtenerValor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUp_ObtenerValor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUp_ObtenerValor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUp::execObtenerValor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerValor();
	P_NATIVE_END;
}
// End Class APowerUp Function ObtenerValor

// Begin Class APowerUp Function OnOverlapBegin
struct Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics
{
	struct PowerUp_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PowerUp_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PowerUp_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PowerUp_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PowerUp_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUp_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUp::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APowerUp Function OnOverlapBegin

// Begin Class APowerUp Function RemoverPowerUp
struct Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics
{
	struct PowerUp_eventRemoverPowerUp_Parms
	{
		AFinalBomberManCharacter* Jugador;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerUp_eventRemoverPowerUp_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::NewProp_Jugador,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "RemoverPowerUp", nullptr, nullptr, Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::PowerUp_eventRemoverPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::PowerUp_eventRemoverPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APowerUp_RemoverPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerUp_RemoverPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerUp::execRemoverPowerUp)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoverPowerUp(Z_Param_Jugador);
	P_NATIVE_END;
}
// End Class APowerUp Function RemoverPowerUp

// Begin Class APowerUp
void APowerUp::StaticRegisterNativesAPowerUp()
{
	UClass* Class = APowerUp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AplicarPowerUp", &APowerUp::execAplicarPowerUp },
		{ "EsPowerUpPermanente", &APowerUp::execEsPowerUpPermanente },
		{ "ObtenerDuracion", &APowerUp::execObtenerDuracion },
		{ "ObtenerTipo", &APowerUp::execObtenerTipo },
		{ "ObtenerValor", &APowerUp::execObtenerValor },
		{ "OnOverlapBegin", &APowerUp::execOnOverlapBegin },
		{ "RemoverPowerUp", &APowerUp::execRemoverPowerUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerUp);
UClass* Z_Construct_UClass_APowerUp_NoRegister()
{
	return APowerUp::StaticClass();
}
struct Z_Construct_UClass_APowerUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUp.h" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipoPowerUp_MetaData[] = {
		{ "Category", "PowerUp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propiedades del PowerUp\n" },
#endif
		{ "ModuleRelativePath", "PowerUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedades del PowerUp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duracion_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Valor_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EsPermanente_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TipoPowerUp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TipoPowerUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duracion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Valor;
	static void NewProp_EsPermanente_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EsPermanente;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APowerUp_AplicarPowerUp, "AplicarPowerUp" }, // 3406095393
		{ &Z_Construct_UFunction_APowerUp_EsPowerUpPermanente, "EsPowerUpPermanente" }, // 1677776199
		{ &Z_Construct_UFunction_APowerUp_ObtenerDuracion, "ObtenerDuracion" }, // 991636239
		{ &Z_Construct_UFunction_APowerUp_ObtenerTipo, "ObtenerTipo" }, // 3469578582
		{ &Z_Construct_UFunction_APowerUp_ObtenerValor, "ObtenerValor" }, // 3187304613
		{ &Z_Construct_UFunction_APowerUp_OnOverlapBegin, "OnOverlapBegin" }, // 3152103281
		{ &Z_Construct_UFunction_APowerUp_RemoverPowerUp, "RemoverPowerUp" }, // 3384594137
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_TipoPowerUp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_TipoPowerUp = { "TipoPowerUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUp, TipoPowerUp), Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipoPowerUp_MetaData), NewProp_TipoPowerUp_MetaData) }; // 162526442
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_Duracion = { "Duracion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUp, Duracion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duracion_MetaData), NewProp_Duracion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_Valor = { "Valor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUp, Valor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Valor_MetaData), NewProp_Valor_MetaData) };
void Z_Construct_UClass_APowerUp_Statics::NewProp_EsPermanente_SetBit(void* Obj)
{
	((APowerUp*)Obj)->EsPermanente = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_EsPermanente = { "EsPermanente", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APowerUp), &Z_Construct_UClass_APowerUp_Statics::NewProp_EsPermanente_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EsPermanente_MetaData), NewProp_EsPermanente_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUp, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerUp, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_TipoPowerUp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_TipoPowerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_Duracion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_Valor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_EsPermanente,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_CollisionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APowerUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APowerUp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(APowerUp, IIPrototype), false },  // 1544610603
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerUp_Statics::ClassParams = {
	&APowerUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APowerUp_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams), Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APowerUp()
{
	if (!Z_Registration_Info_UClass_APowerUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerUp.OuterSingleton, Z_Construct_UClass_APowerUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APowerUp.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<APowerUp>()
{
	return APowerUp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUp);
APowerUp::~APowerUp() {}
// End Class APowerUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETipoPowerUp_StaticEnum, TEXT("ETipoPowerUp"), &Z_Registration_Info_UEnum_ETipoPowerUp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 162526442U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APowerUp, APowerUp::StaticClass, TEXT("APowerUp"), &Z_Registration_Info_UClass_APowerUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerUp), 3364439852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUp_h_848562483(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUp_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
