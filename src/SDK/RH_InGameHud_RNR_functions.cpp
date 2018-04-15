// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_InGameHud_RNR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InGameHud_RNR.InGameHud_RNR_C.SetVisibility_ServerFull
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInGameHud_RNR_C::SetVisibility_ServerFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.SetVisibility_ServerFull");

	UInGameHud_RNR_C_SetVisibility_ServerFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.GetWeaponBarPercent
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInGameHud_RNR_C::GetWeaponBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.GetWeaponBarPercent");

	UInGameHud_RNR_C_GetWeaponBarPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_NewHud
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInGameHud_RNR_C::GetVisibility_NewHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_NewHud");

	UInGameHud_RNR_C_GetVisibility_NewHud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_HudChatInput
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInGameHud_RNR_C::GetVisibility_HudChatInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_HudChatInput");

	UInGameHud_RNR_C_GetVisibility_HudChatInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_GhostBar
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInGameHud_RNR_C::GetVisibility_GhostBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.GetVisibility_GhostBar");

	UInGameHud_RNR_C_GetVisibility_GhostBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.GetThreatsVisibility
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInGameHud_RNR_C::GetThreatsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.GetThreatsVisibility");

	UInGameHud_RNR_C_GetThreatsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.GetReticleBarColor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UInGameHud_RNR_C::GetReticleBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.GetReticleBarColor");

	UInGameHud_RNR_C_GetReticleBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.Get_Offhand_Ammo_Visible
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInGameHud_RNR_C::Get_Offhand_Ammo_Visible()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.Get_Offhand_Ammo_Visible");

	UInGameHud_RNR_C_Get_Offhand_Ammo_Visible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameHud_RNR.InGameHud_RNR_C.Get_Ability Bar_Visibility_1
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInGameHud_RNR_C::Get_Ability_Bar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameHud_RNR.InGameHud_RNR_C.Get_Ability Bar_Visibility_1");

	UInGameHud_RNR_C_Get_Ability_Bar_Visibility_1_Params params;

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
