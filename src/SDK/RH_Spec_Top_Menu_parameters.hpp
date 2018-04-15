#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Top_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spec_Top_Menu.Spec_Top_Menu_C.OnUserSettingsChanged
struct USpec_Top_Menu_C_OnUserSettingsChanged_Params
{
	bool                                               bpp__bUseGamepad__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.OnSpectatorTargetChanged
struct USpec_Top_Menu_C_OnSpectatorTargetChanged_Params
{
	TEnumAsByte<EShooterAllegiance>                    bpp__Allegiance__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       bpp__Role__pf;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class AShooterCharacter*                           bpp__Target__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.OnOneTeammateLeft
struct USpec_Top_Menu_C_OnOneTeammateLeft_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.Construct
struct USpec_Top_Menu_C_Construct_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ToolBarButton_K2Node_ComponentBoundEvent_476_OnButtonHoverEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__ToolBarButton_K2Node_ComponentBoundEvent_476_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_448_OnButtonHoverEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_448_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__MenuModeButton_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__MenuModeButton_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__HudButton_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__HudButton_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__HideMenuButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__HideMenuButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__GameModeButton_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__GameModeButton_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_387_OnButtonHoverEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_387_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersNextButton_K2Node_ComponentBoundEvent_413_OnButtonHoverEvent__DelegateSignature
struct USpec_Top_Menu_C_BndEvt__CyclePlayersNextButton_K2Node_ComponentBoundEvent_413_OnButtonHoverEvent__DelegateSignature_Params
{
};

// DelegateFunction Spec_Top_Menu.Spec_Top_Menu_C.OnOneTeammateLeftDelegate__DelegateSignature
struct USpec_Top_Menu_C_OnOneTeammateLeftDelegate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
