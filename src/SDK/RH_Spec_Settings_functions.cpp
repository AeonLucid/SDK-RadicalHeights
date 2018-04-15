// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Settings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spec_Settings.Spec_Settings_C.SetFOVSlider
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          bpp__Value__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::SetFOVSlider(float bpp__Value__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.SetFOVSlider");

	USpec_Settings_C_SetFOVSlider_Params params;
	params.bpp__Value__pf = bpp__Value__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.SelectSetting
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__SettingIndex__pf          (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::SelectSetting(int bpp__SettingIndex__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.SelectSetting");

	USpec_Settings_C_SelectSetting_Params params;
	params.bpp__SettingIndex__pf = bpp__SettingIndex__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnUserSettingsChanged
// (Final, Native, Event, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bUseGamepad__pf           (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnUserSettingsChanged(bool bpp__bUseGamepad__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnUserSettingsChanged");

	USpec_Settings_C_OnUserSettingsChanged_Params params;
	params.bpp__bUseGamepad__pf = bpp__bUseGamepad__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorXRayVisionToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorXRayVisionToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorXRayVisionToggled");

	USpec_Settings_C_OnSpectatorXRayVisionToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorToolbarToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorToolbarToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorToolbarToggled");

	USpec_Settings_C_OnSpectatorToolbarToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorTargetChanged
// (Final, Native, Event, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   bpp__Role__pf                  (ConstParm, Parm, OutParm, ReferenceParm)
// class AShooterCharacter*       bpp__Target__pf                (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorTargetChanged");

	USpec_Settings_C_OnSpectatorTargetChanged_Params params;
	params.bpp__Allegiance__pf = bpp__Allegiance__pf;
	params.bpp__Role__pf = bpp__Role__pf;
	params.bpp__Target__pf = bpp__Target__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorSettingSelect
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorSettingSelect(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorSettingSelect");

	USpec_Settings_C_OnSpectatorSettingSelect_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorSettingChange
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorSettingChange(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorSettingChange");

	USpec_Settings_C_OnSpectatorSettingChange_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorScoreboardToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorScoreboardToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorScoreboardToggled");

	USpec_Settings_C_OnSpectatorScoreboardToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorLoadoutToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorLoadoutToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorLoadoutToggled");

	USpec_Settings_C_OnSpectatorLoadoutToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorHUDToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorHUDToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorHUDToggled");

	USpec_Settings_C_OnSpectatorHUDToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.OnSpectatorGameModeToggled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::OnSpectatorGameModeToggled(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.OnSpectatorGameModeToggled");

	USpec_Settings_C_OnSpectatorGameModeToggled_Params params;
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void USpec_Settings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.Construct");

	USpec_Settings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__FOVButton_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__FOVButton_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__FOVButton_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__FOVButton_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature
// (Native, Public)
// Parameters:
// float                          bpp__Value__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature(float bpp__Value__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.bpp__Value__pf = bpp__Value__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_220_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_220_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_220_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_220_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_361_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_361_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_361_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_361_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_241_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_241_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_241_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_241_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Reticle_button_K2Node_ComponentBoundEvent_335_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Reticle_button_K2Node_ComponentBoundEvent_335_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Reticle_button_K2Node_ComponentBoundEvent_335_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Reticle_button_K2Node_ComponentBoundEvent_335_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_280_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_280_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_280_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_280_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_286_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_286_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_286_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_286_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_310_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_310_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_310_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_310_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_263_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_263_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_263_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_263_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1106_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1106_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1106_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1106_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1007_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1007_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1007_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1007_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Ammo_button_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__Display_Ammo_button_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Ammo_button_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__Display_Ammo_button_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Settings.Spec_Settings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Settings_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Settings.Spec_Settings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature");

	USpec_Settings_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Spec_Settings.Spec_Settings_C.SpectatorFlagChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Settings_C::SpectatorFlagChanged__DelegateSignature(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Spec_Settings.Spec_Settings_C.SpectatorFlagChanged__DelegateSignature");

	USpec_Settings_C_SpectatorFlagChanged__DelegateSignature_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
