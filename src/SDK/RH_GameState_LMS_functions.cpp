// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_GameState_LMS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameState_LMS.GameState_LMS_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AGameState_LMS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_LMS.GameState_LMS_C.UserConstructionScript");

	AGameState_LMS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameState_LMS.GameState_LMS_C.OnVictory
// (Final, Native, Event, Public)
// Parameters:
// class AShooterCharacter*       bpp__Victor__pf                (Parm, ZeroConstructor, IsPlainOldData)

void AGameState_LMS_C::OnVictory(class AShooterCharacter* bpp__Victor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_LMS.GameState_LMS_C.OnVictory");

	AGameState_LMS_C_OnVictory_Params params;
	params.bpp__Victor__pf = bpp__Victor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameState_LMS.GameState_LMS_C.OnShowdownClosureBegan
// (Final, Native, Event, Public)

void AGameState_LMS_C::OnShowdownClosureBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_LMS.GameState_LMS_C.OnShowdownClosureBegan");

	AGameState_LMS_C_OnShowdownClosureBegan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameState_LMS.GameState_LMS_C.CashOff
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class ACashDropZone_C*         bpp__CashDropZone__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AGameState_LMS_C::CashOff(class ACashDropZone_C* bpp__CashDropZone__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_LMS.GameState_LMS_C.CashOff");

	AGameState_LMS_C_CashOff_Params params;
	params.bpp__CashDropZone__pf = bpp__CashDropZone__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameState_LMS.GameState_LMS_C.CashAnnouncementOn
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)

void AGameState_LMS_C::CashAnnouncementOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_LMS.GameState_LMS_C.CashAnnouncementOn");

	AGameState_LMS_C_CashAnnouncementOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
