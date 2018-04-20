// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ScannerMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScannerMarker.ScannerMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AScannerMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerMarker.ScannerMarker_C.UserConstructionScript");

	AScannerMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
