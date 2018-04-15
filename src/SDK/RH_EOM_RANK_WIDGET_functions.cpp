// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_RANK_WIDGET_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EOM_RANK_WIDGET.EOM_RANK_WIDGET_C.SuperlativeChanged
// (Final, Native, Event, Public)

void UEOM_RANK_WIDGET_C::SuperlativeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EOM_RANK_WIDGET.EOM_RANK_WIDGET_C.SuperlativeChanged");

	UEOM_RANK_WIDGET_C_SuperlativeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EOM_RANK_WIDGET.EOM_RANK_WIDGET_C.RankCountdownComplete
// (Final, Native, Event, Public)

void UEOM_RANK_WIDGET_C::RankCountdownComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EOM_RANK_WIDGET.EOM_RANK_WIDGET_C.RankCountdownComplete");

	UEOM_RANK_WIDGET_C_RankCountdownComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
