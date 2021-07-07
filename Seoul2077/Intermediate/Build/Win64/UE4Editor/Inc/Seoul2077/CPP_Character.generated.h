// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEOUL2077_CPP_Character_generated_h
#error "CPP_Character.generated.h already included, missing '#pragma once' in CPP_Character.h"
#endif
#define SEOUL2077_CPP_Character_generated_h

#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_SPARSE_DATA
#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_RPC_WRAPPERS
#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Character(); \
	friend struct Z_Construct_UClass_ACPP_Character_Statics; \
public: \
	DECLARE_CLASS(ACPP_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Seoul2077"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Character)


#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPP_Character(); \
	friend struct Z_Construct_UClass_ACPP_Character_Statics; \
public: \
	DECLARE_CLASS(ACPP_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Seoul2077"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Character)


#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Character(ACPP_Character&&); \
	NO_API ACPP_Character(const ACPP_Character&); \
public:


#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Character(ACPP_Character&&); \
	NO_API ACPP_Character(const ACPP_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_Character)


#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACPP_Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACPP_Character, FollowCamera); }


#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_9_PROLOG
#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_SPARSE_DATA \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_RPC_WRAPPERS \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_INCLASS \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_SPARSE_DATA \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_INCLASS_NO_PURE_DECLS \
	Seoul2077_Source_Seoul2077_Public_CPP_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEOUL2077_API UClass* StaticClass<class ACPP_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Seoul2077_Source_Seoul2077_Public_CPP_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
