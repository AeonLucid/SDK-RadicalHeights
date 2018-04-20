// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Tooltip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Tooltip.HUD_Tooltip_C.SetText
// (Final, Native, Event, Public, HasOutParms)
// Parameters:
// struct FText                   bpp__InText__pf                (ConstParm, Parm, OutParm, ReferenceParm)

void UHUD_Tooltip_C::SetText(const struct FText& bpp__InText__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Tooltip.HUD_Tooltip_C.SetText");

	UHUD_Tooltip_C_SetText_Params params;
	params.bpp__InText__pf = bpp__InText__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
