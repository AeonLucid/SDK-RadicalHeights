// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_PLAYER_STATUS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PLAYER_STATUS.HUD_PLAYER_STATUS_C.OnAdrenalineBoost
// (Final, Native, Event, Public)

void UHUD_PLAYER_STATUS_C::OnAdrenalineBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PLAYER_STATUS.HUD_PLAYER_STATUS_C.OnAdrenalineBoost");

	UHUD_PLAYER_STATUS_C_OnAdrenalineBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PLAYER_STATUS.HUD_PLAYER_STATUS_C.ExecuteUbergraph_HUD_PLAYER_STATUS_1
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PLAYER_STATUS_C::ExecuteUbergraph_HUD_PLAYER_STATUS_1(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PLAYER_STATUS.HUD_PLAYER_STATUS_C.ExecuteUbergraph_HUD_PLAYER_STATUS_1");

	UHUD_PLAYER_STATUS_C_ExecuteUbergraph_HUD_PLAYER_STATUS_1_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
