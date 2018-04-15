#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_FrontEnd_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FrontEnd.FrontEndSoundLibrary
// 0x0418 (0x0440 - 0x0028)
class UFrontEndSoundLibrary : public UDataAsset
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioBank*                                RequiredBankVO;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAkAudioSwitch                              SwitchNoSide;                                             // 0x0038(0x0020) (Edit, BlueprintVisible)
	struct FAkAudioSwitch                              SwitchLawSide;                                            // 0x0058(0x0020) (Edit, BlueprintVisible)
	struct FAkAudioSwitch                              SwitchBreakerSide;                                        // 0x0078(0x0020) (Edit, BlueprintVisible)
	class UAkAudioEvent*                               HoverEvent;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ClickEvent;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AcceptEvent;                                              // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CancelEvent;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PopupOpenEvent;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PopupCloseEvent;                                          // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ErrorEvent;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScrollEvent;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartMenuMusic;                                           // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ResumeMenuMusic;                                          // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopMenuMusic;                                            // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               TwitterAppear;                                            // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               WindowSlideOut;                                           // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               WindowSlideIn;                                            // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GameModeConfirm;                                          // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CharacterSelectAppear;                                    // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PlayerAppear1;                                            // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PlayerAppear2;                                            // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PlayerAppear3;                                            // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PlayerAppear4;                                            // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchReady;                                               // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AudioVolumeName;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AudioVolumeFadeMilliseconds;                              // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DuckMenuMusicOn;                                          // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DuckMenuMusicOff;                                         // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SliderMoved;                                              // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               NewMessageNotification;                                   // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PrivateMessageNotification;                               // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               InviteNotification;                                       // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               WipeBlack2;                                               // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               WipeWhite2;                                               // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ResultsIconSlam;                                          // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ResultsAppear;                                            // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MedalAppear;                                              // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MedalSlam;                                                // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateMenuOpenSlam;                                        // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateNameGeneric;                                         // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateWhoosh;                                              // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateSlamGeneric;                                         // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateNamePlayer;                                          // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateSlamPlayer;                                          // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateZoomIn;                                              // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CrateZoomOut;                                             // 0x01E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               WipeGrey;                                                 // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GameModeIconSwoosh;                                       // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GameModeIconSlam;                                         // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GameModeEXPScroll;                                        // 0x0208(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GameModeEXPSlam;                                          // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeLevelBeep;                                           // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeUpChime;                                             // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelIconSwoosh;                                          // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelIconSlam;                                            // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelUpChime;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelEXPSlam;                                             // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AwardHit;                                                 // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EndMatchStop;                                             // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CratePaneAppear;                                          // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CratePaneWhoosh;                                          // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CratePaneSlam;                                            // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PersonalResultsAppear;                                    // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelBonusTally;                                          // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelBonusTallyEnd;                                       // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelEXPTally;                                            // 0x0288(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelEXPTallyStop;                                        // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelUpHit;                                               // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelUpTextSlam;                                          // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AwardSwish;                                               // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AwardSlam;                                                // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               WipeToOverall;                                            // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OverallBoxAppear;                                         // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SideIconSlam;                                             // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EoMWipeGeneric;                                           // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GMCircleSlam;                                             // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeCircleSlam;                                          // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeWhoosh;                                              // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeHitD;                                                // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeHitC;                                                // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeHitB;                                                // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeHitA;                                                // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeHitS;                                                // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeHitSPlus;                                            // 0x0318(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               GradeScoreTally;                                          // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchmakingCharSelectWipe;                                // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CharacterSelectRolePortraitWipe;                          // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CharacterSelectRolePortraitSlam;                          // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchmakingMatchFound;                                    // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchmakingPlayerBoxShow;                                 // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchmakingGameModeIcon;                                  // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchmakingMapIcon;                                       // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchTimerStart;                                          // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchTimerCount;                                          // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchTimerCountdown;                                      // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchTimerEnd;                                            // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchmakingFriendsSlideDown;                              // 0x0380(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MatchmakingSlideDown;                                     // 0x0388(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PlayMenuWhoosh;                                           // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PlayMenuHit;                                              // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PlayMenuConfirm;                                          // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LogoBreak;                                                // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SideLogoAppear;                                           // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SideLogoHitBreaker;                                       // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SideLogoHitLaw;                                           // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PurchaseComplete;                                         // 0x03C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MenuCustomSelectLogoSlam;                                 // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MenuCustomSelectSlideMain;                                // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MenuCustomSelectSlideSide;                                // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CustomizationItemEquipped;                                // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CustomizationCharacterSelected;                           // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankPerformanceDefeat;                                  // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankPerformanceVictory;                                 // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankPerformanceAccentHit;                               // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankPerformanceRankDown;                                // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankPerformanceRankUp;                                  // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankPerformanceTally;                                   // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankPerformanceWhooshInPre;                             // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UIRankMedalHit;                                           // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               VOMainMenu;                                               // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontEnd.FrontEndSoundLibrary");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
