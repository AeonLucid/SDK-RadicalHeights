// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Toast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Toast.HUD_Toast_C.ExecuteUbergraph_HUD_Toast_1
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Toast_C::ExecuteUbergraph_HUD_Toast_1(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Toast.HUD_Toast_C.ExecuteUbergraph_HUD_Toast_1");

	UHUD_Toast_C_ExecuteUbergraph_HUD_Toast_1_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Toast.HUD_Toast_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UHUD_Toast_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Toast.HUD_Toast_C.Construct");

	UHUD_Toast_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Toast.HUD_Toast_C.BPToastMessage
// (Final, Native, Event, Public, HasOutParms)
// Parameters:
// struct FText                   bpp__ToastDescription__pf      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   bpp__ToastLabel__pf            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   bpp__FlairText1__pf            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   bpp__FlairText2__pf            (ConstParm, Parm, OutParm, ReferenceParm)
// class UTexture2D*              bpp__AchievementImage__pf__const (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Toast_C::BPToastMessage(const struct FText& bpp__ToastDescription__pf, const struct FText& bpp__ToastLabel__pf, const struct FText& bpp__FlairText1__pf, const struct FText& bpp__FlairText2__pf, class UTexture2D* bpp__AchievementImage__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Toast.HUD_Toast_C.BPToastMessage");

	UHUD_Toast_C_BPToastMessage_Params params;
	params.bpp__ToastDescription__pf = bpp__ToastDescription__pf;
	params.bpp__ToastLabel__pf = bpp__ToastLabel__pf;
	params.bpp__FlairText1__pf = bpp__FlairText1__pf;
	params.bpp__FlairText2__pf = bpp__FlairText2__pf;
	params.bpp__AchievementImage__pf__const = bpp__AchievementImage__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Toast.HUD_Toast_C.BPHideToast
// (Final, Native, Event, Public)

void UHUD_Toast_C::BPHideToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Toast.HUD_Toast_C.BPHideToast");

	UHUD_Toast_C_BPHideToast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
