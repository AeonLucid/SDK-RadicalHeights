// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BMXTest_Spin2Win_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BMXTest_Spin2Win.BMXTest_Spin2Win_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABMXTest_Spin2Win_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest_Spin2Win.BMXTest_Spin2Win_C.UserConstructionScript");

	ABMXTest_Spin2Win_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BMXTest_Spin2Win.BMXTest_Spin2Win_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABMXTest_Spin2Win_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest_Spin2Win.BMXTest_Spin2Win_C.ReceiveBeginPlay");

	ABMXTest_Spin2Win_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
