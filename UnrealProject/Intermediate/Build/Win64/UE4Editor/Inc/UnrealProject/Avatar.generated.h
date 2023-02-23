// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPROJECT_Avatar_generated_h
#error "Avatar.generated.h already included, missing '#pragma once' in Avatar.h"
#endif
#define UNREALPROJECT_Avatar_generated_h

#define UnrealProject_Source_UnrealProject_Avatar_h_14_SPARSE_DATA
#define UnrealProject_Source_UnrealProject_Avatar_h_14_RPC_WRAPPERS
#define UnrealProject_Source_UnrealProject_Avatar_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProject_Source_UnrealProject_Avatar_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvatar(); \
	friend struct Z_Construct_UClass_UAvatar_Statics; \
public: \
	DECLARE_CLASS(UAvatar, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealProject"), NO_API) \
	DECLARE_SERIALIZER(UAvatar)


#define UnrealProject_Source_UnrealProject_Avatar_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAvatar(); \
	friend struct Z_Construct_UClass_UAvatar_Statics; \
public: \
	DECLARE_CLASS(UAvatar, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealProject"), NO_API) \
	DECLARE_SERIALIZER(UAvatar)


#define UnrealProject_Source_UnrealProject_Avatar_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvatar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvatar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvatar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvatar(UAvatar&&); \
	NO_API UAvatar(const UAvatar&); \
public:


#define UnrealProject_Source_UnrealProject_Avatar_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvatar(UAvatar&&); \
	NO_API UAvatar(const UAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvatar)


#define UnrealProject_Source_UnrealProject_Avatar_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Source_UnrealProject_Avatar_h_11_PROLOG
#define UnrealProject_Source_UnrealProject_Avatar_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Avatar_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_UnrealProject_Avatar_h_14_SPARSE_DATA \
	UnrealProject_Source_UnrealProject_Avatar_h_14_RPC_WRAPPERS \
	UnrealProject_Source_UnrealProject_Avatar_h_14_INCLASS \
	UnrealProject_Source_UnrealProject_Avatar_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_UnrealProject_Avatar_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Avatar_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_UnrealProject_Avatar_h_14_SPARSE_DATA \
	UnrealProject_Source_UnrealProject_Avatar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Avatar_h_14_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Avatar_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPROJECT_API UClass* StaticClass<class UAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_UnrealProject_Avatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
