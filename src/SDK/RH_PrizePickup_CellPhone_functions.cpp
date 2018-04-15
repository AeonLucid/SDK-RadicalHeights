// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PrizePickup_CellPhone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrizePickup_CellPhone.PrizePickup_CellPhone_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void APrizePickup_CellPhone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizePickup_CellPhone.PrizePickup_CellPhone_C.UserConstructionScript");

	APrizePickup_CellPhone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrizePickup_CellPhone.PrizePickup_CellPhone_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void APrizePickup_CellPhone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizePickup_CellPhone.PrizePickup_CellPhone_C.ReceiveBeginPlay");

	APrizePickup_CellPhone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
