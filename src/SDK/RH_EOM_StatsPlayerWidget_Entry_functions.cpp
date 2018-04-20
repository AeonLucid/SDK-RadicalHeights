// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_StatsPlayerWidget_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C.GetBrush_3
// (Native, Public, BlueprintCallable)

void UEOM_StatsPlayerWidget_Entry_C::GetBrush_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C.GetBrush_3");

	UEOM_StatsPlayerWidget_Entry_C_GetBrush_3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C.GetBrush_2
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UEOM_StatsPlayerWidget_Entry_C::GetBrush_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C.GetBrush_2");

	UEOM_StatsPlayerWidget_Entry_C_GetBrush_2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C.GetBrush_1
// (Native, Public, BlueprintCallable)

void UEOM_StatsPlayerWidget_Entry_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C.GetBrush_1");

	UEOM_StatsPlayerWidget_Entry_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
