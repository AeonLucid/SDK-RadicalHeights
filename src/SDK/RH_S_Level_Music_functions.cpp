// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_S_Level_Music_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function S_Level_Music.S_Level_Music_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AS_Level_Music_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Level_Music.S_Level_Music_C.UserConstructionScript");

	AS_Level_Music_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S_Level_Music.S_Level_Music_C.reset_music_switch
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)

void AS_Level_Music_C::reset_music_switch()
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Level_Music.S_Level_Music_C.reset_music_switch");

	AS_Level_Music_C_reset_music_switch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S_Level_Music.S_Level_Music_C.ReceiveTick
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AS_Level_Music_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Level_Music.S_Level_Music_C.ReceiveTick");

	AS_Level_Music_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S_Level_Music.S_Level_Music_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AS_Level_Music_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Level_Music.S_Level_Music_C.ReceiveBeginPlay");

	AS_Level_Music_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
