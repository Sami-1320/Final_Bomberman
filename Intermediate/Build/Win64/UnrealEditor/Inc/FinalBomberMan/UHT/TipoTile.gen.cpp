// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/TipoTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipoTile() {}

// Begin Cross Module References
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoTile();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Enum ETipoTile
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETipoTile;
static UEnum* ETipoTile_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETipoTile.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETipoTile.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FinalBomberMan_ETipoTile, (UObject*)Z_Construct_UPackage__Script_FinalBomberMan(), TEXT("ETipoTile"));
	}
	return Z_Registration_Info_UEnum_ETipoTile.OuterSingleton;
}
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoTile>()
{
	return ETipoTile_StaticEnum();
}
struct Z_Construct_UEnum_FinalBomberMan_ETipoTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BloqueDestructible.DisplayName", "Bloque Destructible" },
		{ "BloqueDestructible.Name", "ETipoTile::BloqueDestructible" },
		{ "BloqueIndestructible.DisplayName", "Bloque Indestructible" },
		{ "BloqueIndestructible.Name", "ETipoTile::BloqueIndestructible" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TipoTile.h" },
		{ "SalidaNivel.DisplayName", "Salida Nivel" },
		{ "SalidaNivel.Name", "ETipoTile::SalidaNivel" },
		{ "SpawnEnemigo.DisplayName", "Spawn Enemigo" },
		{ "SpawnEnemigo.Name", "ETipoTile::SpawnEnemigo" },
		{ "SpawnJugador.DisplayName", "Spawn Jugador" },
		{ "SpawnJugador.Name", "ETipoTile::SpawnJugador" },
		{ "Vacio.DisplayName", "Vacio" },
		{ "Vacio.Name", "ETipoTile::Vacio" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETipoTile::Vacio", (int64)ETipoTile::Vacio },
		{ "ETipoTile::BloqueIndestructible", (int64)ETipoTile::BloqueIndestructible },
		{ "ETipoTile::BloqueDestructible", (int64)ETipoTile::BloqueDestructible },
		{ "ETipoTile::SpawnJugador", (int64)ETipoTile::SpawnJugador },
		{ "ETipoTile::SpawnEnemigo", (int64)ETipoTile::SpawnEnemigo },
		{ "ETipoTile::SalidaNivel", (int64)ETipoTile::SalidaNivel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FinalBomberMan_ETipoTile_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FinalBomberMan,
	nullptr,
	"ETipoTile",
	"ETipoTile",
	Z_Construct_UEnum_FinalBomberMan_ETipoTile_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoTile_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoTile_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FinalBomberMan_ETipoTile_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoTile()
{
	if (!Z_Registration_Info_UEnum_ETipoTile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETipoTile.InnerSingleton, Z_Construct_UEnum_FinalBomberMan_ETipoTile_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETipoTile.InnerSingleton;
}
// End Enum ETipoTile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_TipoTile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETipoTile_StaticEnum, TEXT("ETipoTile"), &Z_Registration_Info_UEnum_ETipoTile, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 108387480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_TipoTile_h_1966605274(TEXT("/Script/FinalBomberMan"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_TipoTile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_TipoTile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
