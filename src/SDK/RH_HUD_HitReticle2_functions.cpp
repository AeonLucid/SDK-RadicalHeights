// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_HitReticle2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_HitReticle2.HUD_HitReticle2_C.UpdateHitPipParameters
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__StartFraction__pf         (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__EndFraction__pf           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHitType>          bpp__HitType__pf               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bKill__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_HitReticle2_C::UpdateHitPipParameters(float bpp__StartFraction__pf, float bpp__EndFraction__pf, TEnumAsByte<EHitType> bpp__HitType__pf, bool bpp__bKill__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitReticle2.HUD_HitReticle2_C.UpdateHitPipParameters");

	UHUD_HitReticle2_C_UpdateHitPipParameters_Params params;
	params.bpp__StartFraction__pf = bpp__StartFraction__pf;
	params.bpp__EndFraction__pf = bpp__EndFraction__pf;
	params.bpp__HitType__pf = bpp__HitType__pf;
	params.bpp__bKill__pf = bpp__bKill__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitReticle2.HUD_HitReticle2_C.UpdateHitColorIntensity
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__TimeSinceDamage__pf       (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_HitReticle2_C::UpdateHitColorIntensity(float bpp__TimeSinceDamage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitReticle2.HUD_HitReticle2_C.UpdateHitColorIntensity");

	UHUD_HitReticle2_C_UpdateHitColorIntensity_Params params;
	params.bpp__TimeSinceDamage__pf = bpp__TimeSinceDamage__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitReticle2.HUD_HitReticle2_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UHUD_HitReticle2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitReticle2.HUD_HitReticle2_C.Construct");

	UHUD_HitReticle2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
