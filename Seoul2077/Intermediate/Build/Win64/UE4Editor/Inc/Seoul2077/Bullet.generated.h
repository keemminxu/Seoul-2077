// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SEOUL2077_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define SEOUL2077_Bullet_generated_h

#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_SPARSE_DATA
#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Seoul2077"), NO_API) \
	DECLARE_SERIALIZER(ABullet) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Seoul2077"), NO_API) \
	DECLARE_SERIALIZER(ABullet) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABullet, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABullet, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__explosionFactory() { return STRUCT_OFFSET(ABullet, explosionFactory); }


#define Seoul2077_Source_Seoul2077_Public_Bullet_h_13_PROLOG
#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_PRIVATE_PROPERTY_OFFSET \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_SPARSE_DATA \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_RPC_WRAPPERS \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_INCLASS \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Seoul2077_Source_Seoul2077_Public_Bullet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_PRIVATE_PROPERTY_OFFSET \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_SPARSE_DATA \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_INCLASS_NO_PURE_DECLS \
	Seoul2077_Source_Seoul2077_Public_Bullet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEOUL2077_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Seoul2077_Source_Seoul2077_Public_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
