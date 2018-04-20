#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SMG_hitec_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass SMG_hitec_AnimBlueprint.SMG_hitec_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class USMG_hitec_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_FFBAC25346E5DB7816CD73ADE995E098;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DA0ED1F34BE4B93118BC269DB0475199;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C4773F548F5989FBE895E809629933B;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass SMG_hitec_AnimBlueprint.SMG_hitec_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SMG_hitec_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
