// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_LMS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_LMS.HUD_LMS_C.Set CashDropText
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Switch__pf                (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LMS_C::Set_CashDropText(int bpp__Switch__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.Set CashDropText");

	UHUD_LMS_C_Set_CashDropText_Params params;
	params.bpp__Switch__pf = bpp__Switch__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnZoneCloseWarning
// (Final, Native, Event, Public, HasOutParms)
// Parameters:
// struct FText                   bpp__WarningText__pf           (ConstParm, Parm, OutParm, ReferenceParm)

void UHUD_LMS_C::OnZoneCloseWarning(const struct FText& bpp__WarningText__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnZoneCloseWarning");

	UHUD_LMS_C_OnZoneCloseWarning_Params params;
	params.bpp__WarningText__pf = bpp__WarningText__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnSpinToWinStart
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnSpinToWinStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnSpinToWinStart");

	UHUD_LMS_C_OnSpinToWinStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnSpinToWinEnd
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnSpinToWinEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnSpinToWinEnd");

	UHUD_LMS_C_OnSpinToWinEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnHideAdvice
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnHideAdvice()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnHideAdvice");

	UHUD_LMS_C_OnHideAdvice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnFinalShowdownCountdown
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnFinalShowdownCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnFinalShowdownCountdown");

	UHUD_LMS_C_OnFinalShowdownCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnFinalShowdownClosing
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnFinalShowdownClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnFinalShowdownClosing");

	UHUD_LMS_C_OnFinalShowdownClosing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnEnterWarningZone
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnEnterWarningZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnEnterWarningZone");

	UHUD_LMS_C_OnEnterWarningZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnEnterDangerZone
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnEnterDangerZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnEnterDangerZone");

	UHUD_LMS_C_OnEnterDangerZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnBikeRaceStart
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnBikeRaceStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnBikeRaceStart");

	UHUD_LMS_C_OnBikeRaceStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.OnBikeRaceEnd
// (Final, Native, Event, Public)

void UHUD_LMS_C::OnBikeRaceEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.OnBikeRaceEnd");

	UHUD_LMS_C_OnBikeRaceEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_8
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LMS_C::ExecuteUbergraph_HUD_LMS_8(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_8");

	UHUD_LMS_C_ExecuteUbergraph_HUD_LMS_8_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_4
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LMS_C::ExecuteUbergraph_HUD_LMS_4(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_4");

	UHUD_LMS_C_ExecuteUbergraph_HUD_LMS_4_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_3
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LMS_C::ExecuteUbergraph_HUD_LMS_3(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LMS.HUD_LMS_C.ExecuteUbergraph_HUD_LMS_3");

	UHUD_LMS_C_ExecuteUbergraph_HUD_LMS_3_Params params;
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
