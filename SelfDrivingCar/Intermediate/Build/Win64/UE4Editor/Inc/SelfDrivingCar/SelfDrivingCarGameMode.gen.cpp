// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelfDrivingCar/SelfDrivingCarGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfDrivingCarGameMode() {}
// Cross Module References
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_ASelfDrivingCarGameMode_NoRegister();
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_ASelfDrivingCarGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SelfDrivingCar();
// End Cross Module References
	void ASelfDrivingCarGameMode::StaticRegisterNativesASelfDrivingCarGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASelfDrivingCarGameMode_NoRegister()
	{
		return ASelfDrivingCarGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASelfDrivingCarGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelfDrivingCarGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SelfDrivingCar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelfDrivingCarGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SelfDrivingCarGameMode.h" },
		{ "ModuleRelativePath", "SelfDrivingCarGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelfDrivingCarGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelfDrivingCarGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASelfDrivingCarGameMode_Statics::ClassParams = {
		&ASelfDrivingCarGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASelfDrivingCarGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASelfDrivingCarGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelfDrivingCarGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASelfDrivingCarGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelfDrivingCarGameMode, 3568482680);
	template<> SELFDRIVINGCAR_API UClass* StaticClass<ASelfDrivingCarGameMode>()
	{
		return ASelfDrivingCarGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelfDrivingCarGameMode(Z_Construct_UClass_ASelfDrivingCarGameMode, &ASelfDrivingCarGameMode::StaticClass, TEXT("/Script/SelfDrivingCar"), TEXT("ASelfDrivingCarGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelfDrivingCarGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
