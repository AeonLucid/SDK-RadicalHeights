// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_GAMESTATE_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_GAMESTATE.HUD_GAMESTATE_C.SlideOut
// (Final, Native, Event, Public)

void UHUD_GAMESTATE_C::SlideOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GAMESTATE.HUD_GAMESTATE_C.SlideOut");

	UHUD_GAMESTATE_C_SlideOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GAMESTATE.HUD_GAMESTATE_C.SlideIn
// (Final, Native, Event, Public)

void UHUD_GAMESTATE_C::SlideIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GAMESTATE.HUD_GAMESTATE_C.SlideIn");

	UHUD_GAMESTATE_C_SlideIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GAMESTATE.HUD_GAMESTATE_C.AliveCountChanged
// (Final, Native, Event, Public)

void UHUD_GAMESTATE_C::AliveCountChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GAMESTATE.HUD_GAMESTATE_C.AliveCountChanged");

	UHUD_GAMESTATE_C_AliveCountChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
