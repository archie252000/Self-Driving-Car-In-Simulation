// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelfDrivingCar/SelfDrivingCarHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfDrivingCarHud() {}
// Cross Module References
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_ASelfDrivingCarHud_NoRegister();
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_ASelfDrivingCarHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SelfDrivingCar();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ASelfDrivingCarHud::StaticRegisterNativesASelfDrivingCarHud()
	{
	}
	UClass* Z_Construct_UClass_ASelfDrivingCarHud_NoRegister()
	{
		return ASelfDrivingCarHud::StaticClass();
	}
	struct Z_Construct_UClass_ASelfDrivingCarHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelfDrivingCarHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SelfDrivingCar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelfDrivingCarHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SelfDrivingCarHud.h" },
		{ "ModuleRelativePath", "SelfDrivingCarHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelfDrivingCarHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "Comment", "/** Font used to render the vehicle info */" },
		{ "ModuleRelativePath", "SelfDrivingCarHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelfDrivingCarHud_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASelfDrivingCarHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASelfDrivingCarHud_Statics::NewProp_HUDFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASelfDrivingCarHud_Statics::NewProp_HUDFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelfDrivingCarHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelfDrivingCarHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelfDrivingCarHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelfDrivingCarHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASelfDrivingCarHud_Statics::ClassParams = {
		&ASelfDrivingCarHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASelfDrivingCarHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASelfDrivingCarHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASelfDrivingCarHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASelfDrivingCarHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelfDrivingCarHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASelfDrivingCarHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelfDrivingCarHud, 1700169242);
	template<> SELFDRIVINGCAR_API UClass* StaticClass<ASelfDrivingCarHud>()
	{
		return ASelfDrivingCarHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelfDrivingCarHud(Z_Construct_UClass_ASelfDrivingCarHud, &ASelfDrivingCarHud::StaticClass, TEXT("/Script/SelfDrivingCar"), TEXT("ASelfDrivingCarHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelfDrivingCarHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
