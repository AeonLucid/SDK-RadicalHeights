#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Rifle_AUG_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Rifle_AUG_AnimBlueprint.Rifle_AUG_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class URifle_AUG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D2D39E0E4E83A347CB0F8885E2B60322;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_43CE4AB74FEEA3C4D6460F9AD0BB8239;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D95A77A44CF87F2B8949096DB2D196B;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Rifle_AUG_AnimBlueprint.Rifle_AUG_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Rifle_AUG_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
