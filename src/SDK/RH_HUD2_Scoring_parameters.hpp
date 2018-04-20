#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD2_Scoring_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD2_Scoring.HUD2_Scoring_C.SetVisibility_ServerFull
struct UHUD2_Scoring_C_SetVisibility_ServerFull_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_Scoring.HUD2_Scoring_C.GetWeaponBarPercent
struct UHUD2_Scoring_C_GetWeaponBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_Scoring.HUD2_Scoring_C.GetVisibility_NewHud
struct UHUD2_Scoring_C_GetVisibility_NewHud_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_Scoring.HUD2_Scoring_C.GetVisibility_GhostBar
struct UHUD2_Scoring_C_GetVisibility_GhostBar_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_Scoring.HUD2_Scoring_C.GetReticleBarColor
struct UHUD2_Scoring_C_GetReticleBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_Scoring.HUD2_Scoring_C.Get_Offhand_Ammo_Visible
struct UHUD2_Scoring_C_Get_Offhand_Ammo_Visible_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_Scoring.HUD2_Scoring_C.Get_Ability Bar_Visibility_1
struct UHUD2_Scoring_C_Get_Ability_Bar_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
