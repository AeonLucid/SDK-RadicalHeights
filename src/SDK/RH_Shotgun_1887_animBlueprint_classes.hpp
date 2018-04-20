#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Shotgun_1887_animBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Shotgun_1887_animBlueprint.Shotgun_1887_animBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UShotgun_1887_animBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D569F8204EA9F0E89B86ED9637622E2E;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C72BCC0E4EB4087F0FF2C8A642011D93;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F81454634B56CB915C1F63A0A59BCCC8;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Shotgun_1887_animBlueprint.Shotgun_1887_animBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Shotgun_1887_animBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
