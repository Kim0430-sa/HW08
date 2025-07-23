// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HWGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW083_HWGameInstance_generated_h
#error "HWGameInstance.generated.h already included, missing '#pragma once' in HWGameInstance.h"
#endif
#define HW083_HWGameInstance_generated_h

#define FID_git_HW083_Source_HW083_Public_HWGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddToScore);


#define FID_git_HW083_Source_HW083_Public_HWGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHWGameInstance(); \
	friend struct Z_Construct_UClass_UHWGameInstance_Statics; \
public: \
	DECLARE_CLASS(UHWGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HW083"), NO_API) \
	DECLARE_SERIALIZER(UHWGameInstance)


#define FID_git_HW083_Source_HW083_Public_HWGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHWGameInstance(UHWGameInstance&&); \
	UHWGameInstance(const UHWGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHWGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHWGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHWGameInstance) \
	NO_API virtual ~UHWGameInstance();


#define FID_git_HW083_Source_HW083_Public_HWGameInstance_h_12_PROLOG
#define FID_git_HW083_Source_HW083_Public_HWGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW083_Source_HW083_Public_HWGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_HW083_Source_HW083_Public_HWGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_HW083_Source_HW083_Public_HWGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW083_API UClass* StaticClass<class UHWGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW083_Source_HW083_Public_HWGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
