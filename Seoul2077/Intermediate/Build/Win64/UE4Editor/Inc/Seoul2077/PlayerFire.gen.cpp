// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Seoul2077/Public/PlayerFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerFire() {}
// Cross Module References
	SEOUL2077_API UClass* Z_Construct_UClass_UPlayerFire_NoRegister();
	SEOUL2077_API UClass* Z_Construct_UClass_UPlayerFire();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Seoul2077();
// End Cross Module References
	void UPlayerFire::StaticRegisterNativesUPlayerFire()
	{
	}
	UClass* Z_Construct_UClass_UPlayerFire_NoRegister()
	{
		return UPlayerFire::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Seoul2077,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerFire.h" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerFire_Statics::ClassParams = {
		&UPlayerFire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerFire, 376912935);
	template<> SEOUL2077_API UClass* StaticClass<UPlayerFire>()
	{
		return UPlayerFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerFire(Z_Construct_UClass_UPlayerFire, &UPlayerFire::StaticClass, TEXT("/Script/Seoul2077"), TEXT("UPlayerFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
