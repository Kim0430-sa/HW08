// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HWGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW083_HWGameState_generated_h
#error "HWGameState.generated.h already included, missing '#pragma once' in HWGameState.h"
#endif
#define HW083_HWGameState_generated_h

#define FID_git_HW083_Source_HW083_Public_HWGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_git_HW083_Source_HW083_Public_HWGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWGameState(); \
	friend struct Z_Construct_UClass_AHWGameState_Statics; \
public: \
	DECLARE_CLASS(AHWGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW083"), NO_API) \
	DECLARE_SERIALIZER(AHWGameState)


#define FID_git_HW083_Source_HW083_Public_HWGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWGameState(AHWGameState&&); \
	AHWGameState(const AHWGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHWGameState) \
	NO_API virtual ~AHWGameState();


#define FID_git_HW083_Source_HW083_Public_HWGameState_h_12_PROLOG
#define FID_git_HW083_Source_HW083_Public_HWGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW083_Source_HW083_Public_HWGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_HW083_Source_HW083_Public_HWGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_HW083_Source_HW083_Public_HWGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW083_API UClass* StaticClass<class AHWGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW083_Source_HW083_Public_HWGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
