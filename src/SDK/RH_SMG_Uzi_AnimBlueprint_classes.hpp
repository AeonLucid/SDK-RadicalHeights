#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SMG_Uzi_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass SMG_Uzi_AnimBlueprint.SMG_Uzi_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class USMG_Uzi_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_84FF62BD4E02823D913D43BB6A43639B;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D31F43FB44AADFCD57575A9B445E6998;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0B538974CBA24877F0E179E3C255B84;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass SMG_Uzi_AnimBlueprint.SMG_Uzi_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SMG_Uzi_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
