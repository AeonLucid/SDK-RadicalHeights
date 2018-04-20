#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Rifle_ak74u_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Rifle_ak74u_AnimBlueprint.Rifle_ak74u_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class URifle_ak74u_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_70A4A84A42E5AE11DE52FBB2DE00EC77;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B6AAA72E40A8B4EDCF3588AF74CD93BD;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5B963E9C4F7BE7FD2227BEB12D67D20F;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Rifle_ak74u_AnimBlueprint.Rifle_ak74u_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Rifle_ak74u_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
