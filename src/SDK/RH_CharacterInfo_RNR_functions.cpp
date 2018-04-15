// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_CharacterInfo_RNR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterInfo_RNR.CharacterInfo_RNR_C.ShowSupplyLineError
// (Final, Native, Event, Public)

void UCharacterInfo_RNR_C::ShowSupplyLineError()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterInfo_RNR.CharacterInfo_RNR_C.ShowSupplyLineError");

	UCharacterInfo_RNR_C_ShowSupplyLineError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterInfo_RNR.CharacterInfo_RNR_C.ShowProneError
// (Final, Native, Event, Public)

void UCharacterInfo_RNR_C::ShowProneError()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterInfo_RNR.CharacterInfo_RNR_C.ShowProneError");

	UCharacterInfo_RNR_C_ShowProneError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
