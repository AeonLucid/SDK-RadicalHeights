// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Droid_RX_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Droid_RX.Droid_RX_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ADroid_RX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_RX.Droid_RX_C.UserConstructionScript");

	ADroid_RX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Droid_RX.Droid_RX_C.Timeline_0__UpdateFunc
// (Native, Public)

void ADroid_RX_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_RX.Droid_RX_C.Timeline_0__UpdateFunc");

	ADroid_RX_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Droid_RX.Droid_RX_C.Timeline_0__FinishedFunc
// (Native, Public)

void ADroid_RX_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_RX.Droid_RX_C.Timeline_0__FinishedFunc");

	ADroid_RX_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Droid_RX.Droid_RX_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ADroid_RX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_RX.Droid_RX_C.ReceiveBeginPlay");

	ADroid_RX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Droid_RX.Droid_RX_C.ExecuteUbergraph_Droid_RX_2
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ADroid_RX_C::ExecuteUbergraph_Droid_RX_2(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_RX.Droid_RX_C.ExecuteUbergraph_Droid_RX_2");

	ADroid_RX_C_ExecuteUbergraph_Droid_RX_2_Params params;
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
