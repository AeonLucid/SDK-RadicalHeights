// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD2_Scoring_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD2_Scoring.HUD2_Scoring_C.SetVisibility_ServerFull
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_Scoring_C::SetVisibility_ServerFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_Scoring.HUD2_Scoring_C.SetVisibility_ServerFull");

	UHUD2_Scoring_C_SetVisibility_ServerFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_Scoring.HUD2_Scoring_C.GetWeaponBarPercent
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHUD2_Scoring_C::GetWeaponBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_Scoring.HUD2_Scoring_C.GetWeaponBarPercent");

	UHUD2_Scoring_C_GetWeaponBarPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_Scoring.HUD2_Scoring_C.GetVisibility_NewHud
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_Scoring_C::GetVisibility_NewHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_Scoring.HUD2_Scoring_C.GetVisibility_NewHud");

	UHUD2_Scoring_C_GetVisibility_NewHud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_Scoring.HUD2_Scoring_C.GetVisibility_GhostBar
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_Scoring_C::GetVisibility_GhostBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_Scoring.HUD2_Scoring_C.GetVisibility_GhostBar");

	UHUD2_Scoring_C_GetVisibility_GhostBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_Scoring.HUD2_Scoring_C.GetReticleBarColor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHUD2_Scoring_C::GetReticleBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_Scoring.HUD2_Scoring_C.GetReticleBarColor");

	UHUD2_Scoring_C_GetReticleBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_Scoring.HUD2_Scoring_C.Get_Offhand_Ammo_Visible
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_Scoring_C::Get_Offhand_Ammo_Visible()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_Scoring.HUD2_Scoring_C.Get_Offhand_Ammo_Visible");

	UHUD2_Scoring_C_Get_Offhand_Ammo_Visible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD2_Scoring.HUD2_Scoring_C.Get_Ability Bar_Visibility_1
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUD2_Scoring_C::Get_Ability_Bar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD2_Scoring.HUD2_Scoring_C.Get_Ability Bar_Visibility_1");

	UHUD2_Scoring_C_Get_Ability_Bar_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
