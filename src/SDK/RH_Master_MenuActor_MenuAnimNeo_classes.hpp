#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Master_MenuActor_MenuAnimNeo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Master_MenuActor_MenuAnimNeo.Master_MenuActor_MenuAnimNeo_C
// 0x0150 (0x05C8 - 0x0478)
class UMaster_MenuActor_MenuAnimNeo_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_537B0B6340A8556BE72C399E3B5E23A7;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DC5D81E6495C58410DD6C0AE694B7982;      // 0x04C0(0x0060)
	TEnumAsByte<EShooterClass>                         CharacterClass;                                           // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CustomizationWeaponSwitch;                                // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CustomizationSwitch;                                      // 0x0522(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0523(0x0005) MISSED OFFSET
	class UAnimSequence*                               CustomizationSequence;                                    // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMenuWorldState>                       MenuWorldState;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue2;                     // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterMenuActor*                           K2Node_DynamicCast_AsShooter_Menu_Actor;                  // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x0550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	class ABaseMenuActor_C*                            K2Node_DynamicCast_AsBase_Menu_Actor;                     // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess2;                             // 0x0560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0561(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_Conv_AssetToObject_ReturnValue;                  // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_DynamicCast_AsAnim_Montage;                        // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess3;                             // 0x0578(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Montage_IsPlaying_ReturnValue;                   // 0x0579(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x057A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x057B(0x0005) MISSED OFFSET
	class UObject*                                     CallFunc_Conv_AssetToObject_ReturnValue2;                 // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_Conv_AssetToObject_ReturnValue3;                 // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequence*                               K2Node_DynamicCast_AsAnim_Sequence;                       // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess4;                             // 0x0598(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class UAnimSequence*                               K2Node_DynamicCast_AsAnim_Sequence2;                      // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess5;                             // 0x05A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x05AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_Conv_AssetToObject_ReturnValue4;                 // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequence*                               K2Node_DynamicCast_AsAnim_Sequence3;                      // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess6;                             // 0x05C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x05C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x05C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x05C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Master_MenuActor_MenuAnimNeo.Master_MenuActor_MenuAnimNeo_C");
		return ptr;
	}


	void ReInit();
	void BlueprintInitializeAnimation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
