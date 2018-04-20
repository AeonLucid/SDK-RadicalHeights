// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PrizePickup_Vacation_Cleveland_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrizePickup_Vacation_Cleveland.PrizePickup_Vacation_Cleveland_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void APrizePickup_Vacation_Cleveland_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizePickup_Vacation_Cleveland.PrizePickup_Vacation_Cleveland_C.UserConstructionScript");

	APrizePickup_Vacation_Cleveland_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrizePickup_Vacation_Cleveland.PrizePickup_Vacation_Cleveland_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void APrizePickup_Vacation_Cleveland_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizePickup_Vacation_Cleveland.PrizePickup_Vacation_Cleveland_C.ReceiveBeginPlay");

	APrizePickup_Vacation_Cleveland_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
