// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Seoul2077/Public/Seoul2077GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeoul2077GameModeBase() {}
// Cross Module References
	SEOUL2077_API UClass* Z_Construct_UClass_ASeoul2077GameModeBase_NoRegister();
	SEOUL2077_API UClass* Z_Construct_UClass_ASeoul2077GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Seoul2077();
// End Cross Module References
	void ASeoul2077GameModeBase::StaticRegisterNativesASeoul2077GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASeoul2077GameModeBase_NoRegister()
	{
		return ASeoul2077GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASeoul2077GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASeoul2077GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Seoul2077,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeoul2077GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Seoul2077GameModeBase.h" },
		{ "ModuleRelativePath", "Public/Seoul2077GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASeoul2077GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeoul2077GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASeoul2077GameModeBase_Statics::ClassParams = {
		&ASeoul2077GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASeoul2077GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASeoul2077GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASeoul2077GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASeoul2077GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASeoul2077GameModeBase, 82480258);
	template<> SEOUL2077_API UClass* StaticClass<ASeoul2077GameModeBase>()
	{
		return ASeoul2077GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeoul2077GameModeBase(Z_Construct_UClass_ASeoul2077GameModeBase, &ASeoul2077GameModeBase::StaticClass, TEXT("/Script/Seoul2077"), TEXT("ASeoul2077GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASeoul2077GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
