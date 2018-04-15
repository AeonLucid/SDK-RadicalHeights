#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_HitReticle2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_HitReticle2.HUD_HitReticle2_C.UpdateHitPipParameters
struct UHUD_HitReticle2_C_UpdateHitPipParameters_Params
{
	float                                              bpp__StartFraction__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__EndFraction__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHitType>                              bpp__HitType__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bKill__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_HitReticle2.HUD_HitReticle2_C.UpdateHitColorIntensity
struct UHUD_HitReticle2_C_UpdateHitColorIntensity_Params
{
	float                                              bpp__TimeSinceDamage__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_HitReticle2.HUD_HitReticle2_C.Construct
struct UHUD_HitReticle2_C_Construct_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
