// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelfDrivingCar/SelfDrivingCarWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfDrivingCarWheelFront() {}
// Cross Module References
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_USelfDrivingCarWheelFront_NoRegister();
	SELFDRIVINGCAR_API UClass* Z_Construct_UClass_USelfDrivingCarWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_SelfDrivingCar();
// End Cross Module References
	void USelfDrivingCarWheelFront::StaticRegisterNativesUSelfDrivingCarWheelFront()
	{
	}
	UClass* Z_Construct_UClass_USelfDrivingCarWheelFront_NoRegister()
	{
		return USelfDrivingCarWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_USelfDrivingCarWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfDrivingCarWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_SelfDrivingCar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfDrivingCarWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelfDrivingCarWheelFront.h" },
		{ "ModuleRelativePath", "SelfDrivingCarWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfDrivingCarWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfDrivingCarWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelfDrivingCarWheelFront_Statics::ClassParams = {
		&USelfDrivingCarWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USelfDrivingCarWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfDrivingCarWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfDrivingCarWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelfDrivingCarWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelfDrivingCarWheelFront, 876995099);
	template<> SELFDRIVINGCAR_API UClass* StaticClass<USelfDrivingCarWheelFront>()
	{
		return USelfDrivingCarWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelfDrivingCarWheelFront(Z_Construct_UClass_USelfDrivingCarWheelFront, &USelfDrivingCarWheelFront::StaticClass, TEXT("/Script/SelfDrivingCar"), TEXT("USelfDrivingCarWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfDrivingCarWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
