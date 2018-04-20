// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SPEC_TEST_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SPEC_TEST.SPEC_TEST_C.OnUserSettingsChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bUseGamepad__pf           (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnUserSettingsChanged(bool bpp__bUseGamepad__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnUserSettingsChanged");

	USPEC_TEST_C_OnUserSettingsChanged_Params params;
	params.bpp__bUseGamepad__pf = bpp__bUseGamepad__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorToolbarToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnSpectatorToolbarToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnSpectatorToolbarToggled");

	USPEC_TEST_C_OnSpectatorToolbarToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorTargetLoading
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnSpectatorTargetLoading(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnSpectatorTargetLoading");

	USPEC_TEST_C_OnSpectatorTargetLoading_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorTargetChanged_Event
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__NewTarget__pf             (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnSpectatorTargetChanged_Event(class AShooterCharacter* bpp__NewTarget__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnSpectatorTargetChanged_Event");

	USPEC_TEST_C_OnSpectatorTargetChanged_Event_Params params;
	params.bpp__NewTarget__pf = bpp__NewTarget__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorSettingsToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnSpectatorSettingsToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnSpectatorSettingsToggled");

	USPEC_TEST_C_OnSpectatorSettingsToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorScoreboardToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnSpectatorScoreboardToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnSpectatorScoreboardToggled");

	USPEC_TEST_C_OnSpectatorScoreboardToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorLoadoutShouldBeVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnSpectatorLoadoutShouldBeVisible(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnSpectatorLoadoutShouldBeVisible");

	USPEC_TEST_C_OnSpectatorLoadoutShouldBeVisible_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.OnSpectatorHUDShouldBeVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::OnSpectatorHUDShouldBeVisible(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.OnSpectatorHUDShouldBeVisible");

	USPEC_TEST_C_OnSpectatorHUDShouldBeVisible_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_TEST.SPEC_TEST_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void USPEC_TEST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_TEST.SPEC_TEST_C.Construct");

	USPEC_TEST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction SPEC_TEST.SPEC_TEST_C.UserSettingsChangedEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bUseGamePad                    (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::UserSettingsChangedEvent__DelegateSignature(bool bUseGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SPEC_TEST.SPEC_TEST_C.UserSettingsChangedEvent__DelegateSignature");

	USPEC_TEST_C_UserSettingsChangedEvent__DelegateSignature_Params params;
	params.bUseGamePad = bUseGamePad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction SPEC_TEST.SPEC_TEST_C.SpectatorTargetChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AShooterCharacter*       NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::SpectatorTargetChanged__DelegateSignature(class AShooterCharacter* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SPEC_TEST.SPEC_TEST_C.SpectatorTargetChanged__DelegateSignature");

	USPEC_TEST_C_SpectatorTargetChanged__DelegateSignature_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction SPEC_TEST.SPEC_TEST_C.SpectatorFlagChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_TEST_C::SpectatorFlagChanged__DelegateSignature(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SPEC_TEST.SPEC_TEST_C.SpectatorFlagChanged__DelegateSignature");

	USPEC_TEST_C_SpectatorFlagChanged__DelegateSignature_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
