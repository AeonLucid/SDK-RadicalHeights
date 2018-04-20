// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_VOIP_ENTRY_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_VOIP_ENTRY.HUD_VOIP_ENTRY_C.SetVoipName
// (Final, Native, Event, Public, HasOutParms)
// Parameters:
// struct FText                   bpp__NewName__pf               (ConstParm, Parm, OutParm, ReferenceParm)

void UHUD_VOIP_ENTRY_C::SetVoipName(const struct FText& bpp__NewName__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_VOIP_ENTRY.HUD_VOIP_ENTRY_C.SetVoipName");

	UHUD_VOIP_ENTRY_C_SetVoipName_Params params;
	params.bpp__NewName__pf = bpp__NewName__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
