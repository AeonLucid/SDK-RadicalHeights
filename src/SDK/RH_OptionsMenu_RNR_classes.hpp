#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_OptionsMenu_RNR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass OptionsMenu_RNR.OptionsMenu_RNR_C
// 0x0140 (0x03C0 - 0x0280)
class UOptionsMenu_RNR_C : public UShooterOptionsMenu
{
public:
	class UButton*                                     B_Cancel;                                                 // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     B_ExitToDesktop;                                          // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     B_LeaveMatch;                                             // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     B_LeaveWithoutParty;                                      // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     B_LeaveWithParty;                                         // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     B_ReturntoGame;                                           // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     B_Settings;                                               // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Background;                                               // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      BG_Image;                                                 // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Black;                                                    // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Cancel;                                                   // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    ConfirmPanel;                                             // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ConfirmTitle;                                             // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      headerbackground;                                         // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    LeaderLeavePanel;                                         // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  LeaderLeaveTitle;                                         // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class ULetterBoxWidget*                            LetterBoxWidget_1;                                        // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    Pause_options;                                            // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TextBlock_2;                                              // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Yes;                                                      // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bQuitGame;                                                // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	struct FText                                       NewVar_1;                                                 // 0x0328(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       CustomGameLeaveText;                                      // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NormalGameLeaveText;                                      // 0x0358(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CallFunc_IsPS4Build_ReturnValue;                          // 0x0370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue;    // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue2;   // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayerUsingGamepad_ReturnValue;                // 0x0388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayerUsingGamepad_ReturnValue2;               // 0x0389(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bSpectator;                                  // 0x038A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x038B(0x0005) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue3;   // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue;                     // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooter_Game_Instance;               // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x03A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue4;   // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPartyLeader_ReturnValue;                       // 0x03B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass OptionsMenu_RNR.OptionsMenu_RNR_C");
		return ptr;
	}


	void ResetPauseMenu();
	void PreGameEnded();
	void OnSpectatorToggled(bool bpp__bSpectator__pf);
	void OnHUDWidgetShown();
	void Construct();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_182_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Role_Details_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Role_Details_K2Node_ComponentBoundEvent_101_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_Settings_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__B_Settings_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__B_ReturntoGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_PlayerOptions_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__B_MutePlayer_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_LeaveWithParty_K2Node_ComponentBoundEvent_583_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_LeaveWithoutParty_K2Node_ComponentBoundEvent_617_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__B_LeaveMatch_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__B_ExitToDesktop_K2Node_ComponentBoundEvent_244_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__B_Cancel_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
