// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/AttackingEntity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackingEntity() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_UAttackingEntity_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UAttackingEntity();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	DEFINE_FUNCTION(UAttackingEntity::execGetAttackDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttackDamage();
		P_NATIVE_END;
	}
	void UAttackingEntity::StaticRegisterNativesUAttackingEntity()
	{
		UClass* Class = UAttackingEntity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackDamage", &UAttackingEntity::execGetAttackDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics
	{
		struct AttackingEntity_eventGetAttackDamage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttackingEntity_eventGetAttackDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttackingEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttackingEntity, nullptr, "GetAttackDamage", nullptr, nullptr, sizeof(AttackingEntity_eventGetAttackDamage_Parms), Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttackingEntity_GetAttackDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttackingEntity_GetAttackDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAttackingEntity_NoRegister()
	{
		return UAttackingEntity::StaticClass();
	}
	struct Z_Construct_UClass_UAttackingEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefenseMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefenseMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Knockback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Knockback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackingEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttackingEntity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttackingEntity_GetAttackDamage, "GetAttackDamage" }, // 1325619881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackingEntity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AttackingEntity.h" },
		{ "ModuleRelativePath", "AttackingEntity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "AttackStats" },
		{ "ModuleRelativePath", "AttackingEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttackingEntity, Damage), METADATA_PARAMS(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackingEntity_Statics::NewProp_AttackMultiplier_MetaData[] = {
		{ "Category", "AttackStats" },
		{ "ModuleRelativePath", "AttackingEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackingEntity_Statics::NewProp_AttackMultiplier = { "AttackMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttackingEntity, AttackMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_AttackMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_AttackMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackingEntity_Statics::NewProp_DefenseMultiplier_MetaData[] = {
		{ "Category", "AttackStats" },
		{ "ModuleRelativePath", "AttackingEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackingEntity_Statics::NewProp_DefenseMultiplier = { "DefenseMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttackingEntity, DefenseMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_DefenseMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_DefenseMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Knockback_MetaData[] = {
		{ "Category", "AttackStats" },
		{ "ModuleRelativePath", "AttackingEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Knockback = { "Knockback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttackingEntity, Knockback), METADATA_PARAMS(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Knockback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Knockback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackingEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackingEntity_Statics::NewProp_AttackMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackingEntity_Statics::NewProp_DefenseMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackingEntity_Statics::NewProp_Knockback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackingEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackingEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackingEntity_Statics::ClassParams = {
		&UAttackingEntity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttackingEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingEntity_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackingEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackingEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackingEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackingEntity, 2685027309);
	template<> UNREALPROJECT_API UClass* StaticClass<UAttackingEntity>()
	{
		return UAttackingEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackingEntity(Z_Construct_UClass_UAttackingEntity, &UAttackingEntity::StaticClass, TEXT("/Script/UnrealProject"), TEXT("UAttackingEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackingEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
