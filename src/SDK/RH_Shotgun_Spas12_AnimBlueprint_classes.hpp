#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Shotgun_Spas12_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Shotgun_Spas12_AnimBlueprint.Shotgun_Spas12_AnimBlueprint_C
// 0x0118 (0x0590 - 0x0478)
class UShotgun_Spas12_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_4D557D134CF92A36112AC9A9D2F18FA2;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_198631E141E0BB337C65959E405A9A38;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3EEDF7F43189AAB60A7169F0163A505;// 0x0520(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Shotgun_Spas12_AnimBlueprint.Shotgun_Spas12_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Shotgun_Spas12_AnimBlueprint(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
