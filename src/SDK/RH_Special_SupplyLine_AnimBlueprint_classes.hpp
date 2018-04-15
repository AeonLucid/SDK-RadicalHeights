#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Special_SupplyLine_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Special_SupplyLine_AnimBlueprint.Special_SupplyLine_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class USpecial_SupplyLine_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_6097904E426B0C6D5251568F4D6542BA;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D8E888344754973B9C5E3784EAC679DA;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C885625D4F24CFAD59C40EB67300DD98;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Special_SupplyLine_AnimBlueprint.Special_SupplyLine_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Special_SupplyLine_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
