#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SMG_m12_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass SMG_m12_AnimBlueprint.SMG_m12_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class USMG_m12_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_1507E5884B7B00FC0805149CB5C7C8DB;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6741DBB24B730E7C046247AEB6EDCEE5;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF6348A14D8F2018D01F55AD229AE26E;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass SMG_m12_AnimBlueprint.SMG_m12_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SMG_m12_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
