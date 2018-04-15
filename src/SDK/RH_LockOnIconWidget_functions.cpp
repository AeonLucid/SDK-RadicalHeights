// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_LockOnIconWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LockOnIconWidget.LockOnIconWidget_C.UpdateLockCursor
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__LockCursor__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ULockOnIconWidget_C::UpdateLockCursor(float bpp__LockCursor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockOnIconWidget.LockOnIconWidget_C.UpdateLockCursor");

	ULockOnIconWidget_C_UpdateLockCursor_Params params;
	params.bpp__LockCursor__pf = bpp__LockCursor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
