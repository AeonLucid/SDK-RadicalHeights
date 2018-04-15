#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BattleRifle_m14_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BattleRifle_m14_AnimBlueprint.BattleRifle_m14_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UBattleRifle_m14_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_9B322A68483DD81755AE07BF62C992CF;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_466B06B04449140AA0F0E1956150224E;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DF294E146BA941AF0F6CBBA86682360;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BattleRifle_m14_AnimBlueprint.BattleRifle_m14_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_BattleRifle_m14_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
