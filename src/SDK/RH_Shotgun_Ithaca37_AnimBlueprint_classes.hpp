#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Shotgun_Ithaca37_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Shotgun_Ithaca37_AnimBlueprint.Shotgun_Ithaca37_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UShotgun_Ithaca37_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_525AB58F4467705FAA24688F21920351;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A8CB55764823267B32EF999C934A62C9;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_247799D5487F3457134D53BFAFB00B89;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Shotgun_Ithaca37_AnimBlueprint.Shotgun_Ithaca37_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Shotgun_Ithaca37_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
