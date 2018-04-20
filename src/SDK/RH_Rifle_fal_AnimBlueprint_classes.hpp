#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Rifle_fal_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Rifle_fal_AnimBlueprint.Rifle_fal_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class URifle_fal_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D937DB464E43AAB1243A7BBB5B4A6FBE;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_852932C743A05B47CE2E0A9FA4EF5879;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C56BC23448E8D62574587FA18C9B6652;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Rifle_fal_AnimBlueprint.Rifle_fal_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Rifle_fal_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
