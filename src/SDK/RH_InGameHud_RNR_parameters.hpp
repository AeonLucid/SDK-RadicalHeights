#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_InGameHud_RNR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InGameHud_RNR.InGameHud_RNR_C.SetVisibility_ServerFull
struct UInGameHud_RNR_C_SetVisibility_ServerFull_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.GetWeaponBarPercent
struct UInGameHud_RNR_C_GetWeaponBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_NewHud
struct UInGameHud_RNR_C_GetVisibility_NewHud_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_HudChatInput
struct UInGameHud_RNR_C_GetVisibility_HudChatInput_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_GhostBar
struct UInGameHud_RNR_C_GetVisibility_GhostBar_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.GetThreatsVisibility
struct UInGameHud_RNR_C_GetThreatsVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.GetReticleBarColor
struct UInGameHud_RNR_C_GetReticleBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.Get_Offhand_Ammo_Visible
struct UInGameHud_RNR_C_Get_Offhand_Ammo_Visible_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameHud_RNR.InGameHud_RNR_C.Get_Ability Bar_Visibility_1
struct UInGameHud_RNR_C_Get_Ability_Bar_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
