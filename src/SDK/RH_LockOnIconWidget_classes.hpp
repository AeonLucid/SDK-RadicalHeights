#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_LockOnIconWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass LockOnIconWidget.LockOnIconWidget_C
// 0x0018 (0x0260 - 0x0248)
class ULockOnIconWidget_C : public UShooterLockOnIcon
{
public:
	class UImage*                                      Image_1;                                                  // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                ProgressBar_1;                                            // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              K2Node_Event_LockCursor;                                  // 0x0258(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass LockOnIconWidget.LockOnIconWidget_C");
		return ptr;
	}


	void UpdateLockCursor(float bpp__LockCursor__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
