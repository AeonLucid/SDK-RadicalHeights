#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD2_GameTextWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD2_GameTextWidget.HUD2_GameTextWidget_C
// 0x0140 (0x0388 - 0x0248)
class UHUD2_GameTextWidget_C : public UShooterUserWidget
{
public:
	class UTextBlock*                                  Countdown_;                                               // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PendingInvites;                                           // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                RootCanvasPanel;                                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  WaitingText;                                              // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Warmup_Ends__;                                            // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             WarmupReasonSwitcher;                                     // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  WarmupText;                                               // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               NewWarmupTimerVisibile;                                   // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewCountdownVisible;                                      // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0282(0x0002) MISSED OFFSET
	int                                                OldCountdownValue;                                        // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OldWarmupValue;                                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FText                                       FinalCountdownText;                                       // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AdditionalCountdownTime;                                  // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x02AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x02AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x02B0(0x0018) (Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x02C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameState*                           K2Node_DynamicCast_AsShooter_Game_State;                  // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x02E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x02E4(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x0318(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x031C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x031D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               CallFunc_BranchInt_OutResult;                             // 0x031E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x031F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0320(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               CallFunc_BranchInt_OutResult2;                            // 0x0321(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0322(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0323(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0324(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0325(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0326(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0327(0x0001) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue;                     // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooter_Game_Instance;               // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess2;                             // 0x0338(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x0339(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x033A(0x0006) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue2;                       // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCustomGame_ReturnValue;                        // 0x0348(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x0349(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x034A(0x0006) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue3;                       // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState_LMS_C*                            K2Node_DynamicCast_AsGame_State_LMS;                      // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess3;                             // 0x0360(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FCeil_ReturnValue;                               // 0x0368(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue2;                     // 0x0370(0x0018) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD2_GameTextWidget.HUD2_GameTextWidget_C");
		return ptr;
	}


	void Tick(const struct FGeometry& bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	TEnumAsByte<ESlateVisibility> SetVisibility_WaitingForPlayers();
	TEnumAsByte<ESlateVisibility> SetVisibility_ServerFull();
	struct FText SetText_WarmupTimer();
	TEnumAsByte<ESlateVisibility> GetVisibility_WarmupTimer();
	TEnumAsByte<ESlateVisibility> GetVisibility_Countdown();
	void Construct();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
