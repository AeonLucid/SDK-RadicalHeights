// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ConfettiBuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConfettiBuff.ConfettiBuff_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AConfettiBuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfettiBuff.ConfettiBuff_C.UserConstructionScript");

	AConfettiBuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfettiBuff.ConfettiBuff_C.ReceiveEndPlay
// (Final, Native, Event, Public)
// Parameters:
// TEnumAsByte<EEndPlayReason>    bpp__EndPlayReason__pf         (Parm, ZeroConstructor, IsPlainOldData)

void AConfettiBuff_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> bpp__EndPlayReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfettiBuff.ConfettiBuff_C.ReceiveEndPlay");

	AConfettiBuff_C_ReceiveEndPlay_Params params;
	params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfettiBuff.ConfettiBuff_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AConfettiBuff_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfettiBuff.ConfettiBuff_C.ReceiveBeginPlay");

	AConfettiBuff_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
