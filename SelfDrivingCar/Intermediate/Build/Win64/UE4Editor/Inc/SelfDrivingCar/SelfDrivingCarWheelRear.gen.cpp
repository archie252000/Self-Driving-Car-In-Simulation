// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelfDrivingCar/SelfDrivingCarWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfDrivingCarWheelRear() {}
// Cross Module References
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_USelfDrivingCarWheelRear_NoRegister();
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_USelfDrivingCarWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_SelfDrivingCar();
// End Cross Module References
	void USelfDrivingCarWheelRear::StaticRegisterNativesUSelfDrivingCarWheelRear()
	{
	}
	UClass* Z_Construct_UClass_USelfDrivingCarWheelRear_NoRegister()
	{
		return USelfDrivingCarWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_USelfDrivingCarWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfDrivingCarWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_SelfDrivingCar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfDrivingCarWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelfDrivingCarWheelRear.h" },
		{ "ModuleRelativePath", "SelfDrivingCarWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfDrivingCarWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfDrivingCarWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelfDrivingCarWheelRear_Statics::ClassParams = {
		&USelfDrivingCarWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USelfDrivingCarWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfDrivingCarWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfDrivingCarWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelfDrivingCarWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelfDrivingCarWheelRear, 3122434711);
	template<> SELFDRIVINGCAR_API UClass* StaticClass<USelfDrivingCarWheelRear>()
	{
		return USelfDrivingCarWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelfDrivingCarWheelRear(Z_Construct_UClass_USelfDrivingCarWheelRear, &USelfDrivingCarWheelRear::StaticClass, TEXT("/Script/SelfDrivingCar"), TEXT("USelfDrivingCarWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfDrivingCarWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
