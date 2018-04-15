#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BaseCharacterDialogue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BaseCharacterDialogue.BaseCharacterDialogue_C
// 0x0450 (0x0498 - 0x0048)
class UBaseCharacterDialogue_C : public UShooterDialogueCharacter
{
public:
	class UAkAudioEvent*                               Kick_Fail;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Kick_Fail_Priority;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               Taunt;                                                    // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Taunt_Priority;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               Battery_Capture;                                          // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Respawn;                                                  // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Capture_Priority;                                         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Respawn_Priority;                                         // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Low_Health;                                               // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StopAbility__AbilityOne_;                                 // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StopAbility__AbilityOne__Priority;                        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StopAbility__AbilityTwo_;                                 // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StopAbility__AbilityTwo__Priority;                        // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StopAbility__Jump_;                                       // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StopAbility__Jump__Priority;                              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StopAbility__Ultimate_;                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StopAbility__Ultimate__Priority;                          // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StopAbility__Run_;                                        // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StopAbility__Run__Priority;                               // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StopAbility__Unknown_;                                    // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StopAbility__Unknown__Priority;                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartAbility__AbilityOne_;                                // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartAbility__AbilityOne__Priority;                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartAbility__Unknown_;                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartAbility__Unknown__Priority;                          // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartAbility__Run_;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartAbility__Run__Priority;                              // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartAbility__Ultimate_;                                  // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartAbility__Ultimate__Priority;                         // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartAbility__Jump_;                                      // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartAbility__Jump__Priority;                             // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartAbility__AbilityTwo_;                                // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartAbility__AbilityTwo__Priority;                       // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit__Ballistic_;                                        // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit__Ballistic__Replay;                                 // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit__Explosion_;                                        // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit__Explosion__Replay;                                 // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit__Electricity_;                                      // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit__Electricity__Replay;                               // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit__Kick_;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit__Kick__Replay;                                      // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit__Sword_Stab_;                                       // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit__Sword_Stab__Replay;                                // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit__Sword_Slice_;                                      // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit__Sword_Slice__Replay;                               // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit__Environment_;                                      // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit__Environment__Replay;                               // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OnHit__Priority;                                          // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           OnHit_Same_Priority_Resolution;                           // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           OnHit_Lower_Priority_Resolution;                          // 0x01B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x01BA(0x0006) MISSED OFFSET
	class UAkAudioEvent*                               OnHit_Small;                                              // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit_Small_Replay;                                       // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Low_Health_Priority;                                      // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DEATH;                                                    // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeathPriority;                                            // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Death_Same_Priority;                                      // 0x01DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Death_Lower_Priority;                                     // 0x01DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x01DE(0x0002) MISSED OFFSET
	float                                              Death_Min_Replay_Time_in_Seconds;                         // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Death_Max_Wait_Time_Before_Interrupting_in_Seconds;       // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Low_Health_Same_Priority;                                 // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Low_Health_Lower_Priority;                                // 0x01E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x01EA(0x0002) MISSED OFFSET
	float                                              Low_Health_Min_Replay_Time_in_Seconds;                    // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Low_Health_Max_Wait_Time_Before_Interrupting_In_Seconds;  // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Respawn_Same_Priority;                                    // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Respawn_Lower_Priority;                                   // 0x01F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x01F6(0x0002) MISSED OFFSET
	float                                              Respawn_Min_Replay_Time_In_Seconds;                       // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Respawn_Max_Wait_Time_Before_Interrupting_In_Seconds;     // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Taunt_Same_Priority;                                      // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Taunt_Lower_Priority;                                     // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x0202(0x0002) MISSED OFFSET
	float                                              Taunt_Min_Replay_Time_In_Seconds;                         // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Taunt_Maximum_Wait_Time_Before_Interrupting_in_Seconds;   // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Capture_Same_Priority;                                    // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Capture_Lower_Priority;                                   // 0x020D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x020E(0x0002) MISSED OFFSET
	float                                              Capture_Min_Replay_Time_in_Seconds;                       // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Wait_Time_Before_Interrupting_in_Seconds;             // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Kick_Same_Priority;                                       // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Kick_Lower_Priority;                                      // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x021A(0x0002) MISSED OFFSET
	float                                              Kick_Min_Replay_Time_In_Seconds;                          // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Kick_Max_Wait_Time_Before_Interrupting_in_Seconds;        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__AbilityOne__Same_Priority;                  // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__AbilityOne__Lower_Priority;                 // 0x0225(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x0226(0x0002) MISSED OFFSET
	float                                              StartAbility__AbilityOne__Min_Replay_Time_in_Seconds;     // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAbility__AbilityOne__Max_Wait_Time_Before_Interrupting_in_Seconds;// 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__AbilityTwo__Same_Priority;                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__AbilityTwo__Lower_Priority;                 // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x0232(0x0002) MISSED OFFSET
	float                                              StartAbility__AbilityTwo__Min_Replay_Time;                // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAbility__AbilityTwo__Max_Wait_Time;                  // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Jump__Same_Priority;                        // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Jump__Lower_Priority;                       // 0x023D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x023E(0x0002) MISSED OFFSET
	float                                              StartAbility__Jump__Min_Replay_Time;                      // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAbility__Jump__Max_Wait_Time;                        // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Unknown__Same_Priority;                     // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Unknown__Lower_Priority;                    // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x024A(0x0002) MISSED OFFSET
	float                                              StartAbility__Unknown__Min_Replay_Time;                   // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAbility__Unknown__Max_Wait_Time;                     // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Run__Same_Priority;                         // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Run__Lower_Priority;                        // 0x0255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x0256(0x0002) MISSED OFFSET
	float                                              StartAbility__Run__Min_Replay_Time;                       // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAbility__Run__Max_Wait_Time;                         // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Ultimate__Same_Priority;                    // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StartAbility__Ultimate__Lower_Priority;                   // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0x0262(0x0002) MISSED OFFSET
	float                                              StartAbility__Ultimate__Min_Replay_Time;                  // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAbility__Ultimate__Max_Wait_Time;                    // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Unknown__Same_Priority;                      // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Unknown__Lower_Priority;                     // 0x026D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2];                                       // 0x026E(0x0002) MISSED OFFSET
	float                                              StopAbility__Unknown__Min_Replay_Time;                    // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAbility__Unknown__Max_Wait_Time;                      // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Run__Same_Priority;                          // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Run__Lower_Priority;                         // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x027A(0x0002) MISSED OFFSET
	float                                              StopAbility__Run__Min_Replay_Time;                        // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAbility__Run__Max_Wait_Time;                          // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Ultimate__Same_Priority;                     // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Ultimate__Lower_Priority;                    // 0x0285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x2];                                       // 0x0286(0x0002) MISSED OFFSET
	float                                              StopAbility__Ultimate__Min_Replay_Time;                   // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAbility__Ultimate__Max_Wait_Time;                     // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__AbilityOne__Same_Priority;                   // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__AbilityOne__Lower_Priority;                  // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	float                                              StopAbility__AbilityOne__Min_Replay_Time;                 // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAbility__AbilityOne__Max_Wait_Time;                   // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__AbilityTwo__Same_Priority;                   // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__AbilityTwo__Lower_Priority;                  // 0x029D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x2];                                       // 0x029E(0x0002) MISSED OFFSET
	float                                              StopAbility__AbilityTwo__Min_Replay_Time;                 // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAbility__AbilityTwo__Max_Wait_Time;                   // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Jump__Same_Priority;                         // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           StopAbility__Jump__Lower_Priority;                        // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x02AA(0x0002) MISSED OFFSET
	float                                              StopAbility__Jump__Min_Replay_Time;                       // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAbility__Jump__Max_Wait_Time;                         // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OnHit_Response;                                           // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OnHit_Response_Priority;                                  // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           OnHit_Response_Same_Priority;                             // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           OnHit_Response_Lower_Priority;                            // 0x02C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x2];                                       // 0x02C6(0x0002) MISSED OFFSET
	float                                              OnHit_Response_Min_Replay_Time;                           // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit_Response_Max_Wait_Time;                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               KILL;                                                     // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Kill_Headshot;                                            // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Kick_Kill;                                                // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Kill_Priority;                                            // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Kill_Same_Priority;                                       // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Kill_Lower_Priority;                                      // 0x02ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x2];                                       // 0x02EE(0x0002) MISSED OFFSET
	float                                              Kill_Min_Replay_Time_In_Seconds;                          // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Kick_Kill_Min_Replay;                                     // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Kill_Max_Wait_Time_Before_Interrupting_In_Seconds;        // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               TargetHit;                                                // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TargetHit_Priority;                                       // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Target_Hit_Same_Priority;                                 // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Target_Hit_Lower_Priority;                                // 0x030D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x030E(0x0002) MISSED OFFSET
	float                                              Target_Hit_Min_Replay_Time_in_Seconds;                    // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Target_Hit_Max_Wait_Time_Before_Interrupting_in_Seconds;  // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OnHealed;                                                 // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OnHealed_Priority;                                        // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           OnHealed_Same_Priority;                                   // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           OnHealed_Lower_Priority;                                  // 0x0325(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x2];                                       // 0x0326(0x0002) MISSED OFFSET
	float                                              OnHealed_Min_Replay_Time_in_Sec;                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHealed_Max_Wait_Time_Before_Interrupting_In_Seconds;    // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DeathFall;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeathFall_Priority;                                       // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           DeathFall_Same_Priority;                                  // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           DeathFall_Lower_Priority;                                 // 0x033D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	float                                              DeathFall_Min_Replay_Time;                                // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFall_Max_Wait_Time;                                  // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Damage_Warn_Above_Sound;                                  // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Damage_Warn_Above_Priority;                               // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Damage_Warn_Above_Same_Priority;                          // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Damage_Warn_Above_Lower_Priority;                         // 0x0355(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x2];                                       // 0x0356(0x0002) MISSED OFFSET
	float                                              Damage_Warn_Above_Min_Replay_Time_in_Seconds;             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Warn_Above_Max_Wait_TIme_in_Seconds;               // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Damage_Warn_Below_Sound;                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Damage_Warn_Below_Priority;                               // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Damage_Warn_Below_Lower_Priority;                         // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Damage_Warn_Below_Same_Priority;                          // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x2];                                       // 0x036E(0x0002) MISSED OFFSET
	float                                              Damage_Warn_Below_Min_Replay_Time;                        // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Warn_Below_Max_Wait_Time;                          // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Damage_Warn_Behind_Sound;                                 // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Damage_Warn_Behind_Priority;                              // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Damage_Warn_Behind_Same_Priority;                         // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Damage_Warn_Behind_Lower_Priority;                        // 0x0385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x2];                                       // 0x0386(0x0002) MISSED OFFSET
	float                                              Damage_Warn_Behind_Min_Replay_Time;                       // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Warn_Behind_Max_Wait_Time;                         // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit_DontPlay_Thresh;                                    // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHit_Small_Hit_Thresh;                                   // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Kill_VO_Ratio;                                            // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AllyObjectiveEncourage_Sound;                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AllyObjectiveEncourage_Priority;                          // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           AllyObjectiveEncourage_Same_Priority;                     // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           AllyObjectiveEncourage_Lower_Priority;                    // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	float                                              AllyObjectiveEncourage_Min_Replay_Time;                   // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllyObjective_Encourage_Max_Wait_Time;                    // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AllyObjective_Affirm_Sound;                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AllyObjective_Affirm_Priority;                            // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           AllyObjective_Affirm_Same_Priority;                       // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           AllyObjective_Affirm_Lower_Priority;                      // 0x03C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x2];                                       // 0x03C6(0x0002) MISSED OFFSET
	float                                              AllyObjective_Affirm_Min_Replay_Time;                     // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllyObjective_Affirm_Max_Wait_Time;                       // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Ally_Cheer_Kill_Sound;                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Ally_Cheer_Kill_Priority;                                 // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Ally_Cheer_Kill_Same_Priority;                            // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Ally_Cheer_Kill_Lower_Priority;                           // 0x03DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x2];                                       // 0x03DE(0x0002) MISSED OFFSET
	float                                              Ally_Cheer_Kill_Min_Wait_Time;                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ally_Cheer_Kill_Max_Wait;                                 // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllyObjective_Encourage_Delay;                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ally_Cheer_Kill_Delay;                                    // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cheer_Ally_Kill_Radius;                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ally_Objective_Affirm_Delay;                              // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UltimateChargeTriggerNumber;                              // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               Death_Sliced;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Death_Sliced_Priority;                                    // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Death_Sliced_Same_Priority;                               // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           Death_Sliced_Lower_Priority;                              // 0x040D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x2];                                       // 0x040E(0x0002) MISSED OFFSET
	float                                              Death_Sliced_Min_Replay;                                  // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Death_Sliced_Max_Wait_Time;                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Respawn_SFX;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAudioDamageCategory>                  K2Node_Event_KillingDamageCategory;                       // 0x0420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0421(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0422(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAudioDamageCategory>                  K2Node_Event_DamageCategory;                              // 0x0423(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DamageTaken;                                 // 0x0424(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterGang>                          K2Node_Event_KilledGang;                                  // 0x0429(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_WasKick;                                     // 0x042A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         K2Node_Event_KilledClass;                                 // 0x042B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAbilityType>                          K2Node_Event_KillerAbilityType;                           // 0x042C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x042D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_UsedPrimaryWeapon;                           // 0x042E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_UsedSecondaryWeapon;                         // 0x042F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         K2Node_Event_HitClass;                                    // 0x0430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                K2Node_Event_HealAmount;                                  // 0x0434(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_Event_Healer;                                      // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_HealCauser;                                  // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_PreviousHealthPercentage;                    // 0x0448(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_NewHealthPercentage;                         // 0x044C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0450(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0451(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0452(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x5];                                       // 0x0453(0x0005) MISSED OFFSET
	class AActor*                                      CallFunc_GetAssociatedActor_ReturnValue;                  // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0460(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x0464(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0465(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x2];                                       // 0x0466(0x0002) MISSED OFFSET
	class UShooterAbility*                             K2Node_Event_Ability;                                     // 0x0468(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x0470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class UShooterAbility*                             K2Node_Event_Ability2;                                    // 0x0478(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName2_CmpSuccess;                            // 0x0480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         K2Node_Event_CheerTargetClass;                            // 0x0481(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x6];                                       // 0x0482(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetShooterCharacter_ReturnValue;                 // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterCharacterDefinition*                 K2Node_Event_CharacterDefinition;                         // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BaseCharacterDialogue.BaseCharacterDialogue_C");
		return ptr;
	}


	void OnTaunt();
	void OnTargetHitConfirmation(bool bpp__UsedPrimaryWeapon__pf, bool bpp__UsedSecondaryWeapon__pf, TEnumAsByte<EShooterClass> bpp__HitClass__pf);
	void OnStopAbility(class UShooterAbility* bpp__Ability__pf__const);
	void OnStartAbility(class UShooterAbility* bpp__Ability__pf__const);
	void OnRespawn(class UShooterCharacterDefinition* bpp__CharacterDefinition__pf);
	void OnLowHealth();
	void OnKill(TEnumAsByte<EShooterGang> bpp__KilledGang__pf, bool bpp__WasKick__pf, TEnumAsByte<EShooterClass> bpp__KilledClass__pf, TEnumAsByte<EAbilityType> bpp__KillerAbilityType__pf);
	void OnHitVocal(TEnumAsByte<EAudioDamageCategory> bpp__DamageCategory__pf, float bpp__DamageTaken__pf);
	void OnHealedBy(int bpp__HealAmount__pf, class AShooterCharacter* bpp__Healer__pf, class AActor* bpp__HealCauser__pf, float bpp__PreviousHealthPercentage__pf, float bpp__NewHealthPercentage__pf);
	void OnFlagCapture();
	void OnDeath(TEnumAsByte<EAudioDamageCategory> bpp__KillingDamageCategory__pf);
	void OnDamageWarningBelow();
	void OnDamageWarningBehind();
	void OnDamageWarningAbove();
	void OnCheerAllyKill(TEnumAsByte<EShooterClass> bpp__CheerTargetClass__pf);
	void OnAllyObjectiveEncourage();
	void OnAllyObjectiveAffirm();
	void OnAbilityFail();
	void ExecuteUbergraph_BaseCharacterDialogue_10(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BaseCharacterDialogue_9(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_BaseCharacterDialogue_7(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
