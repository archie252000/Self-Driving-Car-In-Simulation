// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SELFDRIVINGCAR_SelfDrivingCarPawn_generated_h
#error "SelfDrivingCarPawn.generated.h already included, missing '#pragma once' in SelfDrivingCarPawn.h"
#endif
#define SELFDRIVINGCAR_SelfDrivingCarPawn_generated_h

#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_SPARSE_DATA
#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_RPC_WRAPPERS
#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASelfDrivingCarPawn(); \
	friend struct Z_Construct_UClass_ASelfDrivingCarPawn_Statics; \
public: \
	DECLARE_CLASS(ASelfDrivingCarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SelfDrivingCar"), NO_API) \
	DECLARE_SERIALIZER(ASelfDrivingCarPawn)


#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASelfDrivingCarPawn(); \
	friend struct Z_Construct_UClass_ASelfDrivingCarPawn_Statics; \
public: \
	DECLARE_CLASS(ASelfDrivingCarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SelfDrivingCar"), NO_API) \
	DECLARE_SERIALIZER(ASelfDrivingCarPawn)


#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASelfDrivingCarPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASelfDrivingCarPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASelfDrivingCarPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASelfDrivingCarPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASelfDrivingCarPawn(ASelfDrivingCarPawn&&); \
	NO_API ASelfDrivingCarPawn(const ASelfDrivingCarPawn&); \
public:


#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASelfDrivingCarPawn(ASelfDrivingCarPawn&&); \
	NO_API ASelfDrivingCarPawn(const ASelfDrivingCarPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASelfDrivingCarPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASelfDrivingCarPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASelfDrivingCarPawn)


#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ASelfDrivingCarPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ASelfDrivingCarPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ASelfDrivingCarPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ASelfDrivingCarPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ASelfDrivingCarPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ASelfDrivingCarPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(ASelfDrivingCarPawn, EngineSoundComponent); }


#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_18_PROLOG
#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_SPARSE_DATA \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_RPC_WRAPPERS \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_INCLASS \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_SPARSE_DATA \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_INCLASS_NO_PURE_DECLS \
	SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SELFDRIVINGCAR_API UClass* StaticClass<class ASelfDrivingCarPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SelfDrivingCar_Source_SelfDrivingCar_SelfDrivingCarPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
