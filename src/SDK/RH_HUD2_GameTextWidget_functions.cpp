// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD2_GameTextWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.Tick
// (Final, BlueprintCosmetic, Native, Event, Public)
// Parameters:
// struct FGeometry               bpp__MyGeometry__pf            (Parm, IsPlainOldData)
// float                          bpp__InDeltaTime__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UHUD2_GameTextWidget_C::Tick(const struct FGeometry& bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.Tick");

	UHUD2_GameTextWidget_C_Tick_Params params;
	params.bpp__MyGeometry__pf = bpp__MyGeometry__pf;
	params.bpp__InDeltaTime__pf = bpp__InDeltaTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetVisibility_WaitingForPlayers
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_GameTextWidget_C::SetVisibility_WaitingForPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetVisibility_WaitingForPlayers");

	UHUD2_GameTextWidget_C_SetVisibility_WaitingForPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetVisibility_ServerFull
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_GameTextWidget_C::SetVisibility_ServerFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetVisibility_ServerFull");

	UHUD2_GameTextWidget_C_SetVisibility_ServerFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetText_WarmupTimer
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD2_GameTextWidget_C::SetText_WarmupTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.SetText_WarmupTimer");

	UHUD2_GameTextWidget_C_SetText_WarmupTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.GetVisibility_WarmupTimer
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_GameTextWidget_C::GetVisibility_WarmupTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.GetVisibility_WarmupTimer");

	UHUD2_GameTextWidget_C_GetVisibility_WarmupTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.GetVisibility_Countdown
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_GameTextWidget_C::GetVisibility_Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.GetVisibility_Countdown");

	UHUD2_GameTextWidget_C_GetVisibility_Countdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UHUD2_GameTextWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_GameTextWidget.HUD2_GameTextWidget_C.Construct");

	UHUD2_GameTextWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
