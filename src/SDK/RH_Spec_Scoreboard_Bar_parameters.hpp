#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Scoreboard_Bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SetHoveredIfExists
struct USpec_Scoreboard_Bar_C_SetHoveredIfExists_Params
{
	class USPEC_Char_Box_C*                            bpp__CharBox__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SelectCharBox
struct USpec_Scoreboard_Bar_C_SelectCharBox_Params
{
	class USPEC_Char_Box_C*                            bpp__CharxBox__pfT;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnUserSettingsChanged
struct USpec_Scoreboard_Bar_C_OnUserSettingsChanged_Params
{
	bool                                               bpp__bUseGamepad__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnSpectatorTargetChanged
struct USpec_Scoreboard_Bar_C_OnSpectatorTargetChanged_Params
{
	TEnumAsByte<EShooterAllegiance>                    bpp__Allegiance__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       bpp__Role__pf;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class AShooterCharacter*                           bpp__Target__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnSpectatorPlayerChosen
struct USpec_Scoreboard_Bar_C_OnSpectatorPlayerChosen_Params
{
	int                                                bpp__Index__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnEntryVisibilityChanged
struct USpec_Scoreboard_Bar_C_OnEntryVisibilityChanged_Params
{
	class UShooterPlayerListEntry*                     bpp__Entry__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bIsVisible__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.HideHoveredIfNotActive
struct USpec_Scoreboard_Bar_C_HideHoveredIfNotActive_Params
{
	int                                                bpp__Index__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.Construct
struct USpec_Scoreboard_Bar_C_Construct_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2325_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2325_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2280_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2280_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_291_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_291_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2192_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2192_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2150_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2150_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2068_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2068_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2029_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2029_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1034_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1034_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1006_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1006_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_527_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_527_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_885_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_885_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_861_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_861_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_482_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_482_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_415_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_415_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1845_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1845_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1806_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1806_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_316_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_316_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1951_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1951_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1915_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1915_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1169_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1169_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1138_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1138_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2467_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2467_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2419_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2419_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__CyclePlayerUp_K2Node_ComponentBoundEvent_2818_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__CyclePlayerUp_K2Node_ComponentBoundEvent_2818_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__CyclePlayerDown_K2Node_ComponentBoundEvent_2875_OnButtonHoverEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__CyclePlayerDown_K2Node_ComponentBoundEvent_2875_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F9_K2Node_ComponentBoundEvent_3815_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F9_K2Node_ComponentBoundEvent_3815_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F8_K2Node_ComponentBoundEvent_3868_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F8_K2Node_ComponentBoundEvent_3868_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F7_K2Node_ComponentBoundEvent_3922_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F7_K2Node_ComponentBoundEvent_3922_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F6_K2Node_ComponentBoundEvent_3977_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F6_K2Node_ComponentBoundEvent_3977_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F5_K2Node_ComponentBoundEvent_4033_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F5_K2Node_ComponentBoundEvent_4033_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F4_K2Node_ComponentBoundEvent_4090_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F4_K2Node_ComponentBoundEvent_4090_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F3_K2Node_ComponentBoundEvent_4148_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F3_K2Node_ComponentBoundEvent_4148_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F2_K2Node_ComponentBoundEvent_4207_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F2_K2Node_ComponentBoundEvent_4207_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F1_K2Node_ComponentBoundEvent_4267_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F1_K2Node_ComponentBoundEvent_4267_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F10_K2Node_ComponentBoundEvent_3755_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_F10_K2Node_ComponentBoundEvent_3755_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_354_OnButtonClickedEvent__DelegateSignature
struct USpec_Scoreboard_Bar_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_354_OnButtonClickedEvent__DelegateSignature_Params
{
};

// DelegateFunction Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SpectatorIndexChosen__DelegateSignature
struct USpec_Scoreboard_Bar_C_SpectatorIndexChosen__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
