// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Master_MenuActor_MenuAnimNeo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Master_MenuActor_MenuAnimNeo.Master_MenuActor_MenuAnimNeo_C.ReInit
// (Native, Public, BlueprintCallable)

void UMaster_MenuActor_MenuAnimNeo_C::ReInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_MenuActor_MenuAnimNeo.Master_MenuActor_MenuAnimNeo_C.ReInit");

	UMaster_MenuActor_MenuAnimNeo_C_ReInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_MenuActor_MenuAnimNeo.Master_MenuActor_MenuAnimNeo_C.BlueprintInitializeAnimation
// (Final, Native, Event, Public)

void UMaster_MenuActor_MenuAnimNeo_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_MenuActor_MenuAnimNeo.Master_MenuActor_MenuAnimNeo_C.BlueprintInitializeAnimation");

	UMaster_MenuActor_MenuAnimNeo_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
