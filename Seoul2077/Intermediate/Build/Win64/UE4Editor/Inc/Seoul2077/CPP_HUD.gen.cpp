// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Seoul2077/Public/CPP_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_HUD() {}
// Cross Module References
	SEOUL2077_API UClass* Z_Construct_UClass_ACPP_HUD_NoRegister();
	SEOUL2077_API UClass* Z_Construct_UClass_ACPP_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Seoul2077();
// End Cross Module References
	void ACPP_HUD::StaticRegisterNativesACPP_HUD()
	{
	}
	UClass* Z_Construct_UClass_ACPP_HUD_NoRegister()
	{
		return ACPP_HUD::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Seoul2077,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CPP_HUD.h" },
		{ "ModuleRelativePath", "Public/CPP_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_HUD_Statics::ClassParams = {
		&ACPP_HUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_HUD, 3442216791);
	template<> SEOUL2077_API UClass* StaticClass<ACPP_HUD>()
	{
		return ACPP_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_HUD(Z_Construct_UClass_ACPP_HUD, &ACPP_HUD::StaticClass, TEXT("/Script/Seoul2077"), TEXT("ACPP_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
