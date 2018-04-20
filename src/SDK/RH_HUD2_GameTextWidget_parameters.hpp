#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD2_GameTextWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.Tick
struct UHUD2_GameTextWidget_C_Tick_Params
{
	struct FGeometry                                   bpp__MyGeometry__pf;                                      // (Parm, IsPlainOldData)
	float                                              bpp__InDeltaTime__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetVisibility_WaitingForPlayers
struct UHUD2_GameTextWidget_C_SetVisibility_WaitingForPlayers_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetVisibility_ServerFull
struct UHUD2_GameTextWidget_C_SetVisibility_ServerFull_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetText_WarmupTimer
struct UHUD2_GameTextWidget_C_SetText_WarmupTimer_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.GetVisibility_WarmupTimer
struct UHUD2_GameTextWidget_C_GetVisibility_WarmupTimer_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.GetVisibility_Countdown
struct UHUD2_GameTextWidget_C_GetVisibility_Countdown_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.Construct
struct UHUD2_GameTextWidget_C_Construct_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
