// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Event_Location_BikeRace_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Event_Location_BikeRace.HUD_Event_Location_BikeRace_C.UpdateTimerText
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          bpp__Time__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Event_Location_BikeRace_C::UpdateTimerText(float bpp__Time__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Event_Location_BikeRace.HUD_Event_Location_BikeRace_C.UpdateTimerText");

	UHUD_Event_Location_BikeRace_C_UpdateTimerText_Params params;
	params.bpp__Time__pf = bpp__Time__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Event_Location_BikeRace.HUD_Event_Location_BikeRace_C.TriggerOnScreen
// (Final, Native, Event, Public)

void UHUD_Event_Location_BikeRace_C::TriggerOnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Event_Location_BikeRace.HUD_Event_Location_BikeRace_C.TriggerOnScreen");

	UHUD_Event_Location_BikeRace_C_TriggerOnScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Event_Location_BikeRace.HUD_Event_Location_BikeRace_C.TriggerOffScreen
// (Final, Native, Event, Public)

void UHUD_Event_Location_BikeRace_C::TriggerOffScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Event_Location_BikeRace.HUD_Event_Location_BikeRace_C.TriggerOffScreen");

	UHUD_Event_Location_BikeRace_C_TriggerOffScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
