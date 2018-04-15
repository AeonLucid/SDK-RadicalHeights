#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_LMS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_LMS.HUD_LMS_C.Set CashDropText
struct UHUD_LMS_C_Set_CashDropText_Params
{
	int                                                bpp__Switch__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LMS.HUD_LMS_C.OnZoneCloseWarning
struct UHUD_LMS_C_OnZoneCloseWarning_Params
{
	struct FText                                       bpp__WarningText__pf;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function HUD_LMS.HUD_LMS_C.OnSpinToWinStart
struct UHUD_LMS_C_OnSpinToWinStart_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnSpinToWinEnd
struct UHUD_LMS_C_OnSpinToWinEnd_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnHideAdvice
struct UHUD_LMS_C_OnHideAdvice_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnFinalShowdownCountdown
struct UHUD_LMS_C_OnFinalShowdownCountdown_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnFinalShowdownClosing
struct UHUD_LMS_C_OnFinalShowdownClosing_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnEnterWarningZone
struct UHUD_LMS_C_OnEnterWarningZone_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnEnterDangerZone
struct UHUD_LMS_C_OnEnterDangerZone_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnBikeRaceStart
struct UHUD_LMS_C_OnBikeRaceStart_Params
{
};

// Function HUD_LMS.HUD_LMS_C.OnBikeRaceEnd
struct UHUD_LMS_C_OnBikeRaceEnd_Params
{
};

// Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_8
struct UHUD_LMS_C_ExecuteUbergraph_HUD_LMS_8_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_4
struct UHUD_LMS_C_ExecuteUbergraph_HUD_LMS_4_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_3
struct UHUD_LMS_C_ExecuteUbergraph_HUD_LMS_3_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
