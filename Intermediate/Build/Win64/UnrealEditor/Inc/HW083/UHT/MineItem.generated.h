// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MineItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW083_MineItem_generated_h
#error "MineItem.generated.h already included, missing '#pragma once' in MineItem.h"
#endif
#define HW083_MineItem_generated_h

#define FID_git_HW08_Source_HW083_Public_MineItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMineItem(); \
	friend struct Z_Construct_UClass_AMineItem_Statics; \
public: \
	DECLARE_CLASS(AMineItem, ABaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW083"), NO_API) \
	DECLARE_SERIALIZER(AMineItem)


#define FID_git_HW08_Source_HW083_Public_MineItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMineItem(AMineItem&&); \
	AMineItem(const AMineItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMineItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMineItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMineItem) \
	NO_API virtual ~AMineItem();


#define FID_git_HW08_Source_HW083_Public_MineItem_h_12_PROLOG
#define FID_git_HW08_Source_HW083_Public_MineItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW08_Source_HW083_Public_MineItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_HW08_Source_HW083_Public_MineItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW083_API UClass* StaticClass<class AMineItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW08_Source_HW083_Public_MineItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
