#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Pistol_1911_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Pistol_1911_AnimBlueprint.Pistol_1911_AnimBlueprint_C
// 0x0138 (0x05B0 - 0x0478)
class UPistol_1911_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D96AA73C4FF0A4C2EFADEDA5E6849CE7;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6BF516E44C854B95B23DAE8C7F8F91BE;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED90FF344F45275017D535917A9F3173;// 0x0520(0x0070)
	class APawn*                                       PawnOwner;                                                // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           ShooterCharacter;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterWeapon*                              ShooterWeapon;                                            // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x05A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Pistol_1911_AnimBlueprint.Pistol_1911_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
