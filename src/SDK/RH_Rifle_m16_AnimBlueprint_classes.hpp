#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Rifle_m16_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Rifle_m16_AnimBlueprint.Rifle_m16_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class URifle_m16_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_6BDF0BBE4D68FA112CC0CFB0FD50B765;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E2F5AAC64B5645F8673581A2B68CA6F7;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4F64B2F458DA5E562105AB0765EE649;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Rifle_m16_AnimBlueprint.Rifle_m16_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Rifle_m16_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
