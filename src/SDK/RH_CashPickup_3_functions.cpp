// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_CashPickup_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CashPickup_3.CashPickup_2_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ACashPickup_2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashPickup_3.CashPickup_2_C.UserConstructionScript");

	ACashPickup_2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashPickup_3.CashPickup_2_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ACashPickup_2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashPickup_3.CashPickup_2_C.ReceiveBeginPlay");

	ACashPickup_2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
