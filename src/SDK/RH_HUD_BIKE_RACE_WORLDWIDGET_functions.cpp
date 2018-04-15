// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_BIKE_RACE_WORLDWIDGET_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.Update Timer
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Time__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BIKE_RACE_WORLDWIDGET_C::Update_Timer(int bpp__Time__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.Update Timer");

	UHUD_BIKE_RACE_WORLDWIDGET_C_Update_Timer_Params params;
	params.bpp__Time__pf = bpp__Time__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.UpdateColor
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Team__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BIKE_RACE_WORLDWIDGET_C::UpdateColor(int bpp__Team__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.UpdateColor");

	UHUD_BIKE_RACE_WORLDWIDGET_C_UpdateColor_Params params;
	params.bpp__Team__pf = bpp__Team__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.TriggerOnScreen
// (Final, Native, Event, Public)

void UHUD_BIKE_RACE_WORLDWIDGET_C::TriggerOnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.TriggerOnScreen");

	UHUD_BIKE_RACE_WORLDWIDGET_C_TriggerOnScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.TriggerOffScreen
// (Final, Native, Event, Public)

void UHUD_BIKE_RACE_WORLDWIDGET_C::TriggerOffScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.TriggerOffScreen");

	UHUD_BIKE_RACE_WORLDWIDGET_C_TriggerOffScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UHUD_BIKE_RACE_WORLDWIDGET_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BIKE_RACE_WORLDWIDGET.HUD_BIKE_RACE_WORLDWIDGET_C.Construct");

	UHUD_BIKE_RACE_WORLDWIDGET_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
