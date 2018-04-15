#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BattleRifle_Dragunov_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BattleRifle_Dragunov_AnimBlueprint.BattleRifle_Dragunov_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UBattleRifle_Dragunov_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D78095864E898B69E041E5A56FA6FED6;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_87FFE3B54984D08787354893EC3F0927;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB83A88846A6DF15E40D1B9991EDA1A2;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BattleRifle_Dragunov_AnimBlueprint.BattleRifle_Dragunov_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_BattleRifle_Dragunov_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
