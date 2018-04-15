#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Pistol_PPK_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Pistol_PPK_AnimBlueprint.Pistol_PPK_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UPistol_PPK_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_8C5BB26E49AE6B98CB364ABCA9F96A6C;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C66560814F0195FB95B77BA0F3714EE3;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7CC1BF974CC9A01B8D58BF9A2DED87F3;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Pistol_PPK_AnimBlueprint.Pistol_PPK_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Pistol_PPK_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
