// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Avatar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatar() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_UAvatar_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UAvatar();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UAvatar::StaticRegisterNativesUAvatar()
	{
	}
	UClass* Z_Construct_UClass_UAvatar_NoRegister()
	{
		return UAvatar::StaticClass();
	}
	struct Z_Construct_UClass_UAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Avatar.h" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvatar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvatar_Statics::ClassParams = {
		&UAvatar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAvatar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvatar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvatar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvatar, 3001007580);
	template<> UNREALPROJECT_API UClass* StaticClass<UAvatar>()
	{
		return UAvatar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvatar(Z_Construct_UClass_UAvatar, &UAvatar::StaticClass, TEXT("/Script/UnrealProject"), TEXT("UAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvatar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
