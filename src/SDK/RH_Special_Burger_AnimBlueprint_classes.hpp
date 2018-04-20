#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Special_Burger_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Special_Burger_AnimBlueprint.Special_Burger_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class USpecial_Burger_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_438B74FC49EC02550748E9873B13F16C;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_205B2B584B0338704C1F5AB5A89738EE;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7B3E9124735BCC085FE0C8EA48DBA18;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Special_Burger_AnimBlueprint.Special_Burger_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Special_Burger_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
