// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BigCoinItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW083_BigCoinItem_generated_h
#error "BigCoinItem.generated.h already included, missing '#pragma once' in BigCoinItem.h"
#endif
#define HW083_BigCoinItem_generated_h

#define FID_git_HW08_Source_HW083_Public_BigCoinItem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABigCoinItem(); \
	friend struct Z_Construct_UClass_ABigCoinItem_Statics; \
public: \
	DECLARE_CLASS(ABigCoinItem, ACoinItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW083"), NO_API) \
	DECLARE_SERIALIZER(ABigCoinItem)


#define FID_git_HW08_Source_HW083_Public_BigCoinItem_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABigCoinItem(ABigCoinItem&&); \
	ABigCoinItem(const ABigCoinItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigCoinItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigCoinItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABigCoinItem) \
	NO_API virtual ~ABigCoinItem();


#define FID_git_HW08_Source_HW083_Public_BigCoinItem_h_7_PROLOG
#define FID_git_HW08_Source_HW083_Public_BigCoinItem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW08_Source_HW083_Public_BigCoinItem_h_10_INCLASS_NO_PURE_DECLS \
	FID_git_HW08_Source_HW083_Public_BigCoinItem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW083_API UClass* StaticClass<class ABigCoinItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW08_Source_HW083_Public_BigCoinItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
