// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealingItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW083_HealingItem_generated_h
#error "HealingItem.generated.h already included, missing '#pragma once' in HealingItem.h"
#endif
#define HW083_HealingItem_generated_h

#define FID_git_HW08_Source_HW083_Public_HealingItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealingItem(); \
	friend struct Z_Construct_UClass_AHealingItem_Statics; \
public: \
	DECLARE_CLASS(AHealingItem, ABaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW083"), NO_API) \
	DECLARE_SERIALIZER(AHealingItem)


#define FID_git_HW08_Source_HW083_Public_HealingItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHealingItem(AHealingItem&&); \
	AHealingItem(const AHealingItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealingItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealingItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealingItem) \
	NO_API virtual ~AHealingItem();


#define FID_git_HW08_Source_HW083_Public_HealingItem_h_12_PROLOG
#define FID_git_HW08_Source_HW083_Public_HealingItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW08_Source_HW083_Public_HealingItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_HW08_Source_HW083_Public_HealingItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW083_API UClass* StaticClass<class AHealingItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW08_Source_HW083_Public_HealingItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
