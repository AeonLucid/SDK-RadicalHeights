#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Pistol_Python_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Pistol_Python_AnimBlueprint.Pistol_Python_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UPistol_Python_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_4208F3514D2F3C49ED29F6B4717060F9;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F5122A97434E1F62E07167839C33975D;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F3588A54252FAE82D6C57BB42E95FD6;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Pistol_Python_AnimBlueprint.Pistol_Python_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Pistol_Python_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
