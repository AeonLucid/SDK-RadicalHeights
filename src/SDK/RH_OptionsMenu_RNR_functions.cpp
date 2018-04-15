// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_OptionsMenu_RNR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsMenu_RNR.OptionsMenu_RNR_C.SetMapAndModeNames
// (Final, Native, Event, Public, HasOutParms)
// Parameters:
// struct FText                   bpp__ModeName__pf              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   bpp__MapName__pf               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   bpp__ModeDescription__pf       (ConstParm, Parm, OutParm, ReferenceParm)

void UOptionsMenu_RNR_C::SetMapAndModeNames(const struct FText& bpp__ModeName__pf, const struct FText& bpp__MapName__pf, const struct FText& bpp__ModeDescription__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.SetMapAndModeNames");

	UOptionsMenu_RNR_C_SetMapAndModeNames_Params params;
	params.bpp__ModeName__pf = bpp__ModeName__pf;
	params.bpp__MapName__pf = bpp__MapName__pf;
	params.bpp__ModeDescription__pf = bpp__ModeDescription__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.ResetPauseMenu
// (Native, Public, BlueprintCallable)

void UOptionsMenu_RNR_C::ResetPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.ResetPauseMenu");

	UOptionsMenu_RNR_C_ResetPauseMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.PreGameEnded
// (Final, Native, Event, Public)

void UOptionsMenu_RNR_C::PreGameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.PreGameEnded");

	UOptionsMenu_RNR_C_PreGameEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.OnSpectatorToggled
// (Final, Native, Event, Public)
// Parameters:
// bool                           bpp__bSpectator__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_RNR_C::OnSpectatorToggled(bool bpp__bSpectator__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.OnSpectatorToggled");

	UOptionsMenu_RNR_C_OnSpectatorToggled_Params params;
	params.bpp__bSpectator__pf = bpp__bSpectator__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.OnHUDWidgetShown
// (Final, Native, Event, Public)

void UOptionsMenu_RNR_C::OnHUDWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.OnHUDWidgetShown");

	UOptionsMenu_RNR_C_OnHUDWidgetShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UOptionsMenu_RNR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.Construct");

	UOptionsMenu_RNR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Yes_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__Yes_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Yes_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__Yes_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Yes_K2Node_ComponentBoundEvent_182_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__Yes_K2Node_ComponentBoundEvent_182_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Yes_K2Node_ComponentBoundEvent_182_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__Yes_K2Node_ComponentBoundEvent_182_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Role_Details_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__Role_Details_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Role_Details_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__Role_Details_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Role_Details_K2Node_ComponentBoundEvent_101_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__Role_Details_K2Node_ComponentBoundEvent_101_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Role_Details_K2Node_ComponentBoundEvent_101_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__Role_Details_K2Node_ComponentBoundEvent_101_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_Settings_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_Settings_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_Settings_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_Settings_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_Settings_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_Settings_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_Settings_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_Settings_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_PlayerOptions_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_PlayerOptions_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_PlayerOptions_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_PlayerOptions_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_MutePlayer_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_MutePlayer_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_MutePlayer_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_MutePlayer_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveWithParty_K2Node_ComponentBoundEvent_583_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_LeaveWithParty_K2Node_ComponentBoundEvent_583_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveWithParty_K2Node_ComponentBoundEvent_583_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_LeaveWithParty_K2Node_ComponentBoundEvent_583_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveWithoutParty_K2Node_ComponentBoundEvent_617_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_LeaveWithoutParty_K2Node_ComponentBoundEvent_617_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveWithoutParty_K2Node_ComponentBoundEvent_617_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_LeaveWithoutParty_K2Node_ComponentBoundEvent_617_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_244_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_244_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_244_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_244_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_Cancel_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UOptionsMenu_RNR_C::BndEvt__B_Cancel_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_RNR.OptionsMenu_RNR_C.BndEvt__B_Cancel_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenu_RNR_C_BndEvt__B_Cancel_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
