#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ShooterMenuWorld_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShooterMenuWorld.ShooterMenuWorld_C
// 0x0040 (0x03E0 - 0x03A0)
class AShooterMenuWorld_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraComponent*                            ActiveZoomCamera;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMatineeActor*                               Matinee_Customization_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_Home_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_LobbyDetails_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                Camera_Customization_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALevelMessageHandler_C*                      LevelMessageHandler_C_1_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShooterMenuWorld.ShooterMenuWorld_C");
		return ptr;
	}


	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_10(const struct FKEY& KEY);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(const struct FKEY& KEY);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKEY& KEY);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_7(const struct FKEY& KEY);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6(const struct FKEY& KEY);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ShooterMenuWorld(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
