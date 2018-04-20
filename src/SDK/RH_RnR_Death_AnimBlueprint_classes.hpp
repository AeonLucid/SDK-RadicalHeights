#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_RnR_Death_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass RnR_Death_AnimBlueprint.RnR_Death_AnimBlueprint_C
// 0x00B0 (0x0540 - 0x0490)
class URnR_Death_AnimBlueprint_C : public UShooterCharacterAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_3D176862434BDBCBB01BABB329A35E6D;      // 0x0490(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0503EA364E19B6536C24018956C3F042;      // 0x04D8(0x0060)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0538(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass RnR_Death_AnimBlueprint.RnR_Death_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
