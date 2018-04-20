// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Droid_Dummy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Droid_Dummy.Droid_Dummy_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ADroid_Dummy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_Dummy.Droid_Dummy_C.UserConstructionScript");

	ADroid_Dummy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Droid_Dummy.Droid_Dummy_C.NetMulticastDummyDestroyedFX
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)

void ADroid_Dummy_C::NetMulticastDummyDestroyedFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_Dummy.Droid_Dummy_C.NetMulticastDummyDestroyedFX");

	ADroid_Dummy_C_NetMulticastDummyDestroyedFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
