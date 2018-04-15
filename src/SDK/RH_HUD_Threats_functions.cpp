// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Threats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Threats.HUD_Threats_C.PlayHitAnim
// (Final, Native, Event, Public)
// Parameters:
// int                            bpp__index__pf__const          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Threats_C::PlayHitAnim(int bpp__index__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Threats.HUD_Threats_C.PlayHitAnim");

	UHUD_Threats_C_PlayHitAnim_Params params;
	params.bpp__index__pf__const = bpp__index__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
