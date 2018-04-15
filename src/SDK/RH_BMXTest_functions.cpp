// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BMXTest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BMXTest.BMXTest_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABMXTest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest.BMXTest_C.UserConstructionScript");

	ABMXTest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BMXTest.BMXTest_C.SelectBikeColor
// (Native, Public, BlueprintCallable)

void ABMXTest_C::SelectBikeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest.BMXTest_C.SelectBikeColor");

	ABMXTest_C_SelectBikeColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BMXTest.BMXTest_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABMXTest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest.BMXTest_C.ReceiveBeginPlay");

	ABMXTest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BMXTest.BMXTest_C.OnRep_Bike_Texture
// (Native, Public, BlueprintCallable)

void ABMXTest_C::OnRep_Bike_Texture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest.BMXTest_C.OnRep_Bike_Texture");

	ABMXTest_C_OnRep_Bike_Texture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
