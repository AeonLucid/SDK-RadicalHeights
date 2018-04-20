#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_RnR_BMX_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass RnR_BMX_AnimBlueprint.RnR_BMX_AnimBlueprint_C
// 0x0AA8 (0x0F30 - 0x0488)
class URnR_BMX_AnimBlueprint_C : public UShooterSimpleVehicleAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_4C2B97B444B8F2C9200931928777806A;      // 0x0488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF5F07FD464754329F8211B525BE0934;// 0x04D0(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E590EC5F4C7DF85AD7606CAE66838DAC;// 0x0540(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_08C3574146CD03ED83C49C9681691A8D;// 0x05F0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8DDE29654C5169B51EAADAA7D0EDF233;// 0x0638(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1F06AED64079F37B5D45CE83DE69D9F5;// 0x0680(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0C893DD74B8A9F7BE83C76AEC2F478D2;// 0x0730(0x0120)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9C5506B2424DF0A31F7EFEA381F7EAEC;// 0x0850(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6B23CEC84BC774DC4BA3FEBDA65169AF;// 0x08C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3749D3DD483E1927C95C4991C2C1E1F3;// 0x0998(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E37D4E884F96AD2A435C4AA6DE4755D4;// 0x0A68(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE0E730744566BE0DFE6F19DB8068790;// 0x0B38(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6A668ED43A868391A83159E8ED48825;// 0x0BA8(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B5FC13FF42C44B4544DA24B0589CE719;// 0x0C18(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18A2D68946AE4731F714F6866682A615;      // 0x0D38(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3E7974D448E76306C5254ABEA4EB5A42;// 0x0D98(0x00B0)
	float                                              SpawnTimer;                                               // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WheelRotation_B;                                          // 0x0E4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WheelRotation_F;                                          // 0x0E58(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BMX_SprintIntensity;                                      // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BMX_TurnDirection;                                        // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_CoastPedal;                                           // 0x0E6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_Stopped;                                              // 0x0E6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_Sprinting;                                            // 0x0E6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0E6F(0x0001) MISSED OFFSET
	float                                              BMX_PeddlePlayback;                                       // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E74(0x0004) MISSED OFFSET
	class AShooterSimpleVehicle*                       BMXCast;                                                  // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopped;                                                 // 0x0E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMovingForward;                                           // 0x0E81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCoasting;                                                // 0x0E82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0E83(0x0001) MISSED OFFSET
	float                                              TurnFraction;                                             // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bJumpCharging;                                            // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bJumped;                                                  // 0x0E89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInAir;                                                   // 0x0E8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0E8B(0x0001) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleTurnLean;                                          // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnLeanDamped;                                           // 0x0E94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sprinting;                                                // 0x0EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0EA1(0x0003) MISSED OFFSET
	float                                              InAirTimer;                                               // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEMPTEMP;                                                 // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_ResetPedal;                                           // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0EB1(0x0003) MISSED OFFSET
	float                                              CallFunc_MapRangeClamped_ReturnValue;                     // 0x0EB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue;                         // 0x0EB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue2;                    // 0x0EC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0EC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0ECC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_SeatIndex;                                   // 0x0ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DampFloat_ReturnValue;                           // 0x0ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x0ED8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue2;                       // 0x0EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue3;                       // 0x0EE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0EE4(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0EE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterSimpleVehicle*                       K2Node_DynamicCast_AsShooter_Simple_Vehicle;              // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x0EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0EF9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0EFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Array_Get_Item;                                  // 0x0F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0F04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0F05(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue2;                        // 0x0F08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x0F14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0F15(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Get_Item2;                                 // 0x0F18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0F1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue3;                        // 0x0F20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0F2C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass RnR_BMX_AnimBlueprint.RnR_BMX_AnimBlueprint_C");
		return ptr;
	}


	void OnVehicleLanded();
	void OnVehicleJumped();
	void OnVehicleJumpCharging();
	void OnVehicleEntered(int bpp__SeatIndex__pf);
	void OnVehicleAnimValuesUpdated();
	void OnVehicleAccelerationStopped();
	void OnVehicleAcceleration();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_SequencePlayer_F6A668ED43A868391A83159E8ED48825();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_SequencePlayer_CF5F07FD464754329F8211B525BE0934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_ModifyBone_E590EC5F4C7DF85AD7606CAE66838DAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_ModifyBone_3E7974D448E76306C5254ABEA4EB5A42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_ModifyBone_1F06AED64079F37B5D45CE83DE69D9F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B5FC13FF42C44B4544DA24B0589CE719();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0C893DD74B8A9F7BE83C76AEC2F478D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_BlendListByBool_E37D4E884F96AD2A435C4AA6DE4755D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_BlendListByBool_6B23CEC84BC774DC4BA3FEBDA65169AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_BMX_AnimBlueprint_AnimGraphNode_BlendListByBool_3749D3DD483E1927C95C4991C2C1E1F3();
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
