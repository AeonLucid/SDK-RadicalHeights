#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Pistol_HiPower_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Pistol_HiPower_AnimBlueprint.Pistol_HiPower_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UPistol_HiPower_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_5DC8F2134007C115DBF19ABBD3FFB7B6;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2E6CDC704AAC75724E2A74B5BB0EB6E4;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15BCA0D14784A9F5847CB98A17DF9A4B;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Pistol_HiPower_AnimBlueprint.Pistol_HiPower_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Pistol_HiPower_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
