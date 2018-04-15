#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Settings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spec_Settings.Spec_Settings_C.SetFOVSlider
struct USpec_Settings_C_SetFOVSlider_Params
{
	float                                              bpp__Value__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.SelectSetting
struct USpec_Settings_C_SelectSetting_Params
{
	int                                                bpp__SettingIndex__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnUserSettingsChanged
struct USpec_Settings_C_OnUserSettingsChanged_Params
{
	bool                                               bpp__bUseGamepad__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorXRayVisionToggled
struct USpec_Settings_C_OnSpectatorXRayVisionToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorToolbarToggled
struct USpec_Settings_C_OnSpectatorToolbarToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorTargetChanged
struct USpec_Settings_C_OnSpectatorTargetChanged_Params
{
	TEnumAsByte<EShooterAllegiance>                    bpp__Allegiance__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       bpp__Role__pf;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class AShooterCharacter*                           bpp__Target__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorSettingSelect
struct USpec_Settings_C_OnSpectatorSettingSelect_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorSettingChange
struct USpec_Settings_C_OnSpectatorSettingChange_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorScoreboardToggled
struct USpec_Settings_C_OnSpectatorScoreboardToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorLoadoutToggled
struct USpec_Settings_C_OnSpectatorLoadoutToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorHUDToggled
struct USpec_Settings_C_OnSpectatorHUDToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.OnSpectatorGameModeToggled
struct USpec_Settings_C_OnSpectatorGameModeToggled_Params
{
	bool                                               bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.Construct
struct USpec_Settings_C_Construct_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__FOVButton_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__FOVButton_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              bpp__Value__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_220_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_220_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_361_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_361_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_241_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_241_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Reticle_button_K2Node_ComponentBoundEvent_335_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Reticle_button_K2Node_ComponentBoundEvent_335_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_280_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_280_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_286_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_286_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_310_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_310_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_263_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_263_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1106_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1106_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1007_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1007_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__Display_Ammo_button_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__Display_Ammo_button_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Settings.Spec_Settings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature
struct USpec_Settings_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature_Params
{
};

// DelegateFunction Spec_Settings.Spec_Settings_C.SpectatorFlagChanged__DelegateSignature
struct USpec_Settings_C_SpectatorFlagChanged__DelegateSignature_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
