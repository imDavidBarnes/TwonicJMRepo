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
struct FHitResult;
#ifdef UNREALPROJECT_Telescope_generated_h
#error "Telescope.generated.h already included, missing '#pragma once' in Telescope.h"
#endif
#define UNREALPROJECT_Telescope_generated_h

#define UnrealProject_Source_UnrealProject_Telescope_h_14_SPARSE_DATA
#define UnrealProject_Source_UnrealProject_Telescope_h_14_RPC_WRAPPERS \
	virtual void Prox_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execProx);


#define UnrealProject_Source_UnrealProject_Telescope_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProx);


#define UnrealProject_Source_UnrealProject_Telescope_h_14_EVENT_PARMS \
	struct Telescope_eventProx_Parms \
	{ \
		UPrimitiveComponent* OverlappedComponent; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
	};


#define UnrealProject_Source_UnrealProject_Telescope_h_14_CALLBACK_WRAPPERS
#define UnrealProject_Source_UnrealProject_Telescope_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATelescope(); \
	friend struct Z_Construct_UClass_ATelescope_Statics; \
public: \
	DECLARE_CLASS(ATelescope, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealProject"), NO_API) \
	DECLARE_SERIALIZER(ATelescope)


#define UnrealProject_Source_UnrealProject_Telescope_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATelescope(); \
	friend struct Z_Construct_UClass_ATelescope_Statics; \
public: \
	DECLARE_CLASS(ATelescope, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealProject"), NO_API) \
	DECLARE_SERIALIZER(ATelescope)


#define UnrealProject_Source_UnrealProject_Telescope_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATelescope(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATelescope) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATelescope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATelescope); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATelescope(ATelescope&&); \
	NO_API ATelescope(const ATelescope&); \
public:


#define UnrealProject_Source_UnrealProject_Telescope_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATelescope(ATelescope&&); \
	NO_API ATelescope(const ATelescope&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATelescope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATelescope); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATelescope)


#define UnrealProject_Source_UnrealProject_Telescope_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Source_UnrealProject_Telescope_h_11_PROLOG \
	UnrealProject_Source_UnrealProject_Telescope_h_14_EVENT_PARMS


#define UnrealProject_Source_UnrealProject_Telescope_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Telescope_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_UnrealProject_Telescope_h_14_SPARSE_DATA \
	UnrealProject_Source_UnrealProject_Telescope_h_14_RPC_WRAPPERS \
	UnrealProject_Source_UnrealProject_Telescope_h_14_CALLBACK_WRAPPERS \
	UnrealProject_Source_UnrealProject_Telescope_h_14_INCLASS \
	UnrealProject_Source_UnrealProject_Telescope_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_UnrealProject_Telescope_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Telescope_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_UnrealProject_Telescope_h_14_SPARSE_DATA \
	UnrealProject_Source_UnrealProject_Telescope_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Telescope_h_14_CALLBACK_WRAPPERS \
	UnrealProject_Source_UnrealProject_Telescope_h_14_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Telescope_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPROJECT_API UClass* StaticClass<class ATelescope>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_UnrealProject_Telescope_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
