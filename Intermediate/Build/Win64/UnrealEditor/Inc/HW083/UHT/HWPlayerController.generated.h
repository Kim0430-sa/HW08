// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HWPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef HW083_HWPlayerController_generated_h
#error "HWPlayerController.generated.h already included, missing '#pragma once' in HWPlayerController.h"
#endif
#define HW083_HWPlayerController_generated_h

#define FID_git_HW08_Source_HW083_Public_HWPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execShowGameHUD); \
	DECLARE_FUNCTION(execGetHUDWidget);


#define FID_git_HW08_Source_HW083_Public_HWPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWPlayerController(); \
	friend struct Z_Construct_UClass_AHWPlayerController_Statics; \
public: \
	DECLARE_CLASS(AHWPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW083"), NO_API) \
	DECLARE_SERIALIZER(AHWPlayerController)


#define FID_git_HW08_Source_HW083_Public_HWPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWPlayerController(AHWPlayerController&&); \
	AHWPlayerController(const AHWPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHWPlayerController) \
	NO_API virtual ~AHWPlayerController();


#define FID_git_HW08_Source_HW083_Public_HWPlayerController_h_13_PROLOG
#define FID_git_HW08_Source_HW083_Public_HWPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_HW08_Source_HW083_Public_HWPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_HW08_Source_HW083_Public_HWPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_git_HW08_Source_HW083_Public_HWPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW083_API UClass* StaticClass<class AHWPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_HW08_Source_HW083_Public_HWPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
