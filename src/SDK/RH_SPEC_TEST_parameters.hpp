#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SPEC_TEST_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SPEC_TEST.SPEC_TEST_C.OnUserSettingsChanged
struct USPEC_TEST_C_OnUserSettingsChanged_Params
{
	bool                                               bpp__bUseGamepad__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorToolbarToggled
struct USPEC_TEST_C_OnSpectatorToolbarToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorTargetLoading
struct USPEC_TEST_C_OnSpectatorTargetLoading_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorTargetChanged_Event
struct USPEC_TEST_C_OnSpectatorTargetChanged_Event_Params
{
	class AShooterCharacter*                           bpp__NewTarget__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorSettingsToggled
struct USPEC_TEST_C_OnSpectatorSettingsToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorScoreboardToggled
struct USPEC_TEST_C_OnSpectatorScoreboardToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorLoadoutShouldBeVisible
struct USPEC_TEST_C_OnSpectatorLoadoutShouldBeVisible_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorHUDShouldBeVisible
struct USPEC_TEST_C_OnSpectatorHUDShouldBeVisible_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_TEST.SPEC_TEST_C.Construct
struct USPEC_TEST_C_Construct_Params
{
};

// DelegateFunction SPEC_TEST.SPEC_TEST_C.UserSettingsChangedEvent__DelegateSignature
struct USPEC_TEST_C_UserSettingsChangedEvent__DelegateSignature_Params
{
	bool                                               bUseGamePad;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction SPEC_TEST.SPEC_TEST_C.SpectatorTargetChanged__DelegateSignature
struct USPEC_TEST_C_SpectatorTargetChanged__DelegateSignature_Params
{
	class AShooterCharacter*                           NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction SPEC_TEST.SPEC_TEST_C.SpectatorFlagChanged__DelegateSignature
struct USPEC_TEST_C_SpectatorFlagChanged__DelegateSignature_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
