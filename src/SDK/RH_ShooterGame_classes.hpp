#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ShooterGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShooterGame.ShooterBaseState
// 0x0028 (0x0050 - 0x0028)
class UShooterBaseState : public UObject
{
public:
	class AShooterCharacter*                           Player;                                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EStateAnimationLayer>                  StateAnimationLayer;                                      // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FGameplayTimer>                      StateTimers;                                              // 0x0038(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      QueuedState;                                              // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBaseState");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_QuickFire
// 0x0008 (0x0058 - 0x0050)
class UShooterState_QuickFire : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_QuickFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_BlinkEcho
// 0x0018 (0x0068 - 0x0050)
class UShooterState_BlinkEcho : public UShooterBaseState
{
public:
	bool                                               DashActive;                                               // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DashFinished;                                             // 0x0051(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              RunTimer;                                                 // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RecoverySpeed;                                            // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BufferedKnife;                                            // 0x005C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UAkSoundInstance*                            LoopSound;                                                // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_BlinkEcho");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ArmorTransition
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ArmorTransition : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ArmorTransition");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ArmorTransitionOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ArmorTransitionOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ArmorTransitionOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_BlindFire
// 0x0018 (0x0068 - 0x0050)
class UShooterState_BlindFire : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_BlindFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UpperBody_Ready
// 0x0008 (0x0058 - 0x0050)
class UShooterState_UpperBody_Ready : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UpperBody_Ready");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_BlindFire_TransOut
// 0x0008 (0x0060 - 0x0058)
class UShooterState_BlindFire_TransOut : public UShooterState_UpperBody_Ready
{
public:
	bool                                               CanCancel;                                                // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BufferedReload;                                           // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_BlindFire_TransOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_BlindFireBurst
// 0x0008 (0x0070 - 0x0068)
class UShooterState_BlindFireBurst : public UShooterState_BlindFire
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_BlindFireBurst");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_BlinkRecovery
// 0x0000 (0x0050 - 0x0050)
class UShooterState_BlinkRecovery : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_BlinkRecovery");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_CancelGrapple
// 0x0000 (0x0050 - 0x0050)
class UShooterState_CancelGrapple : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_CancelGrapple");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ChronoTrigger
// 0x0008 (0x0058 - 0x0050)
class UShooterState_ChronoTrigger : public UShooterBaseState
{
public:
	float                                              TriggerTimer;                                             // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ChronoTrigger");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_CombatRoll
// 0x0008 (0x0058 - 0x0050)
class UShooterState_CombatRoll : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_CombatRoll");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_DataBackup
// 0x0008 (0x0058 - 0x0050)
class UShooterState_DataBackup : public UShooterBaseState
{
public:
	float                                              BackupTimer;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_DataBackup");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Dodge
// 0x0000 (0x0058 - 0x0058)
class UShooterState_Dodge : public UShooterState_CombatRoll
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Dodge");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_DoubleJump
// 0x0000 (0x0050 - 0x0050)
class UShooterState_DoubleJump : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_DoubleJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_DownButNotOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_DownButNotOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_DownButNotOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_DropShieldGenerator
// 0x0000 (0x0050 - 0x0050)
class UShooterState_DropShieldGenerator : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_DropShieldGenerator");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_DropTotem
// 0x0000 (0x0050 - 0x0050)
class UShooterState_DropTotem : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_DropTotem");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_EndPaladinSword
// 0x0000 (0x0050 - 0x0050)
class UShooterState_EndPaladinSword : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_EndPaladinSword");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Falling
// 0x0000 (0x0050 - 0x0050)
class UShooterState_Falling : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Falling");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_FireTransOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_FireTransOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_FireTransOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_GauntletAlt_Charge
// 0x0010 (0x0060 - 0x0050)
class UShooterState_GauntletAlt_Charge : public UShooterBaseState
{
public:
	float                                              ChargeTimer;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UAkSoundInstance*                            ChargeLoopAC;                                             // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_GauntletAlt_Charge");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_GauntletAlt_Fire
// 0x0008 (0x0058 - 0x0050)
class UShooterState_GauntletAlt_Fire : public UShooterBaseState
{
public:
	float                                              ReFireTimer;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_GauntletAlt_Fire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_GauntletAlt_FireIn
// 0x0000 (0x0050 - 0x0050)
class UShooterState_GauntletAlt_FireIn : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_GauntletAlt_FireIn");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_GauntletAlt_FireOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_GauntletAlt_FireOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_GauntletAlt_FireOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LeftArm_Ready
// 0x0008 (0x0058 - 0x0050)
class UShooterState_LeftArm_Ready : public UShooterBaseState
{
public:
	bool                                               AltFireReleased;                                          // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LeftArm_Ready");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_GauntletAlt_Idle
// 0x0000 (0x0058 - 0x0058)
class UShooterState_GauntletAlt_Idle : public UShooterState_LeftArm_Ready
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_GauntletAlt_Idle");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_GrappleSwordCatch
// 0x0008 (0x0058 - 0x0050)
class UShooterState_GrappleSwordCatch : public UShooterBaseState
{
public:
	float                                              AttackCancelTimer;                                        // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_GrappleSwordCatch");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_GravitySmash
// 0x0008 (0x0058 - 0x0050)
class UShooterState_GravitySmash : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_GravitySmash");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_HardLanding
// 0x0008 (0x0058 - 0x0050)
class UShooterState_HardLanding : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_HardLanding");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_HitReaction
// 0x0008 (0x0058 - 0x0050)
class UShooterState_HitReaction : public UShooterBaseState
{
public:
	bool                                               bAnimationIsActive;                                       // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_HitReaction");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_InspectWeapon
// 0x0000 (0x0058 - 0x0058)
class UShooterState_InspectWeapon : public UShooterState_UpperBody_Ready
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_InspectWeapon");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_JetPulseTransOut
// 0x0000 (0x0058 - 0x0058)
class UShooterState_JetPulseTransOut : public UShooterState_UpperBody_Ready
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_JetPulseTransOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_JuggernautPunch
// 0x0010 (0x0060 - 0x0050)
class UShooterState_JuggernautPunch : public UShooterBaseState
{
public:
	float                                              DamageWindowTimer;                                        // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DidDamage;                                                // 0x0054(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              RunTimer;                                                 // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               StoppedMove;                                              // 0x005C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               StartedMove;                                              // 0x005D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BufferedKick;                                             // 0x005E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Whiffed;                                                  // 0x005F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_JuggernautPunch");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_JNautHeavyPunch
// 0x0000 (0x0060 - 0x0060)
class UShooterState_JNautHeavyPunch : public UShooterState_JuggernautPunch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_JNautHeavyPunch");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_JuggernautReload
// 0x0000 (0x0050 - 0x0050)
class UShooterState_JuggernautReload : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_JuggernautReload");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_JuggernautRunSmash
// 0x0000 (0x0050 - 0x0050)
class UShooterState_JuggernautRunSmash : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_JuggernautRunSmash");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Jump
// 0x0000 (0x0050 - 0x0050)
class UShooterState_Jump : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Jump");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_JumpBlink
// 0x0000 (0x0068 - 0x0068)
class UShooterState_JumpBlink : public UShooterState_BlinkEcho
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_JumpBlink");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_KatanaCharge
// 0x0008 (0x0058 - 0x0050)
class UShooterState_KatanaCharge : public UShooterBaseState
{
public:
	float                                              MinChargeTime;                                            // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_KatanaCharge");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_KatanaDashAttack
// 0x0010 (0x0060 - 0x0050)
class UShooterState_KatanaDashAttack : public UShooterBaseState
{
public:
	float                                              DamageTimer;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DidDamage;                                                // 0x0054(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0055(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_KatanaDashAttack");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Landing
// 0x0000 (0x0050 - 0x0050)
class UShooterState_Landing : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Landing");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LaserShoeBackOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_LaserShoeBackOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LaserShoeBackOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LaserShoesBackBoost
// 0x0000 (0x0050 - 0x0050)
class UShooterState_LaserShoesBackBoost : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LaserShoesBackBoost");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LaunchLobberMine
// 0x0000 (0x0050 - 0x0050)
class UShooterState_LaunchLobberMine : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LaunchLobberMine");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LB_SlowFall
// 0x0018 (0x0068 - 0x0050)
class UShooterState_LB_SlowFall : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	float                                              CachedNormalSpeed;                                        // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedTargetingSpeed;                                     // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkSoundInstance*                            LoopingSound;                                             // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LB_SlowFall");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Leap
// 0x0008 (0x0058 - 0x0050)
class UShooterState_Leap : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Leap");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_leapCancel
// 0x0000 (0x0050 - 0x0050)
class UShooterState_leapCancel : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_leapCancel");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UpperBody_Fire
// 0x0010 (0x0060 - 0x0050)
class UShooterState_UpperBody_Fire : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0050(0x0004) MISSED OFFSET
	float                                              BurstFireTimer;                                           // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AutoReloadTimer;                                          // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BufferAltFire;                                            // 0x005C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BufferPrimaryFire;                                        // 0x005D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UpperBody_Fire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LightingHandsFire
// 0x0000 (0x0060 - 0x0060)
class UShooterState_LightingHandsFire : public UShooterState_UpperBody_Fire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LightingHandsFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LightingHandsIdle
// 0x0000 (0x0058 - 0x0058)
class UShooterState_LightingHandsIdle : public UShooterState_UpperBody_Ready
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LightingHandsIdle");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LMG_AltFire
// 0x0008 (0x0058 - 0x0050)
class UShooterState_LMG_AltFire : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LMG_AltFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LMG_PrimaryFire
// 0x0008 (0x0058 - 0x0050)
class UShooterState_LMG_PrimaryFire : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LMG_PrimaryFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LowerBody_Ready
// 0x0000 (0x0050 - 0x0050)
class UShooterState_LowerBody_Ready : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LowerBody_Ready");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_NinjaKick
// 0x0028 (0x0078 - 0x0050)
class UShooterState_NinjaKick : public UShooterBaseState
{
public:
	class AShooterCharacter*                           TargetEnemy;                                              // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DidSpawnImpactFX;                                         // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ForwardMotionFinished;                                    // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DidWallKick;                                              // 0x005A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DamageWindowActive;                                       // 0x005B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedDamageMultiplier;                                   // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AActor*>                              DamagedActors;                                            // 0x0060(0x0010) (ZeroConstructor, Transient)
	bool                                               bGoToEndOverCharge;                                       // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGoToEndPaladinSword;                                     // 0x0071(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_NinjaKick");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_NinjaSprint
// 0x0000 (0x0050 - 0x0050)
class UShooterState_NinjaSprint : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_NinjaSprint");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_OverChargetTransOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_OverChargetTransOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_OverChargetTransOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_PowerJump
// 0x0008 (0x0058 - 0x0050)
class UShooterState_PowerJump : public UShooterState_Jump
{
public:
	float                                              JumpTimer;                                                // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_PowerJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_PowerSlideLoop
// 0x0000 (0x0050 - 0x0050)
class UShooterState_PowerSlideLoop : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_PowerSlideLoop");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_PowerSlideTransIn
// 0x0000 (0x0050 - 0x0050)
class UShooterState_PowerSlideTransIn : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_PowerSlideTransIn");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_PowerSlideTransOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_PowerSlideTransOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_PowerSlideTransOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_QuickMelee
// 0x0008 (0x0058 - 0x0050)
class UShooterState_QuickMelee : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_QuickMelee");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_QuickRaise
// 0x0000 (0x0050 - 0x0050)
class UShooterState_QuickRaise : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_QuickRaise");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_RevivedFromDown
// 0x0000 (0x0050 - 0x0050)
class UShooterState_RevivedFromDown : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_RevivedFromDown");
		return ptr;
	}


	void OnReviveCompleted();
};


// Class ShooterGame.ShooterState_ReviveFriend
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ReviveFriend : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ReviveFriend");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ShoulderCharge
// 0x0010 (0x0060 - 0x0050)
class UShooterState_ShoulderCharge : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ShoulderCharge");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ShoulderWeap_Active
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ShoulderWeap_Active : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ShoulderWeap_Active");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ShoulderWeap_Drop
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ShoulderWeap_Drop : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ShoulderWeap_Drop");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ShoulderWeap_Equip
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ShoulderWeap_Equip : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ShoulderWeap_Equip");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ShoulderWeap_Fire
// 0x0008 (0x0058 - 0x0050)
class UShooterState_ShoulderWeap_Fire : public UShooterBaseState
{
public:
	uint32_t                                           SalvosFired;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           SalvosToFire;                                             // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ShoulderWeap_Fire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ShoulderWeap_Ready
// 0x0008 (0x0058 - 0x0050)
class UShooterState_ShoulderWeap_Ready : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ShoulderWeap_Ready");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ShoulderWeap_UpIdle
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ShoulderWeap_UpIdle : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ShoulderWeap_UpIdle");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SkyGrabLoop
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SkyGrabLoop : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SkyGrabLoop");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SkyGrabPull
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SkyGrabPull : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SkyGrabPull");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SlideKick
// 0x0028 (0x0078 - 0x0050)
class UShooterState_SlideKick : public UShooterBaseState
{
public:
	float                                              Duration;                                                 // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamageTickTimer;                                          // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipJumpDelayTimer;                                       // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              DamagedActors;                                            // 0x0060(0x0010) (ZeroConstructor, Transient)
	bool                                               DidSpawnImpactFX;                                         // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SlideKick");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SlideKickShoot
// 0x0000 (0x0060 - 0x0060)
class UShooterState_SlideKickShoot : public UShooterState_UpperBody_Fire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SlideKickShoot");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SmokeBomb
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SmokeBomb : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SmokeBomb");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Spawn
// 0x0008 (0x0060 - 0x0058)
class UShooterState_Spawn : public UShooterState_UpperBody_Ready
{
public:
	bool                                               ValidAnimPackage;                                         // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               EquipAnimStarted;                                         // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Spawn");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Sprint
// 0x0008 (0x0058 - 0x0050)
class UShooterState_Sprint : public UShooterBaseState
{
public:
	float                                              LastYaw;                                                  // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Sprint");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_StartPaladinSword
// 0x0000 (0x0050 - 0x0050)
class UShooterState_StartPaladinSword : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_StartPaladinSword");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_StrafingRun
// 0x0000 (0x0050 - 0x0050)
class UShooterState_StrafingRun : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_StrafingRun");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_StrafingRun_Back
// 0x0000 (0x0050 - 0x0050)
class UShooterState_StrafingRun_Back : public UShooterState_StrafingRun
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_StrafingRun_Back");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_StrafingRun_Jump
// 0x0000 (0x0050 - 0x0050)
class UShooterState_StrafingRun_Jump : public UShooterState_StrafingRun
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_StrafingRun_Jump");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_StrafingRun_Left
// 0x0000 (0x0050 - 0x0050)
class UShooterState_StrafingRun_Left : public UShooterState_StrafingRun
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_StrafingRun_Left");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_StrafingRun_Right
// 0x0000 (0x0050 - 0x0050)
class UShooterState_StrafingRun_Right : public UShooterState_StrafingRun
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_StrafingRun_Right");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SummonBattlestation
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SummonBattlestation : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SummonBattlestation");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SuperLMG
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SuperLMG : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SuperLMG");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SuperLMGEnd
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SuperLMGEnd : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SuperLMGEnd");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Supernova
// 0x0000 (0x0050 - 0x0050)
class UShooterState_Supernova : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Supernova");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SupportMove
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SupportMove : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SupportMove");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SwapFireMode
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SwapFireMode : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SwapFireMode");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SwordShieldIdle
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SwordShieldIdle : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SwordShieldIdle");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_TankRunTransOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_TankRunTransOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_TankRunTransOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_TankSpecialKick
// 0x0000 (0x0078 - 0x0078)
class UShooterState_TankSpecialKick : public UShooterState_NinjaKick
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_TankSpecialKick");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ThrowGrappleSword
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ThrowGrappleSword : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ThrowGrappleSword");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ThrowKnifeAltFire
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ThrowKnifeAltFire : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ThrowKnifeAltFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ThrusterPack
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ThrusterPack : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ThrusterPack");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ThrustKick
// 0x0008 (0x0058 - 0x0050)
class UShooterState_ThrustKick : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ThrustKick");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_TimeCopBackDash
// 0x0000 (0x0050 - 0x0050)
class UShooterState_TimeCopBackDash : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_TimeCopBackDash");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_Reload
// 0x0008 (0x0058 - 0x0050)
class UShooterState_UB_Reload : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_Reload");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_TimeCopReload
// 0x0000 (0x0058 - 0x0058)
class UShooterState_TimeCopReload : public UShooterState_UB_Reload
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_TimeCopReload");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_BurstFire
// 0x0008 (0x0068 - 0x0060)
class UShooterState_UB_BurstFire : public UShooterState_UpperBody_Fire
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_BurstFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_AltBurstFire
// 0x0000 (0x0068 - 0x0068)
class UShooterState_UB_AltBurstFire : public UShooterState_UB_BurstFire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_AltBurstFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_AltFire
// 0x0000 (0x0060 - 0x0060)
class UShooterState_UB_AltFire : public UShooterState_UpperBody_Fire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_AltFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_ChargeFire
// 0x0010 (0x0060 - 0x0050)
class UShooterState_UB_ChargeFire : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_ChargeFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_GauntletSelfHeal
// 0x0000 (0x0050 - 0x0050)
class UShooterState_UB_GauntletSelfHeal : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_GauntletSelfHeal");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_PowerSlideIn
// 0x0000 (0x0050 - 0x0050)
class UShooterState_UB_PowerSlideIn : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_PowerSlideIn");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_PowerSlideOut
// 0x0000 (0x0050 - 0x0050)
class UShooterState_UB_PowerSlideOut : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_PowerSlideOut");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_Stagger
// 0x0000 (0x0050 - 0x0050)
class UShooterState_UB_Stagger : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_Stagger");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_SwapWeapon
// 0x0000 (0x0050 - 0x0050)
class UShooterState_UB_SwapWeapon : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_SwapWeapon");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_Throw
// 0x0008 (0x0058 - 0x0050)
class UShooterState_UB_Throw : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_Throw");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Upperbody_DuziSpin
// 0x0000 (0x0060 - 0x0060)
class UShooterState_Upperbody_DuziSpin : public UShooterState_UpperBody_Fire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Upperbody_DuziSpin");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UseItem
// 0x0018 (0x0068 - 0x0050)
class UShooterState_UseItem : public UShooterBaseState
{
public:
	class UAkAudioEvent*                               UseCompleteSound;                                         // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkAudioEvent*                               UseFailSound;                                             // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UseItem");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WallJump
// 0x0000 (0x0050 - 0x0050)
class UShooterState_WallJump : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WallJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WallJump_Back
// 0x0000 (0x0050 - 0x0050)
class UShooterState_WallJump_Back : public UShooterState_WallJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WallJump_Back");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WallJump_Left
// 0x0000 (0x0050 - 0x0050)
class UShooterState_WallJump_Left : public UShooterState_WallJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WallJump_Left");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WallJump_Right
// 0x0000 (0x0050 - 0x0050)
class UShooterState_WallJump_Right : public UShooterState_WallJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WallJump_Right");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithAirJump
// 0x0008 (0x0058 - 0x0050)
class UShooterState_WraithAirJump : public UShooterBaseState
{
public:
	float                                              AllowCancelTimer;                                         // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BufferedFire;                                             // 0x0054(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BufferedAltFire;                                          // 0x0055(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithAirJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ZipLineRide
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ZipLineRide : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ZipLineRide");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_EnergySwordAttack
// 0x0010 (0x0060 - 0x0050)
class UShooterState_EnergySwordAttack : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_EnergySwordAttack");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_UB_WeaponCharge
// 0x0010 (0x0060 - 0x0050)
class UShooterState_UB_WeaponCharge : public UShooterBaseState
{
public:
	float                                              ChargeTimer;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UAkSoundInstance*                            ChargeLoopAC;                                             // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_UB_WeaponCharge");
		return ptr;
	}

};


// Class ShooterGame.CityMaker
// 0x0080 (0x0418 - 0x0398)
class ACityMaker : public AActor
{
public:
	bool                                               bToggleToGenerate;                                        // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bToggleToDelete;                                          // 0x0399(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bLocked;                                                  // 0x039A(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x039B(0x0001) MISSED OFFSET
	int                                                BuildingCount;                                            // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	int                                                PropCount;                                                // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              OwnedActors;                                              // 0x03A8(0x0010) (ZeroConstructor)
	struct FCityMakerData                              CityMakerConfig;                                          // 0x03B8(0x0060) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CityMaker");
		return ptr;
	}

};


// Class ShooterGame.CustomAccountPortraitData
// 0x0040 (0x0068 - 0x0028)
class UCustomAccountPortraitData : public UDataAsset
{
public:
	class UObject*                                     SmallPortrait;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     MediumPortrait;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     LargePortrait;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SmallPortrait4k;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     MediumPortrait4k;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     LargePortrait4k;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFlipBook;                                              // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UTexture2D*                                  FlipBookTexture;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomAccountPortraitData");
		return ptr;
	}


	bool IsFlipBook();
	class UObject* GetSmallPortraitObject();
	class UObject* GetMediumPortraitObject();
	class UObject* GetLargePortraitObject();
};


// Class ShooterGame.CustomizationBlueprintActor
// 0x0008 (0x03A0 - 0x0398)
class ACustomizationBlueprintActor : public AActor
{
public:
	class AActor*                                      MyCustomizationOwner;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomizationBlueprintActor");
		return ptr;
	}


	void PlayWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound, class UParticleSystem* CustomMenuFX, TEnumAsByte<ECustomFXPerspective> MenuPerspective, bool bIsPrimary);
	void PlayOffHandWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound, class UParticleSystem* CustomMenuFX, TEnumAsByte<ECustomFXPerspective> MenuPerspective);
	void PlayCharacterCustomFX(class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride, bool bPlayInFirst, bool bPlayInThird);
	void OnStartCustomization();
	void OnKickKill();
	class UCameraComponent* GetLocalActiveCamera();
};


// Class ShooterGame.CustomizationContainerBlueprint
// 0x0008 (0x03A0 - 0x0398)
class ACustomizationContainerBlueprint : public AActor
{
public:
	class AActor*                                      MyCustomizationOwner;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomizationContainerBlueprint");
		return ptr;
	}


	void PlayWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound, bool bIsPrimary);
	void PlayOffHandWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound);
	void PlayCharacterCustomFX(class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride, bool bPlayInFirst, bool bPlayInThird);
	void OnStartCustomization();
};


// Class ShooterGame.CustomStickerData
// 0x0058 (0x0080 - 0x0028)
class UCustomStickerData : public UDataAsset
{
public:
	class UTexture*                                    DecalTexture;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFlipBook;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHolographic;                                           // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0032(0x000E) MISSED OFFSET
	struct FVector4                                    CustomDataA;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    customDataB;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DecalColor;                                               // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVScale;                                                  // 0x0064(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVScaleOffset;                                            // 0x006C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMetallic;                                              // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                ProjectionAxis;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUseAlphaForTransparency;                           // 0x007C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomStickerData");
		return ptr;
	}

};


// Class ShooterGame.DamageZone
// 0x0030 (0x03C8 - 0x0398)
class ADamageZone : public AActor
{
public:
	class UBoxComponent*                               CollisionComp;                                            // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             BaseFX;                                                   // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AppliedBuff;                                              // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDealDamageToAllies;                                      // 0x03B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	float                                              DamagePerSecond;                                          // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOnEnter;                                            // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOnExit;                                             // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    basePSU;                                                  // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DamageZone");
		return ptr;
	}

};


// Class ShooterGame.DialogueChannel
// 0x0068 (0x0090 - 0x0028)
class UDialogueChannel : public UObject
{
public:
	TArray<struct FDialogueLine>                       PlayingLines;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TMap<class UAkAudioEvent*, float>                  RecentlyPlayed;                                           // 0x0038(0x0050) (ZeroConstructor, Transient)
	uint32_t                                           Seed;                                                     // 0x0088(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DialogueChannel");
		return ptr;
	}

};


// Class ShooterGame.DialogueBlueprint
// 0x0010 (0x0038 - 0x0028)
class UDialogueBlueprint : public UObject
{
public:
	struct FName                                       ChannelName;                                              // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UDialogueChannel*                            AssociatedChannel;                                        // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DialogueBlueprint");
		return ptr;
	}


	void PlayDialogue(class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds, bool StopWhenOwnerDestroyed);
	class UWorld* GetAssociatedWorld();
	class AActor* GetAssociatedActor();
	void BlueprintTick(float DeltaTime);
};


// Class ShooterGame.ShooterLoadReferences
// 0x0000 (0x0028 - 0x0028)
class UShooterLoadReferences : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLoadReferences");
		return ptr;
	}

};


// Class ShooterGame.ShooterPawnData
// 0x0018 (0x0040 - 0x0028)
class UShooterPawnData : public UDataAsset
{
public:
	TArray<struct FShooterPawnInfo>                    PawnInfos;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UShooterCustomizationData*                   CustomizationData;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPawnData");
		return ptr;
	}

};


// Class ShooterGame.ShooterLootList
// 0x02C0 (0x02E8 - 0x0028)
class UShooterLootList : public UDataAsset
{
public:
	struct FLootClasses                                AllLootClasses;                                           // 0x0028(0x0220) (Edit, DisableEditOnInstance)
	TArray<TEnumAsByte<ELootType>>                     LootBucket_Level_1;                                       // 0x0248(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ELootType>>                     LootBucket_Level_2;                                       // 0x0258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ELootType>>                     LootBucket_Level_3;                                       // 0x0268(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ELootType>>                     LootBucket_Level_4;                                       // 0x0278(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ELootType>>                     LootBucket_Level_5;                                       // 0x0288(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ELootType>>                     LootBucket_Level_6;                                       // 0x0298(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ELootType>>                     LootBucket_Level_7;                                       // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGroundLootItem>                     LootTable;                                                // 0x02B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVendingMachineItem>                 VendingItems;                                             // 0x02C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVendingMachineItem>                 GearVendingItems;                                         // 0x02D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLootList");
		return ptr;
	}

};


// Class ShooterGame.ShooterCustomizationDefinition
// 0x00E8 (0x0110 - 0x0028)
class UShooterCustomizationDefinition : public UDataAsset
{
public:
	TArray<struct FShooterCustomizationInfo>           ThirdCustomizationSlots;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationInfo>           FirstPersonCustomizationSlots;                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterDeathDecalInfo>              CustomizationDeathDecals;                                 // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       DebugMeshSkinName;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DebugMaterialSkinName;                                    // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DebugKickDecalName;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FShooterCustomizationSkeletalMeshComponent> ProcessedFPSkins;                                         // 0x0070(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, struct FShooterCustomizationSkeletalMeshComponent> ProcessedTPSkins;                                         // 0x00C0(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationDefinition");
		return ptr;
	}

};


// Class ShooterGame.ShooterCameraBoomComponent
// 0x0030 (0x0300 - 0x02D0)
class UShooterCameraBoomComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCameraBoomComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterVendingMachine
// 0x0010 (0x03B8 - 0x03A8)
class AShooterVendingMachine : public AStaticMeshActor
{
public:
	struct FName                                       PriceParameter;                                           // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterPickup*                              MyPickup;                                                 // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterVendingMachine");
		return ptr;
	}


	void SetItemRarity(int ItemRarity);
	void OnItemPurchased();
	void OnInsufficientFunds();
	void NetMulticastPurchaseSucceeded();
	void NetMulticastPurchaseFailed();
};


// Class ShooterGame.ShooterPickup
// 0x0048 (0x03E0 - 0x0398)
class AShooterPickup : public AActor
{
public:
	TEnumAsByte<ELootType>                             MyLootType;                                               // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class FString                                      PickupName;                                               // 0x03A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPickupSoundType>                      PickupSoundCategory;                                      // 0x03B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                RarityOverride;                                           // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FinalCashCost;                                            // 0x03B8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        RarityStaticMeshComp;                                     // 0x03C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AShooterVendingMachine*                      VendingOwner;                                             // 0x03C8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPickup");
		return ptr;
	}


	void OnRep_VendingOwner();
	void OnRep_FinalCost();
	void OnPickupAlt(class AShooterCharacter* OtherActor);
	void OnPickup(class AShooterCharacter* OtherActor);
	void NetMulticastPlayPickupFX(class AShooterCharacter* OtherActor);
};


// Class ShooterGame.ShooterDecalArray
// 0x0010 (0x0038 - 0x0028)
class UShooterDecalArray : public UObject
{
public:
	TArray<struct FDecalData>                          Decals;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDecalArray");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameData
// 0x06E0 (0x0708 - 0x0028)
class UShooterGameData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UShooterPawnData*                            PawnData;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShooterLootList*                            LootData;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DebugSpawnClass;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MomentsEventMaxBufferTime;                                // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MomentsEventStartPaddingTime;                             // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MomentsEventEndPaddingTime;                               // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMitigation;                                         // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FirstPersonFOV;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinFirstPersonAspectRatio;                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFirstPersonAspectRatio;                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FirstPersonNearClippingPlane;                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnemyNearSpawnCheckRadius;                                // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeammateVisibilityDistance;                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmorRegenDelay;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthSegmentValue;                                       // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TAssetPtr<class UShooterGlobalUIData>              GlobalUIData;                                             // 0x0078(0x0020) (Edit)
	float                                              LowGravityFXEntryThreshold;                               // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LowGravityFXExitThreshold;                                // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IncreasedGravityFXEntryThreshold;                         // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IncreasedGravityFXExitThreshold;                          // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OutOfCombatDelay;                                         // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SelfImpulseGravityScaleCurve;                             // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SelfImpulseGravityDecayCurve;                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BreakersAnnouner;                                         // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LawAnnouner;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableReticleTargetFeedback;                             // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableOutOfCombatRegen;                                  // 0x00D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET
	TArray<struct FShooterBloodImpactData>             BloodImpacts;                                             // 0x00D8(0x0010) (Edit, ZeroConstructor)
	class UAkAudioEvent*                               CharacterSelect;                                          // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               KillBeep;                                                 // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillBeepDelayTime;                                        // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               MusicMute;                                                // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MusicUnMute;                                              // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DialogMute;                                               // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DialogUnMute;                                             // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelStart;                                               // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelEnd;                                                 // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ProfanityClean;                                           // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ProfanityMature;                                          // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               KillTauntVO;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KillTauntSwitchGroup;                                     // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ImpactPipSwitchGroup;                                     // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               KickKillTauntVO;                                          // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StingerAudioDelayTime;                                    // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           StingerSoundsPerLoop;                                     // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StingerAudioPriority;                                     // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EShooterPhysMaterialType>>      IgnoreFootSurfaces;                                       // 0x0170(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EShooterPhysMaterialType>>      IgnoreImpactSurfaces;                                     // 0x0180(0x0010) (Edit, ZeroConstructor)
	int                                                PrepareForCombatTime;                                     // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               PrepareForCombatEvent;                                    // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       CountdownTimerEvents;                                     // 0x01A0(0x0010) (Edit, ZeroConstructor)
	float                                              DamageImpactRetriggerDelay;                               // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageImpactDirectionalOffset;                            // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterDamageImpactSounds                  DamageImpactSounds;                                       // 0x01B8(0x0040) (Edit)
	struct FShooterDamageImpactSounds                  DamageImpactSoundsLocalUI;                                // 0x01F8(0x0040) (Edit)
	class UAkAudioEvent*                               OrbitalGravityBeginOrbitEvent;                            // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OrbitalGravityBreakOrbitEvent;                            // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               IdleWarningSound;                                         // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PickupFailSound;                                          // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             CashExplosion;                                            // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackerSwitchDotThreshold;                               // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackerSwitchDistanceThreshold;                          // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAttackerSwitchLineOfSight;                               // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<struct FPickupSoundPair>                    PickupSounds;                                             // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEvent*                               CashDropSound;                                            // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ATM_WithdrawSuccessSound;                                 // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ATM_DepositSuccessSound;                                  // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FShooterPhysicsVolumeOzoneConfig            OzoneConfig;                                              // 0x0298(0x0020) (Edit)
	float                                              TrackRecentDamageTakenTime;                               // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumDamageSources;                                      // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelDebuffScale;                                         // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterEndOfMatchConfig                    EndOfMatchConfig;                                         // 0x02C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FShooterChaseCamSettings                    ChaseCamSettings;                                         // 0x02D0(0x0080) (Edit)
	class UClass*                                      ItemSpawnedOnKill;                                        // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FShooterCustStickerSlot>             CustomStickers;                                           // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BunnyHopTimer;                                            // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaveSpawnThreshold;                                       // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupRadius;                                             // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdrenalineToDamageMultiplier;                             // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdrenalineFromKill;                                       // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdrenalineFromDoorSmash;                                  // 0x037C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsPickupUpSpeed;                                     // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsPickupAwaySpeed;                                   // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsPickupAwaySpeedMax;                                // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownStateBleedOut;                                        // 0x038C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CashPickupMultiplierForTeams;                             // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ATM_Duration;                                             // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveHP;                                                 // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MyTeamColor;                                              // 0x039C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EnemyTeamColor;                                           // 0x03AC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MyTeamColorSecondary;                                     // 0x03BC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EnemyTeamColorSecondary;                                  // 0x03CC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NeutralPrimary;                                           // 0x03DC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NeutralSecondary;                                         // 0x03EC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LawPrimary;                                               // 0x03FC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LawSecondary;                                             // 0x040C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BreakerPrimary;                                           // 0x041C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BreakerSecondary;                                         // 0x042C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HealerColor;                                              // 0x043C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterHealthBarColors                     FriendlyHealthBarColors;                                  // 0x044C(0x0044) (Edit)
	struct FShooterHealthBarColors                     EnemyHealthBarColors;                                     // 0x0490(0x0044) (Edit)
	struct FShooterHealthBarColors                     LawHealthBarColors;                                       // 0x04D4(0x0044) (Edit)
	struct FShooterHealthBarColors                     BreakerHealthBarColors;                                   // 0x0518(0x0044) (Edit)
	struct FShooterHealthBarColors                     SpectatorScoreboardHealthBarColors;                       // 0x055C(0x0044) (Edit)
	int                                                LawDepthStencilValue;                                     // 0x05A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BreakersDepthStencilValue;                                // 0x05A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnExitBuff;                                            // 0x05A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultPistol;                                            // 0x05B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultMeleeWeapon;                                       // 0x05B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TerminatorWeapon;                                         // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnPrize;                                               // 0x05C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterCameraOffsetInfo                    OTSCameraOffsetInfo;                                      // 0x05D0(0x0018) (Edit)
	struct FShooterCameraOffsetInfo                    HipFireCameraOffsetInfo;                                  // 0x05E8(0x0018) (Edit)
	float                                              IndoorCameraArmLength;                                    // 0x0600(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndoorCameraDampFactor;                                   // 0x0604(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CeilingTraceLength;                                       // 0x0608(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StanceChangeCameraDampFactor;                             // 0x060C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WeaponDropOffset;                                         // 0x0610(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DomeRadius;                                               // 0x061C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnHeight;                                              // 0x0620(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRadius;                                              // 0x0624(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MapClosureSize;                                           // 0x0628(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileSize;                                           // 0x062C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileGravity;                                        // 0x0630(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OnLandingSpeedMultiplier;                                 // 0x0634(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OnLandingSprintDelay;                                     // 0x0638(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecycleRange;                                             // 0x063C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CombatRollCancelTime;                                     // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardLandingCancelTime;                                    // 0x0644(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoPerType;                                           // 0x0648(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AmmoCapacityPerPack;                                      // 0x064C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MapClosureGridSize;                                       // 0x0650(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AttachmentDropWeight_Level0;                              // 0x0654(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AttachmentDropWeight_Level1;                              // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AttachmentDropWeight_Level2;                              // 0x065C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AttachmentDropWeight_Level3;                              // 0x0660(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VendingAttachmentRollBonus;                               // 0x0664(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayersPerStartingArea;                                   // 0x0668(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	TArray<struct FShooterArmorConfig>                 BodyArmorConfigs;                                         // 0x0670(0x0010) (Edit, ZeroConstructor)
	TArray<struct FShooterArmorConfig>                 HeadArmorConfigs;                                         // 0x0680(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              SpawnableVehicles;                                        // 0x0690(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      PhysicsPickup;                                            // 0x06A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterNameCatalogue                       BotNameCatalogue;                                         // 0x06A8(0x0040) (Edit, DisableEditOnInstance)
	class UStruct*                                     WeaponAnimData;                                           // 0x06E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPickupDelay;                                          // 0x06F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	TArray<class FString>                              BotNames;                                                 // 0x06F8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameData");
		return ptr;
	}


	class UShooterGameData* STATIC_Get();
};


// Class ShooterGame.ShooterDialogueAnnouncer
// 0x0008 (0x0040 - 0x0038)
class UShooterDialogueAnnouncer : public UDialogueBlueprint
{
public:
	TEnumAsByte<EShooterAllegiance>                    Allegiance;                                               // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDialogueAnnouncer");
		return ptr;
	}


	void OnRoundEnd();
	void OnGameStarted();
	void OnGameEnded();
	class AShooterPlayerController* GetLocalPlayerController();
	class AShooterCharacter* GetLocalCharacter();
};


// Class ShooterGame.ShooterGameSettings
// 0x0018 (0x0040 - 0x0028)
class UShooterGameSettings : public UObject
{
public:
	TArray<struct FGravityBubblePreset>                GravityBubbleTypes;                                       // 0x0028(0x0010) (ZeroConstructor, Config)
	float                                              GlobalHealthModifier;                                     // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameSettings");
		return ptr;
	}

};


// Class ShooterGame.ShooterPhysicsVolume_Gravity
// 0x0060 (0x0430 - 0x03D0)
class AShooterPhysicsVolume_Gravity : public AVolume
{
public:
	struct FGravityVolumeData                          GravityVolumeConfig;                                      // 0x03D0(0x0060) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPhysicsVolume_Gravity");
		return ptr;
	}


	void SetVolumeGravityType(TEnumAsByte<EGravityBubble> NewGravityType);
};


// Class ShooterGame.ShooterGravitySeed
// 0x0130 (0x04C8 - 0x0398)
class AShooterGravitySeed : public AActor
{
public:
	class USphereComponent*                            CollisionComp;                                            // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EffectPSC;                                                // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             IntroEffectTemplate;                                      // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeamIntroEffectTemplate;                                  // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EffectTemplate;                                           // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeamEffectTemplate;                                       // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             OuttroEffectTemplate;                                     // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeamOuttroEffectTemplate;                                 // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGravityVolumeData                          GravityVolumeConfig;                                      // 0x03D8(0x0060) (Edit, DisableEditOnInstance)
	struct FGravitySeedData                            GravitySeedConfig;                                        // 0x0438(0x0070) (Edit, DisableEditOnInstance)
	bool                                               SpawnEffectTemplateDetached;                              // 0x04A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UAkSoundInstance*                            ActiveSound;                                              // 0x04B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamagePerSecond;                                          // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Attached;                                                 // 0x04BC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET
	float                                              SoundRetriggerTimer;                                      // 0x04C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ActiveTimer;                                              // 0x04C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGravitySeed");
		return ptr;
	}


	float GetProjectileGravityScale();
};


// Class ShooterGame.ShooterGameUtils
// 0x0000 (0x0028 - 0x0028)
class UShooterGameUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameUtils");
		return ptr;
	}


	class AActor* STATIC_SpawnPhysicsPickup(class AActor* SourceActor, const struct FVector& InitialDirection);
	void STATIC_SpawnBloodSplatterDecals(class AActor* FromActor, class UClass* DecalArray, const struct FVector& StartLocation, const struct FVector& Direction, float RandomAngle, int NumDecals, bool bSpawnOnActor);
	class UParticleSystemComponent* STATIC_ShooterSpawnEmitterAttached(class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride);
	class UParticleSystemComponent* STATIC_ShooterSpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	void STATIC_SetSurfaceSwitch(TEnumAsByte<EShooterPhysMaterialType> SurfaceType, class AActor* Owner, bool bIsImpact);
	void STATIC_SetScalarParamForAllMaterialsForAllMeshes(class AShooterCharacter* playerCharacter, const struct FName& ParamName, float ParamVal);
	void STATIC_SetScalarParamForAllMaterials(class USkeletalMeshComponent* InMesh, const struct FName& ParamName, float ParamVal);
	bool STATIC_PredictProjectilePath(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, bool bIgnoreNonBlocking, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	void STATIC_PlayVoiceOver(class UObject* WorldContextObject, const struct FVoiceOverData& VOData, int TeamNum, class AShooterCharacter* ObjectivePlayer);
	void STATIC_PlayDialogueTeamSpecific(class UObject* WorldContextObject, class UAkAudioEvent* FriendlyEvent, class UAkAudioEvent* EnemyEvent, class UAkAudioEvent* ObjectivePlayerEvent, class UAkAudioEvent* SpectatorLawEvent, class UAkAudioEvent* SpectatorBreakersEvent, int TeamNumber, class AShooterCharacter* ObjectivePlayer, int Priority, float MinReplayTime, float MaxWaitTime, float Delay, TEnumAsByte<EDialogueConflictResolution> SamePrioConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPrioConflictResolution, bool bSkipEnemyIfEmpty);
	class UAkSoundInstance* STATIC_PlayAkAudioEventInEarsTeamSpecific(class UObject* WorldContextObject, int TeamNum, class UAkAudioEvent* FriendlyEvent, class UAkAudioEvent* EnemyEvent, class UAkAudioEvent* SpectatorEvent);
	class UAkSoundInstance* STATIC_PlayAkAudioEventInEars(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent);
	bool STATIC_LineTraceActors(class AActor* Source, class AActor* Destination, bool bIgnorePlayers, float MaxDistance, TEnumAsByte<ECollisionChannel> CollisionOverride);
	bool STATIC_IsPS4Build();
	bool STATIC_IsPositionInWarningOrDangerZone(class UObject* WorldContextObject, const struct FVector& Pos);
	bool STATIC_IsPositionInsideDome(class UObject* WorldContextObject, const struct FVector& CheckLocation);
	bool STATIC_IsPositionInDangerZone(class UObject* WorldContextObject, const struct FVector& Pos);
	bool STATIC_IsInEditor(class UObject* WorldContextObject, bool bIncludePlayInEditor);
	bool STATIC_IsGoreEnabled();
	bool STATIC_IsFriendlyTeamForViewedPlayer(class UObject* WorldContextObject, int TeamNum, bool bFreeCamIsFriendly);
	bool STATIC_IsFriendlyTeamForLocalPlayer(class UObject* WorldContextObject, int TeamNum, bool bFreeCamIsFriendly);
	void STATIC_HideCharacter(class AShooterCharacter* Player, bool Hidden);
	int STATIC_GetViewedPlayerTeamNum(class UObject* WorldContextObject);
	void STATIC_GetShooterProjectilesInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterProjectile*>* OutShooterProjectiles);
	class AShooterHUD* STATIC_GetShooterHUD(class UObject* WorldContextObject);
	void STATIC_GetShooterDroidsInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterBaseDroid*>* OutShooterDroids);
	void STATIC_GetShooterCharactersPartitionedByRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterCharacter*>* OutShooterCharactersInRadius, TArray<class AShooterCharacter*>* OutShooterCharactersOutOfRadius);
	void STATIC_GetShooterCharactersInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters);
	class AShooterFlag* STATIC_GetShooterCharacterCarryingFlag(class AShooterCharacter* Shooter);
	TEnumAsByte<ECardinalDirection> STATIC_GetPlayerMovementCardinalDirection(class AShooterCharacter* Player);
	int STATIC_GetNumLiveAndNotDownCharactersOnTeam(class UWorld* World, int Team);
	struct FLinearColor STATIC_GetNeutralColorSecondary();
	struct FLinearColor STATIC_GetNeutralColorPrimary();
	struct FLinearColor STATIC_GetMyTeamColorSecondary();
	struct FLinearColor STATIC_GetMyTeamColor();
	class UShooterHudWidget* STATIC_GetMainHudWidget(class UObject* WorldContextObject);
	int STATIC_GetLocalTeamNum(class UObject* WorldContextObject);
	class AShooterCharacter* STATIC_GetLocallyControlledOrSpectatedCharacter(class UObject* WorldContextObject);
	TArray<class AActor*> STATIC_GetLiveCharactersOnTeamAsActors(class UWorld* World, int Team);
	TArray<class AShooterCharacter*> STATIC_GetLiveCharactersOnTeam(class UWorld* World, int Team);
	struct FVector STATIC_GetInterceptLocation(float ObjSpeed, const struct FVector& ObjPos, const struct FVector& TargetPos, const struct FVector& TargetVelocity, const struct FVector& TargetAccel, int InMaxInterations);
	void STATIC_GetGravitySeedsInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterGravitySeed*>* OutSeeds);
	void STATIC_GetFriendsNearPosition(class AController* InInstigator, const struct FVector& Position, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters);
	class AShooterFlag* STATIC_GetFlagFromTeamNum(class UObject* WorldContext, int TeamNumber);
	struct FLinearColor STATIC_GetEnemyTeamColorSecondary();
	struct FLinearColor STATIC_GetEnemyTeamColor();
	void STATIC_GetEnemiesNearPosition(class AController* InInstigator, const struct FVector& Position, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters);
	void STATIC_GetEnemiesNearCharacter(class AShooterCharacter* InCharacter, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters);
	float STATIC_GetDistanceToFloor(class AShooterCharacter* Player);
	float STATIC_GetCursorizedRightVelocity(class AShooterCharacter* Player);
	float STATIC_GetCursorizedForwardVelocity(class AShooterCharacter* Player);
	struct FVector STATIC_GetClosestPointOnGroundAround(class UObject* WorldContextObject, const struct FVector& Pos, float InRadius);
	class AShooterCharacter* STATIC_GetClosestCharacterToPosition(class UObject* WorldContextObject, const struct FVector& Position, float MaxRange, int TeamNum);
	TEnumAsByte<ECardinalDirection> STATIC_GetCardinalDirection(const struct FVector& Input, const struct FVector& Forward, const struct FVector& Right);
	float STATIC_GetAnimMorphTarget(class USkeletalMeshComponent* SkeletalMesh, const struct FName& MorphTargetName);
	float STATIC_GetAmmoCursor(class AShooterCharacter* Player);
	void STATIC_GetAllShooterCharacters(class UObject* WorldContextObject, TArray<class AShooterCharacter*>* OutShooterCharacters);
	void STATIC_GetAllActorsOfClassFromWorld(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	void STATIC_FindClosestLOSAllies(class AShooterCharacter* SourceCharacter, float MaxDistance, TArray<class AShooterCharacter*>* OutShooterCharacters);
	bool STATIC_EnableMultiPassOnActorWithMaterial(class AShooterCharacter* TheCharacter, class UMaterialInterface* MaterialForMultipass, bool bShouldIncludeWeapon);
	void STATIC_DisableMultiPassOnActor(class AShooterCharacter* TheCharacter, bool bShouldIncludeWeapon);
	struct FVector STATIC_DampVector(const struct FVector& Source, const struct FVector& Target, float DeltaTime, float DampFactor);
	float STATIC_DampFloat(float Source, float Target, float DeltaTime, float DampFactor);
	TEnumAsByte<ECardinalDirection> STATIC_ComputePlayerMovementCardinalDirection(class AShooterCharacter* Player);
	class AShooter_BuffBase* STATIC_BluePrintSpawnNewBuff(class AActor* Target, class UClass* BuffToCreate, class AActor* Instigator, int TeamNum);
	class AShooterCharacter* STATIC_BlueprintGetClosestShooterCharacterToAim(class AShooterCharacter* Source, float BillBoardX, float BillBoardY, float MaxRange, bool bSearchForTeammates, bool bSearchForAll);
	void STATIC_ActiveButton_SetButton(class UButton* B, struct FActiveButton* ActiveButton);
	void STATIC_ActiveButton_Deactivate(struct FActiveButton* ActiveButton);
	struct FActiveButton STATIC_ActiveButton_CreateButton(class UButton* B);
	void STATIC_ActiveButton_Activate(struct FActiveButton* ActiveButton);
};


// Class ShooterGame.ShooterAbility
// 0x00D8 (0x01D8 - 0x0100)
class UShooterAbility : public UActorComponent
{
public:
	struct FShooterAbilityData                         AbilityConfig;                                            // 0x0100(0x0078) (Edit)
	class AShooterCharacter*                           ShooterCharacterOwner;                                    // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AbilityInputName;                                         // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentActiveTime;                                        // 0x0188(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreviousFOV;                                              // 0x018C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0190(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasStartedNotLanded;                                     // 0x0191(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideInputAcceleration;                               // 0x0192(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideInputMaxSpeed;                                   // 0x0193(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIgnoreAllGravity;                                        // 0x0194(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UShooterStateMachineComponent> StateMachineComponent;                                    // 0x0198(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bOverrideBrakingFlyingDecel;                              // 0x01A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	bool                                               bJustDied;                                                // 0x01A4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x01A5(0x0024) MISSED OFFSET
	bool                                               bAbilityInputLocked;                                      // 0x01C9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
	unsigned char                                      CurrentCoolDownTimeCompressed;                            // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility");
		return ptr;
	}


	void StopAbility();
	bool StartAbility();
	bool ShouldOverrideMaxSpeed();
	bool ShouldOverrideBrakingFlyDecel();
	bool ShouldOverrideAccel();
	void SetOverrideMaxSpeed(bool ShouldOverride);
	void SetOverrideBrakingFlyingDecel(bool ShouldOverride);
	void SetOverrideAccel(bool ShouldOverride);
	void SetIgnoreGravity(bool ShouldIgnore);
	void ServerStopAbility();
	void ServerStartAbility();
	void RequestCooldown();
	void ReplenishFuel();
	void OnRep_CurrentCooldownTimeCompressed();
	void OnReceiveDamagePreMitigation(float DamageTaken);
	void OnLand(const struct FHitResult& Hit, float Falldistance);
	void OnKillorAssist(class AShooterPlayerState* KilledPlayer);
	void OnJump();
	void OnImpact(const struct FHitResult& Hit);
	void OnHealReceived(float HealAmount);
	void OnHealPerformed(float HealAmount);
	void OnGlobalDeath(class AShooterPlayerState* KilledPlayer);
	void OnFriendSpawned(class AShooterCharacter* SpawnedFriend);
	void OnFireWeapon();
	void OnFall();
	void OnDeath(class AShooterPlayerState* InKillerState, const struct FDamageEvent& InDamageEvent);
	void OnDamageDealt(float DamageDealt);
	void OnAbilityUpdate();
	void OnAbilityStop();
	void OnAbilityStart();
	void NetMulticastStopAbility();
	void NetMulticastStartFOVTransitionOut();
	void NetMulticastStartAbility();
	bool IsCoolDownReady();
	bool IsAbilityAvailable();
	bool IsAbilityActive();
	bool HasCoolDown();
	class AShooterCharacter* GetShooterCharacterOwner();
	bool GetOverrideAccel();
	float GetMaxSpeedMultiplier();
	float GetMaxSpeed();
	float GetMaxAcceleration();
	bool GetIgnoreGravity();
	float GetFlyingBrakingDecel();
	struct FVector GetCurrentAcceleration();
	float GetCoolDownPercent();
	int GetChargeCount();
	void ClientStopAbility();
	void ClientStartAbility();
	void ClientNotifyRechargeCompleted();
	void ClientCooldownStarted();
	void ClientCancelAbility();
	void ActivateSpecialAbilityKick();
};


// Class ShooterGame.ShooterGameplayAbilitySet
// 0x0010 (0x0038 - 0x0028)
class UShooterGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FShooterAbilityBindInfo>             Abilities;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameplayAbilitySet");
		return ptr;
	}

};


// Class ShooterGame.ShooterDialogueCharacter
// 0x0010 (0x0048 - 0x0038)
class UShooterDialogueCharacter : public UDialogueBlueprint
{
public:
	bool                                               bUseGlobalChannelForLocalPlayer;                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGlobalChannelForNonLocalPlayer;                       // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              ImpactSwitchResetDuration;                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AllyObjectiveEncourageRadius;                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AllyObjectiveAffirmRadius;                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDialogueCharacter");
		return ptr;
	}


	void PlaySoundOnCharacter(class UAkAudioEvent* Sound, bool StopWhenOwnerIsDestroyed);
	void OnTaunt();
	void OnTargeting();
	void OnTargetHitConfirmation(bool UsedPrimaryWeapon, bool UsedSecondaryWeapon, TEnumAsByte<EShooterClass> HitClass);
	void OnSwipeHitFlesh();
	void OnSwipeHitArmor();
	void OnStopAbility(class UShooterAbility* Ability);
	void OnStartAbility(class UShooterAbility* Ability);
	void OnSplitterFullyCharged();
	void OnSelfHitConfirmation();
	void OnRunStop();
	void OnRunLoop();
	void OnRespawn(class UShooterCharacterDefinition* CharacterDefinition);
	void OnReceivedEnforcerBuff();
	void OnOniWrathStart();
	void OnOniWrathEnd();
	void OnNinjaKickImpact();
	void OnMedicHeal();
	void OnMedicDroneSent();
	void OnLowHealth();
	void OnKill(TEnumAsByte<EShooterGang> KilledGang, bool WasKick, TEnumAsByte<EShooterClass> KilledClass, TEnumAsByte<EAbilityType> KillerAbilityType);
	void OnHitVocal(TEnumAsByte<EAudioDamageCategory> DamageCategory, float DamageTaken);
	void OnHealSomeone(int HealAmount, class AShooterCharacter* PawnYouHealed, float PreviousHealthPercentage, float NewHealthPercentage);
	void OnHealedBy(int HealAmount, class AShooterCharacter* Healer, class AActor* HealCauser, float PreviousHealthPercentage, float NewHealthPercentage);
	void OnHawkeyeUntag();
	void OnHawkeyeTag();
	void OnGrappleImpactWall();
	void OnGrappleImpactEnemy();
	void OnGaveEnforcerBuff();
	void OnFlagCapture();
	void OnDeath(TEnumAsByte<EAudioDamageCategory> KillingDamageCategory);
	void OnDamageWarningBelow();
	void OnDamageWarningBehind();
	void OnDamageWarningAbove();
	void OnCheerAllyKill(TEnumAsByte<EShooterClass> CheerTargetClass);
	void OnBatteryPickup();
	void OnBatteryDrop();
	void OnArmorBreak();
	void OnAllyObjectiveEncourage();
	void OnAllyObjectiveAffirm();
	void OnAbilityFail();
	class AShooterCharacter* GetShooterCharacter();
	TEnumAsByte<EShooterClass> FindTauntTarget(float DeltaX, float DeltaY, float Range);
	void FindKillCheerAlly(class AShooterCharacter* Killer, float MaxDistance);
};


// Class ShooterGame.DialogueChannelActor
// 0x0008 (0x03A0 - 0x0398)
class ADialogueChannelActor : public AActor
{
public:
	class UDialogueChannel*                            DialogueChannel;                                          // 0x0398(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DialogueChannelActor");
		return ptr;
	}

};


// Class ShooterGame.DoorNavLinkProxy
// 0x0000 (0x03E8 - 0x03E8)
class ADoorNavLinkProxy : public ANavLinkProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DoorNavLinkProxy");
		return ptr;
	}

};


// Class ShooterGame.FlyingDroneMovementComponent
// 0x0020 (0x01C0 - 0x01A0)
class UFlyingDroneMovementComponent : public UFloatingPawnMovement
{
public:
	struct FVector                                     MovePosition;                                             // 0x01A0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x01AC(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMoveActive;                                              // 0x01B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.FlyingDroneMovementComponent");
		return ptr;
	}


	void ServerSetMovePosition(const struct FVector& MovePos);
	void ClientSetNewPos(const struct FVector& Pos);
};


// Class ShooterGame.GameMode_Menu
// 0x0010 (0x0490 - 0x0480)
class AGameMode_Menu : public AGameMode
{
public:
	class UTexture2D*                                  MapGridTexture;                                           // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.GameMode_Menu");
		return ptr;
	}

};


// Class ShooterGame.GraphWidget
// 0x0038 (0x0270 - 0x0238)
class UGraphWidget : public UUserWidget
{
public:
	int                                                MaxSamples;                                               // 0x0238(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalScale;                                            // 0x023C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoVerticalScale;                                        // 0x0240(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	TArray<struct FMinMaxColoredRange>                 ColorRanges;                                              // 0x0248(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Samples;                                                  // 0x0258(0x0010) (ZeroConstructor, Transient)
	int                                                OldestSampleIndex;                                        // 0x0268(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x026C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.GraphWidget");
		return ptr;
	}


	void AddSample(int InValue);
};


// Class ShooterGame.HealthBar
// 0x07D8 (0x08F0 - 0x0118)
class UHealthBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FProgressBarStyle                           HealthWidgetStyle;                                        // 0x0120(0x01C0) (Edit, BlueprintVisible)
	struct FLinearColor                                HealthFillColorAndOpacity;                                // 0x02E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             HealthFillColorAndOpacityDelegate;                        // 0x02F0(0x0014) (ZeroConstructor, InstancedReference)
	struct FProgressBarStyle                           HealthLossWidgetStyle;                                    // 0x0300(0x01C0) (Edit, BlueprintVisible)
	struct FLinearColor                                HealthLossFillColorAndOpacity;                            // 0x04C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             HealthLossFillColorAndOpacityDelegate;                    // 0x04D0(0x0014) (ZeroConstructor, InstancedReference)
	struct FProgressBarStyle                           ArmorWidgetStyle;                                         // 0x04E0(0x01C0) (Edit, BlueprintVisible)
	struct FLinearColor                                ArmorFillColorAndOpacity;                                 // 0x06A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             ArmorFillColorAndOpacityDelegate;                         // 0x06B0(0x0014) (ZeroConstructor, InstancedReference)
	struct FProgressBarStyle                           ArmorLossWidgetStyle;                                     // 0x06C0(0x01C0) (Edit, BlueprintVisible)
	struct FLinearColor                                ArmorLossFillColorAndOpacity;                             // 0x0880(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             ArmorLossFillColorAndOpacityDelegate;                     // 0x0890(0x0014) (ZeroConstructor, InstancedReference)
	float                                              ArmorBarPercent;                                          // 0x08A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LowHealthWarningColorAndOpacity;                          // 0x08A4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             LowHealthWarningColorAndOpacityDelegate;                  // 0x08B8(0x0014) (ZeroConstructor, InstancedReference)
	float                                              LowHealthWarningPercent;                                  // 0x08C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldFillRightToLeft;                                    // 0x08CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	float                                              LossShrinkSpeed;                                          // 0x08D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewLossVisibleTime;                                       // 0x08D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x08D8(0x0010) MISSED OFFSET
	class AShooterCharacter*                           AttachedCharacter;                                        // 0x08E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HealthBar");
		return ptr;
	}


	void SetHealthValueDirectlyNoAnimation();
	void SetHealthFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetCharacter(class AShooterCharacter* Character);
	void SetArmorFillColorAndOpacity(const struct FLinearColor& InColor);
};


// Class ShooterGame.LetterBoxWidget
// 0x0018 (0x0148 - 0x0130)
class ULetterBoxWidget : public UContentWidget
{
public:
	float                                              ScalePercentage;                                          // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawBlackBorders;                                        // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreHUDScale;                                          // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12];                                      // 0x0136(0x0012) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.LetterBoxWidget");
		return ptr;
	}

};


// Class ShooterGame.MapMarkerManager
// 0x00E0 (0x0108 - 0x0028)
class UMapMarkerManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    ComponentMarkerAdded;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ComponentMarkerRemoved;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FPlayerMarker                               LocalPlayerMarker;                                        // 0x0048(0x001C) (Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TMap<uint32_t, struct FPlayerMarker>               SquadMarkers;                                             // 0x0068(0x0050) (ZeroConstructor, Transient)
	TMap<uint32_t, TWeakObjectPtr<class UMapMarkerComponent>> ComponentMarkers;                                         // 0x00B8(0x0050) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.MapMarkerManager");
		return ptr;
	}


	void ComponentMarkerRemoved__DelegateSignature(uint32_t ComponentID);
	void ComponentMarkerAdded__DelegateSignature(uint32_t ComponentID);
};


// Class ShooterGame.MapMarkerComponent
// 0x0028 (0x0128 - 0x0100)
class UMapMarkerComponent : public UActorComponent
{
public:
	struct FComponentMarker                            MarkerData;                                               // 0x0100(0x0018) (Edit, BlueprintVisible)
	TArray<class UWidget*>                             Widgets;                                                  // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.MapMarkerComponent");
		return ptr;
	}

};


// Class ShooterGame.RecordablePlayerController
// 0x0000 (0x06C8 - 0x06C8)
class ARecordablePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.RecordablePlayerController");
		return ptr;
	}

};


// Class ShooterGame.ShooterReplicatedMovingObject
// 0x0068 (0x0400 - 0x0398)
class AShooterReplicatedMovingObject : public AActor
{
public:
	float                                              SnapThreshold;                                            // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x039C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterReplicatedMovingObject");
		return ptr;
	}

};


// Class ShooterGame.ShooterBaseDroid
// 0x0130 (0x0530 - 0x0400)
class AShooterBaseDroid : public AShooterReplicatedMovingObject
{
public:
	struct FDroidData                                  DroidConfig;                                              // 0x0400(0x0048) (Edit, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Mesh3p;                                                   // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              Health;                                                   // 0x0458(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class UAkSoundInstance*                            IdleAC;                                                   // 0x0460(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerController*                    ShooterOwner;                                             // 0x0468(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x0470(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooterCharacter*                           PlayerTarget;                                             // 0x0478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FHitResult                                  CachedImpact;                                             // 0x0480(0x0088) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	class AShooterCharacter*                           TargetActor;                                              // 0x0510(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0518(0x0008) MISSED OFFSET
	class AActor*                                      AttachTarget;                                             // 0x0520(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBaseDroid");
		return ptr;
	}


	void ReceiveDetonate();
	void OnRep_SetShooterOwner();
	void NetMultiCastStartFX(class UParticleSystem* FXtoPlay, class UAkAudioEvent* SoundToPlay, class UParticleSystemComponent* StateFxComp, class UParticleSystem* TeamFXtoPlay, bool bSpawnAttached);
	void NetMultiCastPlayDisableFX(bool bDestroyed);
	void NetMultiCastPlayActiveFX();
	void Detonate();
	void AttachToPlayer(class AShooterCharacter* PlayerToAttach);
};


// Class ShooterGame.ShooterPlayerController
// 0x0548 (0x0C10 - 0x06C8)
class AShooterPlayerController : public ARecordablePlayerController
{
public:
	struct FScriptMulticastDelegate                    OnDedicatedSpectatorToggled;                              // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorPlayerChosen;                                  // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorXRayVisionToggled;                             // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorToolbarToggled;                                // 0x06F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorLoadoutToggled;                                // 0x0708(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorHUDToggled;                                    // 0x0718(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorGameModeToggled;                               // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorScoreboardToggled;                             // 0x0738(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorSettingsToggled;                               // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorSettingSelect;                                 // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorSettingChange;                                 // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorLoadoutShouldBeVisible;                        // 0x0778(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorHUDShouldBeVisible;                            // 0x0788(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorTargetLoading;                                 // 0x0798(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bAllowGameActions : 1;                                    // 0x07A8(0x0001) (Transient)
	bool                                               bIsInCharSelect;                                          // 0x07A9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLockAbilityUse;                                          // 0x07AA(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x07AB(0x0005) MISSED OFFSET
	class AShooterObjectiveZone*                       CurrentObjectiveZone;                                     // 0x07B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET
	class AActor*                                      RandomLevelCamera;                                        // 0x07C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HighlightStartTimeStamp;                                  // 0x07C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HighlightsEndTimeStamp;                                   // 0x07CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HighlightsBufferTime;                                     // 0x07D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TotalHighlightsBufferTime;                                // 0x07D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHighlightStarted;                                        // 0x07D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x07D9(0x0017) MISSED OFFSET
	TArray<class AShooterBaseDroid*>                   RegisteredDroids;                                         // 0x07F0(0x0010) (ZeroConstructor, Transient)
	struct FStreamableManager                          AssetLoader;                                              // 0x0800(0x0100) (Transient)
	class UCameraComponent*                            CameraComponent;                                          // 0x0900(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereComponent;                                          // 0x0908(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UShooterPostPhysicsControllerComponent*      PostPhysComp;                                             // 0x0910(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0918(0x0014) MISSED OFFSET
	unsigned char                                      bHealthRegen : 1;                                         // 0x092C(0x0001) (Net, Transient)
	unsigned char                                      bGodMode : 1;                                             // 0x092C(0x0001) (Net, Transient)
	unsigned char                                      bIsFrozen : 1;                                            // 0x092C(0x0001) (Transient)
	unsigned char                                      bTakeScreenShot : 1;                                      // 0x092C(0x0001) (Transient)
	unsigned char                                      bTakeScreenShotDepth : 1;                                 // 0x092C(0x0001) (Transient)
	unsigned char                                      IsControllerWinner : 1;                                   // 0x092C(0x0001) (Transient)
	unsigned char                                      UnknownData04[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	float                                              SpawnTimeForCurrentPawn;                                  // 0x0930(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UShooterDialogueAnnouncer*                   DialogueAnnouncer;                                        // 0x0938(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      CurrentCharacterName;                                     // 0x0940(0x0010) (ZeroConstructor, Transient)
	struct FName                                       LoadCurrentCharacterName;                                 // 0x0950(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0958(0x0018) MISSED OFFSET
	bool                                               bUseCleanProfanity;                                       // 0x0970(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bEndMatchActive : 1;                                      // 0x0971(0x0001) (Transient)
	unsigned char                                      bWinnersPodiumActive : 1;                                 // 0x0971(0x0001) (Transient)
	unsigned char                                      bSpectatorMouseEnabled : 1;                               // 0x0971(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorXRayVisionEnabled : 1;                          // 0x0971(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorToolbarEnabled : 1;                             // 0x0971(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorLoadoutEnabled : 1;                             // 0x0971(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorHUDEnabled : 1;                                 // 0x0971(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorReticleEnabled : 1;                             // 0x0971(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorKillFeedEnabled : 1;                            // 0x0972(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorChatEnabled : 1;                                // 0x0972(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorGameModeEnabled : 1;                            // 0x0972(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorScoreboardEnabled : 1;                          // 0x0972(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorSettingsEnabled : 1;                            // 0x0972(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSpectatorAllowPlayerCycle : 1;                           // 0x0972(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData07[0x15];                                      // 0x0973(0x0015) MISSED OFFSET
	struct FName                                       CustomCharacterSkinName;                                  // 0x0988(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomCharacterSkinMaterialName;                          // 0x0990(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponASkinName;                                    // 0x0998(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponASkinMaterialName;                            // 0x09A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponBSkinName;                                    // 0x09A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponBSkinMaterialName;                            // 0x09B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponOneStickerName;                               // 0x09B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponTwoStickerName;                               // 0x09C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomKickDeathDecalName;                                 // 0x09C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponADeathDecalName;                              // 0x09D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CustomWeaponBDeathDecalName;                              // 0x09D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpectatorTargetChanged;                                 // 0x09E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class AActor*>                              LevelCameras;                                             // 0x09F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnOneTeammateLeft;                                        // 0x0A00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryUpdate;                                        // 0x0A10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AShooterCharacter*                           LastKillerCharacter;                                      // 0x0A20(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldPawnSkipSpawnVO;                                   // 0x0A28(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsChatActive;                                            // 0x0A29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x12];                                      // 0x0A2A(0x0012) MISSED OFFSET
	struct FGuid                                       MatchGuid;                                                // 0x0A3C(0x0010) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x30];                                      // 0x0A4C(0x0030) MISSED OFFSET
	bool                                               bCanChangeClassInPlace;                                   // 0x0A7C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAlwaysChangeClassInSpawnRoom;                         // 0x0A7D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0A7E(0x0002) MISSED OFFSET
	float                                              ChangeClassHoldDownTime;                                  // 0x0A80(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x34];                                      // 0x0A84(0x0034) MISSED OFFSET
	class AShooterCharacter*                           ChaseCharacter;                                           // 0x0AB8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerState*                         ChasePlayerState;                                         // 0x0AC0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           ChaseCharacterFellFromWorld;                              // 0x0AC8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterLiveSpectatorCharacterData*          LiveSpectatorCharacterData;                               // 0x0AD0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x40];                                      // 0x0AD8(0x0040) MISSED OFFSET
	TArray<struct FScoreSound>                         ScoreSoundEventArray;                                     // 0x0B18(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData13[0x18];                                      // 0x0B28(0x0018) MISSED OFFSET
	class AActor*                                      CurrentLevelCam;                                          // 0x0B40(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1E];                                      // 0x0B48(0x001E) MISSED OFFSET
	bool                                               bUsingGamepad;                                            // 0x0B66(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x0B67(0x0001) MISSED OFFSET
	struct FStringAssetReference                       GamepadDataRefString;                                     // 0x0B68(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              ClassSpecificDeployables;                                 // 0x0B78(0x0010) (ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    PerfFlyThroughStartedEvent;                               // 0x0B88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData16[0x40];                                      // 0x0B98(0x0040) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUserSettingsChanged;                                    // 0x0BD8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData17[0x28];                                      // 0x0BE8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerController");
		return ptr;
	}


	void UserSettingsChangedEvent__DelegateSignature(bool bUseGamePad);
	void UserSettingsChanged();
	void TurnPlayer(float TurnSpeed);
	void TryChangeClass(int ClassIndex);
	void TestWingsuit(float Height);
	void TestOpenHighlightSummary();
	void TestGetMatchHighlightCount();
	void TeleportToCosmetic(int CosmeticIndex);
	void Suicide();
	void StartMapWithMode(const class FString& Map, const class FString& Mode);
	void StartLocalPerfFlyThrough();
	void StartFinalShowdown();
	void StartCountdown();
	void SpectatorTargetChanged__DelegateSignature(class AShooterCharacter* NewTarget);
	void SpectatorIndexChosen__DelegateSignature(int Index);
	void SpectatorFlagChanged__DelegateSignature(bool bEnabled);
	void SpawnVehicle(int VehicleIndex);
	void SpawnLoot(unsigned char LootIndex);
	void SpawnAllLoot(unsigned char GridSize, float Spacing);
	void SimulateInputKey(const struct FKEY& KEY, bool bPressed);
	void ShowExternalPlayers(int bShow);
	void SetYControlRotation(float InNewRot);
	void SetTeamScore(int TeamIndex, int NewScore);
	void SetSpectatorModeDelayTime(float SpectatorDelay);
	void SetSkipSpawnVO(bool bSkipVO);
	void SetMaxImpactSounds(int NewMaxSounds);
	void SetMaxImpactParticles(int NewMaxParticles);
	void SetMaxImpactDecals(int NewMaxDecals);
	void SetMaxFireSounds(int NewFireSounds);
	void SetGuest(bool IsGuest);
	void SetGodMode(bool bEnable);
	void SetFixedVehicleCamera(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void SetDeathCameraDelayTime(float DeathCameraDelay);
	void SetCountdown(int CountdownTime);
	void SetCanChangeClassInPlace(bool B);
	void ServerValidateClassChange(const struct FName& Name, const struct FName& Skin, bool bChangeClassInPlace);
	void ServerTrySetDedicatedSpectatorMode(bool bSpectator);
	void ServerToggleQAStopMessage();
	void ServerTestWingsuit(float Height);
	void ServerTeleportToCosmetic(int CosmeticIndex);
	void ServerSuicide();
	void ServerStartMapWithMode(const class FString& Map, const class FString& Mode);
	void ServerStartCountdown();
	void ServerSpawnVehicle(int VehicleIndex);
	void ServerSpawnLoot(TEnumAsByte<ELootType> LootIndex, const struct FVector& LootSpawnLocation);
	void ServerSpawnFinalShowdown();
	void ServerSetTeamScore(int TeamIndex, int NewScore);
	void ServerSetSpectatorMode(bool bEnable);
	void ServerSetInCharacterSelect(bool InCharSelect);
	void ServerSetCustomizationIDs(const struct FName& CharacterSkinName, const struct FName& CharacterMaterialName, const struct FName& WeaponASkinName, const struct FName& WeaponAMaterialName, const struct FName& WeaponBSkinName, const struct FName& WeaponBMaterialName, const struct FName& WeaponASticker, const struct FName& WeaponBSticker, const struct FName& KickDecalLoadName, const struct FName& WeaponADeathDecalName, const struct FName& WeaponBDeathDecalName);
	void ServerSetCountdown(int CountdownTime);
	void ServerSetChosenLoadClassName(const struct FName& LoadClassName);
	void ServerSetChosenClass(int ClassIndex);
	void ServerSendPCPumpData(const struct FPumpData& PumpedData);
	void ServerSendNGSMessage(TArray<unsigned char> Message);
	void ServerScoreLimit(int NewScoreLimit);
	void ServerSay(const class FString& Msg);
	void ServerResumeOrChasePrevPlayer();
	void ServerRequestPickupAttachments(class AShooterWeaponPickup* RequestingPickup);
	void ServerRequestCharacterChange(int Index);
	void ServerRequestChangeTeam();
	void ServerPaxPlayerNameWasSet();
	void ServerNextMap();
	void ServerFullyLoaded();
	void ServerExit();
	void ServerEndMatch(int ForceWinningTeam);
	void ServerDisableIdleKick();
	void ServerDemoStop();
	void ServerDemoRecord();
	void ServerDebugHeadPositions(bool Enable);
	void ServerDamagePawn(float DamageAmount);
	void ServerCheat(const class FString& Msg);
	void ServerChaseNextPrevPlayerOrResume(bool bNext);
	void ServerChaseCharacterFellFromWorld();
	void Server_SetGuest(bool IsGuest);
	void Server_MicroprofileDump(int DetailMode);
	void Server_ExecuteConsoleCommand(const class FString& Msg);
	bool SelectNextSpawnableClass();
	void SelectDevClass(int ClassID);
	void ScoreLimit(int NewScoreLimit);
	void RequestStateSync(class AShooterCharacter* PlayerToSync);
	void Remote(const class FString& Msg);
	void ProfanityMature();
	void ProfanityClean();
	void PlayScoreSoundEvent(const struct FScoreSound& InSoundEvent);
	bool PickClassByNameAndSkin(const struct FName& Name, const struct FName& Skin);
	void PerfFlyThroughStarted__DelegateSignature();
	void STATIC_OpenHighlightsSummary();
	void OnToggleSpectatorXRayVision();
	void OnToggleSpectatorToolbar();
	void OnToggleSpectatorSettings();
	void OnToggleSpectatorScoreboard();
	void OnToggleSpectatorReticle();
	void OnToggleSpectatorLoadout();
	void OnToggleSpectatorKillFeed();
	void OnToggleSpectatorHUD();
	void OnToggleSpectatorGameMode();
	void OnToggleSpectatorChat();
	void OnSpectatorViewStats();
	void OnRep_ObjectiveZoneChanged();
	void OnRep_GUID();
	void OnRep_CanChangeClassInPlace();
	void OnPrevSpectatorSetting();
	void OnOneTeammateLeftDelegate__DelegateSignature();
	void OnNextSpectatorSetting();
	void OnInventoryUpdateDelegate__DelegateSignature();
	void OnChasePrevPlayer();
	void OnChaseNextPlayer();
	void OnChangeSpectatorSettingRight();
	void OnChangeSpectatorSettingLeft();
	void NextMap();
	void MusicUnMute();
	void MusicMute();
	void MovePlayerSideways(float Speed);
	void MovePlayerRandomly(float MoveInterval);
	void MovePlayerForward(float Speed);
	void MicroprofileDumpServer(int DetailMode);
	void MaxVoices(int MaxNumberOfVoices);
	bool IsSpectatorTargetLoading();
	bool IsPlayerUsingGamepad();
	bool IsGameInputAllowed(bool bAllowForInventoryMenu);
	bool IsEndMatchActive();
	bool IsClassIndexSpawnable(int Idx);
	bool IsChosenClassIndexSpawnable();
	void HideZoneStatic(unsigned char bHide);
	class AShooterPlayerState* GetViewedPlayerState();
	class AShooterCharacter* GetViewedCharacter();
	class UCameraComponent* GetSpectatorCamera();
	class UShooterGameData* GetShooterGameData();
	class AShooterCharacter* GetShooterCharacter();
	bool STATIC_GetPawnInfo(int Idx, TEnumAsByte<EBluePrintFlowControl>* OutResult, struct FShooterPawnInfo* OutPawnInfo);
	TArray<struct FKEY> GetKeysForBinding(const struct FName& BindingName);
	TArray<struct FInputActionKeyMapping> GetKeysForAction(const struct FName& ActionName);
	bool GetIsControllerWinner();
	bool GetChosenPawnInfo(struct FShooterPawnInfo* PawnInfo);
	int GetChosenClassIndex();
	class AShooterCharacter* GetChaseCharacter();
	class UCameraComponent* GetActiveCamera();
	void ForceShoot(bool ToForce);
	void ExitServer();
	void EndMatch(int ForceWinningTeam);
	void DumpNonDormantActors();
	void DumpCollisionInfo();
	void DisableIdleKick();
	void DialogUnMute();
	void DialogMute();
	void DebugHeadPositions(bool Enable);
	void DamagePawn(float DamageAmount);
	void ClientToggleCharacterAbilityUse(bool bLock);
	void ClientStartOnlineGame();
	void ClientStartMatchSlowDown();
	void ClientStartDemoRegistration();
	void ClientSpectatorNotifyAbilityKillAssist(class APlayerState* ForPlayer, class AShooterPlayerState* KilledPlayerState);
	void ClientSetLastKillerCharacter(class AShooterCharacter* LastKiller);
	void ClientSetInitialLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
	void ClientSetDedicatedSpectatorMode(bool bSpectator);
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds);
	void ClientSendPickupAttachments(class AShooterWeaponPickup* RequestingPickup, bool bBarrel, bool bScope, bool bMag, bool bUnderbarrel, bool bMisc);
	void ClientSendNGSMessage(TArray<unsigned char> Message);
	void ClientResetPHACKSCharacterName();
	void ClientResetChosenClass();
	void ClientOnClassChangeValidated(const struct FName& Name, const struct FName& Skin, bool bChangeClassInPlace, bool bClassLimitReached);
	void ClientNotifyShotFailed();
	void ClientNotifyDamageDealt(uint16_t DamageDealt, const struct FVector& LocationOffset, uint16_t MaxHealth, uint16_t CurrentHealth, TEnumAsByte<EHitType> HitType, class AShooterCharacter* Target, class UClass* DamageTypeToTarget);
	void ClientIgnoreNextDisconnect();
	void ClientIdleWarning(float TimeBeforeKick, bool WasWarned);
	void ClientHideIdleWarning();
	void ClientGoToEoM(bool bIsWinner);
	void ClientGameStarted();
	void ClientFreeze();
	void ClientEndOnlineGame();
	void ClientDebugHeadPositions(TArray<struct FVector> HeadPositions);
	void ClearMatchEndOverLay(bool bIsWinner);
	bool CanChangeClass();
};


// Class ShooterGame.RNRTooltipCatalogue
// 0x0010 (0x0038 - 0x0028)
class URNRTooltipCatalogue : public UDataAsset
{
public:
	TArray<struct FTooltipPair>                        Tooltips;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.RNRTooltipCatalogue");
		return ptr;
	}

};


// Class ShooterGame.ScannerMarker
// 0x0018 (0x03B0 - 0x0398)
class AScannerMarker : public AActor
{
public:
	class UMapMarkerComponent*                         MapMarker;                                                // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              MarkerFadeDelay;                                          // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ScannerMarker");
		return ptr;
	}

};


// Class ShooterGame.Shooter_BuffBase
// 0x00C0 (0x0458 - 0x0398)
class AShooter_BuffBase : public AActor
{
public:
	struct FName                                       TelemetrySafeName;                                        // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x03A0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      InstigatorActor;                                          // 0x03A8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FBuffData                                   BuffConfig;                                               // 0x03B0(0x0090) (Edit, DisableEditOnInstance)
	float                                              ElapsedDuration;                                          // 0x0440(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ActiveDuration;                                           // 0x0444(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseAltFXs;                                               // 0x0448(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                CurrentRefreshCount;                                      // 0x044C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentStacks;                                            // 0x0450(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bApplyMultipassMaterial;                                  // 0x0454(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSendAchievementEventOnApply;                             // 0x0455(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0456(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.Shooter_BuffBase");
		return ptr;
	}


	void OnRep_SetTarget();
	void NetMultiCastPlayBuffFX();
	class AActor* GetBuffTarget();
	float GetBuffDurationCursorized();
	bool ActivateMultiPassMaterials(class UMaterialInterface* Material);
};


// Class ShooterGame.ShooterBuff_AccelGateBuff
// 0x0010 (0x0468 - 0x0458)
class AShooterBuff_AccelGateBuff : public AShooter_BuffBase
{
public:
	struct FAccelGateBuffConfig                        AccelGateBuffConfig;                                      // 0x0458(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_AccelGateBuff");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_AmpedUp
// 0x0020 (0x0478 - 0x0458)
class AShooterBuff_AmpedUp : public AShooter_BuffBase
{
public:
	struct FAmpedBuffData                              AmpedData;                                                // 0x0458(0x0010) (Edit, DisableEditOnInstance)
	float                                              CurrentDamageMultiplier;                                  // 0x0468(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentHealingMultiplier;                                 // 0x046C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentSpeedMultiplier;                                   // 0x0470(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentDamageReductionMultiplier;                         // 0x0474(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_AmpedUp");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_BloodBoil
// 0x0028 (0x0480 - 0x0458)
class AShooterBuff_BloodBoil : public AShooter_BuffBase
{
public:
	struct FBloodBoilBuffData                          BoilData;                                                 // 0x0458(0x0014) (Edit, DisableEditOnInstance)
	bool                                               bTargetBloodBoiled;                                       // 0x046C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	float                                              CurrentDamageMultiplier;                                  // 0x0470(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTranceTime;                                        // 0x0474(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AdditionalTranceTime;                                     // 0x0478(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x047C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_BloodBoil");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_DamageIncrease
// 0x0008 (0x0460 - 0x0458)
class AShooterBuff_DamageIncrease : public AShooter_BuffBase
{
public:
	struct FDamageIncreaseBuffData                     DamageData;                                               // 0x0458(0x0004) (Edit, DisableEditOnInstance)
	float                                              CurrentDamageMultiplier;                                  // 0x045C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_DamageIncrease");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_DamageOverTime
// 0x0020 (0x0478 - 0x0458)
class AShooterBuff_DamageOverTime : public AShooter_BuffBase
{
public:
	struct FDamageOverTimeData                         DOTData;                                                  // 0x0458(0x0018) (Edit, DisableEditOnInstance)
	float                                              TimeTillNextDotTick;                                      // 0x0470(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_DamageOverTime");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_DamageReduction
// 0x0010 (0x0468 - 0x0458)
class AShooterBuff_DamageReduction : public AShooter_BuffBase
{
public:
	struct FDamageReductionBuffData                    ReductionData;                                            // 0x0458(0x0008) (Edit, DisableEditOnInstance)
	float                                              CurrentDamageReduction;                                   // 0x0460(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_DamageReduction");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_DamageTransfer
// 0x0010 (0x0468 - 0x0458)
class AShooterBuff_DamageTransfer : public AShooter_BuffBase
{
public:
	struct FDamageTransferData                         DamageTransferData;                                       // 0x0458(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_DamageTransfer");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_Destroy
// 0x0040 (0x0498 - 0x0458)
class AShooterBuff_Destroy : public AShooter_BuffBase
{
public:
	struct FDestroyBuffData                            DestroyData;                                              // 0x0458(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      PassiveBuffToApply;                                       // 0x0478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ActiveStacks;                                             // 0x0480(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ComputedReloadMultiplier;                                 // 0x0484(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ComputedKickDamageMultiplier;                             // 0x0488(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ComputedBuffDuration;                                     // 0x048C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ComputedWeaponDamageMultiplier;                           // 0x0490(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_Destroy");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_EnergyDamageScalar
// 0x0008 (0x0460 - 0x0458)
class AShooterBuff_EnergyDamageScalar : public AShooter_BuffBase
{
public:
	struct FEnergyDamageScalar_Data                    EnergyDamageBuffData;                                     // 0x0458(0x0004) (Edit, BlueprintVisible)
	float                                              ComputedDamageScalar;                                     // 0x045C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_EnergyDamageScalar");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_GravityEffector
// 0x0060 (0x04B8 - 0x0458)
class AShooterBuff_GravityEffector : public AShooter_BuffBase
{
public:
	struct FGravityVolumeData                          GravityConfig;                                            // 0x0458(0x0060) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_GravityEffector");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage
// 0x0150 (0x0178 - 0x0028)
class UShooterAnimationPackage : public UObject
{
public:
	struct FAbilityAnimations                          Ability_1P;                                               // 0x0028(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAbilityAnimations                          Ability_3P;                                               // 0x00D0(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage");
		return ptr;
	}

};


// Class ShooterGame.WeaponAnimationPackage
// 0x0630 (0x0658 - 0x0028)
class UWeaponAnimationPackage : public UObject
{
public:
	struct FWeaponAnimations                           Weapon_1P;                                                // 0x0028(0x0318) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FWeaponAnimations                           Weapon_3P;                                                // 0x0340(0x0318) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.WeaponAnimationPackage");
		return ptr;
	}

};


// Class ShooterGame.ShooterBlueprintUtilities
// 0x0000 (0x0028 - 0x0028)
class UShooterBlueprintUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBlueprintUtilities");
		return ptr;
	}


	void STATIC_PlayDialogue(class UObject* WorldContextObject, class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds);
	struct FLinearColor STATIC_Pick(float InValue, const struct FColorBlender& Fader);
	bool STATIC_IsEventBuild();
	TEnumAsByte<ESlateVisibility> STATIC_GetVisibility(bool IsVisible);
	class AShooterGameState* STATIC_GetShooterGameState(class UObject* WorldContextObject);
	class AShooterCharacter* STATIC_GetLocalPlayer(class UObject* WorldContextObject);
	class AShooterHUD* STATIC_GetLocalHUD(class UObject* WorldContextObject);
	class AShooterWeapon* STATIC_GetLocalCurrentEquipedWeapon(class UObject* WorldContextObject);
	struct FLinearColor STATIC_ColorPickerRef(float InValue, const struct FLinearColor& ColorA, float ValueA, const struct FLinearColor& ColorB, float ValueB, const struct FLinearColor& ColorC);
	struct FLinearColor STATIC_ColorPicker(float InValue, const struct FLinearColor& ColorA, float A, const struct FLinearColor& ColorB, float B, const struct FLinearColor& ColorC);
	struct FLinearColor STATIC_ColorFaderRef(float InValue, const struct FLinearColor& ColorA, float ValueA, const struct FLinearColor& ColorB, float ValueB, const struct FLinearColor& ColorC, float ValueC);
	struct FLinearColor STATIC_ColorFader(float InValue, const struct FLinearColor& ColorA, float ValueA, const struct FLinearColor& ColorB, float ValueB, const struct FLinearColor& ColorC, float ValueC);
	void STATIC_BranchInt(int ValueA, int ValueB, TEnumAsByte<EBluePrintOperator> InOperator, TEnumAsByte<EBluePrintBranchControl>* OutResult);
	void STATIC_BranchFloat(float ValueA, float ValueB, TEnumAsByte<EBluePrintOperator> InOperator, TEnumAsByte<EBluePrintBranchControl>* OutResult);
	void STATIC_BranchBool(bool ValueA, bool ValueB, TEnumAsByte<EBluePrintOperator> InOperator, TEnumAsByte<EBluePrintBranchControl>* OutResult);
	struct FLinearColor STATIC_BlendColorClamped(const struct FLinearColor& A, const struct FLinearColor& B, float T);
	struct FLinearColor STATIC_BlendColor(const struct FLinearColor& A, const struct FLinearColor& B, float T);
	struct FLinearColor Blend(float InValue, const struct FColorBlender& Fader);
};


// Class ShooterGame.ShooterWidgetComponent
// 0x0010 (0x0860 - 0x0850)
class UShooterWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0850(0x0004) MISSED OFFSET
	float                                              MinWidgetScale;                                           // 0x0854(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWidgetScale;                                           // 0x0858(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x085C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWidgetComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterUserWidget
// 0x0010 (0x0248 - 0x0238)
class UShooterUserWidget : public UUserWidget
{
public:
	class UShooterCachedWidget*                        OuterCacheNode;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterUserWidget");
		return ptr;
	}


	void WidgetReceiveChatMessage(const class FString& inString);
	void TriggerOnScreen();
	void TriggerOffScreen();
	void SetVisibleAndInvalidateWithType(class UWidget* inWidget, bool InVisible, TEnumAsByte<ESlateVisibility> HiddenType);
	void SetVisibleAndInvalidateAndClear(class UWidget* inWidget, bool InVisible);
	void SetVisibleAndInvalidate(class UWidget* inWidget, bool InVisible);
	void SetVisibilityOnChildren(TEnumAsByte<ESlateVisibility> InVisibility);
	void SetTextAndInvalidate(class UTextBlock* inWidget, const struct FText& InText);
	void SetScrollingTextAndInvalidate(class UTextBlock* inWidget, const struct FText& InText, class UScrollBox* ScrollBox);
	void SetSafePositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale, bool bSnapToPixels);
	void SetOverrideTickFrequency(float InFrequency);
	void SetOverrideCacheNodeVisibility(bool InValue);
	void SetColorOnChild(class UImage* InImage, const struct FLinearColor& InColor);
	void SetColorAndInvalidateOnImage(class UImage* inWidget, const struct FLinearColor& InColor);
	void SetColorAndInvalidate(class UWidget* inWidget, const struct FLinearColor& InColor);
	void SetActiveWidgetIndexAndInvalidate(class UWidgetSwitcher* WidgetSwitcher, int ActiveWidgetIndex);
	void RequestTick();
	void RequestSlateWidgetTickDuringRender(class UWidget* WidgetToTickDuringRender);
	void RequestRenderAndClear();
	void RequestRender();
	void OnHUDWidgetShown();
	void OnHUDWidgetHidden();
	bool IsOnScreen();
	bool HasEverRendered();
	class AShooterPlayerState* GetOwningShooterPlayerState();
	class AShooterPlayerController* GetOwningShooterPlayerController();
	class AShooterHUD* GetOwningShooterHUD();
	class AShooterCharacter* GetOwningShooterCharacter();
	class AShooterPlayerState* GetOwningOrSpectatedShooterPlayerState();
	class AShooterCharacter* GetOwningOrSpectatedShooterCharacter();
	struct FLinearColor GetNeutralColorSecondary();
	struct FLinearColor GetNeutralColorPrimary();
	struct FLinearColor GetMyTeamColorSecondary();
	struct FLinearColor GetMyTeamColor();
	struct FLinearColor GetLawColorSecondary();
	struct FLinearColor GetLawColorPrimary();
	class AActor* GetHUDReleventActor();
	struct FLinearColor GetEnemyTeamColorSecondary();
	struct FLinearColor GetEnemyTeamColor();
	struct FLinearColor GetBreakerColorSecondary();
	struct FLinearColor GetBreakerColorPrimary();
	void EnableCacheNode(bool InValue);
	void AddScrollBoxForAutoScrollingText(class UScrollBox* ScrollBox);
};


// Class ShooterGame.ShooterSimpleProjectile
// 0x0008 (0x0030 - 0x0028)
class UShooterSimpleProjectile : public UObject
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSimpleProjectile");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameState
// 0x02B0 (0x06B0 - 0x0400)
class AShooterGameState : public AGameState
{
public:
	TArray<class AShooterCharacter*>                   LivePlayers;                                              // 0x0400(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<int, struct FTeam>                            LiveTeams;                                                // 0x0410(0x0050) (ZeroConstructor, Transient)
	struct FShooterProjectileManager                   ProjectileManager;                                        // 0x0460(0x0030) (Transient)
	TArray<class AActor*>                              ActorsToIgnoreForObjectiveLOS;                            // 0x0490(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterCustomizationLoadManager*>    ActiveLoadManagers;                                       // 0x04A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x30];                                      // 0x04B0(0x0030) MISSED OFFSET
	TArray<int>                                        TeamScores;                                               // 0x04E0(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	float                                              RemainingTime;                                            // 0x04F0(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ScoreLimit;                                               // 0x04F4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumTeams;                                                 // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTimerPaused;                                             // 0x04FC(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bQAStopMessageEnabled;                                    // 0x04FD(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	class UShooterScoreProcessor*                      ScoreProcessorInstance;                                   // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ScoreProcessorClass;                                      // 0x0508(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableObjectiveTimer;                                    // 0x0510(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDoWaitForPlayers;                                        // 0x0511(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0512(0x0002) MISSED OFFSET
	int                                                WaitingForPlayersTimeRounded;                             // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseWaitingForPlayersLongTimer;                           // 0x0518(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	int                                                PreGameTimeRounded;                                       // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                FinalCountdownTimeRounded;                                // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWaitingForPlayers;                                       // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPreGameEnded;                                            // 0x0525(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFinalCountdownEnded;                                     // 0x0526(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0527(0x0001) MISSED OFFSET
	int                                                ForceWinningTeamOnEndMatch;                               // 0x0528(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x052C(0x0008) MISSED OFFSET
	bool                                               bMatchEnded;                                              // 0x0534(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMatchEndedInWarmUp;                                      // 0x0535(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0xA];                                       // 0x0536(0x000A) MISSED OFFSET
	bool                                               bShouldTravelNextMap;                                     // 0x0540(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldTravelToMapWithMode;                               // 0x0541(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0542(0x0006) MISSED OFFSET
	class FString                                      NextMap;                                                  // 0x0548(0x0010) (ZeroConstructor, Transient)
	class FString                                      NextMode;                                                 // 0x0558(0x0010) (ZeroConstructor, Transient)
	bool                                               bTeamAHadPlayers;                                         // 0x0568(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTeamBHadPlayers;                                         // 0x0569(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x56];                                      // 0x056A(0x0056) MISSED OFFSET
	TArray<struct FProjectilePool>                     ActualPools;                                              // 0x05C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FImpactInfo>                         ImpactsToPlay;                                            // 0x05D0(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterTimeDilationZone*>            TimeDilationZones;                                        // 0x05E0(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooter_FireZone*>                   FireZones;                                                // 0x05F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData09[0x58];                                      // 0x0600(0x0058) MISSED OFFSET
	int                                                MaxImpactDecals;                                          // 0x0658(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxImpactParticles;                                       // 0x065C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxImpactSounds;                                          // 0x0660(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Max3PFireSounds;                                          // 0x0664(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0668(0x0008) MISSED OFFSET
	class UShooterGameModeWidget*                      GameModeWidget;                                           // 0x0670(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AActor*>                              TeleporterStarts;                                         // 0x0678(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0688(0x0008) MISSED OFFSET
	class UClass*                                      GameModeHudClass;                                         // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CarryIconWidgetClass;                                     // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  GameModeIcon;                                             // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TeamClassLimit;                                           // 0x06A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState");
		return ptr;
	}


	void SetGameModeWidget(class UShooterGameModeWidget* InGameModeWidget);
	void ScoreTeamEvent(const struct FName& InWinningTeamEventName, const struct FName& InLosingTeamEventName, int InTeamNumber, float InCounter);
	void RequestTimeDilation(float InMultiplier);
	void PreGameTimeChanged();
	void OnRep_WaitingForPlayersTimeRounded();
	void OnRep_TeamScores();
	void OnRep_SetScoreProcessorClass();
	void OnRep_ServerPerformance();
	void OnRep_ScoreLimit();
	void OnRep_PreGameTimeRounded();
	void OnRep_PreGameEnded();
	void OnRep_ObjectiveTimeRounded();
	void OnRep_FinalCountdownTimeRounded();
	void OnRep_FinalCountdownEnded();
	void OnMatchEnding(int WinnerIndex);
	void OnLocalPlayerObjectiveZoneChanged(class AShooterObjectiveZone* CurrentObjectiveZone);
	void ObjectiveTimeChanged();
	void NetMultiForceWinningTeamOnEndMatch(int ForceWinningTeam);
	void NetMulticastCharacterSpawned(class AShooterCharacter* SpawnedCharacter);
	void MulticastTimeDilation(float InMuliplier);
	void MulticastMatchEnding(int WinnerIndex);
	void MulticastDebugString(const struct FVector_NetQuantize& Location, const class FString& Text, class AActor* BaseActor, const struct FColor& Color, float Duration, bool bDrawShadow);
	void MulticastDebugSphere(const struct FVector_NetQuantize& Location, float Radius, float TIME, const struct FColor& Color);
	void MulticastDebugLineList(TArray<struct FVector> Points, float TIME, const struct FColor& Color);
	void MulticastDebugLine(const struct FVector_NetQuantize& StartLocation, const struct FVector_NetQuantize& EndLocation, float TIME, const struct FColor& Color);
	void MulticastDebugCone(const struct FVector_NetQuantize& Origin, const struct FVector_NetQuantize& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FColor& DrawColor, bool bPersistentLines, float LifeTime, unsigned char DepthPriority, float Thickness);
	bool IsTutorialGame();
	bool IsMatchEnded();
	TArray<class AShooterCharacter*> GetLivePlayersArrayForTeam(int Team);
	void FinalCountdownTimeChanged();
	void CharacterSpawned(class AShooterCharacter* SpawnedCharacter);
	bool AreEOMResultsActive();
};


// Class ShooterGame.ShooterGamepadIconData
// 0x0010 (0x0038 - 0x0028)
class UShooterGamepadIconData : public UDataAsset
{
public:
	TArray<struct FGamepadButtonIcons>                 GamepadButtonIcons;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGamepadIconData");
		return ptr;
	}

};


// Class ShooterGame.ShooterTutorialWorldWidget
// 0x0028 (0x0270 - 0x0248)
class UShooterTutorialWorldWidget : public UShooterUserWidget
{
public:
	struct FName                                       ActionMappingName;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             KeySwitcherWidget;                                        // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ButtonBindingWidget;                                      // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  KeyBindingWidget;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterGamepadIconData*                     GamepadIconData;                                          // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTutorialWorldWidget");
		return ptr;
	}


	void UpdateKeyBinding();
};


// Class ShooterGame.ShooterGameState_Tutorial
// 0x0068 (0x0718 - 0x06B0)
class AShooterGameState_Tutorial : public AShooterGameState
{
public:
	class AShooterPlayerController*                    SPlayerController;                                        // 0x06B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    ObjCompletionUpdatedDelegate;                             // 0x06B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerClassUpdatedDelegate;                               // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShowTutorialToolTipDelegate;                              // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HideTutorialToolTipDelegate;                              // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkAudioEvent*                               TutorialPopupSound;                                       // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLinearTutorial;                                          // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	TArray<class UShooterTutorialWorldWidget*>         TutorialWorldWidgets;                                     // 0x0708(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState_Tutorial");
		return ptr;
	}


	void UpdateTutorialCompletionPercent(float InPercent);
	void ShowTutorialToolTip(const struct FTutorialToolTipInfo& ToolTipInfo);
	void ServerEndTutorial();
	void OnBotTookDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void NotifyPlayerClassUpdated();
	void NetMulticastBotTookDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void MulticastFetchTutorialWidgets();
	void HideTutorialToolTip();
	void EndTutorial();
};


// Class ShooterGame.ToolTipCatalogueEntry
// 0x0050 (0x0078 - 0x0028)
class UToolTipCatalogueEntry : public UDataAsset
{
public:
	struct FTutorialToolTipInfo                        ToolTipInfo;                                              // 0x0028(0x0040) (Edit, DisableEditOnInstance)
	TArray<TEnumAsByte<EToolTipTargetClassEnum>>       TargetClasses;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ToolTipCatalogueEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterToolTipCatalogue
// 0x0068 (0x0090 - 0x0028)
class UShooterToolTipCatalogue : public UDataAsset
{
public:
	TArray<class UToolTipCatalogueEntry*>              ToolTipEntries;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterToolTipCatalogue");
		return ptr;
	}


	struct FTutorialToolTipInfo GetToolTip(TEnumAsByte<EShooterClass> ShooterClass, bool bAllowGeneric);
};


// Class ShooterGame.ShooterGlobalUIData
// 0x24B8 (0x24E0 - 0x0028)
class UShooterGlobalUIData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FShooterMenu                                HUD;                                                      // 0x0030(0x0010) (Edit)
	struct FShooterMenu                                Map;                                                      // 0x0040(0x0010) (Edit)
	struct FShooterMenu                                MiniMap;                                                  // 0x0050(0x0010) (Edit)
	struct FShooterMenu                                Compass;                                                  // 0x0060(0x0010) (Edit)
	struct FShooterMenu                                PlayerScore;                                              // 0x0070(0x0010) (Edit)
	struct FShooterMenu                                PlayerStatus;                                             // 0x0080(0x0010) (Edit)
	struct FShooterMenu                                TeammateStatus;                                           // 0x0090(0x0010) (Edit)
	class UClass*                                      TeammateStatusWidgetEntryClass;                           // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterMenu                                ZoneLock;                                                 // 0x00A8(0x0010) (Edit)
	struct FShooterMenu                                Inventory;                                                // 0x00B8(0x0010) (Edit)
	struct FShooterMenu                                Chat;                                                     // 0x00C8(0x0010) (Edit)
	struct FShooterMenu                                KillLogWidget;                                            // 0x00D8(0x0010) (Edit)
	struct FShooterMenu                                Spectator;                                                // 0x00E8(0x0010) (Edit)
	struct FShooterMenu                                GameText;                                                 // 0x00F8(0x0010) (Edit)
	struct FShooterMenu                                VictoryDefeatScreen;                                      // 0x0108(0x0010) (Edit)
	struct FShooterMenu                                OptionsMenu;                                              // 0x0118(0x0010) (Edit)
	struct FShooterMenu                                InGameNotification;                                       // 0x0128(0x0010) (Edit)
	struct FShooterMenu                                Subtitles;                                                // 0x0138(0x0010) (Edit)
	struct FShooterMenu                                FrontEndKillCard;                                         // 0x0148(0x0010) (Edit)
	struct FShooterMenu                                HitReticle;                                               // 0x0158(0x0010) (Edit)
	struct FShooterMenu                                ToolTip;                                                  // 0x0168(0x0010) (Edit)
	int                                                GameModePanelZOrder;                                      // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FShooterMenu                                FadeManager;                                              // 0x0180(0x0010) (Edit)
	TArray<struct FShooterPerMenuPositionOverride>     PerMenuPositionOverrides;                                 // 0x0190(0x0010) (Edit, ZeroConstructor)
	TArray<struct FShooterPerMenuPositionOverride>     PerMenuOverrideDefaults;                                  // 0x01A0(0x0010) (ZeroConstructor, Transient)
	struct FWeaponAttachmentUIData                     AttachmentUIData;                                         // 0x01B0(0x0820) (Edit)
	struct FAmmoTypeHUDData                            AmmoTypesHUDData[0x9];                                    // 0x09D0(0x01E0) (Edit)
	struct FSlateBrush                                 WeaponFireRatesHUDData[0x3];                              // 0x1AB0(0x0090) (Edit)
	struct FText                                       WeaponClassDisplayNames[0x8];                             // 0x1C60(0x0018) (Edit)
	struct FText                                       WeaponUIStatNames[0x5];                                   // 0x1D20(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       RarityLevelNames[0x5];                                    // 0x1D98(0x0018) (Edit, DisableEditOnInstance)
	struct FCosmeticHUDData                            DefaultCosmeticData;                                      // 0x1E10(0x0200) (Edit)
	TArray<struct FCosmeticHUDData>                    CosmeticHUDData;                                          // 0x2010(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, int>                            CosmeticHUDMap;                                           // 0x2020(0x0050) (ZeroConstructor)
	TArray<struct FMiscPickupHUDData>                  ArmorHUDData;                                             // 0x2070(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMiscPickupHUDData>                  CashPrizeHUDData;                                         // 0x2080(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, int>                            MiscPickupHUDMap;                                         // 0x2090(0x0050) (ZeroConstructor)
	TArray<struct FSubtitleMarkerData>                 SubtitlesData;                                            // 0x20E0(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, int>                            SubtitlesMap;                                             // 0x20F0(0x0050) (ZeroConstructor)
	float                                              SubtitleSafetyCutoffTime;                                 // 0x2140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2144(0x0004) MISSED OFFSET
	class UClass*                                      ThreatIndicator;                                          // 0x2148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxThreatIntensityIndicators;                             // 0x2150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowCopyrightMessage;                                    // 0x2154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2155(0x0003) MISSED OFFSET
	struct FShooter3DInfo                              ShaderInfo3D;                                             // 0x2158(0x0024) (Edit)
	float                                              IconPitchRotationIfBehind;                                // 0x217C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 IconAlphaForDistanceFromCenter;                           // 0x2180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FHUDBalancerConfig                          BalancerConfig;                                           // 0x2188(0x0020) (Edit, DisableEditOnInstance)
	class UMaterialInstance*                           ScreenDepthMaterial;                                      // 0x21A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           SpectatorXRayVision;                                      // 0x21B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           SpectatorNonFirstPersonEffect;                            // 0x21B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                FrontEndMaterialCollection;                               // 0x21C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UShooterGamepadIconData>           GamepadIconData;                                          // 0x21C8(0x0020) (Edit)
	struct FLinearColor                                AllChatColor;                                             // 0x21E8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TeamChatColor;                                            // 0x21F8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NpcWidgetClass;                                           // 0x2208(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UFont*>                               Fonts;                                                    // 0x2210(0x0010) (Edit, ZeroConstructor)
	class UDataTable*                                  RankIconDataTable;                                        // 0x2220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CarriedIconVerticalOffset;                                // 0x2228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x222C(0x0004) MISSED OFFSET
	class UShooterToolTipCatalogue*                    SpawnRoomToolTipCatalogue;                                // 0x2230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AlternateCrosshairClasses;                                // 0x2238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FPickupRarityData                           PickupRarityConfig;                                       // 0x2248(0x0018) (Edit, DisableEditOnInstance)
	struct FKillCardData                               KillCardData;                                             // 0x2260(0x0130) (Edit, DisableEditOnInstance)
	struct FPlayerStandingsData                        DefaultPlayerStandingsData;                               // 0x2390(0x00D0) (Edit, DisableEditOnInstance)
	TArray<struct FPlayerStandingsData>                PlayerStandingsData;                                      // 0x2460(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class URNRTooltipCatalogue*                        TooltipCatalogue;                                         // 0x2470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        SquadMarkerColors;                                        // 0x2478(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     PlayerStandingsMap;                                       // 0x2488(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x24D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGlobalUIData");
		return ptr;
	}

};


// Class ShooterGame.ShooterZipLine
// 0x0008 (0x03A0 - 0x0398)
class AShooterZipLine : public AActor
{
public:
	bool                                               bSpawnZipLine;                                            // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterZipLine");
		return ptr;
	}


	struct FVector GetZipLineStart();
	struct FVector GetZipLineEnd();
};


// Class ShooterGame.ShooterCharacter
// 0x11D0 (0x1990 - 0x07C0)
class AShooterCharacter : public ACharacter
{
public:
	bool                                               bAbilitiesInitialized;                                    // 0x07C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07C1(0x0003) MISSED OFFSET
	float                                              TurnSpeed;                                                // 0x07C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ShouldHaveEnemyOutlinesEnabled;                           // 0x07C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ShouldHaveGameplayFresnelEnabled;                         // 0x07C9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ShouldDrawPostIndicesDebug;                               // 0x07CA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x07CB(0x0001) MISSED OFFSET
	float                                              TurnSpeedDamped;                                          // 0x07CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ArmorTransitionActive;                                    // 0x07D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Armored;                                                  // 0x07D1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               MoveAbilityActive;                                        // 0x07D2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x07D3(0x0001) MISSED OFFSET
	float                                              VehicleForwardSpeed;                                      // 0x07D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VehicleTurnFraction;                                      // 0x07D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleStopped;                                          // 0x07DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleMovingForward;                                    // 0x07DD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleCoasting;                                         // 0x07DE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleJumpCharging;                                     // 0x07DF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleJumped;                                           // 0x07E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleInAir;                                            // 0x07E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleSprinting;                                        // 0x07E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x07E3(0x0001) MISSED OFFSET
	struct FRotator                                    PreviousRotation;                                         // 0x07E4(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              YawMultiplier;                                            // 0x07F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ForceHardLanding;                                         // 0x07F4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	float                                              TimeUltWasActivated;                                      // 0x07F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	class UAnimMontage*                                LastAirJumpAnim;                                          // 0x0800(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0808(0x0010) MISSED OFFSET
	TEnumAsByte<EFacialAnimationStates>                MyFacialAnimationState;                                   // 0x0818(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNeedToBoostLocalPawnsTextures;                           // 0x0819(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x081A(0x0001) MISSED OFFSET
	TEnumAsByte<EKickType>                             DefaultKickType;                                          // 0x081B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	TArray<class UDecalComponent*>                     InWorldKickDecalComponents;                               // 0x0820(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FClientProjectHitRequest>            CachedProjectileHitRequests;                              // 0x0830(0x0010) (ZeroConstructor, Transient)
	float                                              HealthPickupFXDuration;                                   // 0x0840(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0xC];                                       // 0x0844(0x000C) MISSED OFFSET
	TArray<struct FOverridePSData>                     CharacterOverrideFXs;                                     // 0x0850(0x0010) (ZeroConstructor, Transient)
	class USkeletalMeshComponent*                      BaseTPSkeletalMeshCmp;                                    // 0x0860(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      BaseFPSkeletalMeshCmp;                                    // 0x0868(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              TPSkeletalMeshCmps;                                       // 0x0870(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class USkeletalMeshComponent*>              FPSkeletalMeshCmps;                                       // 0x0880(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData10[0x10];                                      // 0x0890(0x0010) MISSED OFFSET
	uint32_t                                           CurrentThrowAmmo;                                         // 0x08A0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           CurrentItemSlots;                                         // 0x08A4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           CurrentWeaponSlots;                                       // 0x08A8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	class UClass*                                      NextMeleeState;                                           // 0x08B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x08B8(0x0010) MISSED OFFSET
	TArray<class AShooterPhysicsVolume_Ozone*>         OzoneOverlaps;                                            // 0x08C8(0x0010) (ZeroConstructor, Transient)
	float                                              TimeInOzone;                                              // 0x08D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeOnGroundOzone;                                        // 0x08DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0xE];                                       // 0x08E0(0x000E) MISSED OFFSET
	bool                                               bHaveWarnedPlayerAboutOzone;                              // 0x08EE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x08EF(0x0001) MISSED OFFSET
	int                                                NextProjectileID;                                         // 0x08F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LastReceivedServerProjectileID;                           // 0x08F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ProjectileIDSyncTimer;                                    // 0x08F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	TArray<class AShooterClientProjectile*>            PredictedProjectiles;                                     // 0x0900(0x0010) (ZeroConstructor, Transient)
	bool                                               IsOutOfCombat;                                            // 0x0910(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsOutOfCombatshooting;                                    // 0x0911(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x0912(0x0002) MISSED OFFSET
	float                                              TimeSinceCombat;                                          // 0x0914(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              InCombatRange;                                            // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InCombatTime;                                             // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InvertGamepadTriggers;                                    // 0x0920(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              FXCursor;                                                 // 0x0924(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x8];                                       // 0x0928(0x0008) MISSED OFFSET
	float                                              InputReplicationTimer;                                    // 0x0930(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UMaterialInstance*                           SlowTimeFX;                                               // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SlowTimeFX_3P;                                            // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedSlowTimeFX_3P;                                     // 0x0948(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      Vehicle;                                                  // 0x0950(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UCurveFloat*                                 DeathDissolveCurve;                                       // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeOfLastDamageWarning;                                  // 0x0960(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamageWarningMaxRadius;                                   // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageWarningMinRadius;                                   // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageWarningFrequency;                                   // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageWarningBehindThreshold;                             // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageWarningAboveThreshold;                              // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundDodgeSpeed;                                         // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundDodgeFriction;                                      // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirDodgeSpeed;                                            // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirDodgeFriction;                                         // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DodgeCoolDownDuration;                                    // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DodgeZVelocity;                                           // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x8];                                       // 0x0990(0x0008) MISSED OFFSET
	TArray<class AShooterBaseDroid*>                   AttachedDroidList;                                        // 0x0998(0x0010) (ZeroConstructor, Transient)
	float                                              MaxMultiJumpZVelocity;                                    // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseJumpZVeclocity;                                       // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoLandAnimSpeedThreshold;                                 // 0x09B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightLandAnimSpeedThreshold;                              // 0x09B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MediumLandAnimSpeedThreshold;                             // 0x09B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpSpeedMultiplier;                                      // 0x09BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AirDiveZVelocity;                                         // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharacterAirAccel;                                        // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bActivateAirDive : 1;                                     // 0x09C8(0x0001) (Transient)
	unsigned char                                      UnknownData21[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	TArray<struct FAttachedSoundData>                  AttachedSounds;                                           // 0x09D0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData22[0x10];                                      // 0x09E0(0x0010) MISSED OFFSET
	float                                              TimeSinceDeath;                                           // 0x09F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    JumpPressedEvent;                                         // 0x09F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandingEvent;                                             // 0x0A08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DodgePressedEvent;                                        // 0x0A18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData24[0x8];                                       // 0x0A28(0x0008) MISSED OFFSET
	class UShooterCharacterMovement*                   ShooterMovementComp;                                      // 0x0A30(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              CachedForwardBackMoveValue;                               // 0x0A38(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedRightLeftMoveValue;                                 // 0x0A3C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    CachedInputRotation;                                      // 0x0A40(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	struct FRotator                                    RemotePreviousRotation;                                   // 0x0A50(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CachedAimPoint;                                           // 0x0A5C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FHitResult                                  CachedAimPointHitResult;                                  // 0x0A68(0x0088) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x8];                                       // 0x0AF0(0x0008) MISSED OFFSET
	bool                                               bAllowWeaponSwap;                                         // 0x0AF8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSwappingWeapon;                                          // 0x0AF9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x0AFA(0x0002) MISSED OFFSET
	unsigned char                                      bLowerBodyIdleRunActive : 1;                              // 0x0AFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bFreightTrainActive : 1;                                  // 0x0AFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bFreightTrainDashActive : 1;                              // 0x0AFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAirDiveActive : 1;                                       // 0x0AFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bMantleActive : 1;                                        // 0x0AFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bJumpActive : 1;                                          // 0x0AFC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDoubleJumpActive : 1;                                    // 0x0AFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bFallActive : 1;                                          // 0x0AFC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGrappling : 1;                                           // 0x0AFD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData28[0x2];                                       // 0x0AFE(0x0002) MISSED OFFSET
	float                                              DroneOffsetAngle;                                         // 0x0B00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousWeaponIndex;                                      // 0x0B04(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	unsigned char                                      bRocketPackActive : 1;                                    // 0x0B08(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bThrusterPackActive : 1;                                  // 0x0B08(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData30[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	float                                              CurrentDroneOffset;                                       // 0x0B10(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCollisionBlockerSet;                                     // 0x0B14(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x13];                                      // 0x0B15(0x0013) MISSED OFFSET
	class UShooterInteractComponent*                   CurrentInteraction;                                       // 0x0B28(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooterATM*                                 LastATM;                                                  // 0x0B30(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              ServerEquippedWeapon;                                     // 0x0B38(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               KickActive;                                               // 0x0B40(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowKick;                                               // 0x0B41(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               MoveLegsWithCamera;                                       // 0x0B42(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x1];                                       // 0x0B43(0x0001) MISSED OFFSET
	float                                              LastKickTime;                                             // 0x0B44(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NextFallDamage;                                           // 0x0B48(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	TArray<class AShooterTimeDilationZone*>            TimeDilationZones;                                        // 0x0B50(0x0010) (ZeroConstructor, Transient)
	float                                              NextWallSplatDamage;                                      // 0x0B60(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NextWallSplatTimeout;                                     // 0x0B64(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      FallDamageType;                                           // 0x0B68(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      WallSplatDamageType;                                      // 0x0B70(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystem*                             BasicDamageLocalFX;                                       // 0x0B78(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             HighDamageLocalFX;                                        // 0x0B80(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         CharacterClass;                                           // 0x0B88(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x0B89(0x0007) MISSED OFFSET
	class UCameraComponent*                            FirstPersonCamera;                                        // 0x0B90(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCamera;                                        // 0x0B98(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UShooterCameraBoomComponent*                 ThirdPersonCameraArm;                                     // 0x0BA0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              ChaseCameraZOffset;                                       // 0x0BA8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0BAC(0x0004) MISSED OFFSET
	class UShooterPrimitiveImpactHandler*              PostMortemImpactHandler;                                  // 0x0BB0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UShooterAITargetInfoComponent*               AITargetInfoComp;                                         // 0x0BB8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       SkeletonType;                                             // 0x0BC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CharacterType;                                            // 0x0BC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpecialAbilityState;                                      // 0x0BD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AShooterWeapon*>                      Inventory;                                                // 0x0BD8(0x0010) (Net, ZeroConstructor, Transient)
	TArray<class AShooterWeapon*>                      ClientInventory;                                          // 0x0BE8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData36[0x10];                                      // 0x0BF8(0x0010) MISSED OFFSET
	class UClass*                                      FirstPersonAnimationPackageClass;                         // 0x0C08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ThirdPersonAnimationPackageClass;                         // 0x0C10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MasterAnimPackageClass;                                   // 0x0C18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DeathAnimPackage;                                         // 0x0C20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWeaponAnimationPackage*>             InventoryWeaponPackages;                                  // 0x0C28(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData37[0x10];                                      // 0x0C38(0x0010) MISSED OFFSET
	class UShooterAnimationPackage*                    FirstPersonAnimationPackage;                              // 0x0C48(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterAnimationPackage*                    ThirdPersonAnimationPackage;                              // 0x0C50(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterAnimationPackage*                    MasterAnimPackage;                                        // 0x0C58(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              CurrentWeapon;                                            // 0x0C60(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x14];                                      // 0x0C68(0x0014) MISSED OFFSET
	float                                              OpenInventoryTimer;                                       // 0x0C7C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterWeapon*                              PreviousWeapon;                                           // 0x0C80(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterProjectile*                          LastFiredProjectile;                                      // 0x0C88(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooterProjectile*>                  FiredProjectiles;                                         // 0x0C90(0x0010) (ZeroConstructor, Transient)
	struct FTakeHitInfo                                LastTakeHitInfo;                                          // 0x0CA0(0x0190) (Net, Transient)
	unsigned char                                      UnknownData39[0x4];                                       // 0x0E30(0x0004) MISSED OFFSET
	float                                              LastHitTime;                                              // 0x0E34(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastHitByLocalPlayerTime;                                 // 0x0E38(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastDamageDealtTime;                                      // 0x0E3C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Boost;                                                    // 0x0E40(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x10];                                      // 0x0E44(0x0010) MISSED OFFSET
	float                                              CurrentArmorRegenDelayTime;                               // 0x0E54(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x0E58(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x0E59(0x0003) MISSED OFFSET
	float                                              TurnOnPointCursorCache;                                   // 0x0E5C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetingSpeedModifier;                                   // 0x0E60(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAimState>                             CurrentAimState;                                          // 0x0E64(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x0E65(0x0003) MISSED OFFSET
	TArray<int>                                        AmmoCounts;                                               // 0x0E68(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               bIsCameraShoulderSwitched;                                // 0x0E78(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bJumpKeyDown;                                             // 0x0E79(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ReplicaNeedsSync;                                         // 0x0E7A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBuoyancyActive;                                          // 0x0E7B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShakesActive;                                            // 0x0E7C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x0E7D(0x0003) MISSED OFFSET
	float                                              EnergyDamageMultiplier;                                   // 0x0E80(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BallisticDamageMultiplier;                                // 0x0E84(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ArmStrengthAnimationSpeed;                                // 0x0E88(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RunningSpeedModifier;                                     // 0x0E8C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNinjaKickConfigData                        NinjaKickConfig;                                          // 0x0E90(0x00A0) (Edit, DisableEditOnInstance)
	unsigned char                                      bWantsToRun : 1;                                          // 0x0F30(0x0001) (Net, Transient)
	unsigned char                                      UnknownData44[0x3];                                       // 0x0F31(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData45 : 1;                                        // 0x0F34(0x0001)
	unsigned char                                      bIsThirdPerson : 1;                                       // 0x0F34(0x0001) (Transient)
	unsigned char                                      bClientWasSpectator : 1;                                  // 0x0F34(0x0001) (Transient)
	unsigned char                                      UnknownData46[0x7];                                       // 0x0F35(0x0007) MISSED OFFSET
	TEnumAsByte<ECardinalDirection>                    MovementCardinalDirection;                                // 0x0F3C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x0F3D(0x0003) MISSED OFFSET
	struct FPopupTextData                              PopupTextConfig;                                          // 0x0F40(0x0048) (Edit, DisableEditOnInstance)
	unsigned char                                      bStarfallActive : 1;                                      // 0x0F88(0x0001) (Transient)
	unsigned char                                      bSuperModeActive : 1;                                     // 0x0F88(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData48[0x7];                                       // 0x0F89(0x0007) MISSED OFFSET
	class AShooterWeapon*                              LastEquippedWeapon;                                       // 0x0F90(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                AdditionalJumpCount;                                      // 0x0F98(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x0F9C(0x0004) MISSED OFFSET
	TArray<struct FPopupText>                          PopupTexts;                                               // 0x0FA0(0x0010) (ZeroConstructor, Transient)
	float                                              LowHealthPercentage;                                      // 0x0FB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x0FB4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               LowHealthLoopingSound;                                    // 0x0FB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowHealthLoopTime;                                        // 0x0FC0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x4];                                       // 0x0FC4(0x0004) MISSED OFFSET
	class UParticleSystem*                             RespawnFX;                                                // 0x0FC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DeathSound;                                               // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FlagCaptureSound;                                         // 0x0FD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               RespawnSound;                                             // 0x0FE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LowHealthSoundOneShot;                                    // 0x0FE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               RunLoopSound;                                             // 0x0FF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               RunStopSound;                                             // 0x0FF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               TargetingSound;                                           // 0x1000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SupplementInjectionSound;                                 // 0x1008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ArmorBreakSound;                                          // 0x1010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HitArmorSound;                                            // 0x1018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HitHighHealthSound;                                       // 0x1020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HitLowHealthSound;                                        // 0x1028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FailSound;                                                // 0x1030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LoopingIdleSound;                                         // 0x1038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               NearEnemySound;                                           // 0x1040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SlowTimeStart;                                            // 0x1048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SlowTimeEnd;                                              // 0x1050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearEnemySoundRefireDelay;                                // 0x1058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearEnemySoundRadius;                                     // 0x105C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x10];                                      // 0x1060(0x0010) MISSED OFFSET
	struct FPeriodicSound                              OnHitVocalSounds[0x8];                                    // 0x1070(0x0010) (Edit, DisableEditOnInstance)
	struct FName                                       RagdollSoundEmitterBoneName;                              // 0x10F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OnHitCameraShake;                                         // 0x10F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             OnHitScreenFX;                                            // 0x1100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkSoundInstance*                            LoopingIdleAC;                                            // 0x1108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkSoundInstance*                            LoopingHealSound;                                         // 0x1110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OnHitShakeDelay;                                          // 0x1118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnHitCameraShakeTimer;                                    // 0x111C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    CameraFX;                                                 // 0x1120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AttachedFX;                                               // 0x1128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAkSoundInstance*                            RunLoopAC;                                                // 0x1130(0x0008) (ZeroConstructor, IsPlainOldData)
	class UShooterStateMachineComponent*               StateMachineComponent;                                    // 0x1138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterCustomizationComponent*              CustomizationComponent;                                   // 0x1140(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ServerHitCapsule;                                         // 0x1148(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UShooterCharacterDefinition*                 CharacterDefinition;                                      // 0x1150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsDying : 1;                                             // 0x1158(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData53[0x3];                                       // 0x1159(0x0003) MISSED OFFSET
	float                                              Health;                                                   // 0x115C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData54[0x8];                                       // 0x1160(0x0008) MISSED OFFSET
	class AShooterHealMine*                            CurrentHealMine;                                          // 0x1168(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HeadshotRadius;                                           // 0x1170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData55[0x4];                                       // 0x1174(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           ArmorPhysicalMaterial;                                    // 0x1178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldFromShieldWall;                                     // 0x1180(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShieldWallShieldTimer;                                    // 0x1184(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShieldWallDuration;                                       // 0x1188(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStopArmorRegen;                                          // 0x118C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x118D(0x0003) MISSED OFFSET
	float                                              TimeToKill;                                               // 0x1190(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              bTimeToKillStarted;                                       // 0x1194(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x8];                                       // 0x1198(0x0008) MISSED OFFSET
	struct FVector                                     LastDamageTakenDirection;                                 // 0x11A0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     RelativeMuzzlePos;                                        // 0x11AC(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x8];                                       // 0x11B8(0x0008) MISSED OFFSET
	TArray<class UShooterAbility*>                     ActivatableAbilities;                                     // 0x11C0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData59[0x4];                                       // 0x11D0(0x0004) MISSED OFFSET
	struct FBuffStatMultiplierData                     StatMutiplierData;                                        // 0x11D4(0x002C) (Net, Transient)
	bool                                               IsDaemonActive;                                           // 0x1200(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x7];                                       // 0x1201(0x0007) MISSED OFFSET
	class AShooterCharacter*                           ThrowTarget;                                              // 0x1208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TurnOnPointThreshold;                                     // 0x1210(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CachedTurnOnPointFacing;                                  // 0x1214(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterProjectile*                          LastThrownGrenade;                                        // 0x1220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x14];                                      // 0x1228(0x0014) MISSED OFFSET
	float                                              TimeDilation_MoveSpeed;                                   // 0x123C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeDilation_FireRate;                                    // 0x1240(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsThrowingGrenade;                                       // 0x1244(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x1245(0x0003) MISSED OFFSET
	float                                              TimeVolume_Base;                                          // 0x1248(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeVolume_MoveSpeed;                                     // 0x124C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeVolume_FireRate;                                      // 0x1250(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x1254(0x0004) MISSED OFFSET
	TArray<struct FShooterHealingSoundPair>            HealingSounds;                                            // 0x1258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTetherTargetData>                   TetheredTargets;                                          // 0x1268(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooter_BuffBase*>                   CurrentAdditiveBuffs;                                     // 0x1278(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooter_BuffBase*>                   CurrentOverrideBuffs;                                     // 0x1288(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData64[0x8];                                       // 0x1298(0x0008) MISSED OFFSET
	TArray<struct FAbilityDebuffData>                  AbilityDebuffs;                                           // 0x12A0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FKillAssistData>                     WasDamagedByList;                                         // 0x12B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData65[0x50];                                      // 0x12C0(0x0050) MISSED OFFSET
	bool                                               bInLowGravityFX;                                          // 0x1310(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInIncreasedGravityFX;                                    // 0x1311(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowMantle;                                             // 0x1312(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAttachedGravitySeed;                                     // 0x1313(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowWeaponAnimCancel;                                   // 0x1314(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReloaded;                                                // 0x1315(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bThrowProjectile;                                         // 0x1316(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x11];                                      // 0x1317(0x0011) MISSED OFFSET
	float                                              CachedOverchargeGrowthScale;                              // 0x1328(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x14];                                      // 0x132C(0x0014) MISSED OFFSET
	TMap<struct FName, float>                          CharacterScalars;                                         // 0x1340(0x0050) (ZeroConstructor, Transient)
	int                                                ShieldedCount;                                            // 0x1390(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                HealedCount;                                              // 0x1394(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x9];                                       // 0x1398(0x0009) MISSED OFFSET
	bool                                               bShowHealthBar;                                           // 0x13A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x6];                                       // 0x13A2(0x0006) MISSED OFFSET
	struct FName                                       WeaponIKSocketName;                                       // 0x13A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               AssistBoneNames;                                          // 0x13B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DynamicSocketNames;                                       // 0x13C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ArmoredBoneNames;                                         // 0x13D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ArmoredBoneDamageMultiplier;                              // 0x13E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowNoTeamCollision;                                    // 0x13E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x13E5(0x0003) MISSED OFFSET
	float                                              NoHardLandAngleThreshold;                                 // 0x13E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DynamicSocketIndex;                                       // 0x13EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     StateOverrideAccel;                                       // 0x13F0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChargeAttackCursor;                                       // 0x13FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredFlyCameraRoll;                                     // 0x1400(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastFlyCameraRoll;                                        // 0x1404(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredCharacterScale;                                    // 0x1408(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredCharacterScaleBlendTime;                           // 0x140C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredCharacterScaleStartTime;                           // 0x1410(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedScale;                                              // 0x1414(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BlendingScale;                                            // 0x1418(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x1419(0x0003) MISSED OFFSET
	float                                              FlyCameraRollDampFactor;                                  // 0x141C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    TotalWeaponKick;                                          // 0x1420(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    CurrentWeaponKick;                                        // 0x142C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    LastWeaponKick;                                           // 0x1438(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData72[0xC];                                       // 0x1444(0x000C) MISSED OFFSET
	class AShooterCarryObject*                         CarryObject;                                              // 0x1450(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StateOverrideSpeed;                                       // 0x1458(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x2];                                       // 0x145C(0x0002) MISSED OFFSET
	bool                                               bWantsToADS;                                              // 0x145E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WasCarryingObjective;                                     // 0x145F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterUserWidget_HealByMessage*            HealByMessage;                                            // 0x1460(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DialogueTemplate;                                         // 0x1468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UShooterDialogueCharacter*                   Dialogue;                                                 // 0x1470(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData74[0x18];                                      // 0x1478(0x0018) MISSED OFFSET
	TArray<struct FPerspectiveMontagesPlayedInState>   PlayingAnimAltPerspectiveMap;                             // 0x1490(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPerspectiveMontagesPlayedInState>   PlayingReversedAnimAltPerspectiveMap;                     // 0x14A0(0x0010) (ZeroConstructor, Transient)
	float                                              VehicleReentryDelay;                                      // 0x14B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData75[0x4];                                       // 0x14B4(0x0004) MISSED OFFSET
	class UShooterCharacterLighting*                   VirtualLighting;                                          // 0x14B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VirtualLighting_AccumulatedTime;                          // 0x14C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x64];                                      // 0x14C4(0x0064) MISSED OFFSET
	class AHackerDrone*                                DroneControlled;                                          // 0x1528(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AActor*>                              AttachedActors;                                           // 0x1530(0x0010) (ZeroConstructor)
	bool                                               bIsPrimaryFirePressed;                                    // 0x1540(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData77[0x3];                                       // 0x1541(0x0003) MISSED OFFSET
	int                                                NumIntervalsInHealingStation;                             // 0x1544(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsBeingHealedByStation;                                   // 0x1548(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x7];                                       // 0x1549(0x0007) MISSED OFFSET
	TArray<struct FCachedPickupSpawn>                  PickupsToSpawn;                                           // 0x1550(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData79[0x78];                                      // 0x1560(0x0078) MISSED OFFSET
	TMap<struct FName, struct FPerspectiveFX>          PerspectiveFX;                                            // 0x15D8(0x0050) (ZeroConstructor, Transient)
	int                                                CurrentKillstreak;                                        // 0x1628(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWeaponInspect;                                           // 0x162C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x3];                                       // 0x162D(0x0003) MISSED OFFSET
	class AShooterPlayerController*                    PreviousController;                                       // 0x1630(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamageThisTick;                                           // 0x1638(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x24];                                      // 0x163C(0x0024) MISSED OFFSET
	struct FShooterCharacterMaterialShaderParameters   CharacterShaderParams;                                    // 0x1660(0x01B0) (Transient)
	class UShooterWidgetComponent*                     NpcWidget;                                                // 0x1810(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooterZipLine*                             CurrentZipLine;                                           // 0x1818(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UAkAudioEvent*                               ZipLineAttachSound;                                       // 0x1820(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ZipLineSlideLoopSound;                                    // 0x1828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkSoundInstance*                            ZipLineSlideLoopInstance;                                 // 0x1830(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkAudioEvent*                               ZipLineDetachSound;                                       // 0x1838(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData82[0x28];                                      // 0x1840(0x0028) MISSED OFFSET
	struct FShooterReplicatedArmor                     BodyArmorData;                                            // 0x1868(0x0018) (Net, Transient)
	struct FShooterReplicatedArmor                     HelmetArmorData;                                          // 0x1880(0x0018) (Net, Transient)
	unsigned char                                      UnknownData83[0x8];                                       // 0x1898(0x0008) MISSED OFFSET
	bool                                               bIsInDangerZone;                                          // 0x18A0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData84[0x7];                                       // 0x18A1(0x0007) MISSED OFFSET
	class UClass*                                      CosmeticSpawnerClass;                                     // 0x18A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsingWingsuit;                                           // 0x18B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x18B1(0x0007) MISSED OFFSET
	TMap<class AShooterPickup*, float>                 PendingPickupRequests;                                    // 0x18B8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData86[0x4];                                       // 0x1908(0x0004) MISSED OFFSET
	float                                              REVIVE_MAX_MOVEMENT_DISTANCE;                             // 0x190C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDownButNotOut;                                         // 0x1910(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x7];                                       // 0x1911(0x0007) MISSED OFFSET
	class AActor*                                      DamageCauserDownState;                                    // 0x1918(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x48];                                      // 0x1920(0x0048) MISSED OFFSET
	struct FName                                       LeftFootSurfaceBoneName;                                  // 0x1968(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootSurfaceBoneName;                                 // 0x1970(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootSurfaceTraceDistance;                                 // 0x1978(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     FootSurfaceCollisionChannel;                              // 0x197C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData89[0x3];                                       // 0x197D(0x0003) MISSED OFFSET
	float                                              FootTraceMaxDistanceFromLocalListener;                    // 0x1980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData90[0xC];                                       // 0x1984(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacter");
		return ptr;
	}


	bool WantsToRun();
	bool WantsToFire();
	bool WantsToBlindFire();
	bool WantsToAltFire();
	void UpdatePerspectiveFXWithTrace(const struct FName& ReferenceName, const struct FPerspectiveFXData& FXData, const struct FVector& Direction, float Distance);
	void UpdateInventoryUI();
	void StopPerspectiveFX(const struct FName& ReferenceName);
	void SpawnPerspectiveFX(const struct FName& ReferenceName, const struct FPerspectiveFXData& FXData, class AShooterWeapon* OptionalWeapon, bool bOffHandWeapon);
	void SetWantsToFire(bool Want);
	void SetWantsToAltFire(bool Want);
	float SetTurnOnPointAlpha(float InTurnOnPointCursor, float inSpeed);
	struct FHitResult SetSurfaceSwitch(const struct FName& Socket, float TraceDistance, TEnumAsByte<ECollisionChannel> CollisionChannel);
	void SetScalarParamForAllMaterialsIncludingWeapons(const struct FName& ParamName, float ParamVal, bool bOnThirdPersonOnly);
	void SetScalarParamForAllMaterials(const struct FName& ParamName, float ParamVal);
	void SetRenderCustomDepthForAllMeshes(bool bValue);
	void SetLockSpawnAnimation(bool bNewLock);
	void SetLockShiftAbility(bool bNewLock);
	void SetLockQAbility(bool bNewLock);
	void SetLockPrimaryFire(bool bNewLock);
	void SetLockMovement(bool bNewLock);
	void SetLockEAbility(bool bNewLock);
	void SetLockAltFire(bool bNewLock);
	void SetForceNoOcclusionForAllMeshes(bool bValue);
	void SetCharacterScalarParam(const struct FName& ShaderParamName, float NewValue, TEnumAsByte<EShooterCharacterMaterialPerson> WhichPerson, TEnumAsByte<EShooterCharacterMaterialSetMode> SetMode);
	void SetCharacterHealed(bool IsHealed, class AShooterPlayerState* Healer, TEnumAsByte<EHealSoundType> SoundType);
	void SetBeingRevived(class AShooterCharacter* Unused);
	void ServerUnstuck();
	void ServerTryStartDoorKick(class UShooterInteractComponent* Interaction);
	void ServerToggleJumpStartState(bool OnOff);
	void ServerToggleDodgeStartState(bool OnOff);
	void ServerThrowThrowable();
	void ServerSwitchFireAction();
	void ServerSwitchCameraShoulder(bool bIsSwitched);
	void ServerSwitchAmmoType();
	void ServerStartSearchDestroy(int AmmoToFire, const struct FHitResult& Impact);
	void ServerSetThrowTarget(class AShooterCharacter* Player);
	void ServerSetTargeting(bool bNewTargeting);
	void ServerSetRunning(bool bNewRunning, bool bToggle, TEnumAsByte<ERunType> RunType);
	void ServerSetPrimaryFireInput(bool bIsPressed);
	void ServerSetMoveSpeedModifier(float MoveSpeedModifier);
	void ServerSetJumpKeyDown(bool bKeyDown);
	void ServerSetJetGliderMaxSpeed(float MaxSpeed);
	void ServerSetEnergyDamageMultiplier(float Multiplier);
	void ServerSetDesiredWeaponIndex(int DesiredWeaponID);
	void ServerSetChargeCursor(float Cursor);
	void ServerSetBuoyancyActive(bool bActive);
	void ServerSetBallisticDamageMultiplier(float Multiplier);
	void ServerSetArmStrengthAnimationSpeed(float SpeedMultiplier);
	void ServerSetAirDive(bool TryAirDive);
	void ServerSetAimState(TEnumAsByte<EAimState> NewAimState);
	void ServerRequestUseItem();
	void ServerRequestStopInteract(class UShooterInteractComponent* Interaction);
	void ServerRequestStartInteract(class UShooterInteractComponent* Interaction);
	void ServerRequestSpawnKickDecal(class UTexture2D* KickDecalTexture, const struct FHitResult& Impact, const struct FRotator& SpawnRotation, bool IsGolden);
	void ServerRequestKickInDoor(class UShooterInteractComponent* Interaction);
	void ServerRequestInteract(class UShooterInteractComponent* Interaction, int SwapInventoryIndex);
	void ServerRequestEquipWeapon(int InventoryIndex);
	void ServerRequestAutoPickup(TArray<class AShooterPickup*> AmmoPickups);
	void ServerRequestATM_Withdraw(class UShooterInteractComponent* Interaction);
	void ServerRequestATM_Deposit(class UShooterInteractComponent* Interaction);
	void ServerReloadWeapon(class AShooterWeapon* NewWeapon);
	void ServerRedirectProjectile();
	void ServerRecycleItemConfirmed(class AShooterRecycleBin* BinToNotify, class AShooterWeapon* RecycledItem);
	void ServerPlaySound(class UAkAudioEvent* Sound, bool bSkipLocalCharacter);
	void ServerPlayloopedSound(class UAkAudioEvent* Sound, int64_t NewID);
	void ServerGoToState(class UClass* StateClass);
	void ServerDropCurrentItem(bool bSpawnPickup);
	void ServerDropCosmetic(unsigned char CosmeticIndex);
	void ServerDropAmmo(TEnumAsByte<EAmmoType> AmmoType);
	void ServerDetonateLastProjectile();
	void ServerDeactivateDodge();
	void ServerATMInteract(class UShooterInteractComponent* ATM, bool Start);
	void ServerArmProjectile();
	void ServerAddForce(const struct FVector& Force);
	void RequestProjectileHit(class AShooterCharacter* Shooter, int clientProjectileID, const struct FHitResult& HitInfo, float DistanceTraveled);
	void RequestInteract(class UShooterInteractComponent* Interaction);
	void ReplicasSetTargeting(bool bNewTargeting);
	void ReplicasGoToState(class UClass* StateClass);
	float ReceiveHealing(float Heal, class AController* EventInstigator, class AActor* HealCauser, class UAkAudioEvent* HealSound);
	void PlayPerspectiveSound(class UAkAudioEvent* AkEvent);
	void PlayDialogue(class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds);
	float PlayAnimMontageAlt(class UAnimMontage* Anim, class UAnimMontage* AltAnim, float InPlayRate, class UClass* PlayedInState);
	void OnSwitchMeshPerspectives(bool bThirdPerson);
	void OnStopSpectating();
	void OnSpectatorTargetChange(class AShooterCharacter* NewTarget);
	void OnSlowTimeStart();
	void OnSlowTimeEnd();
	void OnSendDrone(bool isLeftDrone);
	void OnRep_Vehicle(class AActor* PreviousVehicle);
	void OnRep_ServerEquippedWeapon();
	void OnRep_LastTakeHitInfo();
	void OnRep_IsInDangerZone();
	void OnRep_IsCameraShoulderSwitched();
	void OnRep_Inventory();
	void OnRep_HelmetArmorData();
	void OnRep_Health();
	void OnRep_CurrentZipLine();
	void OnRep_CurrentWeaponSlots();
	void OnRep_CurrentItemSlots();
	void OnRep_CurrentAimState();
	void OnRep_bUsingWingsuit();
	void OnRep_Boost();
	void OnRep_BodyArmorData();
	void OnRep_AmmoCounts();
	void OnRep_Abilities();
	void OnLocalPlayerTookDamage(float Damage, class UClass* DamageType, class APawn* InstigatingPawn, class AActor* DamageCauser);
	void OnLocalPlayerDealtDamage(class AShooterCharacter* DamagedPlayer, class UClass* DamageType, int DamageDealt, float HealthFraction, bool bWasHeadShot);
	void OnInteract(class AShooterCharacter* OtherActor);
	void OnFootstep(class UAkAudioEvent* Event, bool bLeftFoot, class UAkComponent* AkComponent, struct FHitResult* OutHit);
	void OnFancyJump();
	void OnExitTooltipZone();
	void OnEnterTooltipZone(TEnumAsByte<ETutorialTooltipCategory> Category);
	void OnEnterExitNoProneZone(bool bEntered);
	void OnEndOfMatchOverlaySet();
	void OnEndOfMatchOverlayCleared();
	void OnEnableHighlight();
	void OnDroneSpawn(bool isLeftDrone);
	void OnDisableHighlight();
	void OnDedicatedSpectatorToggled(bool bEnabled);
	void OnCharacterShieldedEnd(bool bFirstPerson, bool bWasDestroyed);
	void OnCharacterShieldedBegin(bool bFirstPerson);
	void OnCharacterHealedEnd(bool bFirstPerson);
	void OnCharacterHealedBegin(bool bFirstPerson);
	void OnCharacterCustomizationCompleted();
	void OnAbilityStatusChanged();
	void NotifyBuffRemoved(TEnumAsByte<EBuffType> BuffType);
	void NotifyBuffApplied(TEnumAsByte<EBuffType> BuffType);
	void NetMultiCastUnstuck();
	void NetMultiCastToggleJumpStartState(bool OnOff);
	void NetMultiCastToggleDodgeStartState(bool OnOff);
	void NetMultiCastStopLoopedSound(int64_t NewID);
	void NetMultiCastStopFall();
	void NetMultiCastStopAttachedTeamFX();
	void NetMultiCastStartFall();
	void NetMulticastSpawnKickDecal(class UTexture2D* KickDecalTexture, const struct FHitResult& Impact, const struct FRotator& SpawnRotation, bool IsGolden);
	void NetMultiCastSetSoundSwitch(const struct FName& SwitchGroup, const struct FName& PerspectiveState);
	void NetMultiCastSetImpactSwitch(TArray<class AShooterCharacter*> Victims);
	void NetMultiCastSetCharacterHealed(bool Healed, class AShooterPlayerState* Healer, TEnumAsByte<EHealSoundType> SoundType);
	void NetMultiCastServerBodyPositions(TArray<struct FDebugBodyPosition> BodyPositions, const struct FColor& Color);
	void NetMulticastRemoveCharacterScalar(const struct FName& ParamName, float MatParamValue, float BlendTime);
	void NetMultiCastPlaySoundInternal(class UAkAudioEvent* Sound, TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue, uint32_t RandomSeed, bool bSkipLocalCharacter);
	void NetMultiCastPlayLoopedSoundInternal(class UAkAudioEvent* Sound, int64_t NewID, uint32_t RandomSeed);
	void NetMultiCastPlayFXAtLocation(class UParticleSystem* FXtoPlay, class UAkAudioEvent* Sound, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void NetMultiCastPlayAttachedTeamFX(class UParticleSystem* TeamFXtoPlayFirstPerson, class UParticleSystem* TeamFXtoPlay, class UParticleSystem* EnemyFXtoPlay);
	void NetMultiCastPlayAttachedFX(class UParticleSystem* FXtoPlay);
	void NetMultiCastPlayAbilitySoundInternal(class UShooterAbility* Ability, TEnumAsByte<EShooterAbilitySoundType> SoundType, uint32_t RandomSeed);
	void NetMultiCastOnHealedByOther(int HealAmount, class AShooterCharacter* Healer, class AActor* HealCauser, float PreviousHealthPercentage, float NewHealthPercentage, uint32_t Seed);
	void NetMultiCastOnHealCharacter(int HealAmount, class AShooterCharacter* PawnYouHealed, float PreviousHealthPercentage, float NewHealthPercentage, uint32_t Seed);
	void NetMulticastDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, const struct FVector& DamageCauserLocation, const struct FName& BoneHit, int DeathAnimationIndex, uint32_t Seed, class AShooterPlayerState* DeadManPlayerState);
	void NetMulticastBloodImpactFX(unsigned char BloodIndex, int16_t BoneIndex, const struct FVector_NetQuantize& Offset, const struct FVector_NetQuantizeNormal& Direction);
	void NetMultiCastAddNewBuff(class AShooter_BuffBase* NewBuff);
	void NetMultiCastAddCharacterScalar(float Scale, float BlendTime, const struct FName& ParamName, float MatParamValue);
	void MultiCastSpawnImpactEffect(const struct FHitResult& Impact, class UClass* ImpactEffect);
	void MultiCastSetVelocity(class AShooterCharacter* Target, const struct FVector& Velocity);
	void MulticastSetDesiredWeaponIndex(int DesiredWeapon);
	void MulticastRemoveTetheredCharacter(class AShooterCharacter* CharacterToRemove);
	void MultiCastImpulseTarget(class AShooterCharacter* Target, const struct FVector& Impulse, bool IsSelfImpulse);
	void MulticastHealMe();
	void MultiCastGoToState(class UClass* StateClass);
	void MultiCastEvent_DisplacePawn(const struct FVector& displaceVector);
	void MultiCastApplyRadialImpulseTarget(class AShooterCharacter* Target, const struct FVector& Origin, float Radius, float Force);
	void MulticastAddTetheredCharacter(class AShooterCharacter* CharacterToAdd, class UParticleSystem* TetherFX);
	void MultiCastAddForceToTarget(class AShooterCharacter* Target, const struct FVector& Force);
	bool IsUsingScope();
	bool IsUpperBodyMontagePlaying();
	bool IsTurnOnPointMontagePlaying();
	bool IsTargeting();
	bool IsSprinting();
	bool IsRolling();
	bool IsPerspectiveFXActive(const struct FName& ReferenceName);
	bool IsOnWall();
	bool IsMontagePlayingInSlotBranch(const struct FName& SlotName, TEnumAsByte<EBluePrintBranchControl>* OutResult);
	bool IsMontagePlayingInSlot(const struct FName& SlotName);
	bool IsMontagePlaying(class UAnimMontage* AnimMontage);
	bool IsMantleActive();
	bool IsLowerBodyIdleRunActive();
	bool IsLookingNearPosition(const struct FVector& TargetPosition, float Radius);
	bool IsJumpActive();
	bool IsInOzone();
	bool IsFullBodySlotMontagePlaying();
	bool IsFullBodyMontagePlaying();
	bool IsFreightTrainDashActive();
	bool IsFreightTrainActive();
	bool IsFirstPerson();
	bool IsFiring();
	bool IsFallActive();
	bool IsDoubleJumpActive();
	bool IsCurrentWeaponPrimary();
	bool IsBuffed(class UClass* BuffClass);
	bool IsBeingViewedNotFromLevelCamera();
	bool IsBeingViewed();
	bool IsBeingSpectatedNotFromLevelCamera();
	bool IsBeingSpectated();
	bool IsAlive();
	bool IsAirDiveActive();
	float GetXYSpeed();
	struct FTransform GetWeaponIKTransform();
	class UAimOffsetBlendSpace* GetWeaponDownAimOffset();
	class AShooterWeapon* GetWeaponByIndex(int Index);
	class AShooterWeapon* GetWeapon();
	class AShooterPlayerController* GetViewingPlayerController();
	float GetVerticalSpeed();
	TEnumAsByte<EVehicleSeatState> GetVehicleSeatState();
	class UAnimMontage* GetUpperBodyMontage();
	class UAnimMontage* GetUpperBody2Montage();
	int GetTotalAmmoByType(TEnumAsByte<EAmmoType> TypeToCheck);
	class UCameraComponent* GetThirdPersonCamera();
	class UAimOffsetBlendSpace* GetThirdPersonAimOffset();
	int GetTeamNum();
	float GetTargetingSpeedModifier();
	TEnumAsByte<ECharacterMovementStance> GetStance();
	float GetSpeed();
	class USkeletalMeshComponent* GetSpecifcPawnMesh(TEnumAsByte<EPawnMesh> MeshType);
	struct FName GetSkeletonType();
	class AShooterPlayerController* GetShooterPlayerController();
	float GetRunningSpeedModifier();
	struct FRotator GetRollRotation();
	struct FRotator GetProceduralWeaponSway();
	int GetPreviousWeaponIndex();
	class AShooterPlayerState* GetPlayerState();
	float GetPitch();
	void GetPerspectiveFXSpawnedParticles(const struct FName& ReferenceName, TArray<class UParticleSystemComponent*>* OutSpawnedParticles);
	class USkeletalMeshComponent* GetPawnMesh();
	TArray<class UParticleSystem*> GetOverrideFX(const struct FName& OverrideName);
	class AShooterWeapon* GetOtherWeapon();
	struct FVector GetOrComputeAimPoint(float TraceRadius);
	float GetNormalizedHelmetHealth();
	float GetNormalizedHealth();
	float GetNormalizedBodyArmorHealth();
	class UAnimMontage* GetMontagePlayingInSlot(const struct FName& SlotName);
	class UAnimMontage* GetMeleeKickAttack();
	int GetMaxHealth();
	class UShooterAnimationPackage* GetMasterAnimPackage();
	float GetLastHitTime();
	float GetLastHitByLocalPlayerTime();
	float GetLastDamageDealtTime();
	class AShooterWeapon* GetInventoryWeapon(int Index);
	int GetInventoryCount();
	void GetInputRotation(float* X, float* Y);
	class UAnimMontage* GetInitialWeaponReset();
	class AShooterHUD* GetHUD();
	float GetGravityScaleWithDecay();
	float GetGravityScaleNormalized(bool bShouldIgnoreOverrides, float ExpectedMinGravity, float ExpectectedMaxGravity, float ExpectedDefaultGravity);
	float GetGravityScaleIgnoreOverrides();
	class UAnimMontage* GetFullBodyMontage();
	float GetFractionOfTurnRadius(float Radius, bool bUseDampedTurnSpeed);
	class UCameraComponent* GetFirstPersonCamera();
	int GetCurrentWeaponIndex();
	class AShooterWeapon* GetCurrentWeapon();
	int GetCurrentAmmo();
	struct FName GetCharacterType();
	class UShooterCharacterDefinition* GetCharacterDefinition();
	class AShooter_BuffBase* GetBuff(class UClass* BuffClass);
	class UAnimMontage* GetBlindFireOut();
	class UAnimMontage* GetBlindFireIn();
	class UAimOffsetBlendSpace* GetBlindFireAimOffset();
	int GetAmmoByType(TEnumAsByte<EAmmoType> TypeToCheck);
	TEnumAsByte<EAimState> GetAimState();
	float GetAimOffsetYaw();
	struct FRotator GetAimOffsets();
	float GetAimOffsetPitch();
	struct FVector GetAimDirectionNoCollision();
	class UAnimMontage* GetADSTransOut(class UAnimMontage** OutAltPerspective);
	class UAnimMontage* GetADSTransIn(class UAnimMontage** OutAltPerspective);
	void GetAdditionalMultipassMeshes(TArray<class UMeshComponent*>* Meshes);
	float GetActorLocalMoveYawFromInput();
	float GetActorLocalMoveYaw();
	float GetActorLocalMoveRawInput();
	class UCameraComponent* GetActiveCamera();
	bool GetAbilityUseAbilityBar();
	class UShooterAbility* GetAbility(class UClass* AbilityClass);
	void ExitedLowGravityFX();
	void ExitedIncreasedGravityFX();
	void EventOnHealWidgetUpdate(TEnumAsByte<EHealWidgetState> HealWidgetState, bool bActive);
	void EnteredLowGravityFX();
	void EnteredIncreasedGravityFX();
	void EndHealthPickupFX();
	float ComputeTurnOnPoint();
	void ClientUpdateThreatIndicator(class AShooterCharacter* Threat, float DamageAmount, class UClass* DmgType);
	void ClientSwapToDesiredWeapon(int DesiredWeapon);
	void ClientStartReload(int FireModeNum);
	void ClientSetThrowAmmoAmount(int Ammo);
	void ClientSetLockPrimaryFire(bool bNewLock);
	void ClientSetBeingRevived(bool InBeingRevived);
	void ClientSetAccelDebuffTime(float AccelDebuffTime);
	void ClientRecycleItem(class AShooterRecycleBin* BinToNotify, class AShooterWeapon* ItemToRecycle, int ExpectedAmmoInClip);
	void ClientPopupText(const class FString& Text, TEnumAsByte<EPopupTextTemplate> Template, const struct FVector& Offset, class AShooterCharacter* AroundCharacter);
	void ClientPlaySoundAtLocation(class UAkAudioEvent* Sound, const struct FVector& Location, const struct FRotator& Orientation, TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue);
	void ClientPlaySound(class UAkAudioEvent* Sound, TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue);
	void ClientPlayHealSound(class UAkAudioEvent* Sound);
	void ClientPlay2DHitSounds(float TargetRemainingHealth, float TargetRemainingArmor);
	void ClientPickupFail();
	void ClientNotifyQuickUseItem();
	void ClientNotifyItemWasUsed();
	void ClientInteractRequestFailed();
	void ClientEvent_Stagger();
	void ClientEvent_NotifyAbilityKillAssist(class AShooterPlayerState* KilledPlayerState);
	void ClientEvent_FlagSound();
	void ClientDropCurrentItem();
	void ClientCheerObjective(int NumCheerers, TEnumAsByte<EShooterDialogueCharacterFunction> CalloutID, float MaxDistance);
	void ClearBeingRevived(class AShooterCharacter* Unused);
	void BPToggleDangerZone(bool bEntered);
	void BlueprintEventDeath(class UClass* DamageType, bool bWasFirstPerson);
	void BeginZipLine(class AShooterZipLine* ZipLineActor);
	void BeginDeathFX(class UClass* DamageType);
	void AnimNotifyThrow();
	void AnimNotifyReload(int FireMode);
	void AnimNotifyAllowWeaponCancel();
	void AdjustCashWallet(int ToAdd);
	void AdjustAmmoByType(TEnumAsByte<EAmmoType> TypeToAdjust, int AmmoAmount);
	void AddOverrideFX(const struct FName& OverrideName, class UParticleSystem* OverrideFX, class UParticleSystem* OverrideTeamFX);
};


// Class ShooterGame.ShooterBuff_HealOverTime
// 0x0018 (0x0470 - 0x0458)
class AShooterBuff_HealOverTime : public AShooter_BuffBase
{
public:
	struct FHealOverTimeData                           HOTData;                                                  // 0x0458(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0464(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_HealOverTime");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_MarkedForDeath
// 0x0008 (0x0460 - 0x0458)
class AShooterBuff_MarkedForDeath : public AShooter_BuffBase
{
public:
	struct FMarkedForDeathData                         MarkData;                                                 // 0x0458(0x0004) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_MarkedForDeath");
		return ptr;
	}

};


// Class ShooterGame.Shooterbuff_PointAttractor
// 0x0020 (0x0478 - 0x0458)
class AShooterbuff_PointAttractor : public AShooter_BuffBase
{
public:
	struct FPointAttractorData                         AttractorConfig;                                          // 0x0458(0x0008) (Edit, DisableEditOnInstance)
	struct FVector                                     AttractorPoint;                                           // 0x0460(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttractionRadius;                                         // 0x046C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBeginAttraction;                                         // 0x0470(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	float                                              CurrentDelayTime;                                         // 0x0474(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.Shooterbuff_PointAttractor");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_Silence
// 0x0000 (0x0458 - 0x0458)
class AShooterBuff_Silence : public AShooter_BuffBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_Silence");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_SilenceAndJam
// 0x0000 (0x0458 - 0x0458)
class AShooterBuff_SilenceAndJam : public AShooterBuff_Silence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_SilenceAndJam");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_SpeedMultiplier
// 0x0010 (0x0468 - 0x0458)
class AShooterBuff_SpeedMultiplier : public AShooter_BuffBase
{
public:
	struct FSpeedBuffData                              SpeedData;                                                // 0x0458(0x0008) (Edit, DisableEditOnInstance)
	float                                              CurrentSpeedModifier;                                     // 0x0460(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_SpeedMultiplier");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_Stasis
// 0x0080 (0x04D8 - 0x0458)
class AShooterBuff_Stasis : public AShooter_BuffBase
{
public:
	struct FStatisBuffData                             StasisData;                                               // 0x0458(0x0068) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	float                                              CurrentSlowModifier;                                      // 0x04C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentInitialGravityTime;                                // 0x04CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInStasisGravity;                                         // 0x04D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_Stasis");
		return ptr;
	}

};


// Class ShooterGame.ShooterBuff_WeaponSwapSpeed
// 0x0010 (0x0468 - 0x0458)
class AShooterBuff_WeaponSwapSpeed : public AShooter_BuffBase
{
public:
	struct FWeaponSwapBuffData                         SpeedData;                                                // 0x0458(0x0008) (Edit, DisableEditOnInstance)
	float                                              CurrentSpeedModifier;                                     // 0x0460(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBuff_WeaponSwapSpeed");
		return ptr;
	}

};


// Class ShooterGame.ShooterIntelBuff
// 0x0020 (0x0478 - 0x0458)
class AShooterIntelBuff : public AShooter_BuffBase
{
public:
	struct FIntelBuffData                              IntelData;                                                // 0x0458(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterIntelBuff");
		return ptr;
	}


	void OnDedicatedSpectatorToggled(bool bEnabled);
};


// Class ShooterGame.ShooterAbility_AimDirDash
// 0x0010 (0x01E8 - 0x01D8)
class UShooterAbility_AimDirDash : public UShooterAbility
{
public:
	struct FShooterAbilityData_AimDirDash              DashConfig;                                               // 0x01D8(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_AimDirDash");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_AirDive
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_AirDive : public UShooterAbility
{
public:
	float                                              AirDiveZVelocity;                                         // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_AirDive");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_AkimboDuzi
// 0x0010 (0x01E8 - 0x01D8)
class UShooterAbility_AkimboDuzi : public UShooterAbility
{
public:
	struct FShooterAbilityData_AkimboDuzi              DuziConfig;                                               // 0x01D8(0x0008) (Edit, BlueprintVisible)
	class AShooterWeapon*                              AkimboDuzi;                                               // 0x01E0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_AkimboDuzi");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_AmpedUp
// 0x0050 (0x0228 - 0x01D8)
class UShooterAbility_AmpedUp : public UShooterAbility
{
public:
	struct FShooterAbilityData_AmpedUp                 AmpedConfig;                                              // 0x01D8(0x0038) (Edit, BlueprintVisible)
	class AShooter_BuffBase*                           AmpedBuff;                                                // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkSoundInstance*                            IdleAC;                                                   // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    AmbientPSU;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_AmpedUp");
		return ptr;
	}


	void NetMultiCastStopBuffActiveFX();
	void NetMultiCastPlayBuffActiveFX();
};


// Class ShooterGame.ShooterAbility_ApplyBloodBoil
// 0x0038 (0x0210 - 0x01D8)
class UShooterAbility_ApplyBloodBoil : public UShooterAbility
{
public:
	struct FShooterAbilityData_Applybuff               ApplyBuff;                                                // 0x01D8(0x0018) (Edit, DisableEditOnInstance)
	class AShooter_BuffBase*                           ActiveBuff;                                               // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           CurrentTarget;                                            // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           BuffTarget;                                               // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentUITime;                                            // 0x0208(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ApplyBloodBoil");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_Backflip
// 0x0010 (0x01E8 - 0x01D8)
class UShooterAbility_Backflip : public UShooterAbility
{
public:
	struct FShooterAbilityData_Backflip                FlipConfig;                                               // 0x01D8(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Backflip");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_BattleDroneAttack
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_BattleDroneAttack : public UShooterAbility
{
public:
	struct FShooterAbilityData_DroneAttack             DroneConfig;                                              // 0x01D8(0x0028) (Edit, BlueprintVisible)
	int                                                DroneAmmo;                                                // 0x0200(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      DroneMesh;                                                // 0x0208(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              FireTimer;                                                // 0x0210(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ShotCount;                                                // 0x0214(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_BattleDroneAttack");
		return ptr;
	}


	void ClientFire();
};


// Class ShooterGame.ShooterAbility_BattleHeal
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_BattleHeal : public UShooterAbility
{
public:
	struct FShooterAbilityData_BattleHeal              BattleHealConfig;                                         // 0x01D8(0x0028) (Edit, BlueprintVisible)
	float                                              HealTimer;                                                // 0x0200(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   BuffedFriends;                                            // 0x0208(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_BattleHeal");
		return ptr;
	}


	void NotifyBattleBuff(bool Start, class AShooterCharacter* PlayerGettingBuffed);
};


// Class ShooterGame.ShooterAbility_Battlestation
// 0x0020 (0x01F8 - 0x01D8)
class UShooterAbility_Battlestation : public UShooterAbility
{
public:
	struct FShooterAbilityData_Battlestation           BattlestationConfig;                                      // 0x01D8(0x0018) (Edit, DisableEditOnInstance)
	class AShooterBaseDroid*                           Battlestation;                                            // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Battlestation");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_CatalyzeBuff
// 0x0018 (0x01F0 - 0x01D8)
class UShooterAbility_CatalyzeBuff : public UShooterAbility
{
public:
	struct FShooterAbilityData_CatalyzeBuff            AbilityData;                                              // 0x01D8(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_CatalyzeBuff");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_ChargeJump
// 0x0020 (0x01F8 - 0x01D8)
class UShooterAbility_ChargeJump : public UShooterAbility
{
public:
	struct FShooterAbilityData_ChargeJump              ChargeJumpConfig;                                         // 0x01D8(0x0010) (Edit, BlueprintVisible)
	float                                              CurrentChargeTime;                                        // 0x01E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentJumpStrength;                                      // 0x01EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BaseMoveSpeed;                                            // 0x01F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentMoveSpeed;                                         // 0x01F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ChargeJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_ChargeShot
// 0x0028 (0x0200 - 0x01D8)
class UShooterAbility_ChargeShot : public UShooterAbility
{
public:
	struct FShooterAbilityData_ChargeShot              ChargeShotConfig;                                         // 0x01D8(0x0018) (Edit, BlueprintVisible)
	TArray<class UMaterialInterface*>                  CachedWeaponMaterials;                                    // 0x01F0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ChargeShot");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_ChargingDashBoost
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_ChargingDashBoost : public UShooterAbility
{
public:
	struct FShooterAbilityData_ChargeDashBoost         DashBoostConfig;                                          // 0x01D8(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ChargingDashBoost");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_CombatRoll
// 0x0060 (0x0238 - 0x01D8)
class UShooterAbility_CombatRoll : public UShooterAbility
{
public:
	struct FShooterAbilityData_CombatRoll              RollConfig;                                               // 0x01D8(0x0040) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0218(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_CombatRoll");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_ComboSystem
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_ComboSystem : public UShooterAbility
{
public:
	struct FShooterAbilityData_ComboSystem             ComboSystemConfig;                                        // 0x01D8(0x0038) (Edit, BlueprintVisible)
	float                                              ComboPercent;                                             // 0x0210(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                DecayLevel;                                               // 0x0214(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ComboSystem");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_ConcussionBlast
// 0x0010 (0x01E8 - 0x01D8)
class UShooterAbility_ConcussionBlast : public UShooterAbility
{
public:
	struct FShooterAbilityData_ConcussionBlast         ConcussionConfig;                                         // 0x01D8(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ConcussionBlast");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_DeployTeleporter
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_DeployTeleporter : public UShooterAbility
{
public:
	struct FShooterAbilityData_DeployTeleporter        DeployTeleporterConfig;                                   // 0x01D8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_DeployTeleporter");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_DevourGravity
// 0x0018 (0x01F0 - 0x01D8)
class UShooterAbility_DevourGravity : public UShooterAbility
{
public:
	struct FShooterAbilityData_DevourGravity           AbilityData;                                              // 0x01D8(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_DevourGravity");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_Throw
// 0x00B8 (0x0290 - 0x01D8)
class UShooterAbility_Throw : public UShooterAbility
{
public:
	struct FShooterAbilityData_Throw                   ThrowConfig;                                              // 0x01D8(0x0060) (Edit, BlueprintVisible)
	TArray<class UStaticMeshComponent*>                PredictiveArcPointMeshes;                                 // 0x0238(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UStaticMeshComponent*                        PredictiveArcImpactMesh;                                  // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0250(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Throw");
		return ptr;
	}


	void ServerRequestThrow();
	void ClientSetPredictionData(const struct FShooterProjectilePredictionData& PredictionData);
};


// Class ShooterGame.ShooterAbility_DroneManager
// 0x00F8 (0x02D0 - 0x01D8)
class UShooterAbility_DroneManager : public UShooterAbility
{
public:
	struct FShooterAbilityData_DroneManager            DroneConfig;                                              // 0x01D8(0x0088) (Edit, DisableEditOnInstance)
	class USkeletalMeshComponent*                      FP_DroneLeft;                                             // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      FP_DroneRight;                                            // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              DroneLeftCooldown;                                        // 0x0270(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DroneRightCooldown;                                       // 0x0274(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDroneLeftAvailable;                                      // 0x0278(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDroneRightAvailable;                                     // 0x0279(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x027A(0x0006) MISSED OFFSET
	class AShooterHealMine*                            DroneLeft;                                                // 0x0280(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterHealMine*                            DroneRight;                                               // 0x0288(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterHealMine*                            DroneDeploying;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           LocalThrowTarget;                                         // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           PreviousLocalThrowTarget;                                 // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET
	class UParticleSystemComponent*                    LeftDroidWarpOutPSC;                                      // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RightDroidWarpOutPSC;                                     // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_DroneManager");
		return ptr;
	}


	void ToggleDroneFrenzy(bool bFrenzy, class USkeletalMeshComponent* LeftDrone, class USkeletalMeshComponent* RightDrone);
	void NetMulticastTPSendDroneFX(bool isLeftDrone);
	void NetMulticastTPBeginSendDroneFX(bool isLeftDrone);
	void NetMulticastPlayDroneDeployDialogue(class AShooterCharacter* Target);
	class AShooterHealMine* GetTPDrone(bool bLeftDrone);
	void ClientResetDrone(bool isLeftDrone);
	void ClientHideDrone(bool isLeftDrone);
};


// Class ShooterGame.ShooterAbility_ExtraWeapon
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_ExtraWeapon : public UShooterAbility
{
public:
	class UClass*                                      WeaponClass;                                              // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ExtraWeapon");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_GhostScoutMode
// 0x0018 (0x01F0 - 0x01D8)
class UShooterAbility_GhostScoutMode : public UShooterAbility
{
public:
	struct FShooterAbilityData_GhostScoutMode          ScoutModeConfig;                                          // 0x01D8(0x0010) (Edit, BlueprintVisible)
	bool                                               bStealthActive;                                           // 0x01E8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_GhostScoutMode");
		return ptr;
	}


	void OnRep_StealthActive();
};


// Class ShooterGame.ShooterAbility_GravitySmash
// 0x0030 (0x0208 - 0x01D8)
class UShooterAbility_GravitySmash : public UShooterAbility
{
public:
	struct FShooterAbilityData_GravitySmash            SmashConfig;                                              // 0x01D8(0x0020) (Edit, BlueprintVisible)
	class AShooterGravitySeed*                         SmashSeed;                                                // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_GravitySmash");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_HackerDrone
// 0x0018 (0x01F0 - 0x01D8)
class UShooterAbility_HackerDrone : public UShooterAbility
{
public:
	struct FShooterAbilityData_HackDrone               DroneConfig;                                              // 0x01D8(0x0008) (Edit, DisableEditOnInstance)
	class AHackerDrone*                                Drone;                                                    // 0x01E0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerController*                    Controller;                                               // 0x01E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_HackerDrone");
		return ptr;
	}


	void OnRep_Drone();
};


// Class ShooterGame.ShooterAbility_JetGlider
// 0x00A8 (0x0280 - 0x01D8)
class UShooterAbility_JetGlider : public UShooterAbility
{
public:
	struct FShooterAbilityData_JetGlider               JetGliderConfig;                                          // 0x01D8(0x0068) (Edit, BlueprintVisible)
	float                                              MaxMoveSpeed;                                             // 0x0240(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeToMaxSpeed;                                           // 0x0244(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowTransitionToFullSpeed;                              // 0x0248(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              RemainingFuel;                                            // 0x024C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     DeltaVelocity;                                            // 0x0250(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentIdleTime;                                          // 0x025C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int64_t                                            SoundID;                                                  // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpBoostInputPressed;                                     // 0x0268(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	struct FVector                                     PrevAccelDir;                                             // 0x026C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PrevAccel;                                                // 0x0278(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BoostUPSoundPlayed;                                       // 0x027C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x027D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_JetGlider");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_JuggernautSuper
// 0x0000 (0x01D8 - 0x01D8)
class UShooterAbility_JuggernautSuper : public UShooterAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_JuggernautSuper");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_JumpBlink
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_JumpBlink : public UShooterAbility
{
public:
	struct FShooterAbilityData_JumpBlink               JumpBlinkConfig;                                          // 0x01D8(0x0004) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_JumpBlink");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_KneeSlide
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_KneeSlide : public UShooterAbility
{
public:
	struct FShooterAbilityData_KneeSlide               SlideConfig;                                              // 0x01D8(0x0038) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_KneeSlide");
		return ptr;
	}


	void ServerSetIsBackDash(bool InIsBackDash);
};


// Class ShooterGame.ShooterAbility_LaserUnibeam
// 0x0058 (0x0230 - 0x01D8)
class UShooterAbility_LaserUnibeam : public UShooterAbility
{
public:
	struct FShooterAbilityData_LaserUnibeam            LaserUnibeamData;                                         // 0x01D8(0x0040) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0218(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_LaserUnibeam");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_LaunchLobberMine
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_LaunchLobberMine : public UShooterAbility
{
public:
	struct FShooterAbilityData_LaunchLobberMine        LobberConfig;                                             // 0x01D8(0x0018) (Edit, DisableEditOnInstance)
	TArray<float>                                      TimeSinceChargeFired;                                     // 0x01F0(0x0010) (ZeroConstructor, Transient)
	class UShooterCrosshairWidget*                     CrosshairWidget;                                          // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterProjectile*                          CurrentlyControlledMine;                                  // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LastFiredIndex;                                           // 0x0210(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0214(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_LaunchLobberMine");
		return ptr;
	}


	void ServerStopMine();
};


// Class ShooterGame.ShooterAbility_Mantle
// 0x0018 (0x01F0 - 0x01D8)
class UShooterAbility_Mantle : public UShooterAbility
{
public:
	struct FShooterAbilityData_Mantle                  MantleConfig;                                             // 0x01D8(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Mantle");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_MimicShield
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_MimicShield : public UShooterAbility
{
public:
	struct FShooterAbilityData_MimicShield             ShieldConfig;                                             // 0x01D8(0x0020) (Edit, DisableEditOnInstance)
	class AShooterCharacter*                           CurrentTarget;                                            // 0x01F8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           ArmoredTarget;                                            // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooter_BuffBase*                           ActivePassiveBuff;                                        // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterDeployableShield*                    MimicShield;                                              // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_MimicShield");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_MultiJump
// 0x0028 (0x0200 - 0x01D8)
class UShooterAbility_MultiJump : public UShooterAbility
{
public:
	float                                              StaminaCostAfterFirstJump;                                // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxJumpCount;                                             // 0x01DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	float                                              MaxMultiJumpZVelocity;                                    // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseJumpZVeclocity;                                       // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBoostStrength;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostAddedPerJump;                                        // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaintainBoostDuration;                                    // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedBoost;                                         // 0x01F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_MultiJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_NinjaSprint
// 0x0020 (0x01F8 - 0x01D8)
class UShooterAbility_NinjaSprint : public UShooterAbility
{
public:
	struct FShooterAbilityData_NinjaSprint             NinjaRunConfig;                                           // 0x01D8(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_NinjaSprint");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_OniWrath
// 0x0098 (0x0270 - 0x01D8)
class UShooterAbility_OniWrath : public UShooterAbility
{
public:
	struct FShooterAbilityData_OniWrath                OniWrathConfig;                                           // 0x01D8(0x0048) (Edit, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  CachedDefaultMaterials3P;                                 // 0x0220(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            CharacterMaterials;                                       // 0x0230(0x0010) (ZeroConstructor, Transient)
	class UAkSoundInstance*                            ChargeLoopAC;                                             // 0x0240(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    BuffPSU;                                                  // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooter_BuffBase*                           SpawnedBuff;                                              // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0258(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_OniWrath");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_Paladin
// 0x0028 (0x0200 - 0x01D8)
class UShooterAbility_Paladin : public UShooterAbility
{
public:
	struct FShooterAbilityData_Paladin                 PaladinConfig;                                            // 0x01D8(0x0020) (Edit, DisableEditOnInstance)
	class AShooterBaseDroid*                           ActiveShield;                                             // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Paladin");
		return ptr;
	}


	void NetMulticastPlayPushbackSound(class AShooterCharacter* Victim);
};


// Class ShooterGame.ShooterAbility_PaladinFervor
// 0x0070 (0x0248 - 0x01D8)
class UShooterAbility_PaladinFervor : public UShooterAbility
{
public:
	struct FShooterAbilityData_PaladinFervor           FervorConfig;                                             // 0x01D8(0x0048) (Edit, DisableEditOnInstance)
	float                                              RegenTickTimer;                                           // 0x0220(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PulseTimer;                                               // 0x0224(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealingDone;                                              // 0x0228(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                HealsScored;                                              // 0x022C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SelfHealingDone;                                          // 0x0230(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   AlliesInRange;                                            // 0x0238(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_PaladinFervor");
		return ptr;
	}


	void PlayPulseFX();
	void BroadcastSetHealFX(TArray<class AShooterCharacter*> Characters, bool IsHealed);
};


// Class ShooterGame.ShooterAbility_PassiveHeal
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_PassiveHeal : public UShooterAbility
{
public:
	struct FShooterAbilityData_PassiveHeal             HealConfig;                                               // 0x01D8(0x0028) (Edit, DisableEditOnInstance)
	float                                              TimeSinceDamage;                                          // 0x0200(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeSinceHealTick;                                        // 0x0204(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WasHealFlagSet;                                           // 0x0208(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	int                                                BeginHealSoundID;                                         // 0x020C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSoundLooping;                                           // 0x0210(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0211(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_PassiveHeal");
		return ptr;
	}


	void NetMulticastUpdateHealingFX(bool IsHealed);
};


// Class ShooterGame.ShooterAbility_PhaseWalk
// 0x0010 (0x01E8 - 0x01D8)
class UShooterAbility_PhaseWalk : public UShooterAbility
{
public:
	struct FShooterAbilityData_PhaseWalk               WalkConfig;                                               // 0x01D8(0x0008) (Edit, BlueprintVisible)
	float                                              CurrentRunDuration;                                       // 0x01E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_PhaseWalk");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_PickupPlacement
// 0x0048 (0x0220 - 0x01D8)
class UShooterAbility_PickupPlacement : public UShooterAbility
{
public:
	struct FShooterAbilityData_PickupPlacement         PickupPlacementAbilityConfig;                             // 0x01D8(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x01F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_PickupPlacement");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_PlaceShieldGen
// 0x0020 (0x01F8 - 0x01D8)
class UShooterAbility_PlaceShieldGen : public UShooterAbility
{
public:
	struct FShooterAbilityData_ShieldGen               ShieldGenConfig;                                          // 0x01D8(0x0018) (Edit, DisableEditOnInstance)
	class AActor*                                      SpawnedThumper;                                           // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_PlaceShieldGen");
		return ptr;
	}


	void ClientNotifyThumperPlaced(class AActor* Thumper);
};


// Class ShooterGame.ShooterAbility_PowerGun
// 0x0028 (0x0200 - 0x01D8)
class UShooterAbility_PowerGun : public UShooterAbility
{
public:
	struct FShooterAbilityData_PowerGun                AbilityData;                                              // 0x01D8(0x0018) (Edit, BlueprintVisible)
	float                                              CurrentFillAmount;                                        // 0x01F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentCursor;                                            // 0x01F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentFiredShots;                                        // 0x01F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_PowerGun");
		return ptr;
	}


	float GetCurrentCooldownCursorizedForDisplay();
};


// Class ShooterGame.ShooterAbility_PrincessDash
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_PrincessDash : public UShooterAbility
{
public:
	struct FShooterAbilityData_PrincessDash            DashConfig;                                               // 0x01D8(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_PrincessDash");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_QuickFire
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_QuickFire : public UShooterAbility
{
public:
	struct FShooterAbilityData_QuickFire               QuickFireConfig;                                          // 0x01D8(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_QuickFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_RailGun
// 0x0038 (0x0210 - 0x01D8)
class UShooterAbility_RailGun : public UShooterAbility
{
public:
	struct FShooterAbilityData_RailGun                 RailGunConfig;                                            // 0x01D8(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_RailGun");
		return ptr;
	}


	void NetMulticastSpawnChargeFX();
};


// Class ShooterGame.ShooterAbility_ReconKnife
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_ReconKnife : public UShooterAbility
{
public:
	struct FShooterAbilityData_ReconKnife              KnifeConfig;                                              // 0x01D8(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ReconKnife");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_ReconSonar
// 0x0010 (0x01E8 - 0x01D8)
class UShooterAbility_ReconSonar : public UShooterAbility
{
public:
	struct FShooterAbilityData_ReconSonar              SonarConfig;                                              // 0x01D8(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ReconSonar");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_Revive
// 0x0020 (0x01F8 - 0x01D8)
class UShooterAbility_Revive : public UShooterAbility
{
public:
	struct FShooterAbilityData_Revive                  ReviveConfig;                                             // 0x01D8(0x0010) (Edit, BlueprintVisible)
	TArray<class AShooterReviveIndicator*>             ReviveIndicators;                                         // 0x01E8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Revive");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_RocketPunch
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_RocketPunch : public UShooterAbility
{
public:
	struct FShooterAbilityData_RocketPunch             RockPunchConfig;                                          // 0x01D8(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_RocketPunch");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_SamuraiBoostJump
// 0x0038 (0x0210 - 0x01D8)
class UShooterAbility_SamuraiBoostJump : public UShooterAbility
{
public:
	struct FShooterAbilityData_SamuraiBoostJump        SamuraiBoostJumpConfig;                                   // 0x01D8(0x0028) (Edit, BlueprintVisible)
	float                                              BoostTimer;                                               // 0x0200(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanAirBoost;                                             // 0x0204(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBoosting;                                                // 0x0205(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0206(0x0002) MISSED OFFSET
	class UAkSoundInstance*                            BoostSound;                                               // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_SamuraiBoostJump");
		return ptr;
	}


	void ServerStartBoost(bool Boost);
};


// Class ShooterGame.ShooterAbility_SamuraiDefense
// 0x0028 (0x0200 - 0x01D8)
class UShooterAbility_SamuraiDefense : public UShooterAbility
{
public:
	struct FShooterAbilityData_SamuraiDefense          SamuraiDefenseConfig;                                     // 0x01D8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_SamuraiDefense");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_SelfHeal
// 0x0018 (0x01F0 - 0x01D8)
class UShooterAbility_SelfHeal : public UShooterAbility
{
public:
	struct FShooterAbilityData_SelfHeal                HealConfig;                                               // 0x01D8(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x01E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_SelfHeal");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_Shield
// 0x0000 (0x01D8 - 0x01D8)
class UShooterAbility_Shield : public UShooterAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Shield");
		return ptr;
	}

};


// Class ShooterGame.ShooterWeapon
// 0x0C28 (0x0FC0 - 0x0398)
class AShooterWeapon : public AActor
{
public:
	int                                                ReloadSection;                                            // 0x0398(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UCustomStickerData*                          WeaponStickerData;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // 0x03A8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AltProjectileClass;                                       // 0x03B0(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ClientProjectileClass;                                    // 0x03B8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ClientAltProjectileClass;                                 // 0x03C0(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPhysicsObject;                                        // 0x03C8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponData                                 WeaponConfig;                                             // 0x03D0(0x03A0) (Edit, Config, DisableEditOnInstance)
	struct FProceduralSway                             SwayConfig;                                               // 0x0770(0x0018) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponAction>                         CurrentWeaponAction;                                      // 0x0788(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0789(0x0003) MISSED OFFSET
	struct FWeaponKickData                             KickConfigs[0x2];                                         // 0x078C(0x0014) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	struct FLaserWeaponData                            LaserConfig;                                              // 0x07B8(0x0038) (Edit, Config, DisableEditOnInstance)
	struct FInstantWeaponData                          InstantConfig;                                            // 0x07F0(0x00B0) (Edit, Config, DisableEditOnInstance)
	struct FName                                       AttachPointName;                                          // 0x08A0(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachPointName3P;                                        // 0x08A8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPerspectiveMontagesPlayedInState>   PlayingAnimAltPerspectiveMap;                             // 0x08B0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPerspectiveMontagesPlayedInState>   PlayingReversedAnimAltPerspectiveMap;                     // 0x08C0(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      CrosshairWidgetClass;                                     // 0x08D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UShooterCrosshairWidget*                     CrosshairWidget;                                          // 0x08D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x08E0(0x0018) (Edit, Config, DisableEditOnInstance)
	struct FCanvasIcon                                 AimingCrosshair[0x5];                                     // 0x0958(0x0018) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      SnapCustomCrosshairToPixel : 1;                           // 0x09D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      AlignCustomCrosshairPipsToCenter : 1;                     // 0x09D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UseLaserDot : 1;                                          // 0x09D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UseScopeViewOverlay : 1;                                  // 0x09D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UseReticleBar : 1;                                        // 0x09D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UseCustomCrosshair : 1;                                   // 0x09D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UseCustomAimingCrosshair : 1;                             // 0x09D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bHideCrosshairWhileNotAiming : 1;                         // 0x09D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09D1(0x0007) MISSED OFFSET
	float                                              ReloadTimer;                                              // 0x09D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	TArray<struct FWeaponFireMode>                     FireModes;                                                // 0x09E0(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<struct FActiveFireMode>                     ActiveFireModes;                                          // 0x09F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0A00(0x0020) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x0A20(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh3p;                                                   // 0x0A28(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                        // 0x0A30(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MuzzleAttachPointTwo;                                     // 0x0A38(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AltFireMuzzleAttachPoint;                                 // 0x0A40(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ReloadSound;                                              // 0x0A48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EquipSound;                                               // 0x0A50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               IdleSound;                                                // 0x0A58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OffhandIdleSound;                                         // 0x0A60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               UseStartSound;                                            // 0x0A68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStartSoundLocalOnly;                                  // 0x0A70(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A71(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               UseCompleteSound;                                         // 0x0A78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCompleteSoundLocalOnly;                               // 0x0A80(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0A81(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               UseFailSound;                                             // 0x0A88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFailSoundLocalOnly;                                   // 0x0A90(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0A91(0x0007) MISSED OFFSET
	TMap<class UAkAudioEvent*, struct FPeriodicSound>  PeriodicSounds;                                           // 0x0A98(0x0050) (ZeroConstructor, Transient)
	class USkeletalMeshComponent*                      Attachment_ScopeMesh;                                     // 0x0AE8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_ScopeMesh_FP;                                  // 0x0AF0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_BarrelMesh;                                    // 0x0AF8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_MagMesh;                                       // 0x0B00(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_MagMesh_Default;                               // 0x0B08(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_UnderbarrelMesh;                               // 0x0B10(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0B18(0x0008) MISSED OFFSET
	class AShooterCharacter*                           MyPawn;                                                   // 0x0B20(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bPendingReload : 1;                                       // 0x0B28(0x0001) (Net, Transient)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	int                                                CurrentAmmoInClip;                                        // 0x0B2C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0B30(0x0004) MISSED OFFSET
	int                                                CurrentRandomSeed;                                        // 0x0B34(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EAmmoType>                             CurrentAmmoType;                                          // 0x0B38(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0B39(0x0007) MISSED OFFSET
	class UAkSoundInstance*                            FireLoopAC;                                               // 0x0B40(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkSoundInstance*                            IdleAC;                                                   // 0x0B48(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkSoundInstance*                            OffhandIdleAC;                                            // 0x0B50(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooter_BuffBase*>                   WeaponAppliedBuffs;                                       // 0x0B58(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooter_BuffBase*>                   WeaponEquipBuffs;                                         // 0x0B68(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooter_BuffBase*>                   WeaponADSBuffs;                                           // 0x0B78(0x0010) (ZeroConstructor, Transient)
	struct FRotator                                    DesiredKickRotation;                                      // 0x0B88(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                ReticleBarColor;                                          // 0x0B94(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bReloadhalfDone : 1;                                      // 0x0BA4(0x0001) (Transient)
	unsigned char                                      bIsEquipped : 1;                                          // 0x0BA4(0x0001) (Transient)
	unsigned char                                      bPendingEquip : 1;                                        // 0x0BA4(0x0001) (Transient)
	unsigned char                                      bRefiring : 1;                                            // 0x0BA4(0x0001) (Transient)
	unsigned char                                      bActiveReloaded : 1;                                      // 0x0BA4(0x0001) (Transient)
	unsigned char                                      AllowBulletWhizzSound : 1;                                // 0x0BA4(0x0001) (Transient)
	unsigned char                                      bHasPlayedStartMuzzleFX : 1;                              // 0x0BA4(0x0001) (Transient)
	unsigned char                                      FireButtonReleased : 1;                                   // 0x0BA4(0x0001) (Transient)
	unsigned char                                      PlaySettle : 1;                                           // 0x0BA5(0x0001) (Transient)
	unsigned char                                      bLaserActive : 1;                                         // 0x0BA5(0x0001) (Transient)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0BA6(0x0002) MISSED OFFSET
	int                                                CurrentBurstFireShots;                                    // 0x0BA8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ShotCounter;                                              // 0x0BAC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShotCounterResetTimer;                                    // 0x0BB0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PitchAppliedFromKick;                                     // 0x0BB4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReticleBarCursor;                                         // 0x0BB8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x24];                                      // 0x0BBC(0x0024) MISSED OFFSET
	TArray<class AShooterProjectile*>                  ProjectilesJustFired;                                     // 0x0BE0(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      ImpactTemplate;                                           // 0x0BF0(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TrailFX;                                                  // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TrailFXThirdPersonOverride;                               // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TrailFXThirdPersonOverrideTeam;                           // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             NoPawnTrailFX;                                            // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             NoPawnTrailFXThirdPersonOverride;                         // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             NoPawnTrailFXThirdPersonOverrideTeam;                     // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             AltTrailFX;                                               // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             AltTrailFXThirdPersonOverride;                            // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             AltTrailFXThirdPersonOverrideTeam;                        // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             NoTargetTrailFX;                                          // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             NoTargetTrailFXThirdPersonOverride;                       // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             NoTargetTrailFXThirdPersonOverrideTeam;                   // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x88];                                      // 0x0C58(0x0088) MISSED OFFSET
	class UParticleSystemComponent*                    LaserBeamPSC;                                             // 0x0CE0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FPerspectiveFXData                          IdlePerspectiveFX[0x2];                                   // 0x0CE8(0x0068) (Transient)
	struct FPerspectiveFXData                          LoopingMuzzlePerspectiveFX[0x2];                          // 0x0DB8(0x0068) (Transient)
	struct FName                                       TrailTargetParam;                                         // 0x0E88(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LaserDamageTimer;                                         // 0x0E90(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireAudioRampCursor;                                      // 0x0E94(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PredictedAmmoSyncTimer;                                   // 0x0E98(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FOVHoldTimer;                                             // 0x0E9C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedFOV;                                                // 0x0EA0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1C];                                      // 0x0EA4(0x001C) MISSED OFFSET
	class UClass*                                      FirstPersonAnimationPackageClass;                         // 0x0EC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ThirdPersonAnimationPackageClass;                         // 0x0EC8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UShooterAnimationPackage*                    FirstPersonAnimationPackage;                              // 0x0ED8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UShooterAnimationPackage*                    ThirdPersonAnimationPackage;                              // 0x0EE0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentRangeCrosshairAlpha;                               // 0x0EE8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x24];                                      // 0x0EEC(0x0024) MISSED OFFSET
	bool                                               bWeaponCustomizationApplied;                              // 0x0F10(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0F11(0x0003) MISSED OFFSET
	struct FVector                                     AmmoDiscardedStartLoc;                                    // 0x0F14(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AmmoDiscardedStartTime;                                   // 0x0F20(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHeadshotDamageEnabled;                                   // 0x0F24(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowADS;                                                // 0x0F25(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAugment;                                                 // 0x0F26(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               AttachFXToMuzzle;                                         // 0x0F27(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               AllowReload;                                              // 0x0F28(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0F29(0x0003) MISSED OFFSET
	unsigned char                                      bSetMasterPose : 1;                                       // 0x0F2C(0x0001) (Transient)
	unsigned char                                      UnknownData20[0xB];                                       // 0x0F2D(0x000B) MISSED OFFSET
	struct FWeaponAttachmentConfig                     AttachmentConfig;                                         // 0x0F38(0x0070) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttachmentBarrel>                     CurrentBarrel;                                            // 0x0FA8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachmentScope>                      CurrentScope;                                             // 0x0FA9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachmentMag>                        CurrentMag;                                               // 0x0FAA(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachmentUnderbarrel>                CurrentUnderbarrel;                                       // 0x0FAB(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachmentMisc>                       CurrentMiscAttachment;                                    // 0x0FAC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0FAD(0x0003) MISSED OFFSET
	int                                                ExtendedMagAmmo;                                          // 0x0FB0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CurrentWeaponRarity;                                      // 0x0FB4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x8];                                       // 0x0FB8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon");
		return ptr;
	}


	bool UseHUDAmmoCounter();
	void SetWeaponIDLEFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName);
	void SetRenderCustomDepthForAllMeshes(bool bValue);
	void SetReloadHalfDone(bool isHalfDone);
	void SetOffHandWeaponIDLEFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName);
	void SetOffhandIdleSound(class UAkAudioEvent* NewSound);
	void SetIdleSound(class UAkAudioEvent* NewSound);
	void ServerStopReload();
	void ServerStopFire(unsigned char FireModeNum);
	void ServerStartReload();
	void ServerRotateFirePattern(bool bNewFirePatternRotated);
	void ServerRequestSimpleHit(class AActor* HitActor, const struct FName& BoneName, const struct FVector_NetQuantize& Location, uint16_t ProjectileID);
	void ServerRequestReload(unsigned char FireModeNum);
	void ServerRequestFire(unsigned char FireModeNum);
	void ServerActiveReload();
	void OnWeaponCustomizationCompleted();
	void OnRep_Reload();
	void OnRep_MyPawn();
	void OnRep_ExtendedMagAmmo();
	void OnRep_CurrentUnderbarrel();
	void OnRep_CurrentScope();
	void OnRep_CurrentMag();
	void OnRep_CurrentBarrel();
	void NotifyRefireCooldownComplete(int FireModeIndex);
	void NotifyRefireCooldown(int FireModeIndex, float CursorizedTimeLeft, float TotalTime);
	void NetMultiCastSimulateWeaponFire(bool OnOff, unsigned char FireModeNum);
	void NetMulticastSimulateProjectileFire(const struct FVector& StartLocation, const struct FVector& Direction);
	void MulticastInstantHits(TArray<struct FVector_NetQuantize> ImpactLocations);
	void MulticastInstantHit(const struct FVector_NetQuantize& ImpactLocation);
	bool IsThrown();
	bool IsMeleeWeapon();
	bool IsLowAmmo(int FireModeNum);
	bool IsConsumable();
	class UClass* GetWeaponPackage();
	struct FName GetWeaponNameForAnim();
	class FString GetWeaponName();
	class USkeletalMeshComponent* GetWeaponMesh();
	struct FSlateBrush GetWeaponIcon(TEnumAsByte<EWeaponIconType> DesiredIconType);
	struct FWeaponData GetWeaponConfig();
	TEnumAsByte<EWeaponClass> GetWeaponClass();
	bool GetUseDefaultReticle();
	float GetTimeBetweenShots(int FireMode);
	class UShooterAnimationPackage* GetThirdPersonAnimPackage();
	bool GetSetMasterPose();
	TEnumAsByte<EAttachmentScope> GetScopeType();
	class AShooterCharacter* GetPawnOwner();
	class USkeletalMeshComponent* GetOffhandWeaponMeshForThirdPerson();
	class USkeletalMeshComponent* GetOffhandWeaponMeshForFirstPerson();
	class USkeletalMeshComponent* GetOffhandWeaponMesh();
	class USkeletalMeshComponent* GetMesh3P();
	float GetLastFireTime(int ModeIndex);
	bool GetIsReloadHalfDone();
	class UShooterAnimationPackage* GetFirstPersonAnimPackage();
	unsigned char GetCurrentFireModeNum();
	int GetCurrentAmmoInClip(int FireModeNum);
	int GetCurrentAmmo();
	TEnumAsByte<EWeaponAction> GetCurrentAction();
	int GetAmmoPerClip(int FireModeNum);
	float GetAmmoCursor(int FireModeNum);
	void ClientStartReload();
	void ClientProjectileHitRequestFailed(uint16_t ProjectileID);
	void ClientDrawRejectedWeaponTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void ClientDrawDebugShot(const struct FVector& TraceStart, const struct FVector& TraceEnd);
	bool CanMoveAndUse();
	void BlueprintSimulateFire(bool IsFirstPerson, int WeaponFireIndex);
	void BlueprintReloadStop();
	void BlueprintReloadStart();
	void AnimNotify_FullAuto_Settle();
	void AnimNotify_AmmoDiscardedStart();
	void AnimNotify_AmmoDiscardedEnd();
	bool AllowADS();
};


// Class ShooterGame.ShooterAbility_ShockWavePunch
// 0x0120 (0x02F8 - 0x01D8)
class UShooterAbility_ShockWavePunch : public UShooterAbility
{
public:
	struct FShooterAbilityData_ShockwavePunch          PunchConfig;                                              // 0x01D8(0x00B8) (Edit, BlueprintVisible)
	float                                              PreviousAirControl;                                       // 0x0290(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentDashTime;                                          // 0x0294(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentShockWaveTime;                                     // 0x0298(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ShockWaveSpawnPoint;                                      // 0x029C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentWaveCount;                                         // 0x02A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShockWaveStartPointSet;                                  // 0x02AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	float                                              PreviousGroundFriction;                                   // 0x02B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bApplyShockwave;                                          // 0x02B4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInputPressed;                                            // 0x02B5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWantsToPunch;                                            // 0x02B6(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02B7(0x0001) MISSED OFFSET
	float                                              CurrentDistanceTraveled;                                  // 0x02B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     DashStartLocation;                                        // 0x02BC(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bThrusterActive;                                          // 0x02C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   IgnoreList;                                               // 0x02D0(0x0010) (ZeroConstructor, Transient)
	float                                              CurrentShoulderChargeCD;                                  // 0x02E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRunningJuice;                                      // 0x02E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CurrentRotation;                                          // 0x02E8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_ShockWavePunch");
		return ptr;
	}


	void ServerSetPunchFinisher(bool bPressed);
	void ServerSetInputPressed(bool bPressed);
};


// Class ShooterGame.ShooterAbility_SkyGrab
// 0x0078 (0x0250 - 0x01D8)
class UShooterAbility_SkyGrab : public UShooterAbility
{
public:
	bool                                               Targeting;                                                // 0x01D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	float                                              DamageCache;                                              // 0x01DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReflectBeamTimer;                                         // 0x01E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CachedTarget;                                             // 0x01E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedShieldFX;                                          // 0x01F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedBeamFX;                                            // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FShooterAbilityData_SkyGrab                 SkyGrabConfig;                                            // 0x0200(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_SkyGrab");
		return ptr;
	}


	void NetMultiCastReflectDamageFX(class AShooterCharacter* TargetEnemy);
};


// Class ShooterGame.ShooterAbility_SlowFall
// 0x0020 (0x01F8 - 0x01D8)
class UShooterAbility_SlowFall : public UShooterAbility
{
public:
	struct FShooterAbilityData_SlowFall                SlowFallConfig;                                           // 0x01D8(0x0018) (Edit, BlueprintVisible)
	class UAkSoundInstance*                            FallLoop;                                                 // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_SlowFall");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_SmokeBomb
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_SmokeBomb : public UShooterAbility
{
public:
	struct FShooterAbilityData_SmokeBomb               SmokeBombConfig;                                          // 0x01D8(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_SmokeBomb");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_Sprint
// 0x0008 (0x01E0 - 0x01D8)
class UShooterAbility_Sprint : public UShooterAbility
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Sprint");
		return ptr;
	}


	void OnLand(const struct FHitResult& Hit, float Falldistance);
};


// Class ShooterGame.ShooterAbility_StealthTumble
// 0x0040 (0x0218 - 0x01D8)
class UShooterAbility_StealthTumble : public UShooterAbility
{
public:
	struct FShooterAbilityData_StealthTumble           StealthTumbleConfig;                                      // 0x01D8(0x0020) (Edit, BlueprintVisible)
	TArray<class UMaterialInterface*>                  CachedCharacterMaterials;                                 // 0x01F8(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInterface*>                  CachedWeaponMaterials;                                    // 0x0208(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_StealthTumble");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_TimeCopKnifeToss
// 0x0000 (0x0290 - 0x0290)
class UShooterAbility_TimeCopKnifeToss : public UShooterAbility_Throw
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_TimeCopKnifeToss");
		return ptr;
	}

};


// Class ShooterGame.ShooterMoveBlocker
// 0x0008 (0x03A0 - 0x0398)
class AShooterMoveBlocker : public AActor
{
public:
	bool                                               bTeamAMoveBlocker;                                        // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMoveBlocker");
		return ptr;
	}

};


// Class ShooterGame.ShooterTotem
// 0x0030 (0x03C8 - 0x0398)
class AShooterTotem : public AActor
{
public:
	struct FShooterTotemConfigData                     TotemConfig;                                              // 0x0398(0x0018) (Edit, DisableEditOnInstance)
	float                                              CurrentHealth;                                            // 0x03B0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                DestroyTimerHandle;                                       // 0x03B8(0x0008) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTotem");
		return ptr;
	}


	void OnRep_CurrentHealth();
	void OnHealthChanged();
	void MulticastTotemHitSound();
	void BeginDestroyTotem();
};


// Class ShooterGame.ShooterTotem_JuggerShield
// 0x0008 (0x03D0 - 0x03C8)
class AShooterTotem_JuggerShield : public AShooterTotem
{
public:
	float                                              DamageBlockedToTriggerScore;                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveTriggeredBlockedScoringEvent;                        // 0x03CC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTotem_JuggerShield");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbility_Totem
// 0x0030 (0x0208 - 0x01D8)
class UShooterAbility_Totem : public UShooterAbility
{
public:
	struct FShooterAbilityData_Totem                   TotemConfig;                                              // 0x01D8(0x0020) (Edit, DisableEditOnInstance)
	class AShooterTotem_JuggerShield*                  JuggsShield;                                              // 0x01F8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_Totem");
		return ptr;
	}


	void ServerDestroyShield();
};


// Class ShooterGame.ShooterAbility_TPNade
// 0x0030 (0x0208 - 0x01D8)
class UShooterAbility_TPNade : public UShooterAbility
{
public:
	struct FVector                                     CachedNadePos;                                            // 0x01D8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedNadePosTimer;                                       // 0x01E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TeleportTimer;                                            // 0x01E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               RequestedTeleport;                                        // 0x01EC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	class AShooterProjectile*                          TPNade;                                                   // 0x01F0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FShooterAbilityData_TPNade                  TPConfig;                                                 // 0x01F8(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_TPNade");
		return ptr;
	}


	void RequestTP();
	void ReplyTP(bool Success);
	void NetMultiCastNotifyTP(const struct FVector& Pos);
};


// Class ShooterGame.ShooterAbility_TripWire
// 0x0030 (0x0208 - 0x01D8)
class UShooterAbility_TripWire : public UShooterAbility
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01D8(0x0020) MISSED OFFSET
	struct FShooterAbilityData_TripWire                TripWireConfig;                                           // 0x01F8(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_TripWire");
		return ptr;
	}


	void RequestSpawnTripWire(const struct FVector& StartPos, const struct FVector& EndPos);
};


// Class ShooterGame.ShooterAbility_WallJump
// 0x00D0 (0x02A8 - 0x01D8)
class UShooterAbility_WallJump : public UShooterAbility
{
public:
	struct FVector                                     ImpactPos;                                                // 0x01D8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ImpactDir;                                                // 0x01E4(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x01F0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ImpactTime;                                               // 0x01FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FHitResult                                  CachedImpact;                                             // 0x0200(0x0088) (Transient, IsPlainOldData)
	struct FShooterAbilityData_WallJump                WallJumpConfig;                                           // 0x0288(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbility_WallJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterAchievementData
// 0x0060 (0x0088 - 0x0028)
class UShooterAchievementData : public UDataAsset
{
public:
	TArray<TAssetPtr<class UTexture2D>>                AchievementTextureAssetPointers;                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, TAssetPtr<class UTexture2D>>    AchievementTextureAssetMap;                               // 0x0038(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAchievementData");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIController
// 0x0010 (0x04A8 - 0x0498)
class AShooterAIController : public AAIController
{
public:
	class AShooterCharacter*                           MyShooterCharacter;                                       // 0x0498(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIController");
		return ptr;
	}

};


// Class ShooterGame.ShooterBotAIController
// 0x01E8 (0x0690 - 0x04A8)
class AShooterBotAIController : public AShooterAIController
{
public:
	class UShooterAIFSM*                               HFSM;                                                     // 0x04A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterMoveAction*                          ActiveMoveAction;                                         // 0x04B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FShooterBotConfig                           Config;                                                   // 0x04B8(0x0050) (Edit, DisableEditOnInstance)
	struct FShooterBotMemory                           Memory;                                                   // 0x0508(0x0150) (Transient)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0658(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBotAIController");
		return ptr;
	}


	void NotifyInventoryChanged(class AShooterWeapon* InWeapon, bool bAdded);
};


// Class ShooterGame.ShooterBotAIController_PlayerSim
// 0x0010 (0x06A0 - 0x0690)
class AShooterBotAIController_PlayerSim : public AShooterBotAIController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBotAIController_PlayerSim");
		return ptr;
	}

};


// Class ShooterGame.ShooterBotAIController_Terminator
// 0x0020 (0x06B0 - 0x0690)
class AShooterBotAIController_Terminator : public AShooterBotAIController
{
public:
	struct FTerminatorBotConfig                        TerminatorConfig;                                         // 0x0690(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x14];                                      // 0x069C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBotAIController_Terminator");
		return ptr;
	}

};


// Class ShooterGame.ShooterAirDrone
// 0x0108 (0x0500 - 0x03F8)
class AShooterAirDrone : public APawn
{
public:
	class UFlyingDroneMovementComponent*               DroneMovement;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh3p;                                                   // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowDistance;                                           // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowHeight;                                             // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHealDrone;                                             // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAttackDrone;                                           // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateRecentlyPerformHealed;                          // 0x041E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateAOEHealOverTime;                                 // 0x041F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AOEHealAmount;                                            // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurstHealAmount;                                          // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurstHealRange;                                           // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountMax;                                          // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountMin;                                          // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BillboardWidth;                                           // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardHeight;                                          // 0x043C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRange;                                              // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UParticleSystem*                             DroneDestroyedFX;                                         // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneActiveSound;                                         // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneDisableSound;                                        // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneDestroyedSound;                                      // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneActiveHeal;                                          // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneHealStop;                                            // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HealFX;                                                   // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AOEHealFX;                                                // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AttackProjectile;                                         // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RateOfFire;                                               // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    healPSU;                                                  // 0x0498(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      FollowActor;                                              // 0x04A0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           AttackTarget;                                             // 0x04A8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      HealTarget;                                               // 0x04B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   DirectionTowardTarget;                                    // 0x04B8(0x000C) (Net)
	float                                              RecentAmountHealed;                                       // 0x04C4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentFollowTargetPos;                                   // 0x04C8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentFollowTargetPosOFFset;                             // 0x04D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PreviousFollowTargetPos;                                  // 0x04D8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Health;                                                   // 0x04E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTimebetweenShots;                                  // 0x04E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class UAkSoundInstance*                            IdleAC;                                                   // 0x04F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkSoundInstance*                            HealingIdleAC;                                            // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAirDrone");
		return ptr;
	}


	void OnRep_TotalAmountHealed();
	void OnRep_SetFollowTarget();
	void NetMultiCastPlayIdleSound();
};


// Class ShooterGame.ShooterMoveAction
// 0x0010 (0x0038 - 0x0028)
class UShooterMoveAction : public UObject
{
public:
	class AShooterBotAIController*                     OwnerController;                                          // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMoveAction");
		return ptr;
	}

};


// Class ShooterGame.ShooterMove_ToActor
// 0x0008 (0x0040 - 0x0038)
class UShooterMove_ToActor : public UShooterMoveAction
{
public:
	class AActor*                                      MoveToActor;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMove_ToActor");
		return ptr;
	}

};


// Class ShooterGame.ShooterMove_ToLoc
// 0x0010 (0x0048 - 0x0038)
class UShooterMove_ToLoc : public UShooterMoveAction
{
public:
	struct FVector                                     MoveToLocation;                                           // 0x0038(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMove_ToLoc");
		return ptr;
	}

};


// Class ShooterGame.ShooterMove_FollowActor
// 0x0010 (0x0048 - 0x0038)
class UShooterMove_FollowActor : public UShooterMoveAction
{
public:
	class AActor*                                      FollowActor;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMove_FollowActor");
		return ptr;
	}

};


// Class ShooterGame.ShooterMove_PlaceHolderCQC
// 0x0008 (0x0040 - 0x0038)
class UShooterMove_PlaceHolderCQC : public UShooterMoveAction
{
public:
	class AActor*                                      TargetActor;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMove_PlaceHolderCQC");
		return ptr;
	}

};


// Class ShooterGame.ShooterMove_Unstuck
// 0x0018 (0x0050 - 0x0038)
class UShooterMove_Unstuck : public UShooterMoveAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMove_Unstuck");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM
// 0x0088 (0x00B0 - 0x0028)
class UShooterAIFSM : public UShooterAIState
{
public:
	struct FStateTransitionMap                         TransitionMap;                                            // 0x0028(0x0050) (Transient)
	class UShooterAIState*                             EntryState;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterAIState*                             CurrentState;                                             // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FStateTransitionBinding                     BlipTransition;                                           // 0x0088(0x0020) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_Attack
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_Attack : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_Attack");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_FinalShowdown
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_FinalShowdown : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_FinalShowdown");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_GameStart
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_GameStart : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_GameStart");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_GetLoot
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_GetLoot : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_GetLoot");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_Melee
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_Melee : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_Melee");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_Reload
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_Reload : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_Reload");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_Search
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_Search : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_Search");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_SwitchWeapons
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_SwitchWeapons : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_SwitchWeapons");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_TerminatorHunt
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_TerminatorHunt : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_TerminatorHunt");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIFSM_Wander
// 0x0000 (0x00B0 - 0x00B0)
class UShooterAIFSM_Wander : public UShooterAIFSM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIFSM_Wander");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_Attacking
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_Attacking : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_Attacking");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_ChooseNewWeapon
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_ChooseNewWeapon : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_ChooseNewWeapon");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_FleeToSafeZone
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_FleeToSafeZone : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_FleeToSafeZone");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_Idle
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_Idle : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_Idle");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_LookAt
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_LookAt : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_LookAt");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_Melee
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_Melee : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_Melee");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_NavigateFinalShowdown
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_NavigateFinalShowdown : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_NavigateFinalShowdown");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_NavigateToFinalShowdown
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_NavigateToFinalShowdown : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_NavigateToFinalShowdown");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_PickupLoot
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_PickupLoot : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_PickupLoot");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_GetWeapons
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_GetWeapons : public UShooterAIState_PickupLoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_GetWeapons");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_GetAmmo
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_GetAmmo : public UShooterAIState_PickupLoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_GetAmmo");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_GetArmor
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_GetArmor : public UShooterAIState_PickupLoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_GetArmor");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_Reload
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_Reload : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_Reload");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_ScanSurroundings
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_ScanSurroundings : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_ScanSurroundings");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_Patrolling
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_Patrolling : public UShooterAIState_ScanSurroundings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_Patrolling");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_Searching
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_Searching : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_Searching");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_ShootTarget
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_ShootTarget : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_ShootTarget");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_EngageTarget
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_EngageTarget : public UShooterAIState_ShootTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_EngageTarget");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_EngageTargetCQC
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_EngageTargetCQC : public UShooterAIState_ShootTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_EngageTargetCQC");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_TerminatorEngageTarget
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_TerminatorEngageTarget : public UShooterAIState_ShootTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_TerminatorEngageTarget");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_TerminatorChooseTarget
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_TerminatorChooseTarget : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_TerminatorChooseTarget");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_TerminatorPursueTarget
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_TerminatorPursueTarget : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_TerminatorPursueTarget");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_TerminatorReturnHome
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_TerminatorReturnHome : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_TerminatorReturnHome");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_TerminatorSelfDestruct
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_TerminatorSelfDestruct : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_TerminatorSelfDestruct");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_TerminatorWaitForTargets
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_TerminatorWaitForTargets : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_TerminatorWaitForTargets");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_WaitingForMatchStart
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_WaitingForMatchStart : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_WaitingForMatchStart");
		return ptr;
	}

};


// Class ShooterGame.ShooterAIState_WingSuitGlide
// 0x0000 (0x0028 - 0x0028)
class UShooterAIState_WingSuitGlide : public UShooterAIState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAIState_WingSuitGlide");
		return ptr;
	}

};


// Class ShooterGame.ShooterAITargetInfoComponent
// 0x0010 (0x0110 - 0x0100)
class UShooterAITargetInfoComponent : public UActorComponent
{
public:
	TArray<struct FName>                               TargetSockets;                                            // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAITargetInfoComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterAmbientAudioComponent
// 0x0020 (0x0120 - 0x0100)
class UShooterAmbientAudioComponent : public UActorComponent
{
public:
	class UAkAudioEvent*                               StartSound;                                               // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LoopSound;                                                // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkSoundInstance*                            LoopInstance;                                             // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAkAudioEvent*                               EndSound;                                                 // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAmbientAudioComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Assassin
// 0x0220 (0x0398 - 0x0178)
class UShooterAnimationPackage_Assassin : public UShooterAnimationPackage
{
public:
	struct FShockbladeAnims                            Shockblade_1P;                                            // 0x0178(0x00C0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FShockbladeAnims                            Shockblade_3P;                                            // 0x0238(0x00C0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDodgeAnims                                 SwordDodge_1P;                                            // 0x02F8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDodgeAnims                                 GunDodge_1P;                                              // 0x0320(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDodgeAnims                                 SwordDodge_3P;                                            // 0x0348(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDodgeAnims                                 GunDodge_3P;                                              // 0x0370(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Assassin");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_BatMedic
// 0x0020 (0x0198 - 0x0178)
class UShooterAnimationPackage_BatMedic : public UShooterAnimationPackage
{
public:
	struct FBattleMedicAnims                           BattleMedic_1P;                                           // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FBattleMedicAnims                           BettleMedic_3P;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_BatMedic");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Brute
// 0x0110 (0x0288 - 0x0178)
class UShooterAnimationPackage_Brute : public UShooterAnimationPackage
{
public:
	struct FBruteAnims                                 Brute_1P;                                                 // 0x0178(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FBruteAnims                                 Brute_3P;                                                 // 0x0200(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Brute");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_DMR
// 0x0050 (0x01C8 - 0x0178)
class UShooterAnimationPackage_DMR : public UShooterAnimationPackage
{
public:
	struct FDMRAnims                                   DMR_1P;                                                   // 0x0178(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDMRAnims                                   DMR_3P;                                                   // 0x01A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_DMR");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Doc
// 0x0120 (0x0298 - 0x0178)
class UShooterAnimationPackage_Doc : public UShooterAnimationPackage
{
public:
	struct FLifeDocAnims                               Doc_1P;                                                   // 0x0178(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLifeDocAnims                               Doc_3P;                                                   // 0x0208(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Doc");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Ghost
// 0x0040 (0x01B8 - 0x0178)
class UShooterAnimationPackage_Ghost : public UShooterAnimationPackage
{
public:
	struct FGhostAnims                                 Ghost_1P;                                                 // 0x0178(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGhostAnims                                 Ghost_3P;                                                 // 0x0198(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Ghost");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Heavy
// 0x00F0 (0x0268 - 0x0178)
class UShooterAnimationPackage_Heavy : public UShooterAnimationPackage
{
public:
	struct FHeavyAnims                                 Heavy_1P;                                                 // 0x0178(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FHeavyAnims                                 Heavy_3P;                                                 // 0x01F0(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Heavy");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Hitman
// 0x0020 (0x0198 - 0x0178)
class UShooterAnimationPackage_Hitman : public UShooterAnimationPackage
{
public:
	struct FHitmanAnims                                Hitman_1P;                                                // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FHitmanAnims                                Hitman_3P;                                                // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Hitman");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_LaserSho
// 0x0070 (0x01E8 - 0x0178)
class UShooterAnimationPackage_LaserSho : public UShooterAnimationPackage
{
public:
	struct FLaserShoesAnims                            LaserShoes_1P;                                            // 0x0178(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLaserShoesAnims                            LaserShoes_3P;                                            // 0x01B0(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_LaserSho");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Mage
// 0x0080 (0x01F8 - 0x0178)
class UShooterAnimationPackage_Mage : public UShooterAnimationPackage
{
public:
	struct FEnergySwordShieldAnims                     SwordShield_1P;                                           // 0x0178(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FEnergySwordShieldAnims                     SwordShield_3P;                                           // 0x01B8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Mage");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Recon
// 0x01A0 (0x0318 - 0x0178)
class UShooterAnimationPackage_Recon : public UShooterAnimationPackage
{
public:
	struct FReconAnims                                 Recon_1P;                                                 // 0x0178(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FReconAnims                                 Recon_3P;                                                 // 0x0248(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Recon");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Samurai
// 0x0090 (0x0208 - 0x0178)
class UShooterAnimationPackage_Samurai : public UShooterAnimationPackage
{
public:
	struct FSamuraiAnims                               Samurai_1P;                                               // 0x0178(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSamuraiAnims                               Samurai_3P;                                               // 0x01C0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Samurai");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_ShieldMa
// 0x0100 (0x0278 - 0x0178)
class UShooterAnimationPackage_ShieldMa : public UShooterAnimationPackage
{
public:
	struct FShieldGauntletAnims                        ShieldGauntlet_1P;                                        // 0x0178(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FShieldGauntletAnims                        ShieldGauntlet_3P;                                        // 0x01F8(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_ShieldMa");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_TimeCop
// 0x0160 (0x02D8 - 0x0178)
class UShooterAnimationPackage_TimeCop : public UShooterAnimationPackage
{
public:
	struct FTimeCopAnims                               TimeCop_1P;                                               // 0x0178(0x00B0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FTimeCopAnims                               TimeCop_3P;                                               // 0x0228(0x00B0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_TimeCop");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimationPackage_Vanguard
// 0x00A0 (0x0218 - 0x0178)
class UShooterAnimationPackage_Vanguard : public UShooterAnimationPackage
{
public:
	struct FVanguardAnims                              Vanguard_1P;                                              // 0x0178(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVanguardAnims                              Vanguard_3P;                                              // 0x01C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimationPackage_Vanguard");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimPackage_Hacker
// 0x0020 (0x0198 - 0x0178)
class UShooterAnimPackage_Hacker : public UShooterAnimationPackage
{
public:
	struct FHackerAnims                                Hacker_1P;                                                // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FHackerAnims                                Hacker_3P;                                                // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimPackage_Hacker");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimPackage_Juggernaut
// 0x01C0 (0x0338 - 0x0178)
class UShooterAnimPackage_Juggernaut : public UShooterAnimationPackage
{
public:
	struct FJuggernautAnims                            Juggernaut_1P;                                            // 0x0178(0x00E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FJuggernautAnims                            Juggernaut_3P;                                            // 0x0258(0x00E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimPackage_Juggernaut");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimPackage_Legionnaire
// 0x0080 (0x01F8 - 0x0178)
class UShooterAnimPackage_Legionnaire : public UShooterAnimationPackage
{
public:
	struct FShieldAnimations                           Shield_1P;                                                // 0x0178(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FShieldAnimations                           Shield_3P;                                                // 0x01B8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimPackage_Legionnaire");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimHelpers
// 0x0000 (0x0028 - 0x0028)
class UShooterAnimHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimHelpers");
		return ptr;
	}


	void STATIC_FacialSystemMorphNormals(class USkeletalMeshComponent* SourceMesh, class USkeletalMeshComponent* DestinationMesh, float FacialLayerAlpha);
};


// Class ShooterGame.ShooterCharacterMovement
// 0xB420 (0xBC10 - 0x07F0)
class UShooterCharacterMovement : public UCharacterMovementComponent
{
public:
	struct FBounceData                                 BounceConfig;                                             // 0x07F0(0x0014) (Edit)
	float                                              BrakingDecelZeroG;                                        // 0x0804(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StandVehicle;                                             // 0x0808(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OverrideTurningFriction;                                  // 0x0810(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OverrideFriction;                                         // 0x0814(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OnLandBounceFactor;                                       // 0x0818(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeInAir;                                                // 0x081C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              GroundImpulseVerticalSpeed;                               // 0x0820(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClamberUpSpeed;                                           // 0x0824(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClamberForwardSpeed;                                      // 0x0828(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHorizSpeedFalling;                                     // 0x082C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      GrappleActor;                                             // 0x0830(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0838(0x0008) MISSED OFFSET
	class UCurveFloat*                                 GrappleAccelOverDistance;                                 // 0x0840(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxVerticalSpeed;                                         // 0x0848(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SlowfallThreshold;                                        // 0x084C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SlowfallBrakingSpeed;                                     // 0x0850(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              JetPackAccel;                                             // 0x0854(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              JetPackSpeedThreshold;                                    // 0x0858(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               JetPackActive;                                            // 0x085C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ThrustPackActive;                                         // 0x085D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x085E(0x0002) MISSED OFFSET
	float                                              ThrustPackAccel;                                          // 0x0860(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x0864(0x0024) MISSED OFFSET
	bool                                               UseSlowfall;                                              // 0x0888(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IgnoreSpeedLimit;                                         // 0x0889(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               SkipBraking;                                              // 0x088A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ApplyGrappleFriction;                                     // 0x088B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bClampHorizontalJumpVelocity;                             // 0x088C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x088D(0x0017) MISSED OFFSET
	float                                              BrakingDecelerationHovering;                              // 0x08A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB19C];                                    // 0x08A8(0xB19C) MISSED OFFSET
	float                                              DisplacementDistance;                                     // 0xBA44(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DisplacementTotalTime;                                    // 0xBA48(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0xBA4C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DisplacementCurve;                                        // 0xBA50(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterGravityComponent*                    GravityComponent;                                         // 0xBA58(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FCompressedMoveFlagBehavior                 CompressedFlagBehaviors[0x2];                             // 0xBA60(0x0040) (Transient)
	float                                              PreviousDisplacement;                                     // 0xBAE0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DisplacementCurrentTime;                                  // 0xBAE4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     DisplacementDirection;                                    // 0xBAE8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisplacementActive;                                      // 0xBAF4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisplacementCanDestroy;                                  // 0xBAF5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      AbilityFlags;                                             // 0xBAF6(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideVelocityAlongAim;                                // 0xBAF7(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseMaxSpeedCache;                                        // 0xBAF8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0xBAF9(0x0003) MISSED OFFSET
	float                                              OverrideSpeedMin;                                         // 0xBAFC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OverrideSpeedMax;                                         // 0xBB00(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxSpeedCache;                                            // 0xBB04(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSendMoveNow;                                             // 0xBB08(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0xBB09(0x0003) MISSED OFFSET
	unsigned char                                      bAllowOmniDirectionDodge : 1;                             // 0xBB0C(0x0001) (Net, Transient)
	unsigned char                                      bForcedForwardDodgeDirection : 1;                         // 0xBB0C(0x0001) (Net, Transient)
	unsigned char                                      UnknownData08[0x3];                                       // 0xBB0D(0x0003) MISSED OFFSET
	float                                              FallSpeedForAnim;                                         // 0xBB10(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0xBB14(0x0004) MISSED OFFSET
	class AShooterSimpleVehicle*                       Vehicle;                                                  // 0xBB18(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x20];                                      // 0xBB20(0x0020) MISSED OFFSET
	float                                              GravityMaxSpeedModifier;                                  // 0xBB40(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0xBB44(0x0008) MISSED OFFSET
	bool                                               CanKickBoost;                                             // 0xBB4C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0xF];                                       // 0xBB4D(0x000F) MISSED OFFSET
	float                                              ForcedGravityScale;                                       // 0xBB5C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bForcedGravityScale : 1;                                  // 0xBB60(0x0001) (Transient)
	unsigned char                                      UnknownData13[0xF];                                       // 0xBB61(0x000F) MISSED OFFSET
	TArray<struct FGravitySeedAndTime>                 PointGravitySeeds;                                        // 0xBB70(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData14[0x90];                                      // 0xBB80(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterMovement");
		return ptr;
	}


	void ServerSetDebugSprintSpeedModifier(float Modifier);
	void ServerRequestCompressedMoves(TArray<struct FCompressedMove> CompressedMoves);
	void ServerOverrideMaxAccel(float Modifier);
	bool IsFallingForAnim();
	void ClientAckCompressedMove(const struct FCompressedMoveAck& AckMove);
};


// Class ShooterGame.ShooterAnimInstance
// 0x02A0 (0x0718 - 0x0478)
class UShooterAnimInstance : public UAnimInstance
{
public:
	struct FName                                       FullBodySlotName;                                         // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftArmName;                                              // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftArmOverrideName;                                      // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightArmName;                                             // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightArmOverrideName;                                     // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UpperBodyName;                                            // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UpperBodyOverrideName;                                    // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UpperBody2Name;                                           // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FullUpperBodyName;                                        // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       JumpStartName;                                            // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       JumpLandAddName;                                          // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HitReactionMontageName;                                   // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlayerCameraSocketName;                                   // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 EyeDartCurve;                                             // 0x04E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldNotRunAnimUpdateBlueprint;                         // 0x04E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_FewCoreVariables;                              // 0x04E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_LandingWindowDelayEvent;                       // 0x04EA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_KillJumpOnLand;                                // 0x04EB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_HideWeapon;                                    // 0x04EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_SetWeaponIdleMontage;                          // 0x04ED(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_CustomSpeedCalculations;                       // 0x04EE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_DirectionChangeAnim;                           // 0x04EF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_PitchSettings;                                 // 0x04F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_Jumping;                                       // 0x04F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_CharacterSpecificLogic;                        // 0x04F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_AirLeanAlpha;                                  // 0x04F3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_ZerogAlphaSettings;                            // 0x04F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_LayerBlendAlphas;                              // 0x04F5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_GraphBypass;                                   // 0x04F6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_LeftHandIK;                                    // 0x04F7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_LookAtTarget;                                  // 0x04F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_BlindFireBlending;                             // 0x04F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_WeaponDownSpecific;                            // 0x04FA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_ZeroGLanding;                                  // 0x04FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_FacialAnimationSystem;                         // 0x04FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInCode_TurnOnPointSettings;                           // 0x04FD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	class UAnimMontage*                                WeaponBasedIdleMontage;                                   // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                WeaponBasedIdleMontageAlt;                                // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                JumpStartMontage;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                JumpLandMontage;                                          // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                JumpLandMontageAlt;                                       // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                JumpLandHardMontage;                                      // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                JumpLandHardMontageAlt;                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                DoubleJumpStartMontage;                                   // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                ActiveWeaponMeleeMontage;                                 // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                ChangeDirectionMontage;                                   // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                LocoStopMontage;                                          // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                ReconLeftGunJumpStartMontage;                             // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ReconRightGunJumpStartMontage;                            // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPackageInitFinished;                                  // 0x0568(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class AShooterCharacter*                           ShooterCharacter;                                         // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterAnimationPackage*                    MasterAnimPackage;                                        // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCharacterMovement*                   MovementComponent;                                        // 0x0580(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooterCharacter*                           ClosestShooterCharacterToAim;                             // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              CurrentWeapon;                                            // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CurrentVelocity;                                          // 0x0598(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CharacterVelocity;                                        // 0x05A4(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GravityScale;                                             // 0x05B0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AnimDeltaSeconds;                                         // 0x05B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AnimWorldTimeSeconds;                                     // 0x05B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Direction;                                                // 0x05BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ThreeDimVelocityLen;                                      // 0x05C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FallVelocity;                                             // 0x05C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZVelocity;                                                // 0x05C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZVelocityRaw;                                             // 0x05CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TurnOnPointAlpha;                                         // 0x05D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TurnOnPointCursor;                                        // 0x05D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Pitch;                                                    // 0x05D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Speed;                                                    // 0x05DC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpeedCore;                                                // 0x05E0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CharacterMaxSpeed;                                        // 0x05E4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartSpeed;                                               // 0x05E8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AirLeanAlphaBlend;                                        // 0x05EC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OutOfCombatTimer;                                         // 0x05F0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZerogAimOffsetAlpha;                                      // 0x05F4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZerogAim2dAlpha;                                          // 0x05F8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZerogPlayRate;                                            // 0x05FC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZerogPitch;                                               // 0x0600(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZerogYaw;                                                 // 0x0604(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              IKFootAlpha;                                              // 0x0608(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              IKLeftHandAlpha;                                          // 0x060C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              IKLeftHandAlphaChar;                                      // 0x0610(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GraphBypass1;                                             // 0x0614(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GraphBypass2;                                             // 0x0618(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GraphBypass3;                                             // 0x061C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GraphBypass4;                                             // 0x0620(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FullBodyAlpha;                                            // 0x0624(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FullUpperBodyAlpha;                                       // 0x0628(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpperBodyAlpha;                                           // 0x062C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpperBodyOverrideAlpha;                                   // 0x0630(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpperBodyOverrideAlpha2;                                  // 0x0634(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpperBody2Alpha;                                          // 0x0638(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              JumpLandAlpha;                                            // 0x063C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              JumpStartAlpha;                                           // 0x0640(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              JumpBlendTimer;                                           // 0x0644(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpperBodyOverrideSwitch;                                 // 0x0648(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpperOverrideBlendSwitch;                                // 0x0649(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpperOverrideBlendSwitch2;                               // 0x064A(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bJumpBlendOut;                                            // 0x064B(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIKCurve;                                                 // 0x064C(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWeaponSwapInProgress;                                    // 0x064D(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayLandReset;                                           // 0x064E(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayLandWindow;                                          // 0x064F(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingWindowDelayEventDoOnce;                           // 0x0650(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRecentlyRendered;                                        // 0x0651(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRunStartExist;                                           // 0x0652(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLocoStartSpeedSwitch;                                    // 0x0653(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bKickBlendOut;                                            // 0x0654(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInZeroG;                                               // 0x0655(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x0656(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x0657(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0658(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHitReaction;                                           // 0x0659(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBlindFireActive;                                       // 0x065A(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHideWeapon;                                              // 0x065B(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHideWeaponChanged;                                       // 0x065C(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIdleStateReset;                                          // 0x065D(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsUpperBodyMontagePlayingOrIsFullBodySlotMontagePlaying; // 0x065E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAirDodgeActive;                                        // 0x065F(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ZeroGAimOffset1DIsValid;                                  // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ZeroGAimOffset2DIsValid;                                  // 0x0661(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bKillJumpOnLandDoOnce;                                    // 0x0662(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRandomStreamBoolEveryTwoSeconds;                         // 0x0663(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMasterFacialOnOff;                                       // 0x0664(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLookAtBlinkSwitch;                                       // 0x0665(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLookAtNoTarget;                                          // 0x0666(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0667(0x0001) MISSED OFFSET
	float                                              EyeDartTimer;                                             // 0x0668(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              NoiseTimer;                                               // 0x066C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HeadLookAtAlpha;                                          // 0x0670(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              EyesLookAtAlpha;                                          // 0x0674(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     HeadLookAtTarget;                                         // 0x0678(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     EyeLookAtTarget;                                          // 0x0684(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    EyeDart;                                                  // 0x0690(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRandomStream                               AnimRandomStream;                                         // 0x069C(0x0008) (BlueprintVisible, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	class UAnimMontage*                                UpperBodyMontage;                                         // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PredictedLODLevel;                                        // 0x06B0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	class UAimOffsetBlendSpace1D*                      ZeroGAimOffset1D;                                         // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAimOffsetBlendSpace*                        ZeroGAimOffset2D;                                         // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CurrentCardinalDirection;                                 // 0x06C8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CurrentStopCardinalDirection;                             // 0x06C9(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    LastCardinalDirection;                                    // 0x06CA(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    LastStopCardinalDirection;                                // 0x06CB(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DirectionSwitchDoOnce;                                    // 0x06CC(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChangeDirectionStop;                                     // 0x06CD(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChangeDirectionSwitch;                                   // 0x06CE(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChangeDirectionBool;                                     // 0x06CF(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DirectionChangeTimer1;                                    // 0x06D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZerogTurnSpeed;                                           // 0x06D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeaponDownAlpha;                                          // 0x06D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMontagePlayingIn_FullBodySlot;                         // 0x06DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMontagePlayingIn_UpperBody;                            // 0x06DD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMontagePlayingIn_UpperBodyOverride;                    // 0x06DE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMontagePlayingIn_UpperBody2;                           // 0x06DF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMontagePlayingIn_JumpStart;                            // 0x06E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMontagePlayingIn_JumpLandAdd;                          // 0x06E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWeaponDownExist;                                         // 0x06E2(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWeaponDownReset;                                         // 0x06E3(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	struct FName                                       CharacterTypeName;                                        // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGrappleActive;                                           // 0x06F0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHarrierMobilityFlag;                                     // 0x06F1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsVanguard;                                              // 0x06F2(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsJetPulseActive;                                        // 0x06F3(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsJetPackActive;                                         // 0x06F4(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsEnforcerSprintActive;                                  // 0x06F5(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x22];                                      // 0x06F6(0x0022) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimInstance");
		return ptr;
	}


	void OnBlueprintTickKillJumpOnLand();
	void OnBlueprintTickFacialSystemLogic();
	void OnBlueprintTickCharacterSpecificLogic();
	void OnBlueprintPackageInit();
	void OnBlueprintDirectionChangeAnimLogic();
};


// Class ShooterGame.ShooterAnimNotify_PlayParticleFX
// 0x0068 (0x00A0 - 0x0038)
class UShooterAnimNotify_PlayParticleFX : public UAnimNotify
{
public:
	class UParticleSystem*                             TeamPSTemplate;                                           // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PSTemplate;                                               // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0048(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0054(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideName;                                             // 0x0060(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
	unsigned char                                      Attached : 1;                                             // 0x0080(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	TEnumAsByte<EIsFirstPersonOverride>                IsFirstPersonOverride;                                    // 0x0084(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0088(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               StopWithAnimation;                                        // 0x0090(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0091(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimNotify_PlayParticleFX");
		return ptr;
	}

};


// Class ShooterGame.ShooterAnimNotifyState_TimedFX
// 0x0040 (0x0070 - 0x0030)
class UShooterAnimNotifyState_TimedFX : public UAnimNotifyState
{
public:
	class UParticleSystem*                             TeamPSTemplate;                                           // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PSTemplate;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0048(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0054(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyAtEnd;                                            // 0x0060(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIsFirstPersonOverride>                IsFirstPersonOverride;                                    // 0x0061(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FName                                       OverrideName;                                             // 0x0068(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAnimNotifyState_TimedFX");
		return ptr;
	}

};


// Class ShooterGame.ShooterATM
// 0x0010 (0x03A8 - 0x0398)
class AShooterATM : public AActor
{
public:
	int                                                CashAmount;                                               // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AmbientSound;                                             // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterATM");
		return ptr;
	}


	void OnWithdraw(class AShooterCharacter* Player);
	void OnDeposit(class AShooterCharacter* Player);
};


// Class ShooterGame.ShooterAudioSettings
// 0x0078 (0x0110 - 0x0098)
class UShooterAudioSettings : public UQualitySettings
{
public:
	float                                              MasterVolume;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnnouncerVolume;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectsVolume;                                            // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MenuMusicVolume;                                          // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               MuteSelf;                                                 // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               MuteAllByDefault;                                         // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoJoinVoiceChatChannel;                                 // 0x00AA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00AB(0x0001) MISSED OFFSET
	float                                              VoiceChatVolume;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHitImpactSwitch>                      HitImpactSwitch;                                          // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5F];                                      // 0x00B1(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAudioSettings");
		return ptr;
	}

};


// Class ShooterGame.ShooterBalloon
// 0x0018 (0x03B0 - 0x0398)
class AShooterBalloon : public AActor
{
public:
	float                                              VerticalSpeedSetterMin;                                   // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeedSetterMax;                                   // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        BalloonMesh;                                              // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBalloon");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_AkimboDuzi_Equip
// 0x0000 (0x0050 - 0x0050)
class UShooterState_AkimboDuzi_Equip : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_AkimboDuzi_Equip");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_AkimboDuziIdle
// 0x0000 (0x0050 - 0x0050)
class UShooterState_AkimboDuziIdle : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_AkimboDuziIdle");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ApplyBuff
// 0x0000 (0x0050 - 0x0050)
class UShooterState_ApplyBuff : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ApplyBuff");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_ArmorCharge
// 0x0040 (0x0090 - 0x0050)
class UShooterState_ArmorCharge : public UShooterBaseState
{
public:
	float                                              RunTimer;                                                 // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     DashDir;                                                  // 0x0054(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // 0x0060(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     SourcePosition;                                           // 0x006C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DashActive;                                               // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CameraFX;                                                 // 0x0080(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_ArmorCharge");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_FireQtTunneler
// 0x0000 (0x0050 - 0x0050)
class UShooterState_FireQtTunneler : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_FireQtTunneler");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LaserShoesBackFromK
// 0x0000 (0x0050 - 0x0050)
class UShooterState_LaserShoesBackFromK : public UShooterState_LaserShoesBackBoost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LaserShoesBackFromK");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LaserUnibeam
// 0x0000 (0x0050 - 0x0050)
class UShooterState_LaserUnibeam : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LaserUnibeam");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LaserUnibeamEnd
// 0x0000 (0x0050 - 0x0050)
class UShooterState_LaserUnibeamEnd : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LaserUnibeamEnd");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Mantle
// 0x0008 (0x0058 - 0x0050)
class UShooterState_Mantle : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Mantle");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_LaserKick
// 0x0008 (0x0080 - 0x0078)
class UShooterState_LaserKick : public UShooterState_NinjaKick
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_LaserKick");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_QuickDrop
// 0x0000 (0x0050 - 0x0050)
class UShooterState_QuickDrop : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_QuickDrop");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SamuraiMeleeEquip
// 0x0008 (0x0058 - 0x0050)
class UShooterState_SamuraiMeleeEquip : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SamuraiMeleeEquip");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SHGauntlet_ShieldIn
// 0x0008 (0x0058 - 0x0050)
class UShooterState_SHGauntlet_ShieldIn : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SHGauntlet_ShieldIn");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SHGauntlet_ShieldLP
// 0x0000 (0x0050 - 0x0050)
class UShooterState_SHGauntlet_ShieldLP : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SHGauntlet_ShieldLP");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SHGauntlet_ShieldOT
// 0x0008 (0x0058 - 0x0050)
class UShooterState_SHGauntlet_ShieldOT : public UShooterBaseState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SHGauntlet_ShieldOT");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_SendDrone
// 0x0000 (0x0058 - 0x0058)
class UShooterState_SendDrone : public UShooterState_UB_Throw
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_SendDrone");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_AkimboDuziFire
// 0x0000 (0x0060 - 0x0060)
class UShooterState_AkimboDuziFire : public UShooterState_UpperBody_Fire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_AkimboDuziFire");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Valk_Lunge
// 0x0000 (0x0050 - 0x0050)
class UShooterState_Valk_Lunge : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Valk_Lunge");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_Valk_LungeAttack
// 0x0028 (0x0078 - 0x0050)
class UShooterState_Valk_LungeAttack : public UShooterBaseState
{
public:
	bool                                               bDidDamage;                                               // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDamageWindowActive;                                      // 0x0051(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	class AShooterCharacter*                           TargetPlayer;                                             // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_Valk_LungeAttack");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithAirJumpBack
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithAirJumpBack : public UShooterState_WraithAirJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithAirJumpBack");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithAirJumpFwd
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithAirJumpFwd : public UShooterState_WraithAirJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithAirJumpFwd");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithAirJumpLeft
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithAirJumpLeft : public UShooterState_WraithAirJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithAirJumpLeft");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithAirJumpRight
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithAirJumpRight : public UShooterState_WraithAirJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithAirJumpRight");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithFlipJump
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithFlipJump : public UShooterState_WraithAirJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithFlipJump");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithFlipJump_Back
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithFlipJump_Back : public UShooterState_WraithFlipJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithFlipJump_Back");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithFlipJump_Left
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithFlipJump_Left : public UShooterState_WraithFlipJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithFlipJump_Left");
		return ptr;
	}

};


// Class ShooterGame.ShooterState_WraithFlipJump_Right
// 0x0000 (0x0058 - 0x0058)
class UShooterState_WraithFlipJump_Right : public UShooterState_WraithFlipJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterState_WraithFlipJump_Right");
		return ptr;
	}

};


// Class ShooterGame.ShooteState_RomerusFire_Wall
// 0x0000 (0x0050 - 0x0050)
class UShooteState_RomerusFire_Wall : public UShooterBaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooteState_RomerusFire_Wall");
		return ptr;
	}

};


// Class ShooterGame.ShooterBeamSentry
// 0x0070 (0x0408 - 0x0398)
class AShooterBeamSentry : public AActor
{
public:
	class UClass*                                      BuffToApply;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TetherFX;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ExplosionFX;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountMax;                                          // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageMax;                                       // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageMin;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionInnerRadius;                                     // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionOuterRadius;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageFallOff;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageMitigation;                                // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamagePassThrough;                               // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetectionRadius;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDetectionRadius;                                 // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TractorBeamForce;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh3p;                                                   // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AShooterCharacter*                           TetherTarget;                                             // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Health;                                                   // 0x03F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    TetherPSU;                                                // 0x0400(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBeamSentry");
		return ptr;
	}


	void MulticastRemoveTetheredCharacter(class AShooterCharacter* CharacterToRemove);
	void MulticastPullTarget(const struct FVector& TractorForce);
	void MulticastAddTetheredCharacter(class AShooterCharacter* CharacterToAdd);
};


// Class ShooterGame.ShooterBlackjack
// 0x0010 (0x03A8 - 0x0398)
class AShooterBlackjack : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh1P;                                                   // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AShooterCharacter*                           MyPawn;                                                   // 0x03A0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBlackjack");
		return ptr;
	}


	void OnRep_MyPawn();
};


// Class ShooterGame.ShooterTeamStart
// 0x0040 (0x0408 - 0x03C8)
class AShooterTeamStart : public APlayerStart
{
public:
	struct FBotStartConfig                             BotStartConfig;                                           // 0x03C8(0x0028) (Edit, DisableEditOnTemplate)
	int                                                SpawnTeam;                                                // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bNotForPlayers : 1;                                       // 0x03F4(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bNotForBots : 1;                                          // 0x03F4(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x13];                                      // 0x03F5(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTeamStart");
		return ptr;
	}

};


// Class ShooterGame.ShooterBotSpawnManager
// 0x00A8 (0x00D0 - 0x0028)
class UShooterBotSpawnManager : public UObject
{
public:
	class UClass*                                      AIControllerClass;                                        // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
	TMap<class AShooterAIController*, class AShooterTeamStart*> SpawnMap;                                                 // 0x0070(0x0050) (ZeroConstructor, Transient)
	class AShooterGameMode*                            Owner;                                                    // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBotSpawnManager");
		return ptr;
	}

};


// Class ShooterGame.ShooterParabolicImage
// 0x00E0 (0x02F0 - 0x0210)
class UShooterParabolicImage : public UImage
{
public:
	struct FParabolicConfig                            Parabola;                                                 // 0x0210(0x00D0) (Edit)
	class UMaterialInterface*                          EffectMaterial;                                           // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterParabolicImage");
		return ptr;
	}

};


// Class ShooterGame.ShooterCachedWidget
// 0x0210 (0x0370 - 0x0160)
class UShooterCachedWidget : public URetainerBox
{
public:
	struct FParabolicConfig                            Config;                                                   // 0x0160(0x00D0) (Edit)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0230(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickPerSecond;                                            // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OverrideRenderTargetSize;                                 // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bExplicitWantTick : 1;                                    // 0x0250(0x0001) (Edit)
	unsigned char                                      bExplicitWantRender : 1;                                  // 0x0250(0x0001) (Edit)
	unsigned char                                      bShowDebug : 1;                                           // 0x0250(0x0001) (Edit)
	unsigned char                                      bVisibilityOverride : 1;                                  // 0x0250(0x0001) (Edit)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0251(0x000F) MISSED OFFSET
	struct FSlateBrush                                 EffectBrush;                                              // 0x0260(0x0090) (Edit)
	TEnumAsByte<ECachedWidgetEffect>                   DrawEffect;                                               // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x67];                                      // 0x02F1(0x0067) MISSED OFFSET
	TArray<class UScrollBox*>                          ScrollBoxWidgets;                                         // 0x0358(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCachedWidget");
		return ptr;
	}


	void SetOverrideTickFrequency(float InFrequency);
	void SetOverlayEffectDrawState(TEnumAsByte<ECachedWidgetEffect> InState);
	void SetColorAndOpacity(struct FLinearColor* InColor);
	void RequestTick(bool InValue);
	void RequestSlateWidgetTickDuringRender(class UWidget* WidgetToTickDuringRender);
	void RequestRenderAndClear(bool InValue);
	void RequestRender(bool InValue);
	void RequestFocus(bool InValue);
	float GetActiveTickFrequency();
	void ForceInvalidateCache();
	void AddScrollBoxForAutoScrollingText(class UScrollBox* ScrollBox);
};


// Class ShooterGame.ShooterCaptureZone
// 0x0010 (0x03A8 - 0x0398)
class AShooterCaptureZone : public AActor
{
public:
	struct FCaptureZoneData                            CaptureZoneConfig;                                        // 0x0398(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCaptureZone");
		return ptr;
	}

};


// Class ShooterGame.ShooterCashDrop
// 0x0020 (0x03B8 - 0x0398)
class AShooterCashDrop : public AActor
{
public:
	int                                                CashPerTick;                                              // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CashTickRate;                                             // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AmbientSoundStart;                                        // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCashDrop");
		return ptr;
	}


	void OnStartCashDrop();
	void OnEndCashDrop();
	void MulticastEndCashDrop();
};


// Class ShooterGame.ShooterBot
// 0x0000 (0x1990 - 0x1990)
class AShooterBot : public AShooterCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBot");
		return ptr;
	}

};


// Class ShooterGame.ShooterCharacterStats
// 0x0080 (0x00A8 - 0x0028)
class UShooterCharacterStats : public UDataAsset
{
public:
	float                                              MaxHealth;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeed;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Sprint_SpeedModifier;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CrouchSprint_SpeedModifier;                               // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ForwardMoveSpeedModifier;                                 // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StrafeMoveSpeedModifier;                                  // 0x0040(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BackMoveSpeedModifier;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              OTS_MoveSpeedModifier;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ADS_MoveSpeedModifier;                                    // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Crouch_MoveSpeedModifier;                                 // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Prone_MoveSpeedModifier;                                  // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StanceChangeCooldown_StandToCrouch;                       // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StanceChangeCooldown_ProneToCrouch;                       // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StanceChangeCooldown_StandToProne;                        // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StanceChangeCooldown_CrouchToProne;                       // 0x0064(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StanceChangeCooldown_CrouchToStanding;                    // 0x0068(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StanceChangeCooldown_ProneToStanding;                     // 0x006C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CombatRollAccuracyMultiplier;                             // 0x0070(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CombatRollAccuracyDecaySpeed;                             // 0x0074(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BaseArmor;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxArmor;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HealthRegen;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ArmorRegen;                                               // 0x0084(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxScalar;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZipLineMaxSpeed;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZipLineAccel;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoostDecay;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeedMultiplier_BoostGreaterZero;                     // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeedMultiplier_BoostGreaterFifty;                    // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecoilMultiplier_BoostGreaterZero;                        // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecoilMultiplier_BoostGreaterFifty;                       // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterStats");
		return ptr;
	}

};


// Class ShooterGame.ShooterCharacterDefinition
// 0x0078 (0x00A0 - 0x0028)
class UShooterCharacterDefinition : public UDataAsset
{
public:
	class UShooterCharacterStats*                      CharacterStats;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CharacterInventoryClasses;                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterLoadWeaponInfo>              WeaponOneVariantList;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterLoadWeaponInfo>              WeaponTwoVariantList;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CharacterWeaponAugment;                                   // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CharacterTertiaryWeapon;                                  // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShooterGameplayAbilitySet*                  CharacterAbilitySet;                                      // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      ClassName;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAkAudioEvent*                               TauntSound;                                               // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHealer;                                                // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayHealMeMessage;                                    // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterGang>                          Gang;                                                     // 0x0092(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMetallic;                                              // 0x0093(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      LogitechLEDPrimaryColor;                                  // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      LogitechLEDSecondaryColor;                                // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterDefinition");
		return ptr;
	}

};


// Class ShooterGame.ShooterCharacterLighting
// 0x0050 (0x0078 - 0x0028)
class UShooterCharacterLighting : public UDataAsset
{
public:
	TArray<struct FVirtualCharacterLight>              LightsConfiguration;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AddDynamicLightsNum;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DynamicLightsRadius;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateFrequencyNear;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateFrequencyFar;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearDistance;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RenderTimeThreshold;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugSpheres;                                         // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	TArray<struct FVirtualCharacterLight>              CachedDynamicLights;                                      // 0x0058(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVirtualCharacterLight>              ActiveLights;                                             // 0x0068(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterLighting");
		return ptr;
	}

};


// Class ShooterGame.ShooterChatWidgetStyle
// 0x0980 (0x09B0 - 0x0030)
class UShooterChatWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FShooterChatStyle                           ChatStyle;                                                // 0x0030(0x0980) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterChatWidgetStyle");
		return ptr;
	}

};


// Class ShooterGame.ShooterCheatManager
// 0x0000 (0x0078 - 0x0078)
class UShooterCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCheatManager");
		return ptr;
	}


	void TogglePickupRarityFX(int ToggleOn);
	void ToggleMatchTimer();
	void SpawnPlayerSim();
	void SetTeamScore(int TeamIndex, int NewScore);
	void SetSprintSpeedModifier(float InMoveSpeedModifier);
	void ForceMatchStart();
	void Cheat(const class FString& Msg);
	void ChangeTeam(int NewTeamNumber);
};


// Class ShooterGame.ShooterClientProjectile
// 0x00B0 (0x0448 - 0x0398)
class AShooterClientProjectile : public AActor
{
public:
	int                                                ClientID;                                                 // 0x0398(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class AController*                                 ShooterController;                                        // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UShooterProjectileMovement*                  MovementComp;                                             // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComp;                                             // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              ParticleStartScale;                                       // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleDesiredScale;                                     // 0x03C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleScaleTime;                                        // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MuzzleOffsetBlendTime;                                    // 0x03CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ServerPositionBlendTime;                                  // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOffsetToServer;                                        // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityOverride;                                          // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HideOnImpact;                                             // 0x03DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              DeactivateLifetime;                                       // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class AShooterProjectile*                          ServerProjectile;                                         // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x03F0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterClientProjectile");
		return ptr;
	}


	void OnDeactivateBegin();
	void OnBeginTimedExplodeFX();
};


// Class ShooterGame.ShooterControlZone
// 0x0020 (0x03B8 - 0x0398)
class AShooterControlZone : public AActor
{
public:
	struct FControlZoneData                            ControlZoneConfig;                                        // 0x0398(0x0010) (Edit, DisableEditOnInstance)
	int                                                ControllingTeamNum;                                       // 0x03A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EControlZoneState>                     ControlZoneState;                                         // 0x03AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	float                                              CurrentCaptureTime;                                       // 0x03B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentScoreIntervalTime;                                 // 0x03B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterControlZone");
		return ptr;
	}

};


// Class ShooterGame.ShooterCustomizationComponent
// 0x01B0 (0x02B0 - 0x0100)
class UShooterCustomizationComponent : public UActorComponent
{
public:
	struct FShooterCustomizationComponentData          CustomizationComponentConfig;                             // 0x0100(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0138(0x0078) MISSED OFFSET
	class USkeletalMeshComponent*                      BodyComponent;                                            // 0x01B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<struct FName, class USkeletalMeshComponent*>  ComponentsMap;                                            // 0x01B8(0x0050) (ExportObject, ZeroConstructor, Transient)
	struct FShooterCustomizationLoadout                DesiredLoadout;                                           // 0x0208(0x0018) (Transient)
	struct FShooterCustomizationCompressedLoadout      CompressedDesiredLoadout;                                 // 0x0220(0x0018) (Net, Transient)
	int                                                NetworkDebugId;                                           // 0x0238(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	struct FShooterCustomizationLoadout                AppliedLoadout;                                           // 0x0240(0x0018) (Transient)
	struct FShooterCustomizationLoadedLoadout          AppliedLoadedLoadout;                                     // 0x0258(0x0050) (Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationComponent");
		return ptr;
	}


	void SetLoadoutItem(const struct FName& PartName, const struct FName& ItemName);
	void SetLoadout(const struct FShooterCustomizationLoadout& Loadout);
	void SetBodyType(const struct FName& BodyType);
	void OnRep_NetworkDebugId();
	void OnRep_CompressedDesiredLoadout();
	struct FShooterCustomizationLoadout GetDesiredLoadout();
};


// Class ShooterGame.ShooterCustomizationPartData
// 0x0068 (0x0090 - 0x0028)
class UShooterCustomizationPartData : public UDataAsset
{
public:
	struct FName                                       PartName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShooterCustomizationVID>            VIDs;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationMorph>          DefaultMorphs;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationMaterialScalarParam> DefaultMaterialScalarParams;                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationMaterialVectorParam> DefaultMaterialVectorParams;                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationMaterialTextureParam> DefaultMaterialTextureParams;                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationItemData>       Items;                                                    // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationPartData");
		return ptr;
	}

};


// Class ShooterGame.ShooterCustomizationData
// 0x0028 (0x0050 - 0x0028)
class UShooterCustomizationData : public UDataAsset
{
public:
	TArray<struct FName>                               BodyTypes;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UShooterCustomizationPartData*>       Parts;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bToggleToRebuild;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationData");
		return ptr;
	}

};


// Class ShooterGame.ShooterCustomizationEngine
// 0x0140 (0x0168 - 0x0028)
class UShooterCustomizationEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty ShooterGame.ShooterCustomizationEngine.Components
	unsigned char                                      UnknownData01[0x50];                                      // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty ShooterGame.ShooterCustomizationEngine.DirtyComponents
	TMap<struct FName, struct FShooterCustomizationLoadedItem> PartLoadedItemDefaults;                                   // 0x00C8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0118(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationEngine");
		return ptr;
	}

};


// Class ShooterGame.ShooterCustomizationItemSetupComponent
// 0x0060 (0x0160 - 0x0100)
class UShooterCustomizationItemSetupComponent : public UActorComponent
{
public:
	struct FShooterCustomizationItemSetupComponentData CustomizationComponentConfig;                             // 0x0100(0x0060) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationItemSetupComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterCustomizationItemSetupActor
// 0x0010 (0x03A8 - 0x0398)
class AShooterCustomizationItemSetupActor : public AActor
{
public:
	bool                                               bDebugViewInGame;                                         // 0x0398(0x0001) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bToggleToUpdateCustomizationData;                         // 0x0399(0x0001) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bToggleToRemoveFromCustomizationData;                     // 0x039A(0x0001) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x039B(0x0005) MISSED OFFSET
	class UShooterCustomizationItemSetupComponent*     ItemSetupComponent;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationItemSetupActor");
		return ptr;
	}

};


// Class ShooterGame.ShooterKillFeedMessage
// 0x0138 (0x0380 - 0x0248)
class UShooterKillFeedMessage : public UShooterUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	struct FKillFeedMessage                            Message;                                                  // 0x0250(0x00F0) (BlueprintVisible, BlueprintReadOnly, Transient)
	class UTextBlock*                                  KillerNameWidget;                                         // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KillImageWidget;                                          // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                RelevantToSelfWidget;                                     // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      RelevantToSelfIconKiller;                                 // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      RelevantToSelfIconVictim;                                 // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  VictimNameWidget;                                         // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  MethodTextWidget;                                         // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsFading;                                                 // 0x0378(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterKillFeedMessage");
		return ptr;
	}

};


// Class ShooterGame.ShooterPlayerState
// 0x0370 (0x0790 - 0x0420)
class AShooterPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0420(0x0008) MISSED OFFSET
	TMap<class FString, struct FDamageDoneData>        DamageDoneMap;                                            // 0x0428(0x0050) (ZeroConstructor, Transient)
	class AShooterCustomizationLoadManager*            HelperCustomizationLoadManager;                           // 0x0478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TeamNumber;                                               // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	int                                                PositionIndex;                                            // 0x0488(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                LastValidPositionIndex;                                   // 0x048C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FSupportData>                        SupportList;                                              // 0x0490(0x0010) (ZeroConstructor, Transient)
	int                                                OverallScore;                                             // 0x04A0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04A4(0x0018) MISSED OFFSET
	int                                                StartingBankCashBalance;                                  // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x04C0(0x000C) MISSED OFFSET
	int                                                AssistScoreCount;                                         // 0x04CC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              HealingDone;                                              // 0x04D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class AShooterPlayerState*                         LastKiller;                                               // 0x04D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      LastKillType;                                             // 0x04E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	struct FKillFeedMessage                            LastKillDescription;                                      // 0x04F0(0x00F0) (Transient)
	bool                                               LastKillChanged;                                          // 0x05E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x27];                                      // 0x05E1(0x0027) MISSED OFFSET
	int                                                NumBulletsFired;                                          // 0x0608(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumRocketsFired;                                          // 0x060C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bQuitter : 1;                                             // 0x0610(0x0001)
	unsigned char                                      bIsPlayerLoadedInWorld : 1;                               // 0x0610(0x0001) (Net)
	unsigned char                                      UnknownData07[0xF];                                       // 0x0611(0x000F) MISSED OFFSET
	struct FVector                                     LastKnownPosition;                                        // 0x0620(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	TArray<struct FTakenDamage>                        RecentTakenDamage;                                        // 0x0630(0x0010) (ZeroConstructor, Transient)
	TArray<struct FDamageSource>                       RecentDamageSources;                                      // 0x0640(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                ChosenClassIndex;                                         // 0x0650(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenClassIndexRepped;                                  // 0x0654(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	struct FName                                       ChosenCharacterSkinName;                                  // 0x0658(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenCharacterSkinNameRepped;                           // 0x0660(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	struct FName                                       ChosenWeaponOneSkinName;                                  // 0x0668(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenWeaponOneSkinNameRepped;                           // 0x0670(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0671(0x0007) MISSED OFFSET
	struct FName                                       ChosenWeaponTwoSkinName;                                  // 0x0678(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenWeaponTwoSkinNameRepped;                           // 0x0680(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0681(0x0007) MISSED OFFSET
	struct FName                                       ChosenWeaponOneStickerName;                               // 0x0688(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenWeaponOneStickerNameRepped;                        // 0x0690(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	struct FName                                       ChosenWeaponTwoStickerName;                               // 0x0698(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenWeaponTwoStickerNameRepped;                        // 0x06A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	struct FName                                       ChosenWeaponOneDeathDecalName;                            // 0x06A8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenWeaponOneDeathDecalNameRepped;                     // 0x06B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FName                                       ChosenWeaponTwoDeathDecalName;                            // 0x06B8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenWeaponTwoDeathDecalNameRepped;                     // 0x06C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	struct FName                                       ChosenMVPTauntName;                                       // 0x06C8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenMVPTauntNameRepped;                                // 0x06D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	struct FName                                       ChosenAccounterPortraitName;                              // 0x06D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChosenAccounterPortraitNameRepped;                       // 0x06E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x06E1(0x0007) MISSED OFFSET
	class UObject*                                     WeaponADeathDecal;                                        // 0x06E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     WeaponBDeathDecal;                                        // 0x06F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x40];                                      // 0x06F8(0x0040) MISSED OFFSET
	class AShooterCharacter*                           ShooterCharacterReference;                                // 0x0738(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PreviousClassIndex;                                       // 0x0740(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class UShooterInteractComponent*                   SpawnInteract;                                            // 0x0748(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData21[0x10];                                      // 0x0750(0x0010) MISSED OFFSET
	struct FTimerHandle                                DashKillWindowTimer;                                      // 0x0760(0x0008) (Transient)
	unsigned char                                      UnknownData22[0x8];                                       // 0x0768(0x0008) MISSED OFFSET
	TArray<struct FCosmeticLootSpawnerData>            CosmeticItems;                                            // 0x0770(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData23[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerState");
		return ptr;
	}


	void SetLastKnownPosition(const struct FVector& Pos);
	void SetClientCashValues(int NewCarriedCashAmount, int NewDeathTaxAmount, int NewWinnerBonusAmount, int InFinalCashAmount);
	void ServerSetIsTrial(bool bIsTrial);
	void ServerScoreAnEvent(const struct FName& InEventName, float InCounter);
	void ServerNotifySquadMarkerChanged(const struct FVector2D& MarkerPosition, bool bMarkerActive);
	void ScoreAnEventWithVictim(const struct FName& InEventName, class AShooterPlayerState* Victim, float InCounter);
	void ScoreAnEvent(const struct FName& InEventName, float InCounter);
	void RequestTeamChange(int NewTeam);
	void OnRep_TeamColor();
	void OnRep_Position();
	void OnRep_CosmeticItems();
	void OnRep_ChosenWeaponTwoStickerName();
	void OnRep_ChosenWeaponTwoSkinName();
	void OnRep_ChosenWeaponTwoDeathDecalName();
	void OnRep_ChosenWeaponOneStickerName();
	void OnRep_ChosenWeaponOneSkinName();
	void OnRep_ChosenWeaponOneDeathDecalName();
	void OnRep_ChosenMVPTauntName();
	void OnRep_ChosenClassIndex();
	void OnRep_ChosenCharacterSkineName();
	void OnRep_ChosenAccounterPortraitName();
	void OnRep_Cash();
	void OnRep_bIsPlayerLoadedInWorld();
	void NetMulticastSetIsExternalPlayer(bool bInIsExternalPlayer);
	void NetMulticastLoadCharacterCustomization(int ClassIndex, const struct FCustomizationData& CustomizationData);
	bool IsQuitter();
	bool IsPawnAlive();
	void InformAboutKill(class AShooterPlayerState* KillerPlayerState, class UClass* KillerDamageType, class AShooterPlayerState* KilledPlayerState);
	class UCustomStickerData* GetWeaponBSticker();
	class UObject* GetWeaponBDeathDecalObject();
	class UCustomStickerData* GetWeaponASticker();
	class UObject* GetWeaponADeathDecalObject();
	class FString GetShortPlayerName();
	class AShooterCharacter* GetShooterPawn();
	int GetScore();
	int GetPositionIndex();
	float GetPersonalCashBoost();
	int GetNumRocketsFired();
	int GetNumBulletsFired();
	int GetLastValidPositionIndex();
	struct FVector GetLastKnowPosition();
	class UDamageType* GetLastKillType();
	struct FKillFeedMessage GetLastKillMessage();
	class AShooterPlayerState* GetLastKiller();
	bool GetLastKillChanged();
	int GetKills();
	int GetDeaths();
	bool GetChosenPawnInfo(struct FShooterPawnInfo* PawnInfo);
	int GetAssists();
	class UObject* GetAccountPortraitObject();
	void ClientSetCanSeeExternalPlayer(bool bInCanSeeExternalPlayer);
	void ClientProcessScoreEvent(int InScoreAmount, int InScoreMultiplier, unsigned char InScoreIndex, class AShooterPlayerState* InVictimPlayer, int TriggerCounter);
	void ClientNotifySquadMarkerChanged(class AShooterPlayerState* MarkerOwner, const struct FVector2D& MarkerPosition, int ColorIndex, bool bMarkerActive);
	void ClientInformAboutDeath(TArray<struct FDamageSource> DamageSources, TArray<struct FPlayerCustomizationBodyPart> kill_card);
	void ClearLastKillChanged();
	void BroadcastScoreEvent(int InScoreAmount, int InScoreMultiplier, unsigned char InScoreIndex, class AShooterPlayerState* InKillerr, class AShooterPlayerState* InVictim, int TriggerCounter);
	void BroadcastGoodbyeMessage();
	void BroadcastDeath(float KillingDamage, class AShooterCharacter* Killer, class AShooterPlayerState* KillerPlayerState, class UClass* KillerDamageType, class AShooterPlayerState* KilledPlayerState, class AActor* DamageCauser, int InTriggerCounter, uint32_t Seed);
};


// Class ShooterGame.ShooterFrontEndAnimationPackage
// 0x0090 (0x00B8 - 0x0028)
class UShooterFrontEndAnimationPackage : public UObject
{
public:
	TArray<TAssetPtr<class UAnimSequence>>             LobbyIdles;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UAnimMontage>                      CharacterSelectedIdle;                                    // 0x0038(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UAnimSequence>                     CustomizationIdle;                                        // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UAnimSequence>                     CustomizationPrimaryWeaponIdle;                           // 0x0078(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UAnimSequence>                     CustomizationSecondaryWeaponIdle;                         // 0x0098(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterFrontEndAnimationPackage");
		return ptr;
	}

};


// Class ShooterGame.ShooterFrontEndData
// 0x0078 (0x00A0 - 0x0028)
class UShooterFrontEndData : public UDataAsset
{
public:
	TArray<struct FShooterFrontEndMenuData>            MenuActors;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FShooterCustAccountPortrait>         CustomAccountPortraits;                                   // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustAccountPortrait>         UnreleasedAccountPortraits;                               // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFont*>                               Fonts;                                                    // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              MenuActorClasses;                                         // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FColor>                              ReticleColors;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FColor>                              CharacterOutlineColors;                                   // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialParameterCollection*                PlayerPawnParameterCollection;                            // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterFrontEndData");
		return ptr;
	}

};


// Class ShooterGame.ShooterMenuLevelMessageHandler
// 0x0120 (0x04B8 - 0x0398)
class AShooterMenuLevelMessageHandler : public AActor
{
public:
	TArray<struct FVector>                             TeammatePositions;                                        // 0x0398(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     HomePosition;                                             // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HomeRotation;                                             // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShooterFrontEndScene>               SceneBackdrops;                                           // 0x03C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class AMatineeActor*                               HomeMatinee;                                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AMatineeActor*                               LobbyMatinee;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AMatineeActor*                               CustomizationMatinee;                                     // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AMatineeActor*                               LobbyDetailsMatinee;                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      OrbitCamera;                                              // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AMatineeActor*                               ActiveMatinee;                                            // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      CurrentOrbitFocus;                                        // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooterMenuActorSpawner*>            Spawners;                                                 // 0x0408(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterMenuActor*>                   MenuActors;                                               // 0x0418(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0428(0x0038) MISSED OFFSET
	struct FVector                                     FollowCamBaseLocation;                                    // 0x0460(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FollowCamZoomedInLocation;                                // 0x046C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FollowCamZoomedOutLocation;                               // 0x0478(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x0484(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMenuLevelMessageHandler");
		return ptr;
	}


	void UpdateMouseWheelDelta(float Y);
	void UpdateFollowCamDelta(float X, float Y);
	void StartMouseDown(float X, float Y);
	void OnSetupComplete();
	void OnEndMouseDown();
	struct FShooterFrontEndMenuData GetMenuActorData(const class FString& ID);
	TArray<class UClass*> GetMenuActorClasses();
	void DebugStepMenuStates();
};


// Class ShooterGame.ShooterMenuActor
// 0x01B8 (0x0550 - 0x0398)
class AShooterMenuActor : public AActor
{
public:
	class UClass*                                      AnimationsToLoad;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShooterMenuSceneScale>              ScalePerScene;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class AShooterMenuActorSpawner*                    Spawner;                                                  // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterFrontEndAnimationPackage*            FrontEndAnims;                                            // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCustomizationRotationActive;                             // 0x03C0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              CustomizationRotationOffset;                              // 0x03C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CustomizationRotateRate;                                  // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnEffectDuration;                                      // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EmissiveScaleName;                                        // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmissiveScaleValue;                                       // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FName                                       SpawnColorParamName;                                      // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnColor;                                               // 0x03E8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FName                                       SpawnParamName;                                           // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnFlagName;                                            // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceLastSpin;                                        // 0x0408(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInAutoSpinState;                                         // 0x040C(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UParticleSystem*                             CharacterCustomizationFX;                                 // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CharacterCustomizationSocketName;                         // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystem*                             PrimaryWeaponCustomizationFX;                             // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       PrimaryWeaponCustomizationSocketName;                     // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAkAudioEvent*                               PrimaryWeaponCustomizationSound;                          // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystem*                             OffhandWeaponCustomizationFX;                             // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       OffhandWeaponCustomizationSocketName;                     // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAkAudioEvent*                               OffhandWeaponCustomizationSound;                          // 0x0448(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystem*                             SecondaryWeaponCustomizationFX;                           // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       SecondaryWeaponCustomizationSocketName;                   // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAkAudioEvent*                               SecondaryWeaponCustomizationSound;                        // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAnimationAsset*>                     LoadedAssets;                                             // 0x0468(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x78];                                      // 0x0478(0x0078) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              Meshes;                                                   // 0x04F0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UAkAudioEvent*                               OnMaterializeSound;                                       // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OnMaterializeFastSound;                                   // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeUntilRespin;                                          // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class UShooterCustomizationComponent*              CustomizationComponent;                                   // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x30];                                      // 0x0520(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMenuActor");
		return ptr;
	}


	bool WasCustomizationApplied();
	void SetIsSpawning(bool bIsSpawning, bool bForceInstant, float OverrideSpawnRate);
	void SetIsDespawning(bool bIsDespawning, bool bForceInstant, float OverrideSpawnRate);
	void OnMenuActorCustomizationCompleted();
	void NotifyCustomizationCompleted();
	float GetScaleForScene(TEnumAsByte<EMenuWorldState> MenuScene);
	void ForceFinishSpawn();
	void ForceFinishDespawn();
	void EnableDemoMode();
	void DestroyMenuActor();
	void BPToggleCustomizationFocus(bool bWeaponFocused, bool bWeaponPrimary, TEnumAsByte<EMenuWorldState> CurrentScene);
	void BPSetupForLobby(int Slot);
	void BPSetupForCustomization(bool bWeaponFocused, bool bWeaponPrimary);
	void BPSetupForCharacterSelect();
	void BPOnLoadoutApplied(int LobbySlot);
};


// Class ShooterGame.ShooterMenuActorSpawner
// 0x00D8 (0x0470 - 0x0398)
class AShooterMenuActorSpawner : public AActor
{
public:
	class AShooterMenuActor*                           MenuActor;                                                // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      MenuActorClass;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET
	TArray<class UTexture2D*>                          Textures;                                                 // 0x03B0(0x0010) (ZeroConstructor, Transient)
	float                                              MaxWaitTime;                                              // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaSinceSpawn;                                          // 0x03C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxBlockTime;                                             // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Particles;                                                // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               ParticleLoopingSound;                                     // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ParticleStopSound;                                        // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x03F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMenuActorSpawner");
		return ptr;
	}


	class AShooterMenuActor* SpawnMenuActorFromClass(class UClass* InMenuActorClass, const struct FTransform& SpawnTransform, const struct FPlayerCustomizationLoadoutPreference& CustomizationData, TEnumAsByte<EMenuActorAnimState> SpawnState, int AnimSlot, bool ForceNoLoadParticles);
	void DestroyMenuActor();
};


// Class ShooterGame.ShooterCustomizationLoadManager
// 0x0240 (0x05D8 - 0x0398)
class AShooterCustomizationLoadManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET
	class AActor*                                      ActorOwner;                                               // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	double                                             LoadStartTime;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	TArray<struct FStringAssetReference>               CustomizationAssetReferences;                             // 0x03C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FStringAssetReference>               CustomizationFPAssetReferences;                           // 0x03D0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FStringAssetReference>               PriorityCustomizationAssetReferences;                     // 0x03E0(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       KickScreenDecalLoadData;                                  // 0x03F0(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       WeaponAScreenDecalLoadData;                               // 0x0400(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       WeaponBScreenDecalLoadData;                               // 0x0410(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       WeaponAStickerReference;                                  // 0x0420(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       WeaponBStickerReference;                                  // 0x0430(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       AccountPortraitReference;                                 // 0x0440(0x0010) (ZeroConstructor, Transient)
	int                                                ChosenClassIndex;                                         // 0x0450(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FCustomizationData                          ChosenCustomizationData;                                  // 0x0458(0x0070) (Transient)
	class UObject*                                     KickDecal;                                                // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	class ACustomizationBlueprintActor*                KickDecalCustBlueprintActor;                              // 0x04D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     WeaponADeathDecal;                                        // 0x04E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     WeaponBDeathDecal;                                        // 0x04E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCustomStickerData*                          WeaponASticker;                                           // 0x04F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCustomStickerData*                          WeaponBSticker;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCustomAccountPortraitData*                  AccountPortraitData;                                      // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ACustomizationBlueprintActor*>        ActualCustomizationBlueprints;                            // 0x0508(0x0010) (ZeroConstructor, Transient)
	TArray<struct FStringAssetReference>               CustomizationBlueprintReferences;                         // 0x0518(0x0010) (ZeroConstructor, Transient)
	TArray<struct FCustomizationActorSkinData>         ActorSkinDatas;                                           // 0x0528(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x0538(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCustomizationLoadManager");
		return ptr;
	}

};


// Class ShooterGame.ShooterDamageType
// 0x01A0 (0x01E0 - 0x0040)
class UShooterDamageType : public UDamageType
{
public:
	struct FSlateBrush                                 HUDBrush;                                                 // 0x0040(0x0090) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 HUDBrushLarge;                                            // 0x00D0(0x0090) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       HUDName;                                                  // 0x0160(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UForceFeedbackEffect*                        HitForceFeedback;                                         // 0x0178(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        KilledForceFeedback;                                      // 0x0180(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelDebuffTime;                                          // 0x0188(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAudioDamageCategory>                  AudioDamageCategory;                                      // 0x018C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAbilityType>                          AbilityType;                                              // 0x018D(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSendTelemetryOnTrigger;                                  // 0x018E(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x41];                                      // 0x018F(0x0041) MISSED OFFSET
	struct FName                                       TelemetryName;                                            // 0x01D0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType");
		return ptr;
	}

};


// Class ShooterGame.ShooterDamageType_Ballistic
// 0x0000 (0x01E0 - 0x01E0)
class UShooterDamageType_Ballistic : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType_Ballistic");
		return ptr;
	}

};


// Class ShooterGame.ShooterDamageType_Energy
// 0x0000 (0x01E0 - 0x01E0)
class UShooterDamageType_Energy : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType_Energy");
		return ptr;
	}

};


// Class ShooterGame.ShooterDamageType_Kick
// 0x0000 (0x01E0 - 0x01E0)
class UShooterDamageType_Kick : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType_Kick");
		return ptr;
	}

};


// Class ShooterGame.ShooterDamageType_Melee
// 0x0000 (0x01E0 - 0x01E0)
class UShooterDamageType_Melee : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType_Melee");
		return ptr;
	}

};


// Class ShooterGame.ShooterDamageType_Projectile
// 0x0000 (0x01E0 - 0x01E0)
class UShooterDamageType_Projectile : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType_Projectile");
		return ptr;
	}

};


// Class ShooterGame.ShooterDamageType_TrueDamage
// 0x0000 (0x01E0 - 0x01E0)
class UShooterDamageType_TrueDamage : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType_TrueDamage");
		return ptr;
	}

};


// Class ShooterGame.ShooterDeathAnimPackage
// 0x0018 (0x0040 - 0x0028)
class UShooterDeathAnimPackage : public UObject
{
public:
	class UCurveFloat*                                 DefaultAngularDriveCurve;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDeathAnimSelection>                 DeathAnimations;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDeathAnimPackage");
		return ptr;
	}

};


// Class ShooterGame.ShooterDemoHUD
// 0x0000 (0x0480 - 0x0480)
class AShooterDemoHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDemoHUD");
		return ptr;
	}

};


// Class ShooterGame.ShooterDemoSpectator
// 0x0008 (0x06D0 - 0x06C8)
class AShooterDemoSpectator : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDemoSpectator");
		return ptr;
	}

};


// Class ShooterGame.ShooterDestructibleObject
// 0x0038 (0x03D0 - 0x0398)
class AShooterDestructibleObject : public AActor
{
public:
	TArray<struct FDestructionStage>                   DestructionStages;                                        // 0x0398(0x0010) (Edit, ZeroConstructor)
	bool                                               bClientSideDestruction;                                   // 0x03A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DestructionStage;                                         // 0x03A9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComp;                                           // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX;                                                 // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAkSoundInstance*                            ActiveSound;                                              // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDestructibleObject");
		return ptr;
	}


	void StageDestroyed(int StageIndex);
	void ResetDestruction();
	void OnRep_DestructionStage();
	void DestructionReset();
};


// Class ShooterGame.ShooterDomeSpawnPlatform
// 0x0028 (0x03C0 - 0x0398)
class AShooterDomeSpawnPlatform : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WingsuitCollision;                                        // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bShrinking;                                               // 0x03A8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              ShrinkDuration;                                           // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDomeSpawnPlatform");
		return ptr;
	}


	void OnWingsuitOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void NetMulticastStartSlowFall(class AShooterCharacter* OverlappingCharacter);
};


// Class ShooterGame.ShooterDoor
// 0x0088 (0x0420 - 0x0398)
class AShooterDoor : public AActor
{
public:
	TArray<struct FShooterDoorPanelConfig>             DoorPanelConfigs;                                         // 0x0398(0x0010) (Edit, ZeroConstructor)
	float                                              OpenTweenDuration;                                        // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OpenAkEvent;                                              // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CloseAkEvent;                                             // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BotTriggerComponent;                                      // 0x03C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PlayerOverlapComponent;                                   // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bDoorAutomaticForPlayers;                                 // 0x03D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x03D1(0x0017) MISSED OFFSET
	class UAkComponent*                                AkComponent;                                              // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<EDoorOpenState>                        DoorOpenState;                                            // 0x03F0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03F1(0x0001) MISSED OFFSET
	uint16_t                                           DoorPieces;                                               // 0x03F2(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x03F4(0x000C) MISSED OFFSET
	TArray<struct FShooterDoorPanel>                   DoorPanels;                                               // 0x0400(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              OverlappingActors;                                        // 0x0410(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDoor");
		return ptr;
	}


	void Open(bool OpenReverse);
	void OnTweenCompleted();
	void OnRep_DoorPieces();
	void OnRep_DoorOpenState();
	void OnInteractAlt(class AShooterCharacter* OtherActor);
	void OnInteract(class AShooterCharacter* OtherActor);
	void OnDoorPieceDestroy(class UActorComponent* CompToDestroy);
	void OnDoorOpened();
	void OnDoorKickedIn();
	void OnDoorClosed();
	void OnBeginPlayerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
	void NotifyBotTriggerOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyDoorPiece(class UActorComponent* CompToDestroy);
	void Close();
	void AttemptCloseAutomatic();
};


// Class ShooterGame.ShooterEliminationCore
// 0x0000 (0x0398 - 0x0398)
class AShooterEliminationCore : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEliminationCore");
		return ptr;
	}


	void UpdateSphereSize(float Radius);
};


// Class ShooterGame.ShooterEngine
// 0x0140 (0x0E60 - 0x0D20)
class UShooterEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0D20(0x001C) MISSED OFFSET
	float                                              SmoothedDeltaTime;                                        // 0x0D3C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitchTimeThreshold;                                       // 0x0D40(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HitchScaleThreshold;                                      // 0x0D44(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HitchSmoothingRate;                                       // 0x0D48(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              NormalSmoothingRate;                                      // 0x0D4C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaximumSmoothedTime;                                      // 0x0D50(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              FrontEndFrameRateCap;                                     // 0x0D54(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableWindowsKey;                                        // 0x0D58(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x107];                                     // 0x0D59(0x0107) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEngine");
		return ptr;
	}

};


// Class ShooterGame.ShooterFinalShowdown
// 0x0008 (0x03A0 - 0x0398)
class AShooterFinalShowdown : public AActor
{
public:
	float                                              DropSpeed;                                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetHeight;                                             // 0x039C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterFinalShowdown");
		return ptr;
	}


	void OnShowdownSpawn();
	void OnShowdownLowered();
};


// Class ShooterGame.ShooterFlag
// 0x0058 (0x03F0 - 0x0398)
class AShooterFlag : public AActor
{
public:
	struct FFlagData                                   FlagConfig;                                               // 0x0398(0x0018) (Edit, DisableEditOnInstance)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFlagState>                            MyFlagState;                                              // 0x03B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           MyCarrier;                                                // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03C8(0x000C) MISSED OFFSET
	float                                              ReturnCursor;                                             // 0x03D4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                AdditionalPoints;                                         // 0x03D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x03DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterFlag");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameGamepadPreset
// 0x0930 (0x0958 - 0x0028)
class UShooterGameGamepadPreset : public UObject
{
public:
	struct FGamepadPresetOption                        MoveForward;                                              // 0x0028(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        MoveBack;                                                 // 0x0098(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        MoveLeft;                                                 // 0x0108(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        MoveRight;                                                // 0x0178(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Fire;                                                     // 0x01E8(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        AltFire;                                                  // 0x0258(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Ultimate;                                                 // 0x02C8(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        AbilityTwo;                                               // 0x0338(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        AbilityThree;                                             // 0x03A8(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Reload;                                                   // 0x0418(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Jump;                                                     // 0x0488(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Run;                                                      // 0x04F8(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        ToggleCrouch;                                             // 0x0568(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        ToggleProne;                                              // 0x05D8(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        BlindFire;                                                // 0x0648(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        SwitchFireAction;                                         // 0x06B8(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Interact;                                                 // 0x0728(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Inventory;                                                // 0x0798(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Map;                                                      // 0x0808(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        Scoreboard;                                               // 0x0878(0x0070) (Edit, Config, GlobalConfig)
	struct FGamepadPresetOption                        DropObject;                                               // 0x08E8(0x0070) (Edit, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameGamepadPreset");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameInstance
// 0x0360 (0x0540 - 0x01E0)
class UShooterGameInstance : public UGameInstance
{
public:
	TArray<class AShooterPlayerController*>            PAXInitializedPlayers;                                    // 0x01E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET
	struct FStreamableManager                          AssetLoader;                                              // 0x0200(0x0100) (Transient)
	TArray<class FString>                              PendingPostInitJSCalls;                                   // 0x0300(0x0010) (ZeroConstructor, Transient)
	class FString                                      MainMenuMap;                                              // 0x0310(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0320(0x0050) MISSED OFFSET
	class UUserWidget*                                 IntroWidget;                                              // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x148];                                     // 0x0378(0x0148) MISSED OFFSET
	int                                                PendingCustomGameInvites;                                 // 0x04C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	TMap<class FString, struct FPlayerFrontendData>    PlayerRankMap;                                            // 0x04C8(0x0050) (ZeroConstructor, Transient)
	struct FPlayersCustomizationPreference             PlayersPrefData;                                          // 0x0518(0x0010) (Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0528(0x0008) MISSED OFFSET
	class UShooterCustomizationEngine*                 CustomizationEngine;                                      // 0x0530(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameInstance");
		return ptr;
	}


	bool IsPartyLeader();
	void GotoPlayingState();
};


// Class ShooterGame.ShooterGameLoadData
// 0x0010 (0x0038 - 0x0028)
class UShooterGameLoadData : public UDataAsset
{
public:
	TArray<struct FAssetLoadGroup>                     Groups;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameLoadData");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameMode
// 0x00B0 (0x0530 - 0x0480)
class AShooterGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0480(0x0004) MISSED OFFSET
	float                                              IdleKickWarnTime;                                         // 0x0484(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              IdleKickTime;                                             // 0x0488(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              IdleKickWarnTimeCustomGame;                               // 0x048C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              IdleKickTimeCustomGame;                                   // 0x0490(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              IdleKickWarnTimeNoDamage;                                 // 0x0494(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              IdleKickTimeNoDamage;                                     // 0x0498(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               IdleKickNoDamageIncludesDamageTaken;                      // 0x049C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x049D(0x000B) MISSED OFFSET
	class UClass*                                      ScoreProcessorClass;                                      // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ShooterGameModeModifierClass;                             // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultScoreLimit;                                        // 0x04B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarmupTime;                                               // 0x04BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RoundTime;                                                // 0x04C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeBetweenMatches;                                       // 0x04C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DamageSelfScale;                                          // 0x04C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RespawnTime;                                              // 0x04CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PreGameTime;                                              // 0x04D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              FinalCountdownTime;                                       // 0x04D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PlayersNeededToStart;                                     // 0x04D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PreGameNotFullLongTimer;                                  // 0x04DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PlayersPerTeamNeededToStartLongTimer;                     // 0x04E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PreGameFreezeTime;                                        // 0x04E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EGameMode>                             GameModeType;                                             // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x04E9(0x000F) MISSED OFFSET
	class AShooterGameState*                           SGameState;                                               // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              KillFileCheckTimer;                                       // 0x0500(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2C];                                      // 0x0504(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode");
		return ptr;
	}


	void SetRespawnTimeForTeam(int Team, float RespawnTime);
	void ReinitializeTeams(bool bResetScoresAndCooldowns);
	void OnGameModeModifiersUpdated(class UShooterGameModeModifier* InUpdatedModifier);
	void OnCompletionCriteriaReached(int WinnerIndex);
	void ObjectiveTimerEnded();
	void MatchStartedEvent();
	void KilledOrDestroyed(float KillingDamage, class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser);
	void Killed(float KillingDamage, class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser);
	bool IsWinner(class AShooterPlayerState* PlayerState);
	bool IsCustomGame();
	bool HasWinner();
	class AShooterGameState* GetShooterGameState();
	float GetRespawnTimeForTeam(int Team);
	void FinishMatch();
	void AssistedKill(class AShooterPlayerState* Assister, class AShooterPlayerState* KilledPlayer, const struct FScoreTriggerType& InTriggerType);
};


// Class ShooterGame.ShooterGameMode_FreeForAll
// 0x0008 (0x0538 - 0x0530)
class AShooterGameMode_FreeForAll : public AShooterGameMode
{
public:
	class AShooterPlayerState*                         WinnerPlayerState;                                        // 0x0530(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode_FreeForAll");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameMode_TeamBased
// 0x0010 (0x0540 - 0x0530)
class AShooterGameMode_TeamBased : public AShooterGameMode
{
public:
	bool                                               bAllowSpawnExitBuff;                                      // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0531(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode_TeamBased");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameModeModifier
// 0x0000 (0x0028 - 0x0028)
class UShooterGameModeModifier : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameModeModifier");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameModeModifier_LMS
// 0x0008 (0x0030 - 0x0028)
class UShooterGameModeModifier_LMS : public UShooterGameModeModifier
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameModeModifier_LMS");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameMode_LastManStanding
// 0x0058 (0x0598 - 0x0540)
class AShooterGameMode_LastManStanding : public AShooterGameMode_TeamBased
{
public:
	class AShooterGameState_LastManStanding*           LastManStandingGameState;                                 // 0x0540(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0548(0x0004) MISSED OFFSET
	float                                              CountdownLateJoinCutoffTime;                              // 0x054C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UClass*                                      PlayerSimControllerClass;                                 // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TerminatorControllerClass;                                // 0x0558(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TerminatorSpawnClass;                                     // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           MaxPlayerSimBotCount;                                     // 0x0568(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DBNODamageModifier;                                       // 0x056C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           LastMan;                                                  // 0x0570(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPreludeRequested;                                        // 0x0578(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0579(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode_LastManStanding");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameState_RoundBased
// 0x0018 (0x06C8 - 0x06B0)
class AShooterGameState_RoundBased : public AShooterGameState
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06B0(0x0004) MISSED OFFSET
	int                                                TimeToRespawnRoundedUp;                                   // 0x06B4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              RoundEndToRespawnTime;                                    // 0x06B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERoundState>                           RoundState;                                               // 0x06BC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x06BD(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState_RoundBased");
		return ptr;
	}


	void OnRep_TimeToRespawnRounded();
	void OnRep_RoundState();
};


// Class ShooterGame.ShooterGameMode_RoundBased
// 0x0008 (0x0548 - 0x0540)
class AShooterGameMode_RoundBased : public AShooterGameMode_TeamBased
{
public:
	class AShooterGameState_RoundBased*                RoundBasedGameState;                                      // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode_RoundBased");
		return ptr;
	}


	TEnumAsByte<ERoundState> GetRoundState();
	void ChangeRoundState(TEnumAsByte<ERoundState> NewState);
};


// Class ShooterGame.ShooterGameMode_TDM
// 0x0000 (0x0540 - 0x0540)
class AShooterGameMode_TDM : public AShooterGameMode_TeamBased
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode_TDM");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameMode_TugOfWar
// 0x0000 (0x0540 - 0x0540)
class AShooterGameMode_TugOfWar : public AShooterGameMode_TeamBased
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode_TugOfWar");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameMode_Uplink
// 0x0008 (0x0548 - 0x0540)
class AShooterGameMode_Uplink : public AShooterGameMode_TeamBased
{
public:
	int                                                ScoreToWin;                                               // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoreTickRate;                                            // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode_Uplink");
		return ptr;
	}

};


// Class ShooterGame.ShooterKeyMapSettings
// 0x01D0 (0x0268 - 0x0098)
class UShooterKeyMapSettings : public UQualitySettings
{
public:
	class FString                                      MoveForward;                                              // 0x0098(0x0010) (ZeroConstructor)
	class FString                                      MoveBack;                                                 // 0x00A8(0x0010) (ZeroConstructor)
	class FString                                      MoveLeft;                                                 // 0x00B8(0x0010) (ZeroConstructor)
	class FString                                      MoveRight;                                                // 0x00C8(0x0010) (ZeroConstructor)
	class FString                                      Run;                                                      // 0x00D8(0x0010) (ZeroConstructor)
	class FString                                      Jump;                                                     // 0x00E8(0x0010) (ZeroConstructor)
	class FString                                      Roll;                                                     // 0x00F8(0x0010) (ZeroConstructor)
	class FString                                      Dance;                                                    // 0x0108(0x0010) (ZeroConstructor)
	class FString                                      ToggleCrouch;                                             // 0x0118(0x0010) (ZeroConstructor)
	class FString                                      ToggleProne;                                              // 0x0128(0x0010) (ZeroConstructor)
	class FString                                      Fire;                                                     // 0x0138(0x0010) (ZeroConstructor)
	class FString                                      AltFire;                                                  // 0x0148(0x0010) (ZeroConstructor)
	class FString                                      Reload;                                                   // 0x0158(0x0010) (ZeroConstructor)
	class FString                                      SwitchFireAction;                                         // 0x0168(0x0010) (ZeroConstructor)
	class FString                                      SwitchCameraShoulder;                                     // 0x0178(0x0010) (ZeroConstructor)
	class FString                                      NextWeapon;                                               // 0x0188(0x0010) (ZeroConstructor)
	class FString                                      PrevWeapon;                                               // 0x0198(0x0010) (ZeroConstructor)
	class FString                                      Weapon1;                                                  // 0x01A8(0x0010) (ZeroConstructor)
	class FString                                      Weapon2;                                                  // 0x01B8(0x0010) (ZeroConstructor)
	class FString                                      Weapon3;                                                  // 0x01C8(0x0010) (ZeroConstructor)
	class FString                                      Gear1;                                                    // 0x01D8(0x0010) (ZeroConstructor)
	class FString                                      Gear2;                                                    // 0x01E8(0x0010) (ZeroConstructor)
	class FString                                      Gear3;                                                    // 0x01F8(0x0010) (ZeroConstructor)
	class FString                                      Interact;                                                 // 0x0208(0x0010) (ZeroConstructor)
	class FString                                      Inventory;                                                // 0x0218(0x0010) (ZeroConstructor)
	class FString                                      Map;                                                      // 0x0228(0x0010) (ZeroConstructor)
	class FString                                      DropObject;                                               // 0x0238(0x0010) (ZeroConstructor)
	class FString                                      QuickMelee;                                               // 0x0248(0x0010) (ZeroConstructor)
	class FString                                      WeaponMelee;                                              // 0x0258(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterKeyMapSettings");
		return ptr;
	}


	class UShooterKeyMapSettings* STATIC_GetKeyMapSettings();
};


// Class ShooterGame.ShooterGamepadMapSettings
// 0x0108 (0x01A0 - 0x0098)
class UShooterGamepadMapSettings : public UQualitySettings
{
public:
	TEnumAsByte<EGamepadPreset>                        SelectedPreset;                                           // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	class FString                                      Run;                                                      // 0x00A0(0x0010) (ZeroConstructor)
	class FString                                      Jump;                                                     // 0x00B0(0x0010) (ZeroConstructor)
	class FString                                      Roll;                                                     // 0x00C0(0x0010) (ZeroConstructor)
	class FString                                      Dance;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	class FString                                      ToggleCrouch;                                             // 0x00E0(0x0010) (ZeroConstructor)
	class FString                                      ToggleProne;                                              // 0x00F0(0x0010) (ZeroConstructor)
	class FString                                      Fire;                                                     // 0x0100(0x0010) (ZeroConstructor)
	class FString                                      AltFire;                                                  // 0x0110(0x0010) (ZeroConstructor)
	class FString                                      Reload;                                                   // 0x0120(0x0010) (ZeroConstructor)
	class FString                                      SwitchFireAction;                                         // 0x0130(0x0010) (ZeroConstructor)
	class FString                                      SwitchCameraShoulder;                                     // 0x0140(0x0010) (ZeroConstructor)
	class FString                                      Interact;                                                 // 0x0150(0x0010) (ZeroConstructor)
	class FString                                      Inventory;                                                // 0x0160(0x0010) (ZeroConstructor)
	class FString                                      Map;                                                      // 0x0170(0x0010) (ZeroConstructor)
	class FString                                      DropObject;                                               // 0x0180(0x0010) (ZeroConstructor)
	class FString                                      WeaponMelee;                                              // 0x0190(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGamepadMapSettings");
		return ptr;
	}


	class UShooterGamepadMapSettings* STATIC_GetGamepadMapSettings();
};


// Class ShooterGame.ShooterGamepadSettings
// 0x0020 (0x0048 - 0x0028)
class UShooterGamepadSettings : public UObject
{
public:
	float                                              GamePadHorizontalSensitivity;                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GamePadVerticalSensitivity;                               // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ThumbStickDeadZone;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ThumbStickDeadZoneOuter;                                  // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AimingExponent;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AimAssist;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SelectedPreset;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LeftyGamepad;                                             // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableRumble;                                             // 0x0045(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ThumbstickDualZone;                                       // 0x0046(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0047(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGamepadSettings");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameplaySettings
// 0x0008 (0x0030 - 0x0028)
class UShooterGameplaySettings : public UObject
{
public:
	float                                              FOV;                                                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableGore;                                               // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisplayTeammateIcons;                                     // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               HitPipMultiTarget;                                        // 0x002E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoPickupLoot;                                          // 0x002F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameplaySettings");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameQualitySettings
// 0x0098 (0x0130 - 0x0098)
class UShooterGameQualitySettings : public UQualitySettings
{
public:
	float                                              FOV;                                                      // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GamePadHorizontalSensitivity;                             // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GamePadVerticalSensitivity;                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadRumble;                                      // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EThumbstickStyle>                      GamePadAimStyle;                                          // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	float                                              ThumbStickDeadZone;                                       // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThumbStickDeadZoneOuter;                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimingExponent;                                           // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimAssist;                                                // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               InvertYAxis;                                              // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LeftyGamepad;                                             // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableGore;                                               // 0x00BE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DisplayTeammateIcons;                                     // 0x00BF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DisplayHitPips;                                           // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HitPipMultiTarget;                                        // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocaleOptions>                        Language;                                                 // 0x00C2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableNvidiaHighlights;                                   // 0x00C3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableInGameToolTips;                                     // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPickupLoot;                                          // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4A];                                      // 0x00C6(0x004A) MISSED OFFSET
	TEnumAsByte<ECrosshairStyle>                       CrosshairStyle;                                           // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	float                                              ReticleOpacity;                                           // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      ReticleColor;                                             // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameQualitySettings");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameSession
// 0x03A0 (0x0750 - 0x03B0)
class AShooterGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x2F0];                                     // 0x03B0(0x02F0) MISSED OFFSET
	uint16_t                                           CurrentPlayerPreferenceIndex;                             // 0x06A0(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x06A2(0x0006) MISSED OFFSET
	TArray<struct FPlayerPreferences>                  CurrentPlayerPreferences;                                 // 0x06A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x28];                                      // 0x06B8(0x0028) MISSED OFFSET
	bool                                               bUseFakePlayerPreferenceResponse;                         // 0x06E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06E1(0x0007) MISSED OFFSET
	class FString                                      DebugPlayerPreferenceResponse;                            // 0x06E8(0x0010) (ZeroConstructor, Config)
	bool                                               bUseFakeLootTableResponse;                                // 0x06F8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	class FString                                      DebugLootTableResponse;                                   // 0x0700(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData05[0x40];                                      // 0x0710(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameSession");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameSession_Tutorial
// 0x0000 (0x0750 - 0x0750)
class AShooterGameSession_Tutorial : public AShooterGameSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameSession_Tutorial");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameState_KillConf
// 0x0010 (0x06C0 - 0x06B0)
class AShooterGameState_KillConf : public AShooterGameState
{
public:
	class AShooterPlayerState*                         LawMVP;                                                   // 0x06B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerState*                         BreakersMVP;                                              // 0x06B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState_KillConf");
		return ptr;
	}


	void SetMVP(class AShooterPlayerState* ShooterPlayerState);
	bool IsPlayerMVP(class AShooterPlayerState* ShooterPlayerState);
};


// Class ShooterGame.ShooterPickup_Cash
// 0x0008 (0x03E8 - 0x03E0)
class AShooterPickup_Cash : public AShooterPickup
{
public:
	int                                                CashAmountMin;                                            // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashAmountMax;                                            // 0x03E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPickup_Cash");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameState_LastManStanding
// 0x0360 (0x0A10 - 0x06B0)
class AShooterGameState_LastManStanding : public AShooterGameState
{
public:
	struct FLMSConfig                                  LMSConfig;                                                // 0x06B0(0x0190) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  MapGridTexture;                                           // 0x0840(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  MapGridTexture_Minimap;                                   // 0x0848(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooterPickup*>                      SpawnedPickups;                                           // 0x0850(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMapZone>                            MapZones;                                                 // 0x0860(0x0010) (ZeroConstructor, Transient)
	class UShooterHUD_LMS*                             HUD;                                                      // 0x0870(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterTimeOfDayController*                 TimeOfDay;                                                // 0x0878(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0880(0x005C) MISSED OFFSET
	int                                                NumAlive;                                                 // 0x08DC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08E0(0x0004) MISSED OFFSET
	int                                                WarningTimerReplicated;                                   // 0x08E4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCashDropActive;                                          // 0x08E8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EFinalShowdownState>                   FinalShowdownState;                                       // 0x08E9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x08EA(0x0002) MISSED OFFSET
	float                                              FinalZoneRadius;                                          // 0x08EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC8];                                      // 0x08F0(0x00C8) MISSED OFFSET
	class AShooterFinalShowdown*                       FinalShowdown;                                            // 0x09B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x09C0(0x0008) MISSED OFFSET
	TArray<TEnumAsByte<EZoneStatus>>                   ZoneStats;                                                // 0x09C8(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x18];                                      // 0x09D8(0x0018) MISSED OFFSET
	class UZonelockTimerWidget*                        CachedZoneLockTimerWidget;                                // 0x09F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x09F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState_LastManStanding");
		return ptr;
	}


	void ShowEndOfMatch();
	void OnVictory(class AShooterCharacter* Victor);
	void OnSpinToWinFinished();
	void OnShowdownClosureBegan();
	void OnRep_Zones();
	void OnRep_WarningTimer();
	void OnRep_NumAlive();
	void OnRep_FinalShowdown();
	void OnRep_CashDrop();
	void OnPreludeVOFinished();
	void OnPreludeCountdownFinished();
	void OnMatchFinished(TArray<class AShooterCharacter*> Winners);
	void OnBikeFaceFinished();
	void NetMulticastPlayPrelude(int AnnouncerVOIndex);
	void NetMulticastFinalShowdown(const struct FVector& ShowdownPos);
	void MulticastSpinToWin(bool bActive);
	void MulticastBikeRace(bool bActive);
	struct FText GetZoneCountdown();
	int GetStartingPlayerCount();
	int GetNumAlive();
	float GetFinalShowdownRadius();
};


// Class ShooterGame.ShooterGameState_Elimination
// 0x0020 (0x06E8 - 0x06C8)
class AShooterGameState_Elimination : public AShooterGameState_RoundBased
{
public:
	float                                              EliminationSphereRadius;                                  // 0x06C8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              EliminationSphereTime;                                    // 0x06CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EliminationSphereStartRadius;                             // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EliminationSphereEndRadius;                               // 0x06D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EliminationSphereDamageOverTime;                          // 0x06D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EliminationSphereDamageTickInterval;                      // 0x06DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AShooterEliminationCore*                     EliminationCore;                                          // 0x06E0(0x0008) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState_Elimination");
		return ptr;
	}


	void OnRep_EliminationSphereRadius();
};


// Class ShooterGame.ShooterGameState_Uplink
// 0x0020 (0x06D0 - 0x06B0)
class AShooterGameState_Uplink : public AShooterGameState
{
public:
	int                                                MaxViewCount;                                             // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ViewCountInterpolateTime;                                 // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Team0Views;                                               // 0x06B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Team1Views;                                               // 0x06BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PrevTeam0Views;                                           // 0x06C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PrevTeam1Views;                                           // 0x06C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ViewTickTimer;                                            // 0x06C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ViewsLerpTimer;                                           // 0x06CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState_Uplink");
		return ptr;
	}


	int GetTeamViewCount(int Team);
};


// Class ShooterGame.ShooterGameViewportClient
// 0x0040 (0x04C0 - 0x0480)
class UShooterGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0480(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameViewportClient");
		return ptr;
	}


	void SpectateNextMatch(bool bEnable);
	void SkipLobbyTimer();
	void MatchSpectate(const class FString& ServerAddress);
};


// Class ShooterGame.ShooterGlobalObject
// 0x0220 (0x0248 - 0x0028)
class UShooterGlobalObject : public UObject
{
public:
	struct FStreamableManager                          StreamableManager;                                        // 0x0028(0x0100) (Transient)
	struct FShooterAsyncLoadManager                    AsyncQueueManager;                                        // 0x0128(0x0020) (Transient)
	TAssetPtr<class UShooterPawnData>                  ShooterPawnData;                                          // 0x0148(0x0020) (Transient)
	TAssetPtr<class UShooterGameData>                  ShooterGameData;                                          // 0x0168(0x0020) (Transient)
	TAssetPtr<class UShooterFrontEndData>              ShooterFrontEndData;                                      // 0x0188(0x0020) (Transient)
	class UShooterPawnData*                            CachedPawnData;                                           // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterGameData*                            CachedGameData;                                           // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterFrontEndData*                        CachedFrontEndData;                                       // 0x01B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x01C0(0x0010) (ZeroConstructor, Transient)
	bool                                               bStartedFrontEndLoad;                                     // 0x01D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStartedGameDataLoad;                                     // 0x01D1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01D2(0x0006) MISSED OFFSET
	TArray<struct FStringAssetReference>               PendingFrontEndLoads;                                     // 0x01D8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FStringAssetReference>               PendingGameDataLoads;                                     // 0x01E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x01F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGlobalObject");
		return ptr;
	}

};


// Class ShooterGame.ShooterGravityComponent
// 0x0040 (0x0140 - 0x0100)
class UShooterGravityComponent : public UActorComponent
{
public:
	float                                              DefaultGravityScale;                                      // 0x0100(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<struct FGravitySeedStackData>               GravitySeedStack;                                         // 0x0108(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterPhysicsVolume_Gravity*>       GravityVolumes;                                           // 0x0118(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterGravitySeed*>                 BlendedGravitySeeds;                                      // 0x0128(0x0010) (ZeroConstructor, Transient)
	bool                                               bIgnoresGravityVolumes;                                   // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0139(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGravityComponent");
		return ptr;
	}


	void RemoveGravityScale(class UObject* GravityObject);
	void AddGravityScale(float GravityScale, float FallingDownGravityScale, class UCurveFloat* GravityScaleOverTime, float StartTime, int GravityPriority, class UObject* GravityObject);
};


// Class ShooterGame.ShooterGravitySeed_BlackHole
// 0x0008 (0x04D0 - 0x04C8)
class AShooterGravitySeed_BlackHole : public AShooterGravitySeed
{
public:
	struct FBlackHoleSeedData                          BlackHoleConfig;                                          // 0x04C8(0x0004) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGravitySeed_BlackHole");
		return ptr;
	}

};


// Class ShooterGame.ShooterGroundFinderVolume
// 0x0020 (0x03B8 - 0x0398)
class AShooterGroundFinderVolume : public AActor
{
public:
	TArray<struct FVector>                             GroundPoints;                                             // 0x0398(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              CellRadius;                                               // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRegenGroundData;                                         // 0x03AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UBoxComponent*                               BoxComponent;                                             // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGroundFinderVolume");
		return ptr;
	}

};


// Class ShooterGame.ShooterVoipEntryWidget
// 0x0030 (0x0278 - 0x0248)
class UShooterVoipEntryWidget : public UShooterUserWidget
{
public:
	class UWidgetSwitcher*                             VoipStateSwitcherWidget;                                  // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DiscordSpeakingImage;                                     // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DiscordQuietImage;                                        // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DefaultSpeakingImage;                                     // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DefaultQuietImage;                                        // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      MutedImage;                                               // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterVoipEntryWidget");
		return ptr;
	}


	void SetVoipState(TEnumAsByte<EVoipState> VoipState);
	void SetVoipName(const struct FText& NewName);
};


// Class ShooterGame.ShooterVoipWidget
// 0x00B0 (0x02F8 - 0x0248)
class UShooterVoipWidget : public UShooterUserWidget
{
public:
	class UClass*                                      VoipEntryWidget;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                EntryVerticalBox;                                         // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0258(0x0050) MISSED OFFSET
	TMap<struct FName, class UShooterVoipEntryWidget*> CachedWidgets;                                            // 0x02A8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterVoipWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterGameTextWidget
// 0x0008 (0x0250 - 0x0248)
class UShooterGameTextWidget : public UShooterUserWidget
{
public:
	class UShooterVoipWidget*                          VoipWidget;                                               // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameTextWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterHUD
// 0x0430 (0x08B0 - 0x0480)
class AShooterHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0480(0x0058) MISSED OFFSET
	int                                                NumDisplayedChatLines;                                    // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x04DC(0x0024) MISSED OFFSET
	bool                                               bCheatsheetVisible;                                       // 0x0500(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	TArray<class UShooterHitReticleWidget*>            HitReticleWidgets;                                        // 0x0508(0x0010) (ZeroConstructor, Transient)
	class UShooterScoreLogWidget*                      ScoreDisplayWidget;                                       // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterScoreLogWidget*                      BigScoreDisplayWidget;                                    // 0x0520(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeInRespawnMenu;                                        // 0x0528(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x052C(0x000C) MISSED OFFSET
	class UFont*                                       NormalFont;                                               // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	class UShooterGlobalUIData*                        GlobalUIDataPtr;                                          // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FHUDScreenWidget>                    ScreenWidgets;                                            // 0x0550(0x0010) (ZeroConstructor, Transient)
	class UShooterKillFeed*                            KillFeedWidget;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterThreatIndicator*                     ThreatIndicator;                                          // 0x0568(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UShooterIconComponent*>               Icons;                                                    // 0x0570(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UShooterIconComponent*>               HiddenIcons;                                              // 0x0580(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class FString>                              NotifyItems;                                              // 0x0590(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0xD0];                                      // 0x05A0(0x00D0) MISSED OFFSET
	struct FHitReticleData                             HitReticle;                                               // 0x0670(0x0020) (BlueprintVisible, BlueprintReadOnly, Transient)
	TArray<struct FHitReticleData>                     HitReticleDataArray;                                      // 0x0690(0x0010) (ZeroConstructor, Transient)
	TArray<struct FHitLocationData>                    HitLocations;                                             // 0x06A0(0x0010) (ZeroConstructor, Transient)
	bool                                               bOptionsMenuVisible;                                      // 0x06B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMapVisible;                                              // 0x06B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bATMMenuVisible;                                          // 0x06B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0xD];                                       // 0x06B3(0x000D) MISSED OFFSET
	class UTexture2D*                                  CrosshairTexture;                                         // 0x06C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x06C8(0x0018)
	class UTexture2D*                                  HitLocationTexture;                                       // 0x0740(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCanvasIcon                                 HitLocationIcon;                                          // 0x0748(0x0018)
	unsigned char                                      UnknownData07[0x30];                                      // 0x0760(0x0030) MISSED OFFSET
	TArray<struct FCachedWidgetState>                  ActiveCachedWidgets;                                      // 0x0790(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x50];                                      // 0x07A0(0x0050) MISSED OFFSET
	TArray<struct FNpcWidgetCache>                     NpcWidgetInstances;                                       // 0x07F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData09[0x50];                                      // 0x0800(0x0050) MISSED OFFSET
	class UVerticalBox*                                TeammateStatusVerticalBox;                                // 0x0850(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<int, TWeakObjectPtr<class UTeammateStatusWidget>> TeammateStatusWidgets;                                    // 0x0858(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData10[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterHUD");
		return ptr;
	}


	void ToggleChat();
	void SwitchChatMode();
	void ShowToolTip(const struct FTutorialToolTipInfo& InToolTipInfo);
	void SendChatLine(const struct FText& ChatString, bool bSendToAll);
	void ReceiveChatLine(const class FString& PlayerName, const class FString& MessageBody, const class FString& PlayerId, TEnumAsByte<EChatMode> Mode);
	TEnumAsByte<ESlateVisibility> NotifyBoxVisibility();
	void NotifyBatteryInCenter();
	bool IsInBatteryZone();
	void HideToolTip();
	int GetTeamScoreByIndex(int TeamNumber);
	class AShooterCharacter* GetShooterCharacterForHealthUserWidget(class UUserWidget* HealthWidget);
	float GetRespawnTimerAsFloat();
	class FString GetRankedPlayerNameByIndexAndTeam(int Team, int Index);
	int GetRankedPlayerKillsByIndexAndTeam(int Team, int Index);
	class UShooterOptionsMenu* GetOptionsMenuWidget();
	class FString GetObjectiveTimeString();
	class FString GetNotifyItemByIndex(int Index);
	class FString GetMyPlayerName();
	int GetMyPlayerKills();
	class FString GetMyLastKiller();
	class FString GetMatchTimeString();
	class UShooterMapWidget* GetMapWidget();
	class UShooterHudWidget* GetHudWidget();
	class AActor* GetHUDRelevantActor();
	class UShooterGlobalUIData* GetGlobalUIData();
	class UShooterGameTextWidget* GetGameTextWidget();
	class UShooterGameModeStatusWidget* GetGameModeStatusWidget();
	class UShooterEomKillCardWidget* GetFrontendKillcardWidget();
};


// Class ShooterGame.ShooterIconComponent
// 0x0080 (0x0180 - 0x0100)
class UShooterIconComponent : public UActorComponent
{
public:
	struct FIconComponentData                          IconConfig;                                               // 0x0100(0x0050) (Edit, BlueprintVisible)
	class UUserWidget*                                 IconWidget;                                               // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      IconArrow;                                                // 0x0158(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                IconCanvasWithoutArrowWidget;                             // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  DistanceTextWidget;                                       // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterHUD*                                 HUD;                                                      // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterIconComponent");
		return ptr;
	}


	void SetGameplayVisibility(bool NewVisibility);
	void Enable();
	void Disable();
};


// Class ShooterGame.ShooterImpactEffect
// 0x0550 (0x08E8 - 0x0398)
class AShooterImpactEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	class UParticleSystem*                             MaterialFX[0x21];                                         // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EnemyMaterialFX[0x21];                                    // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPeriodicSound                              MaterialSounds[0x21];                                     // 0x05B0(0x0010) (Edit, DisableEditOnInstance)
	struct FDecalData                                  DefaultDecal;                                             // 0x07C0(0x0058) (Edit, DisableEditOnInstance)
	class UAkAudioEvent*                               StartLoopingSound;                                        // 0x0818(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StopLoopingSound;                                         // 0x0820(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPlaySoundOnTeammateImpact;                         // 0x0828(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRestrictMaterialSwitchToShields;                         // 0x0829(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPlayFXOnTeammateImpact;                            // 0x082A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bContinuousMovingImpact;                                  // 0x082B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreImpactLimits;                                      // 0x082C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	float                                              SpawnDistanceThresholdFX;                                 // 0x0830(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDistanceThresholdDecal;                              // 0x0834(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldAllowDecalAttachmentToPawns;                       // 0x0838(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	float                                              SpawnDistanceThresholdSound;                              // 0x083C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  SurfaceHit;                                               // 0x0840(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class AShooterCharacter*                           InstigatorActor;                                          // 0x08C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x08D0(0x0010) MISSED OFFSET
	class UParticleSystemComponent*                    ActiveParticles;                                          // 0x08E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterImpactEffect");
		return ptr;
	}

};


// Class ShooterGame.ShooterExplosionEffect
// 0x0018 (0x0900 - 0x08E8)
class AShooterExplosionEffect : public AShooterImpactEffect
{
public:
	class UPointLightComponent*                        ExplosionLight;                                           // 0x08E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              ExplosionLightFadeOut;                                    // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x08F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterExplosionEffect");
		return ptr;
	}

};


// Class ShooterGame.ShooterInteractComponent
// 0x0120 (0x0220 - 0x0100)
class UShooterInteractComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnInteract;                                               // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractAlt;                                            // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartInteract;                                          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopInteract;                                           // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0140(0x0080) MISSED OFFSET
	bool                                               bInteractActive;                                          // 0x01C0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FText                                       InteractName;                                             // 0x01C8(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       InteractName_Fail;                                        // 0x01E0(0x0018) (Edit, DisableEditOnInstance)
	int                                                CashThresholdForFail;                                     // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInteractRange;                                         // 0x01FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractDuration;                                         // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AltInteractDuration;                                      // 0x0204(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               InteractSound;                                            // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterPickup*                              AssociatedPickup;                                         // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInteractComponent");
		return ptr;
	}


	void OnStopInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
	void OnStartInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
	void OnRep_InteractActive();
	void OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
	void OnInteractAltDelegate__DelegateSignature(class AShooterCharacter* Interactor);
};


// Class ShooterGame.ShooterLevelCameraInfoComponent
// 0x0030 (0x0130 - 0x0100)
class UShooterLevelCameraInfoComponent : public UActorComponent
{
public:
	struct FText                                       CameraUIText;                                             // 0x0100(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  CameraUIImage;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinPitch;                                                 // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinYaw;                                                   // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxYaw;                                                   // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLevelCameraInfoComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterLiveSpectatorCharacterData
// 0x0098 (0x0430 - 0x0398)
class AShooterLiveSpectatorCharacterData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	struct FReplicatedSpectatedMovement                ReplicatedSpectatedMovement;                              // 0x03A0(0x0024) (Net, Transient)
	unsigned char                                      ReplicatedSpectatedPing;                                  // 0x03C4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	struct FReplicatedSpectatedTargetInfo              ReplicatedSpectatedTargetInfo;                            // 0x03C8(0x0030) (Net, Transient)
	unsigned char                                      UnknownData02[0x30];                                      // 0x03F8(0x0030) MISSED OFFSET
	class APlayerState*                                LocalClientPlayerState;                                   // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLiveSpectatorCharacterData");
		return ptr;
	}


	void OnRep_SpectatedTargetInfo();
	void OnRep_SpectatedPing();
	void OnRep_SpectatedMovement();
};


// Class ShooterGame.ShooterLocalPlayer
// 0x0000 (0x0230 - 0x0230)
class UShooterLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLocalPlayer");
		return ptr;
	}

};


// Class ShooterGame.ShooterLootGroup
// 0x0050 (0x03E8 - 0x0398)
class AShooterLootGroup : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET
	bool                                               SpawnItemsOnCreation;                                     // 0x03A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideDropWeightsFromGlobalList;                        // 0x03A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVendingItem;                                            // 0x03AA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGearVendingItem;                                        // 0x03AB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier0_ItemDropWeight;                                     // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier1_ItemDropWeight;                                     // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier2_ItemDropWeight;                                     // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier3_ItemDropWeight;                                     // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier4_ItemDropWeight;                                     // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier5_ItemDropWeight;                                     // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier6_ItemDropWeight;                                     // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinItemsToSpawn;                                          // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemsToSpawn;                                          // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxDropWeight;                                            // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickWhileNotPlaying;                                      // 0x03D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              PercentChanceToSpawnNothing;                              // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePhysicsSpawning;                                      // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x03DD(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLootGroup");
		return ptr;
	}


	void SpawnAllItems(bool SkipTrace);
};


// Class ShooterGame.ShooterLootSpawner
// 0x0020 (0x03B8 - 0x0398)
class AShooterLootSpawner : public AActor
{
public:
	struct FLootTable                                  LootTable;                                                // 0x0398(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLootSpawner");
		return ptr;
	}

};


// Class ShooterGame.ShooterMysteryDoor
// 0x0018 (0x03B0 - 0x0398)
class AShooterMysteryDoor : public AActor
{
public:
	int                                                RefCounter;                                               // 0x0398(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	float                                              PressurePlateTriggerTime;                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PressurePlateTriggerDelay;                                // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoorOpened;                                               // 0x03A8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               MusicPlaying;                                             // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMysteryDoor");
		return ptr;
	}


	void UpdateProgressBars(float Percent);
	void OnStopMusic();
	void OnStartMusic();
	void OnDoorOpened();
};


// Class ShooterGame.ShooterNoCarryZone
// 0x0000 (0x03E0 - 0x03E0)
class AShooterNoCarryZone : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterNoCarryZone");
		return ptr;
	}

};


// Class ShooterGame.ShooterSpawnZone
// 0x0000 (0x03E0 - 0x03E0)
class AShooterSpawnZone : public AShooterNoCarryZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSpawnZone");
		return ptr;
	}

};


// Class ShooterGame.ShooterObjectiveZone
// 0x0048 (0x03E0 - 0x0398)
class AShooterObjectiveZone : public AActor
{
public:
	class UShapeComponent*                             CollisionComp;                                            // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FObjectiveZoneSettings                      ZoneSettings;                                             // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AShooterCharacter*>                   Team0PlayersInZone;                                       // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class AShooterCharacter*>                   Team1PlayersInZone;                                       // 0x03C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class AShooterCharacter*>                   PlayersInZone;                                            // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterObjectiveZone");
		return ptr;
	}


	void PlayerLeftOnHost(class AShooterCharacter* Character);
	void PlayerEnteredOnHost(class AShooterCharacter* Character);
	TArray<class AShooterCharacter*> GetTeamPlayersInZone(int InTeamNum);
	int GetNumTeamPlayersInZone(int InTeamNum);
	int GetNumPlayersTeam1();
	int GetNumPlayersTeam0();
	int GetNumPlayersInZone();
};


// Class ShooterGame.ShooterPawnHelpers
// 0x0000 (0x0028 - 0x0028)
class UShooterPawnHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPawnHelpers");
		return ptr;
	}


	bool STATIC_IsThirdPersonPawnNative(class AShooterCharacter* InCharacter);
	void STATIC_IsThirdPersonAndBranch(class AShooterCharacter* InCharacter, TEnumAsByte<EBluePrintBranchControl>* OutResult);
	bool STATIC_IsAliveFirstPersonPawnNative(class AShooterCharacter* InCharacter);
	float STATIC_FergNormalizeFloatToOne(float CurrentTime, float EventTime, float MaxTime);
};


// Class ShooterGame.ShooterPhysicsPickup
// 0x0008 (0x03A0 - 0x0398)
class AShooterPhysicsPickup : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPhysicsPickup");
		return ptr;
	}

};


// Class ShooterGame.ShooterPhysicsVolume_Ozone
// 0x0008 (0x03D8 - 0x03D0)
class AShooterPhysicsVolume_Ozone : public AVolume
{
public:
	bool                                               bGroundCheck;                                             // 0x03D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDamagePlayers;                                           // 0x03D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03D2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPhysicsVolume_Ozone");
		return ptr;
	}

};


// Class ShooterGame.ShooterCosmeticLootSpawner
// 0x0050 (0x0430 - 0x03E0)
class AShooterCosmeticLootSpawner : public AShooterPickup
{
public:
	struct FCosmeticLootSpawnerData                    CosmeticData;                                             // 0x03E0(0x0010) (Net, Transient)
	class USkeletalMeshComponent*                      BodyMesh;                                                 // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UShooterCustomizationComponent*              CustomComp;                                               // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FCosmeticNameAnimPair>               PartAnimPairs;                                            // 0x0400(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0410(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCosmeticLootSpawner");
		return ptr;
	}


	void OnRep_CosmeticData();
	void OnLoadoutApplied();
};


// Class ShooterGame.ShooterPickup_Ammo
// 0x0008 (0x03E8 - 0x03E0)
class AShooterPickup_Ammo : public AShooterPickup
{
public:
	int                                                AmmoAmount;                                               // 0x03E0(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAmmoType>                             PickupType;                                               // 0x03E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPickup_Ammo");
		return ptr;
	}

};


// Class ShooterGame.ShooterPickup_Armor
// 0x0028 (0x0408 - 0x03E0)
class AShooterPickup_Armor : public AShooterPickup
{
public:
	struct FText                                       ShooterInteractName;                                      // 0x03E0(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F8(0x0004) MISSED OFFSET
	TEnumAsByte<EArmorLevel>                           ArmorLevel;                                               // 0x03FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHeadgear;                                                // 0x03FD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03FE(0x0002) MISSED OFFSET
	struct FName                                       ItemName;                                                 // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPickup_Armor");
		return ptr;
	}


	void OnPickup(class AShooterCharacter* OtherActor);
	void NetMulticastSetHealthPercentage(float NewHealthPercentage);
};


// Class ShooterGame.ShooterPickup_Pack
// 0x0010 (0x03F0 - 0x03E0)
class AShooterPickup_Pack : public AShooterPickup
{
public:
	struct FName                                       ItemName;                                                 // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWeaponPack;                                             // 0x03E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPickup_Pack");
		return ptr;
	}

};


// Class ShooterGame.ShooterWeaponPickup
// 0x0060 (0x0440 - 0x03E0)
class AShooterWeaponPickup : public AShooterPickup
{
public:
	struct FWeaponPickupData                           PickupConfig;                                             // 0x03E0(0x0018) (Edit, DisableEditOnInstance)
	class USkeletalMeshComponent*                      WeaponMesh;                                               // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_ScopeMesh;                                     // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_BarrelMesh;                                    // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_MagMesh;                                       // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_MagMesh_Default;                               // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Attachment_UnderbarrelMesh;                               // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0428(0x0004) MISSED OFFSET
	int                                                ItemAmount;                                               // 0x042C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeaponPickup");
		return ptr;
	}


	void SetItemAmount(int Amount, bool bUseVendingAmount);
};


// Class ShooterGame.ShooterWeaponPickup_BouncePad
// 0x0068 (0x04A8 - 0x0440)
class AShooterWeaponPickup_BouncePad : public AShooterWeaponPickup
{
public:
	float                                              BounceMinSpeed;                                           // 0x0440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceMaxSpeed;                                           // 0x0444(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceFactor;                                             // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               BounceSound;                                              // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0458(0x0050) UNKNOWN PROPERTY: SetProperty ShooterGame.ShooterWeaponPickup_BouncePad.OverlappedCharacters

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeaponPickup_BouncePad");
		return ptr;
	}


	void NetMulticastPlayBounceFX(class AShooterCharacter* UserCharacter);
};


// Class ShooterGame.ShooterPlayerCameraManager
// 0x0098 (0x1558 - 0x14C0)
class AShooterPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x14C0(0x0068) MISSED OFFSET
	class AShooterCharacter*                           LastAimAssistTarget;                                      // 0x1528(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x1530(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerCameraManager");
		return ptr;
	}


	void HandleFOVUpdatedFromUI(float NewFOV);
};


// Class ShooterGame.ShooterPlayerController_Menu
// 0x0000 (0x06C8 - 0x06C8)
class AShooterPlayerController_Menu : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerController_Menu");
		return ptr;
	}

};


// Class ShooterGame.ShooterPodiumMeshActor
// 0x0000 (0x0420 - 0x0420)
class AShooterPodiumMeshActor : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPodiumMeshActor");
		return ptr;
	}

};


// Class ShooterGame.ShooterPointOfInterest
// 0x0000 (0x0100 - 0x0100)
class UShooterPointOfInterest : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPointOfInterest");
		return ptr;
	}

};


// Class ShooterGame.ShooterPostPhysicsControllerComponent
// 0x0000 (0x0100 - 0x0100)
class UShooterPostPhysicsControllerComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPostPhysicsControllerComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterPreviewActor
// 0x0008 (0x03A0 - 0x0398)
class AShooterPreviewActor : public AActor
{
public:
	struct FName                                       CurrentState;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPreviewActor");
		return ptr;
	}

};


// Class ShooterGame.ShooterPrimitiveImpactHandler
// 0x00A8 (0x01A8 - 0x0100)
class UShooterPrimitiveImpactHandler : public UActorComponent
{
public:
	struct FPrimitiveImpactConfig                      PrimitiveImpactConfig;                                    // 0x0100(0x0078) (Edit, DisableEditOnInstance)
	bool                                               bShouldDrawDecals;                                        // 0x0178(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class UShooterDecalArray*                          DecalArray;                                               // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UDecalComponent*>                     ActiveDecals;                                             // 0x0188(0x0010) (ExportObject, ZeroConstructor, Transient)
	int                                                ActiveDecalsTail;                                         // 0x0198(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LastDecalLocation;                                        // 0x019C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPrimitiveImpactHandler");
		return ptr;
	}


	void SetSoundsEnabled(bool bIsOn);
	void SetDecalsEnabled(bool bIsOn);
	void OnImpact(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class ShooterGame.ShooterProjectileMovement
// 0x0030 (0x0280 - 0x0250)
class UShooterProjectileMovement : public UProjectileMovementComponent
{
public:
	float                                              DampDelay;                                                // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBounceOffShield;                                   // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBounceOffDroids;                                   // 0x0255(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldBounceOffDoors;                                    // 0x0256(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldBounceOffSpawnShields;                             // 0x0257(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldBounceOffPlayers;                                  // 0x0258(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0259(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectileMovement");
		return ptr;
	}

};


// Class ShooterGame.ShooterRecycleBin
// 0x0038 (0x03D0 - 0x0398)
class AShooterRecycleBin : public AActor
{
public:
	class UAkAudioEvent*                               IdleLoopSound;                                            // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               InteractLoopSound;                                        // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               InteractEndSound;                                         // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             InteractEndFX;                                            // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CashOutDelay;                                             // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x03BC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterRecycleBin");
		return ptr;
	}


	void OnInteract(class AShooterCharacter* OtherActor);
	void OnCashOutDelayFinished(class AShooterCharacter* OtherActor, int CashOutValue);
	void NetMulticastInteractStarted();
	void NetMulticastInteractCompleted();
};


// Class ShooterGame.HackerDrone
// 0x1A78 (0x1E78 - 0x0400)
class AHackerDrone : public AShooterReplicatedMovingObject
{
public:
	class AShooterCharacter*                           Player;                                                   // 0x0400(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A70];                                    // 0x0408(0x1A70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HackerDrone");
		return ptr;
	}


	void ClientAckDroneMovement(const struct FDroneMoveAck& MoveAck);
};


// Class ShooterGame.IntelMine
// 0x0020 (0x0550 - 0x0530)
class AIntelMine : public AShooterBaseDroid
{
public:
	struct FIntelMineData                              MineConfig;                                               // 0x0530(0x0018) (Edit, DisableEditOnInstance)
	bool                                               bDestroyedbyOwner;                                        // 0x0548(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0549(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.IntelMine");
		return ptr;
	}

};


// Class ShooterGame.Shooter_FireZone
// 0x0020 (0x0550 - 0x0530)
class AShooter_FireZone : public AShooterBaseDroid
{
public:
	struct FFireZoneData                               MineConfig;                                               // 0x0530(0x0018) (Edit, DisableEditOnInstance)
	float                                              DamageTimer;                                              // 0x0548(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TickCount;                                                // 0x054C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.Shooter_FireZone");
		return ptr;
	}


	void PlayTeamFX(int MyTeamNum);
};


// Class ShooterGame.Shooter_PulsarGrenade
// 0x0058 (0x0588 - 0x0530)
class AShooter_PulsarGrenade : public AShooterBaseDroid
{
public:
	struct FPulsarData                                 PulsarConfig;                                             // 0x0530(0x0050) (Edit, DisableEditOnInstance)
	bool                                               bStartedPulseFX;                                          // 0x0580(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              TimeTillNextTick;                                         // 0x0584(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.Shooter_PulsarGrenade");
		return ptr;
	}

};


// Class ShooterGame.Shooter_StickyDart
// 0x0020 (0x0550 - 0x0530)
class AShooter_StickyDart : public AShooterBaseDroid
{
public:
	struct FStickyDartData                             StickyDartConfig;                                         // 0x0530(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.Shooter_StickyDart");
		return ptr;
	}

};


// Class ShooterGame.ShooterAccelGate
// 0x0050 (0x0580 - 0x0530)
class AShooterAccelGate : public AShooterBaseDroid
{
public:
	struct FAccelGateConfig                            AccelGateConfig;                                          // 0x0530(0x0030) (Edit, DisableEditOnInstance)
	int                                                TotalEnemyOverlaps;                                       // 0x0560(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimeAliveTimer;                                           // 0x0568(0x0008) (Transient)
	class UBoxComponent*                               GateCollider;                                             // 0x0570(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ForwardArrow;                                             // 0x0578(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAccelGate");
		return ptr;
	}


	void OnGateOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ShooterGame.ShooterDataBackup
// 0x0000 (0x0530 - 0x0530)
class AShooterDataBackup : public AShooterBaseDroid
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDataBackup");
		return ptr;
	}

};


// Class ShooterGame.ShooterDeployableShield
// 0x0048 (0x0578 - 0x0530)
class AShooterDeployableShield : public AShooterBaseDroid
{
public:
	class USkeletalMeshComponent*                      ShieldMesh;                                               // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FShieldData                                 ShieldConfig;                                             // 0x0538(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bShieldActive;                                            // 0x0570(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0571(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDeployableShield");
		return ptr;
	}


	void NetMultiCastSetShieldPosRot(const struct FVector& Pos, const struct FRotator& Rot);
};


// Class ShooterGame.ShooterDroid_Bomb
// 0x0048 (0x0578 - 0x0530)
class AShooterDroid_Bomb : public AShooterBaseDroid
{
public:
	class AShooterCharacter*                           CharacterOwner;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0538(0x0028) MISSED OFFSET
	class UClass*                                      BombExplosionTemplate;                                    // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CachedHitActors;                                          // 0x0568(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDroid_Bomb");
		return ptr;
	}


	void NetMulticastPlayDetonateFX(const struct FHitResult& Impact);
};


// Class ShooterGame.ShooterDroid_BunkerBuster
// 0x0020 (0x0550 - 0x0530)
class AShooterDroid_BunkerBuster : public AShooterBaseDroid
{
public:
	struct FBunkerBusterData                           BusterConfig;                                             // 0x0530(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDroid_BunkerBuster");
		return ptr;
	}

};


// Class ShooterGame.ShooterDroid_Noisemaker
// 0x0038 (0x0568 - 0x0530)
class AShooterDroid_Noisemaker : public AShooterBaseDroid
{
public:
	TArray<class UAkAudioEvent*>                       NoiseLibrary;                                             // 0x0530(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinDelayBetweenNoises;                                    // 0x0540(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDelayBetweenNoises;                                    // 0x0544(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBeforePause;                                       // 0x0548(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeBeforePause;                                       // 0x054C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPauseTime;                                             // 0x0550(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPauseTime;                                             // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x0558(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x055C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDroid_Noisemaker");
		return ptr;
	}

};


// Class ShooterGame.ShooterDroidShield
// 0x0078 (0x05A8 - 0x0530)
class AShooterDroidShield : public AShooterBaseDroid
{
public:
	struct FDroidShieldData                            ShieldConfig;                                             // 0x0530(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0548(0x0014) MISSED OFFSET
	float                                              DamageBlockedToTriggerScore;                              // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CharactersInRange;                                        // 0x0560(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterPlayerState*>                 PlayersHealedThisUsage;                                   // 0x0570(0x0010) (ZeroConstructor, Transient)
	class AShooterCharacter*                           CachedSpawningCharacter;                                  // 0x0580(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeSinceSpawn;                                           // 0x0588(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x058C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDroidShield");
		return ptr;
	}


	void OnSpectatorTargetChanged(class AShooterCharacter* NewTarget);
	void OnDedicatedSpectatorToggled(bool bEnabled);
	void NetMulticastSetEnterExitFX(TArray<class AShooterCharacter*> Characters, bool IsEntering);
	void NetMulticastBeginDestroy();
	void HandleDestroyFX();
};


// Class ShooterGame.ShooterEMPGrenade
// 0x0088 (0x05B8 - 0x0530)
class AShooterEMPGrenade : public AShooterBaseDroid
{
public:
	TArray<class AShooterCharacter*>                   TouchedEnemiesWithinRadius;                               // 0x0530(0x0010) (ZeroConstructor, Transient)
	struct FEMPData                                    EMPConfig;                                                // 0x0540(0x0060) (Edit, DisableEditOnInstance)
	class UParticleSystemComponent*                    StateFx;                                                  // 0x05A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              CurrentStateTimer;                                        // 0x05A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStartedPulseFX;                                          // 0x05AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	float                                              TimeTillNextDotTick;                                      // 0x05B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEMPGrenade");
		return ptr;
	}

};


// Class ShooterGame.ShooterGroundLava
// 0x0030 (0x0560 - 0x0530)
class AShooterGroundLava : public AShooterBaseDroid
{
public:
	TArray<class AShooterCharacter*>                   PlayersInZone;                                            // 0x0530(0x0010) (ZeroConstructor, Transient)
	float                                              DamageTickTimer;                                          // 0x0540(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    OwnerController;                                          // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGroundLava                                 LavaConfig;                                               // 0x0550(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGroundLava");
		return ptr;
	}

};


// Class ShooterGame.ShooterHealMine
// 0x0158 (0x0688 - 0x0530)
class AShooterHealMine : public AShooterBaseDroid
{
public:
	struct FHealMineData                               MineConfig;                                               // 0x0530(0x00E8) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0618(0x0018) MISSED OFFSET
	class UParticleSystemComponent*                    FriendlyDroneCone;                                        // 0x0630(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EnemyDroneCone;                                           // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpectatedLawDroneCone;                                    // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0648(0x0008) MISSED OFFSET
	class AShooterPlayerState*                         OwnerState;                                               // 0x0650(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0658(0x0002) MISSED OFFSET
	unsigned char                                      isLeftDrone;                                              // 0x065A(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD];                                       // 0x065B(0x000D) MISSED OFFSET
	class UParticleSystemComponent*                    DroidAttachPSC;                                           // 0x0668(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DroidWarpInPSC;                                           // 0x0670(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ShieldDownPSC;                                            // 0x0678(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DroidDestroyedPSC;                                        // 0x0680(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterHealMine");
		return ptr;
	}


	void OnRep_IsLeftDrone();
	void NetMulticastSpawnDroneWarpInFX(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void AttachToPlayer(class AShooterCharacter* PlayerToAttach);
};


// Class ShooterGame.ShooterLightingSphere
// 0x0080 (0x05B0 - 0x0530)
class AShooterLightingSphere : public AShooterBaseDroid
{
public:
	TArray<class UParticleSystemComponent*>            ShockedLaserBeamPSCs;                                     // 0x0530(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FLightingSphereData                         LightingSphereConfig;                                     // 0x0540(0x0040) (Edit, DisableEditOnInstance)
	float                                              CurrentStateTimer;                                        // 0x0580(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeTillNextDotTick;                                      // 0x0584(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   ShockedCharacters;                                        // 0x0588(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterCharacter*>                   InvalidShockCharacters;                                   // 0x0598(0x0010) (ZeroConstructor, Transient)
	class UParticleSystemComponent*                    StateFx;                                                  // 0x05A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLightingSphere");
		return ptr;
	}


	void MulticastRemoveShockedCharacter(class AShooterCharacter* CharacterToRemove);
	void MulticastAddShockedCharacter(class AShooterCharacter* CharacterToAdd);
};


// Class ShooterGame.ShooterPoisonGrenade
// 0x0020 (0x0550 - 0x0530)
class AShooterPoisonGrenade : public AShooterBaseDroid
{
public:
	struct FPoisonData                                 MineConfig;                                               // 0x0530(0x0018) (Edit, DisableEditOnInstance)
	float                                              DamageTimer;                                              // 0x0548(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TickCount;                                                // 0x054C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPoisonGrenade");
		return ptr;
	}

};


// Class ShooterGame.ShooterReconTrackerBomb
// 0x0070 (0x05A0 - 0x0530)
class AShooterReconTrackerBomb : public AShooterBaseDroid
{
public:
	class AShooterCharacter*                           AttachedPlayer;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTrackerBombData                            TrackerConfig;                                            // 0x0538(0x0060) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0598(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterReconTrackerBomb");
		return ptr;
	}


	void NetMultiCastPlayPingFX();
	void MulticastNotifyExplosion(TArray<class AActor*> DamagedActors, class AShooterCharacter* PlayerOwner, const struct FHitResult& Impact, class AShooterCharacter* Attached);
	void AttachToPlayer(class AShooterCharacter* PlayerToAttach);
};


// Class ShooterGame.ShooterStickyMine
// 0x0018 (0x0548 - 0x0530)
class AShooterStickyMine : public AShooterBaseDroid
{
public:
	struct FStickyMineData                             MineConfig;                                               // 0x0530(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterStickyMine");
		return ptr;
	}

};


// Class ShooterGame.ShooterTripWire
// 0x0048 (0x0578 - 0x0530)
class AShooterTripWire : public AShooterBaseDroid
{
public:
	struct FVector                                     EndPoint;                                                 // 0x0530(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FTripWireData                               TripWireConfig;                                           // 0x0540(0x0030) (Edit, DisableEditOnInstance)
	class UParticleSystemComponent*                    LaserBeamPSC;                                             // 0x0570(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTripWire");
		return ptr;
	}


	void OnRep_EndPoint();
};


// Class ShooterGame.ShooterProjectile
// 0x0238 (0x0638 - 0x0400)
class AShooterProjectile : public AShooterReplicatedMovingObject
{
public:
	int8_t                                             AwaySoundIndex;                                           // 0x0400(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0408(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UShooterProjectileMovement*                  MovementComp;                                             // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComp;                                             // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompTwo;                                          // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompFirstPerson;                                  // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      ExplosionTemplate;                                        // 0x0438(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DeflectionTemplate;                                       // 0x0440(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               OrientItemToSurfaceNormal;                                // 0x0448(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0450(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FProjectileWeaponData                       WeaponConfig;                                             // 0x0458(0x0108) (Edit, Config, DisableEditOnInstance)
	class AController*                                 MyController;                                             // 0x0560(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveParticleComp;                                       // 0x0568(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0570(0x0020) MISSED OFFSET
	struct FProjectileExplosionInfo                    ExplosionNotify;                                          // 0x0590(0x0030) (Net, Transient, Config)
	TArray<class AShooter_BuffBase*>                   CurrentBuffs;                                             // 0x05C0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x9];                                       // 0x05D0(0x0009) MISSED OFFSET
	bool                                               bWasFiredDuringComboAttack;                               // 0x05D9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x05DA(0x0006) MISSED OFFSET
	class UClass*                                      FiredFromWeaponType;                                      // 0x05E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ClientID;                                                 // 0x05E8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	class AShooterClientProjectile*                    ClientProjectile;                                         // 0x05F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              WeaponFiredFrom;                                          // 0x05F8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   IgnorePlayers;                                            // 0x0600(0x0010) (ZeroConstructor, Transient)
	struct FVector                                     SpawnPosition;                                            // 0x0610(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasBlindFired;                                           // 0x061C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	float                                              SpawnTime;                                                // 0x0620(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bExploded;                                                // 0x0624(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bProximityAirBurst;                                       // 0x0625(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0626(0x0002) MISSED OFFSET
	float                                              HomingTargetTimer;                                        // 0x0628(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLaunchedFromPool;                                        // 0x062C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLaunchedOnReplica;                                       // 0x062D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x062E(0x0002) MISSED OFFSET
	bool                                               bAllowCreateItem;                                         // 0x0630(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAlternateMuzzleStart;                                    // 0x0631(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHeadshotDamageEnabled;                                   // 0x0632(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x0633(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile");
		return ptr;
	}


	void OnRep_Exploded();
	void NotifyReturnToPool();
	void BlueprintExplode(const struct FHitResult& Impact);
	void BlueprintEnableTicking(bool InValue);
};


// Class ShooterGame.ShooterProjectile_Bomb
// 0x0048 (0x0680 - 0x0638)
class AShooterProjectile_Bomb : public AShooterProjectile
{
public:
	class UAkAudioEvent*                               ArmedSound;                                               // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BombExplosionTemplate;                                    // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0648(0x0028) MISSED OFFSET
	TArray<class AActor*>                              CachedHitActors;                                          // 0x0670(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_Bomb");
		return ptr;
	}


	void NetMulticastSpawnExplosionFX();
	void Detonate();
};


// Class ShooterGame.ShooterProjectile_BounceNade
// 0x0050 (0x0688 - 0x0638)
class AShooterProjectile_BounceNade : public AShooterProjectile
{
public:
	struct FProjectileBounceNadeData                   BounceNadeConfig;                                         // 0x0638(0x0020) (Edit, DisableEditOnInstance)
	int                                                BounceCount;                                              // 0x0658(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BounceSoundTime;                                          // 0x065C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BounceExplodeTimer;                                       // 0x0660(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               TimedExplodeFXStarted;                                    // 0x0664(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0665(0x000B) MISSED OFFSET
	class UParticleSystemComponent*                    TrailEnemy;                                               // 0x0670(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrailFriendly;                                            // 0x0678(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveTrail;                                              // 0x0680(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_BounceNade");
		return ptr;
	}


	void OnRep_TimedExplodeFXStarted();
	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnBeginTimedExplodeFX();
	void NotifyBounce();
};


// Class ShooterGame.ShooterProjectile_ClusterNade
// 0x0068 (0x06A0 - 0x0638)
class AShooterProjectile_ClusterNade : public AShooterProjectile
{
public:
	class USphereComponent*                            ComboCollisionComp;                                       // 0x0638(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FProjectileWeaponData_ClusterNade           ClusterConfig;                                            // 0x0640(0x0030) (Edit, DisableEditOnInstance)
	int                                                NextGrenadeIndex;                                         // 0x0670(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	class AShooterCharacter*                           ImpactPlayer;                                             // 0x0678(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // 0x0680(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x068C(0x000C) MISSED OFFSET
	float                                              AirburstTimer;                                            // 0x0698(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DidAutoCluster;                                           // 0x069C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               DidCluster;                                               // 0x069D(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x069E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_ClusterNade");
		return ptr;
	}

};


// Class ShooterGame.ShooterProjectile_Disruptor
// 0x0030 (0x0668 - 0x0638)
class AShooterProjectile_Disruptor : public AShooterProjectile
{
public:
	float                                              AccelUpdateInterval;                                      // 0x0638(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLink;                                               // 0x063C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeOverlapTrigger;                                 // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	class AActor*                                      LinkSource;                                               // 0x0648(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LinkTarget;                                               // 0x0650(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0658(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_Disruptor");
		return ptr;
	}


	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};


// Class ShooterGame.ShooterProjectile_EMPFragVariant
// 0x0008 (0x0640 - 0x0638)
class AShooterProjectile_EMPFragVariant : public AShooterProjectile
{
public:
	struct FProjectileWeaponData_EMPFrag               EMPFragConfig;                                            // 0x0638(0x0004) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x063C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_EMPFragVariant");
		return ptr;
	}

};


// Class ShooterGame.ShooterProjectile_Flame
// 0x0020 (0x0658 - 0x0638)
class AShooterProjectile_Flame : public AShooterProjectile
{
public:
	class UClass*                                      FireZoneClass;                                            // 0x0638(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBurnTicksForRamp;                                      // 0x0640(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   BurnedPlayers;                                            // 0x0648(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_Flame");
		return ptr;
	}


	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ShooterGame.ShooterProjectile_Flashbang
// 0x0008 (0x0640 - 0x0638)
class AShooterProjectile_Flashbang : public AShooterProjectile
{
public:
	struct FFlashbangData                              FlashbangConfig;                                          // 0x0638(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_Flashbang");
		return ptr;
	}

};


// Class ShooterGame.ShooterProjectile_GroundDetonate
// 0x0008 (0x0640 - 0x0638)
class AShooterProjectile_GroundDetonate : public AShooterProjectile
{
public:
	struct FProjectileGroundDetonateData               GroundDetonateConfig;                                     // 0x0638(0x0004) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x063C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_GroundDetonate");
		return ptr;
	}


	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};


// Class ShooterGame.ShooterProjectile_HarmonyOrb
// 0x0028 (0x0660 - 0x0638)
class AShooterProjectile_HarmonyOrb : public AShooterProjectile
{
public:
	struct FShooterProjData_Orb                        OrbConfig;                                                // 0x0638(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CurrentTarget;                                            // 0x0648(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   InitialFromTargetDirection;                               // 0x0650(0x000C) (Net, Transient)
	bool                                               bAllowHoming;                                             // 0x065C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x065D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_HarmonyOrb");
		return ptr;
	}

};


// Class ShooterGame.ShooterProjectile_NinjaFrag
// 0x0008 (0x0640 - 0x0638)
class AShooterProjectile_NinjaFrag : public AShooterProjectile
{
public:
	struct FProjectileWeaponData_NinjaFrag             NinjaFragConfig;                                          // 0x0638(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_NinjaFrag");
		return ptr;
	}

};


// Class ShooterGame.ShooterProjectile_ReconKnife
// 0x0008 (0x0640 - 0x0638)
class AShooterProjectile_ReconKnife : public AShooterProjectile
{
public:
	struct FProjectileWeaponData_ReconKnife            ReconKnifeconfig;                                         // 0x0638(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_ReconKnife");
		return ptr;
	}

};


// Class ShooterGame.ShooterProjectile_ShockBall
// 0x0020 (0x0658 - 0x0638)
class AShooterProjectile_ShockBall : public AShooterProjectile
{
public:
	struct FProjectileWeaponData_ShockBall             ShockBallConfig;                                          // 0x0638(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0650(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile_ShockBall");
		return ptr;
	}

};


// Class ShooterGame.ShooterShieldedObject
// 0x0048 (0x0448 - 0x0400)
class AShooterShieldedObject : public AShooterReplicatedMovingObject
{
public:
	struct FShooterShieledObjectData                   ShieldedObjectConfig;                                     // 0x0400(0x0040) (Edit, DisableEditOnInstance)
	class AShooterShield*                              Shield;                                                   // 0x0440(0x0008) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterShieldedObject");
		return ptr;
	}


	class AShooterShield* SpawnShield(int Team);
	void ShieldDamaged();
	void SetShieldFullHealth(float Health);
	float GetShieldCursorizedHealth();
	void AdjustShieldHealth(float HealthIncrement);
};


// Class ShooterGame.ShooterCarryObject
// 0x00F8 (0x0540 - 0x0448)
class AShooterCarryObject : public AShooterShieldedObject
{
public:
	struct FShooterCarryObjectData                     CarryObjectConfig;                                        // 0x0448(0x0060) (Edit, DisableEditOnInstance)
	class USphereComponent*                            CollisionComp;                                            // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Team0_CanPickup;                                          // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Team1_CanPickup;                                          // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x04B2(0x000E) MISSED OFFSET
	struct FTransform                                  StartTransform;                                           // 0x04C0(0x0030) (BlueprintVisible, Transient, IsPlainOldData)
	float                                              TimeSinceDrop;                                            // 0x04F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04F4(0x000C) MISSED OFFSET
	class UDialogueChannel*                            AssociatedChannel;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0508(0x0010) MISSED OFFSET
	class AShooterCharacter*                           LastCarrier;                                              // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           Carrier;                                                  // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsCarried;                                                // 0x0528(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class UShooterGameModeStatusWidget*                StatusWidget;                                             // 0x0530(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCarryObject");
		return ptr;
	}


	void UserDrop();
	void SetPickupAllowed(bool bInPickupAllowed);
	void ResetToNearestPoint();
	void ResetPosition();
	void PlayDialogueTeamSpecific(class UAkAudioEvent* FriendlyEvent, class UAkAudioEvent* EnemyEvent, class UAkAudioEvent* SpectatorEvent, class UAkAudioEvent* CarrierEvent, int TeamNumber, class AShooterCharacter* CarrierPlayer, int Priority, float MinReplayTime, float MaxWaitTime);
	void PlayDialogue(class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds, bool StopWhenOwnerDestroyed);
	void PickUp(class AShooterCharacter* Other);
	void PickedUpOnHost();
	void PickedUpOnClient();
	void OnRep_Carrier();
	void OnOzoneReset();
	void OnOutOfWorld();
	bool IsPickupAllowed();
	void DroppedOnHost();
	void DroppedOnClient();
	void Drop(bool bEnableMovement);
};


// Class ShooterGame.ShooterSimpleVehicle
// 0x0240 (0x0640 - 0x0400)
class AShooterSimpleVehicle : public AShooterReplicatedMovingObject
{
public:
	TArray<struct FSeatSocketAndExitOffsets>           SeatSocketsAndExitOffsets;                                // 0x0400(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSimpleWheelData>                    WheelData;                                                // 0x0410(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVehicleAudioData                           AudioData;                                                // 0x0420(0x0068) (Edit, DisableEditOnInstance)
	float                                              MaxFlatSpeed;                                             // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBoostSpeed;                                            // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxReverseSpeed;                                          // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AbsMaxSpeed;                                              // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityAccel;                                             // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoostAcceleration;                                        // 0x04A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrakeAcceleration;                                     // 0x04A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PassengerAccelerationScale;                               // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAirControlYawSpeed;                                    // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirControlYawAccel;                                       // 0x04B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAirControlPitchSpeed;                                  // 0x04B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirControlPitchDownAccel;                                 // 0x04B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirControlPitchUpAccel;                                   // 0x04BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedToReduceTurnSpeedByHalf;                             // 0x04C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerTime;                                                // 0x04C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoastingDecel;                                            // 0x04C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SidewaysDecel;                                            // 0x04CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bounce;                                                   // 0x04D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpImpulse;                                              // 0x04D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetUprightOnEnter;                                       // 0x04D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TurnFraction;                                             // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStopped;                                                 // 0x04E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMovingForward;                                           // 0x04E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCoasting;                                                // 0x04E6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bJumpCharging;                                            // 0x04E7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bJumped;                                                  // 0x04E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInAir;                                                   // 0x04E9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x04EA(0x000A) MISSED OFFSET
	bool                                               bSprinting;                                               // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	TArray<float>                                      WheelSpinRotations;                                       // 0x04F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int8_t                                             RepSteeringInputCompressed;                               // 0x0508(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int8_t                                             RepThrottleCompressed;                                    // 0x0509(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRepJumpChangeToggle;                                     // 0x050A(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x050B(0x0001) MISSED OFFSET
	bool                                               bRepJumpPressed;                                          // 0x050C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRepInAir;                                                // 0x050D(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x050E(0x0002) MISSED OFFSET
	struct FVector                                     Velocity;                                                 // 0x0510(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1C];                                      // 0x051C(0x001C) MISSED OFFSET
	TArray<class AShooterCharacter*>                   AttachedCharacters;                                       // 0x0538(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0548(0x0020) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0568(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x80];                                      // 0x0570(0x0080) MISSED OFFSET
	class AShooterCharacter*                           Driver;                                                   // 0x05F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x30];                                      // 0x05F8(0x0030) MISSED OFFSET
	class UShooterSimpleVehicleAnimInstance*           VehicleAnimInstance;                                      // 0x0628(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x0630(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSimpleVehicle");
		return ptr;
	}


	void OnInteract(class AShooterCharacter* OtherActor);
	class AShooterCharacter* GetDriver();
	void ClientAckVehicleMovement(const struct FVehicleMoveAck& MoveAck);
};


// Class ShooterGame.ShooterBike
// 0x0018 (0x0658 - 0x0640)
class AShooterBike : public AShooterSimpleVehicle
{
public:
	bool                                               bBikeRaceActive;                                          // 0x0640(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               BikeRaceMusic;                                            // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BikeRaceMusicStop;                                        // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBike");
		return ptr;
	}


	void SetBikeRaceActive(bool bActive);
	void OnRep_BikeRace();
};


// Class ShooterGame.ShooterResetPoint
// 0x0000 (0x0398 - 0x0398)
class AShooterResetPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterResetPoint");
		return ptr;
	}

};


// Class ShooterGame.ShooterReviveIndicator
// 0x0008 (0x03A0 - 0x0398)
class AShooterReviveIndicator : public AActor
{
public:
	class AShooterPlayerState*                         PlayerToRevive;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterReviveIndicator");
		return ptr;
	}

};


// Class ShooterGame.ShooterScoreProcessorCollection
// 0x0010 (0x0038 - 0x0028)
class UShooterScoreProcessorCollection : public UDataAsset
{
public:
	TArray<struct FShooterScorableEvent>               ScorableEvents;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreProcessorCollection");
		return ptr;
	}

};


// Class ShooterGame.ShooterScoreProcessor
// 0x01C8 (0x0200 - 0x0038)
class UShooterScoreProcessor : public UShooterScoreProcessorCollection
{
public:
	TArray<class UClass*>                              ExternalScorableEvents;                                   // 0x0038(0x0010) (Edit, ZeroConstructor)
	TMap<int, struct FPersistentPlayer>                PersistentPlayerList;                                     // 0x0048(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0xF2];                                      // 0x0098(0x00F2) MISSED OFFSET
	bool                                               bDoDebugValidate;                                         // 0x018A(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDebugLogAllScores;                                       // 0x018B(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x018C(0x005C) MISSED OFFSET
	TArray<struct FShooterScorableEvent>               AllScorableEvents;                                        // 0x01E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreProcessor");
		return ptr;
	}

};


// Class ShooterGame.ShooterShield
// 0x0060 (0x03F8 - 0x0398)
class AShooterShield : public AActor
{
public:
	int                                                NumPlayersInDepletionZone;                                // 0x0398(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FShooterShieldData                          ShieldConfig;                                             // 0x03A0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              MaxHealth;                                                // 0x03D0(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x03D4(0x0014) MISSED OFFSET
	class AShooterShieldedObject*                      ShieldedObject;                                           // 0x03E8(0x0008) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03F0(0x0004) MISSED OFFSET
	unsigned char                                      CurrentHealthCompressed;                                  // 0x03F4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterShield");
		return ptr;
	}


	void ShieldDamaged();
	void SetFullHealth(float Health);
	void SetCurrentHealth(float NewHealth);
	void PlayersExitedDepletionZoneHost();
	void PlayersEnteredDepletionZoneHost();
	void OnRep_MaxHealth();
	void OnRep_CurrentHealthCompressed();
	bool IsLocalPlayerWithinRadius();
	float GetCursorizedHealth();
	float GetCurrentHealth();
	void AdjustHealth(float HealthIncrement);
};


// Class ShooterGame.ShooterSimpleVehicleAnimInstance
// 0x0010 (0x0488 - 0x0478)
class UShooterSimpleVehicleAnimInstance : public UAnimInstance
{
public:
	float                                              VehicleTurnFraction;                                      // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VehicleForwardSpeed;                                      // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleStopped;                                          // 0x0480(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleAccelerating;                                     // 0x0481(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVehicleSprinting;                                        // 0x0482(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0483(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSimpleVehicleAnimInstance");
		return ptr;
	}


	void OnVehicleStopped();
	void OnVehicleStartedMoving();
	void OnVehicleSprintingStopped();
	void OnVehicleSprinting();
	void OnVehicleLiftoff();
	void OnVehicleLanded();
	void OnVehicleJumped();
	void OnVehicleJumpCharging();
	void OnVehicleExited(int SeatIndex);
	void OnVehicleEntered(int SeatIndex);
	void OnVehicleBraking(bool bWasMovingForward);
	void OnVehicleAnimValuesUpdated();
	void OnVehicleAccelerationStopped();
	void OnVehicleAcceleration();
};


// Class ShooterGame.ShooterCharacterAnimInstance
// 0x0008 (0x0490 - 0x0488)
class UShooterCharacterAnimInstance : public UShooterSimpleVehicleAnimInstance
{
public:
	TEnumAsByte<EVehicleSeatState>                     VehicleSeatState;                                         // 0x0488(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0489(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterAnimInstance");
		return ptr;
	}

};


// Class ShooterGame.ShooterSmokeBomb
// 0x0010 (0x03A8 - 0x0398)
class AShooterSmokeBomb : public AActor
{
public:
	float                                              HealTimer;                                                // 0x0398(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               HealSound;                                                // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSmokeBomb");
		return ptr;
	}

};


// Class ShooterGame.ShooterSpectatorPawn
// 0x0000 (0x0420 - 0x0420)
class AShooterSpectatorPawn : public ASpectatorPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSpectatorPawn");
		return ptr;
	}


	void ResetLookRoll();
	void AddMoveSpeedInput(float Val);
	void AddMoveDeccelInput(float Val);
	void AddMoveAccelInput(float Val);
	void AddLookSpeedInput(float Val);
	void AddDOFScaleInput(float Val);
	void AddDOFFocalDistanceInput(float Val);
};


// Class ShooterGame.ShooterSpin2WinCrate
// 0x0058 (0x03F0 - 0x0398)
class AShooterSpin2WinCrate : public AActor
{
public:
	float                                              ZiplineMoveSpeed;                                         // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallSpeed;                                                // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DestroyDelay;                                             // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // 0x03A4(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetPos;                                                // 0x03B0(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     MoveDirection;                                            // 0x03BC(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	bool                                               IsDropping;                                               // 0x03D0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeployed;                                               // 0x03D1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03D2(0x0006) MISSED OFFSET
	class UClass*                                      Spin2WinTemplate;                                         // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSpin2WinCrate");
		return ptr;
	}


	void OnStartSpin2WinCrateEvent();
	void OnRep_IsDropping();
	void OnReleaseSpin2WinCrateEvent();
	void OnLandSpin2WinCrateEvent();
	void NetMulticast_OnLandSpin2WinCrate();
};


// Class ShooterGame.ShooterStashBox
// 0x00A0 (0x04C0 - 0x0420)
class AShooterStashBox : public ASkeletalMeshActor
{
public:
	bool                                               bActorFinishedLoading;                                    // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class AActor*                                      StashActor;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               OpenAnim;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               PrintingAnim;                                             // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               ClosingAnim;                                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0448(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterStashBox");
		return ptr;
	}


	void NotifySpawnFXFinished();
	void BPSpawnContents(TEnumAsByte<ERarityLevel> ContentsQuality);
	void BPDisableLoopingParticles();
	void BPCleanupBox(bool bForceInstant);
};


// Class ShooterGame.ShooterStashImage
// 0x0018 (0x03B0 - 0x0398)
class AShooterStashImage : public AActor
{
public:
	class AActor*                                      LookTarget;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bImageApplied;                                            // 0x03A0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterStashImage");
		return ptr;
	}

};


// Class ShooterGame.ShooterStateMachineComponent
// 0x00A8 (0x01A8 - 0x0100)
class UShooterStateMachineComponent : public UActorComponent
{
public:
	class UShooterBaseState*                           ActiveUpperBodyState;                                     // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterBaseState*                           ActiveLowerBodyState;                                     // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterBaseState*                           ActiveFullBodyState;                                      // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterBaseState*                           ActiveLeftArmState;                                       // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterBaseState*                           ActiveTertiaryWeaponState;                                // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterBaseState*                           ActiveAdditiveHitState;                                   // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterBaseState*                           ActiveAdditiveOneState;                                   // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterBaseState*                           NextState;                                                // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterState_UpperBody_Ready*               LastUpperBodyReadyState;                                  // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UShooterBaseState*>                   StateInstances;                                           // 0x0148(0x0010) (ZeroConstructor, Transient)
	TMap<class UClass*, int>                           StateMap;                                                 // 0x0158(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterStateMachineComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterSupplyLinePackage
// 0x0038 (0x03D0 - 0x0398)
class AShooterSupplyLinePackage : public AActor
{
public:
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              SpawnRadius;                                              // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropWeight_Armor;                                         // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropWeight_Helmet;                                        // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropWeight_Weapon;                                        // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropWeight_Holster;                                       // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropWeight_Pack;                                          // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropWeight_Ammo;                                          // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropWeight_Medkit;                                        // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSupplyLinePackage");
		return ptr;
	}


	void SpawnItems(const struct FHitResult& HitResult);
};


// Class ShooterGame.ShooterThreatIndicatorComponent
// 0x0050 (0x07E0 - 0x0790)
class UShooterThreatIndicatorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0790(0x0010) MISSED OFFSET
	class AShooterCharacter*                           ThreatTarget;                                             // 0x07A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              VisibleStartTime;                                         // 0x07A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeInStartTime;                                          // 0x07AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x07B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartingOpacity;                                          // 0x07B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     StartingLocation;                                         // 0x07BC(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    StartingRotation;                                         // 0x07C8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PitchAxis;                                                // 0x07D4(0x000C) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterThreatIndicatorComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterTimeDilationZone
// 0x0028 (0x03C0 - 0x0398)
class AShooterTimeDilationZone : public AActor
{
public:
	struct FTimeDilationZoneData                       ZoneConfig;                                               // 0x0398(0x0020) (Edit, DisableEditOnInstance)
	class USphereComponent*                            Zone;                                                     // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTimeDilationZone");
		return ptr;
	}

};


// Class ShooterGame.ShooterTimeOfDayController
// 0x0000 (0x0398 - 0x0398)
class AShooterTimeOfDayController : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTimeOfDayController");
		return ptr;
	}


	void OnMatchStart();
	void OnFinalShowdownStart();
	void OnFinalShowdownReachGround();
};


// Class ShooterGame.ShooterUrgentCare
// 0x0028 (0x03C0 - 0x0398)
class AShooterUrgentCare : public AActor
{
public:
	class AShooterCharacter*                           PlayerUser;                                               // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealPerTick;                                              // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickRate;                                                 // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CostPerTick;                                              // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               HealSound;                                                // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterUrgentCare");
		return ptr;
	}


	void OnInteractStop(class AShooterCharacter* Player);
	void OnInteractStart(class AShooterCharacter* Player);
};


// Class ShooterGame.AbilityLayoutWidget
// 0x0060 (0x02A8 - 0x0248)
class UAbilityLayoutWidget : public UShooterUserWidget
{
public:
	bool                                               bConvertedAbilities;                                      // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	TArray<struct FAbilityConfig>                      LeftAbilities;                                            // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAbilityConfig>                      UltAbilities;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAbilityConfig>                      RightAbilities;                                           // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UImage*                                      GridWaveWidget;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            AbilityReadyAnimation;                                    // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterUserWidget*                          UltimateReadyWidget;                                      // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            UltimateReadyAnimation;                                   // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           AttachedCharacter;                                        // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AbilityLayoutWidget");
		return ptr;
	}


	void SetCharacter(class AShooterCharacter* Character);
	class AShooterCharacter* GetAttachedCharacter();
};


// Class ShooterGame.AmmoWidget
// 0x0008 (0x0250 - 0x0248)
class UAmmoWidget : public UShooterUserWidget
{
public:
	class UProgressBar*                                GaugeWidget;                                              // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AmmoWidget");
		return ptr;
	}

};


// Class ShooterGame.Base64WatermarkWidget
// 0x0028 (0x0270 - 0x0248)
class UBase64WatermarkWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  Base64TextBlock;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                MainPanelRef;                                             // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0258(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.Base64WatermarkWidget");
		return ptr;
	}

};


// Class ShooterGame.ChatEntryWidget
// 0x0020 (0x0268 - 0x0248)
class UChatEntryWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  TimeStampWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  NameWidget;                                               // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ChannelWidget;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMultiLineEditableTextBox*                   BodyWidget;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ChatEntryWidget");
		return ptr;
	}

};


// Class ShooterGame.DamageAlertWidget
// 0x0018 (0x0260 - 0x0248)
class UDamageAlertWidget : public UShooterUserWidget
{
public:
	class UCanvasPanel*                                MainPanelWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BlinkAnimation;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DamageAlertWidget");
		return ptr;
	}

};


// Class ShooterGame.GameStateWidgetRnR
// 0x0020 (0x0268 - 0x0248)
class UGameStateWidgetRnR : public UShooterUserWidget
{
public:
	class UImage*                                      BackgroundImage;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AliveCountWidget;                                         // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  SuperlativeTextWidget;                                    // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.GameStateWidgetRnR");
		return ptr;
	}


	void SlideOut();
	void SlideIn();
	void AliveCountChanged();
};


// Class ShooterGame.GaugeWidget
// 0x0098 (0x02E0 - 0x0248)
class UGaugeWidget : public UShooterUserWidget
{
public:
	float                                              InnerRadius;                                              // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sharpness;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Brightness;                                               // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartAngle;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArcLength;                                                // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FScriptDelegate                             PercentDelegate;                                          // 0x0268(0x0014) (ZeroConstructor, InstancedReference)
	float                                              StartPercent;                                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimatingSpeed;                                           // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image;                                                    // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0288(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.GaugeWidget");
		return ptr;
	}


	void SetNewColor(const struct FLinearColor& InColor);
};


// Class ShooterGame.HealthGaugeWidget
// 0x0080 (0x0360 - 0x02E0)
class UHealthGaugeWidget : public UGaugeWidget
{
public:
	float                                              SegmentsStartAngle;                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NumSegments;                                              // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthSegmentValue;                                       // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColorBlender                               Colors;                                                   // 0x02EC(0x003C) (Edit, BlueprintVisible)
	TEnumAsByte<EGaugeType>                            CurrentGaugeType;                                         // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class AShooterCharacter*                           AttachedCharacter;                                        // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatInst;                                                  // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                CachedShieldColor;                                        // 0x0340(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HealthGaugeWidget");
		return ptr;
	}


	void SetCharacter(class AShooterCharacter* Character);
	struct FLinearColor GetColor();
};


// Class ShooterGame.HitReticule
// 0x0040 (0x0288 - 0x0248)
class UHitReticule : public UShooterUserWidget
{
public:
	class UPanelWidget*                                Panel;                                                    // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                Pips[0x4];                                                // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0270(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HitReticule");
		return ptr;
	}

};


// Class ShooterGame.HudGameModesWidget
// 0x0010 (0x0258 - 0x0248)
class UHudGameModesWidget : public UShooterUserWidget
{
public:
	float                                              ResetNotificationTime;                                    // 0x0248(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FTimerHandle                                NotificationHandle;                                       // 0x0250(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HudGameModesWidget");
		return ptr;
	}


	void NotifyBatteryInCenter();
	void HideBatteryInCenter();
};


// Class ShooterGame.IdleWarningWidget
// 0x0010 (0x0258 - 0x0248)
class UIdleWarningWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  CountdownWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CachedIdleKickCountdown;                                  // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.IdleWarningWidget");
		return ptr;
	}

};


// Class ShooterGame.NetworkPerformanceWidget
// 0x0080 (0x02C8 - 0x0248)
class UNetworkPerformanceWidget : public UShooterUserWidget
{
public:
	bool                                               DetailedMode;                                             // 0x0248(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UWidgetSwitcher*                             SwitcherWidget;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      LagIconWidget;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      FPSIconWidget;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ServerFPSIconWidget;                                      // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PingValueWidget;                                          // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  FPSValueWidget;                                           // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ServerFPSValueWidget;                                     // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ServerThreadTimeValueWidget;                              // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGraphWidget*                                PingGraph;                                                // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGraphWidget*                                FPSGraph;                                                 // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGraphWidget*                                ServerFPSGraph;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGraphWidget*                                ServerTickGraph;                                          // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.NetworkPerformanceWidget");
		return ptr;
	}

};


// Class ShooterGame.PaladinWidget
// 0x0010 (0x0258 - 0x0248)
class UPaladinWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  GaugeWidget;                                              // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterAbility_Paladin*                     PaladinAbility;                                           // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PaladinWidget");
		return ptr;
	}

};


// Class ShooterGame.QRCodeWatermarkWidget
// 0x0038 (0x0280 - 0x0248)
class UQRCodeWatermarkWidget : public UShooterUserWidget
{
public:
	int                                                QRLevel;                                                  // 0x0248(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UImage*                                      QRCodeImage;                                              // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                MainPanelRef;                                             // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  QRImageTexture;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0268(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.QRCodeWatermarkWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterAbilityWidget
// 0x01A8 (0x03F0 - 0x0248)
class UShooterAbilityWidget : public UShooterUserWidget
{
public:
	struct FName                                       AbilityClassName;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 AbilityIcon;                                              // 0x0250(0x0090) (Edit, BlueprintVisible)
	struct FLinearColor                                CooldownMeterColor;                                       // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AvailableBackgroundColor;                                 // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCharges;                                               // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugThisWidget;                                          // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAbilityWidgetType>                    AbilityWidgetType;                                        // 0x0305(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesFuel;                                                // 0x0306(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTertiaryWeaponAbility;                                 // 0x0307(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpectatorAbilityWidget;                                // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0309(0x000F) MISSED OFFSET
	class UWidgetAnimation*                            EMPAnimation;                                             // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            StartReadyAnimation;                                      // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            EndReadyAnimation;                                        // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            NotReadyAnimation;                                        // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BracketPulseAnimation;                                    // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  CooldownTimeWidget;                                       // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGaugeWidget*                                GaugeWidget;                                              // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  KeyNameWidget;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      GamepadButtonWidget;                                      // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      AbilityIconWidget;                                        // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPanelWidget*                                EMPWarningWidget;                                         // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      RechargingMaterialWidget;                                 // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                ReadyFXWidget;                                            // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RechargingMatInst;                                        // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerController*                    OwningShooterController;                                  // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ChargesImageWidget;                                       // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChargesMatInst;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterGamepadIconData*                     GamepadIconData;                                          // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x03A8(0x0030) MISSED OFFSET
	class UShooterAbility*                             Cached_Ability;                                           // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooterCharacter*                           PreviousAttachedCharacter;                                // 0x03E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAbilityWidget");
		return ptr;
	}


	void UpdateKeyMapping(bool bGamepad);
	TEnumAsByte<ESlateVisibility> IsAbilityReadyVisible();
	bool IsAbilityReady();
	bool IsAbilityActive();
	TEnumAsByte<ESlateVisibility> GetCoolDownVisible();
	float GetCoolDownPercent();
	int GetChargeCount();
	class UShooterAbility* GetAbility();
};


// Class ShooterGame.ShooterAlertWidget
// 0x0030 (0x0278 - 0x0248)
class UShooterAlertWidget : public UShooterUserWidget
{
public:
	class UWidgetAnimation*                            IntroAnimation;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            LoopAnimation;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            OutroAnimation;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0260(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               UI_HUD_Warning_Ozone_Oneshot;                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasIntroPlayed;                                          // 0x0270(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasOutroPlayed;                                          // 0x0271(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasInOzone;                                              // 0x0272(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0273(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterAlertWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterBindableKeyWidget
// 0x0020 (0x0268 - 0x0248)
class UShooterBindableKeyWidget : public UShooterUserWidget
{
public:
	struct FName                                       KeyBindingActionName;                                     // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             InputSwitcherWidget;                                      // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  KeyBindingWidget;                                         // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInputHoldWidget*                     ButtonBindingWidget;                                      // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBindableKeyWidget");
		return ptr;
	}


	void UpdateKeyBinding(bool bUsingGamepad);
};


// Class ShooterGame.ShooterBlitzGoalWidget
// 0x0000 (0x0248 - 0x0248)
class UShooterBlitzGoalWidget : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterBlitzGoalWidget");
		return ptr;
	}


	void UpdateColor(int Team);
};


// Class ShooterGame.ShooterInputHoldWidget
// 0x0018 (0x0260 - 0x0248)
class UShooterInputHoldWidget : public UShooterUserWidget
{
public:
	class UImage*                                      AnimatedRadialButton;                                     // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RadialMatInst;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterGamepadIconData*                     GamepadIconData;                                          // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInputHoldWidget");
		return ptr;
	}


	void UpdateButtonImage(const struct FKEY& KEY);
};


// Class ShooterGame.ShooterChangeCharacterWidget
// 0x0038 (0x0280 - 0x0248)
class UShooterChangeCharacterWidget : public UShooterUserWidget
{
public:
	class UWidgetSwitcher*                             InputModeSwitcherWidget;                                  // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVerticalBox*                                GamepadPromptWidget;                                      // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInputHoldWidget*                     GamepadBindingWidget;                                     // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVerticalBox*                                KeyboardPromptWidget;                                     // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  KeyboardBindingWidget;                                    // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  RoleDetailsKeyWidget;                                     // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInputHoldWidget*                     RoleDetailsButtonWidget;                                  // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterChangeCharacterWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterCharacterInfoWidget
// 0x00A8 (0x02F0 - 0x0248)
class UShooterCharacterInfoWidget : public UShooterUserWidget
{
public:
	float                                              ShowWarningBelowHealthPercent;                            // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoLinkToOwningHUDCharacter;                             // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	float                                              HealthRestoreAnimDisplayTime;                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class AShooterCharacter*                           AttachedToCharacter;                                      // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HealthBar;                                                // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ClipAmmo;                                                 // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PouchAmmo;                                                // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Pouch_23;                                                 // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Pouch_10;                                                 // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Pouch_46;                                                 // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Pouch_45;                                                 // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Pouch_224;                                                // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Pouch_309;                                                // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Pouch_12g;                                                // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PickupPrompt;                                             // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  FireAction;                                               // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PackLevel;                                                // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  GearLevel;                                                // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  GameShowEvent;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterUserWidget_RadialInteract*           RadialInteract;                                           // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterInfoWidget");
		return ptr;
	}


	void ShowSupplyLineError();
	void ShowProneError();
	void SetCharacter(class AShooterCharacter* InCharacter);
};


// Class ShooterGame.ShooterChatMasterWidget
// 0x0060 (0x02A8 - 0x0248)
class UShooterChatMasterWidget : public UShooterUserWidget
{
public:
	class UClass*                                      ChatEntryClass;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayAllInfoInBody;                                    // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class UEditableText*                               ChatInputWidget;                                          // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             ChatOutputSwitcher;                                       // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    ChatInputOverlayWidget;                                   // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    ChatOutputOverlayWidget;                                  // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UScrollBox*                                  AllScrollBoxWidget;                                       // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UScrollBox*                                  TeamScrollBoxWidget;                                      // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTimerHandle                                MessageReceivedTimerHandle;                               // 0x0288(0x0008) (Transient)
	class UTextBlock*                                  ButtonTextWidget;                                         // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChatWindowDisplayTime;                                    // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxMessageLength;                                         // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxMessagesToStore;                                       // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMultipleChatWindows;                                     // 0x02A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterChatMasterWidget");
		return ptr;
	}


	void TextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void TextChanged(const struct FText& NewText);
};


// Class ShooterGame.ShooterChatWidget
// 0x00D0 (0x0318 - 0x0248)
class UShooterChatWidget : public UShooterUserWidget
{
public:
	class UEditableText*                               ChatInputWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    ChatInputOverlayWidget;                                   // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             ChatOutputSwitcher;                                       // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    ChatOutputOverlayWidget;                                  // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMultiLineEditableTextBox*                   ChatOutputWidgetAll;                                      // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMultiLineEditableTextBox*                   ChatOutputWidgetTeam;                                     // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ButtonTextWidget;                                         // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTimerHandle                                MessageReceivedTimerHandle;                               // 0x0280(0x0008) (Transient)
	float                                              ChatWindowDisplayTime;                                    // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FSlateColor                                 ChatColorAll;                                             // 0x0290(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       AllText;                                                  // 0x02B8(0x0018) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 ChatColorTeam;                                            // 0x02D0(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       TeamText;                                                 // 0x02F8(0x0018) (Edit, DisableEditOnInstance)
	int                                                MaxMessageLength;                                         // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0314(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterChatWidget");
		return ptr;
	}


	void TextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void TextChanged(const struct FText& NewText);
};


// Class ShooterGame.ShooterCheatsheetWidget
// 0x0008 (0x0250 - 0x0248)
class UShooterCheatsheetWidget : public UShooterUserWidget
{
public:
	class UWidgetSwitcher*                             ClassSwitcherWidget;                                      // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCheatsheetWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterCompassWidget
// 0x00E0 (0x0328 - 0x0248)
class UShooterCompassWidget : public UShooterUserWidget
{
public:
	struct FVector                                     NorthVector;                                              // 0x0248(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DegreesToShow;                                            // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MarkerIconOffset;                                         // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SquadMarkerWidgetClass;                                   // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WaypointMarkerWidgetSize;                                 // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ComponentMarkerWidgetSize;                                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CompassImageWidget;                                       // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CompassDynamicMaterial;                                   // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<uint32_t, class UUserWidget*>                 SquadMarkerWidgets;                                       // 0x0288(0x0050) (ZeroConstructor, Transient)
	TMap<uint32_t, class UUserWidget*>                 ComponentMarkerWidgets;                                   // 0x02D8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCompassWidget");
		return ptr;
	}


	void ComponentMarkerRemoved(uint32_t ComponentID);
	void ComponentMarkerAdded(uint32_t ComponentID);
};


// Class ShooterGame.ShooterCrosshairWidget
// 0x0000 (0x0248 - 0x0248)
class UShooterCrosshairWidget : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCrosshairWidget");
		return ptr;
	}


	void WeaponSwapFireMode(bool StandardMode);
	void WeaponSuperFireStop();
	void WeaponSuperFireStart();
	void WeaponStartCharge();
	void WeaponRemoteDetonateInRange();
	void WeaponReloadStart();
	void WeaponReloadFinished();
	void WeaponPumpStart();
	void WeaponLoseKillTarget();
	void WeaponGainKillTarget();
	void WeaponFired();
	void WeaponEquipStarted();
	void WeaponEquipFinished();
	void WeaponChargeFire();
	void UserSettingsChanged();
	void ItemRecharge(int ItemIndex);
	void ItemReady(int ItemIndex);
	void ItemDeployed(int ItemIndex);
	void CrosshairColorChanged(const struct FLinearColor& NewColor);
};


// Class ShooterGame.ShooterDroneHealWidget
// 0x0008 (0x0250 - 0x0248)
class UShooterDroneHealWidget : public UShooterUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDroneHealWidget");
		return ptr;
	}


	void StopHealingAnimation();
	void PlayHealingAnimation();
};


// Class ShooterGame.ShooterEomFameWidget
// 0x0078 (0x02C0 - 0x0248)
class UShooterEomFameWidget : public UShooterUserWidget
{
public:
	int                                                MaxLevel;                                                 // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProgressBarIncreaseRate;                                  // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LevelUpSound;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PrestigeUpSound;                                          // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ProgressFillSound;                                        // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ProgressFillStop;                                         // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ProgressFillRTPC;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTextBlock*                                  CurrentLevelWidget;                                       // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                LevelBarWidget;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  NextLevelWidget;                                          // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      FameBoostWidget;                                          // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomFameWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEomKillCardWidget
// 0x0048 (0x0290 - 0x0248)
class UShooterEomKillCardWidget : public UShooterUserWidget
{
public:
	class UImage*                                      PlayerBackground;                                         // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      PlayerFrame;                                              // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      PlayerIcon;                                               // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TauntText;                                                // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerName;                                               // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  WeaponName;                                               // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      WeaponIcon;                                               // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  FansNumber;                                               // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  FollowNumber;                                             // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomKillCardWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEomRankWidget
// 0x0050 (0x0298 - 0x0248)
class UShooterEomRankWidget : public UShooterUserWidget
{
public:
	class UCurveFloat*                                 RankUpCurve;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               RankUpSound;                                              // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SuperlativeUpSound;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  PlayerRank;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TotalPlayers;                                             // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  SuperlativeText;                                          // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      BackgroundImage;                                          // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayMode;                                                 // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomRankWidget");
		return ptr;
	}


	void SuperlativeChanged();
	void RankCountdownComplete();
};


// Class ShooterGame.ShooterEomRewardsSlotWidget
// 0x0010 (0x0258 - 0x0248)
class UShooterEomRewardsSlotWidget : public UShooterUserWidget
{
public:
	class UImage*                                      RewardIcon;                                               // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  RewardDescription;                                        // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomRewardsSlotWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEomRewardsWidget
// 0x0010 (0x0258 - 0x0248)
class UShooterEomRewardsWidget : public UShooterUserWidget
{
public:
	TArray<class UShooterEomRewardsSlotWidget*>        RewardsWidgets;                                           // 0x0248(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomRewardsWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEOMStatsEntryWidget
// 0x0038 (0x0280 - 0x0248)
class UShooterEOMStatsEntryWidget : public UShooterUserWidget
{
public:
	struct FText                                       EntryName;                                                // 0x0248(0x0018) (Edit, BlueprintVisible)
	class UTextBlock*                                  NameWidget;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmountWidget;                                             // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  CashWidget;                                               // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             SignSwitcherWidget;                                       // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEOMStatsEntryWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEomStatsWidget
// 0x0040 (0x0288 - 0x0248)
class UShooterEomStatsWidget : public UShooterUserWidget
{
public:
	class UShooterEOMStatsEntryWidget*                 CashEntry;                                                // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEOMStatsEntryWidget*                 DeathTaxEntry;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEOMStatsEntryWidget*                 SubtotalEntry;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEOMStatsEntryWidget*                 WinnerBonusEntry;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEOMStatsEntryWidget*                 BoostEntry;                                               // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEOMStatsEntryWidget*                 TotalEntry;                                               // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEOMStatsEntryWidget*                 KillsEntry;                                               // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEOMStatsEntryWidget*                 AssistsEntry;                                             // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomStatsWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEomTeamEntryWidget
// 0x0020 (0x0268 - 0x0248)
class UShooterEomTeamEntryWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  TeammateName;                                             // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TeammateKills;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TeammateRevives;                                          // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TeammateCash;                                             // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomTeamEntryWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEomTeamWidget
// 0x0010 (0x0258 - 0x0248)
class UShooterEomTeamWidget : public UShooterUserWidget
{
public:
	class UClass*                                      TeammateEntryClass;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                TeamEntryContainer;                                       // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEomTeamWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterEoMWidgetRNR
// 0x0078 (0x02C0 - 0x0248)
class UShooterEoMWidgetRNR : public UShooterUserWidget
{
public:
	class UAkAudioEvent*                               LossMusic;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             EomOutcomeSwitcher;                                       // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                EomWinnerCanvas;                                          // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  EomWinnerName;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                EomLoserCanvas;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  EomLoserName;                                             // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEomStatsWidget*                      StatsWidget;                                              // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEomRankWidget*                       RankWidget;                                               // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEomRewardsWidget*                    RewardsWidget;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEomFameWidget*                       FameWidget;                                               // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEomTeamWidget*                       TeamWidget;                                               // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterEomKillCardWidget*                   KillCardWidget;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     SpectateButton;                                           // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     ExitButton;                                               // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEoMWidgetRNR");
		return ptr;
	}


	void SpectateClicked();
	void ExitClicked();
};


// Class ShooterGame.ShooterFadeWidget
// 0x0008 (0x0250 - 0x0248)
class UShooterFadeWidget : public UShooterUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterFadeWidget");
		return ptr;
	}


	void OnFadeComplete();
	void Cut(bool bToBlack);
	void BeginFade(bool bToBlack, float FadeLength);
};


// Class ShooterGame.ShooterGameModeStatusWidget
// 0x0008 (0x0250 - 0x0248)
class UShooterGameModeStatusWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  StatusTextWidget;                                         // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameModeStatusWidget");
		return ptr;
	}


	void StatusTextShown();
	void StatusTextHidden();
	void SetAndShowStatusText(const struct FText& InText);
	void HideStatusText();
};


// Class ShooterGame.ShooterGameModeWidget
// 0x0090 (0x02D8 - 0x0248)
class UShooterGameModeWidget : public UShooterUserWidget
{
public:
	int                                                LeftTeamNum;                                              // 0x0248(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                RightTeamNum;                                             // 0x024C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                LeftTeamPrimaryColor;                                     // 0x0250(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                RightTeamPrimaryColor;                                    // 0x0260(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                LeftTeamSecondaryColor;                                   // 0x0270(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                RightTeamSecondaryColor;                                  // 0x0280(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TeamText[0x2];                                            // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      TeamScoreboxes[0x2];                                      // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                SpectatorSpecificPanel;                                   // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                SpectatorWinningPanels[0x2];                              // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDedicatedSpectator;                                    // 0x02C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    ShooterPlayerController;                                  // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameModeWidget");
		return ptr;
	}


	void ScoreLimitChanged(int NewScoreLimit);
	void OnTeamUpdate();
	void LivePlayerCountsChanged(int LivePlayersTeam0, int LivePlayersTeam1);
};


// Class ShooterGame.ShooterTurfWarWidget
// 0x0000 (0x02D8 - 0x02D8)
class UShooterTurfWarWidget : public UShooterGameModeWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTurfWarWidget");
		return ptr;
	}


	void TurfWarZoneOwnership(int ZoneIndex, int ZoneTeam);
	void TurfWarInIntermissionChanged(bool bIntermissionActive);
};


// Class ShooterGame.ShooterTutorialGameModeWidget
// 0x0000 (0x02D8 - 0x02D8)
class UShooterTutorialGameModeWidget : public UShooterGameModeWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTutorialGameModeWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterHitReticleWidget
// 0x0000 (0x0248 - 0x0248)
class UShooterHitReticleWidget : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterHitReticleWidget");
		return ptr;
	}


	void UpdateHitPipParameters(float StartFraction, float EndFraction, TEnumAsByte<EHitType> HitType, bool bKill);
	void UpdateHitColorIntensity(float TimeSinceDamage);
};


// Class ShooterGame.ShooterHUD_LMS
// 0x0010 (0x0258 - 0x0248)
class UShooterHUD_LMS : public UShooterUserWidget
{
public:
	TEnumAsByte<EBigAdviceState>                       BigAdviceState;                                           // 0x0248(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UGameStateWidgetRnR*                         AliveCountWidget;                                         // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterHUD_LMS");
		return ptr;
	}


	void ZoneWarning_6();
	void ZoneWarning_31();
	void OnZoneCloseWarning(const struct FText& WarningText);
	void OnSpinToWinStart();
	void OnSpinToWinEnd();
	void OnHideAdvice();
	void OnFinalShowdownCountdown();
	void OnFinalShowdownClosing();
	void OnEnterWarningZone();
	void OnEnterDangerZone();
	void OnBikeRaceStart();
	void OnBikeRaceEnd();
	TEnumAsByte<ECharacterMovementStance> GetCurrentStance();
};


// Class ShooterGame.ShooterHudWidget
// 0x0048 (0x0290 - 0x0248)
class UShooterHudWidget : public UShooterUserWidget
{
public:
	class UShooterThreatIndicator*                     ThreatIndicatorWidget;                                    // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAbilityLayoutWidget*                        AbilityLayoutWidget;                                      // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UIdleWarningWidget*                          IdleWarnWidget;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterToastWidget*                         ToastWidget;                                              // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterChangeCharacterWidget*               InputHoldWidget;                                          // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterDroneHealWidget*                     DroneHealWidget;                                          // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterTutorialTooltipWidget*               ShooterTooltipWidget;                                     // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterGameModeStatusWidget*                GameModeStatusWidget;                                     // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCharacterInfoWidget*                 CharacterInfoWidget;                                      // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterHudWidget");
		return ptr;
	}


	void OnLocalRespawn();
};


// Class ShooterGame.ShooterInGameNotification
// 0x0100 (0x0348 - 0x0248)
class UShooterInGameNotification : public UShooterUserWidget
{
public:
	class UBorder*                                     NotificationPanels[0x3];                                  // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerNameTexts[0x2];                                     // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UHorizontalBox*                              KeyBindings[0x2];                                         // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      PS4Buttons[0x2];                                          // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            NotificationAnims[0x3];                                   // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02A8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInGameNotification");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCard
// 0x0008 (0x0250 - 0x0248)
class UShooterInvCard : public UShooterUserWidget
{
public:
	class UWidgetSwitcher*                             WidgetSwitcher;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCard");
		return ptr;
	}


	void OnInventoryUpdate();
};


// Class ShooterGame.ShooterInvCardAmmo
// 0x0018 (0x0260 - 0x0248)
class UShooterInvCardAmmo : public UShooterUserWidget
{
public:
	class UShooterInvCardAmmoInfo*                     CardInfo;                                                 // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInvCardAmmoGunList*                  GunList;                                                  // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmmoTypeDesc;                                             // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardAmmo");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardAmmoGunList
// 0x0010 (0x0258 - 0x0248)
class UShooterInvCardAmmoGunList : public UShooterUserWidget
{
public:
	TArray<class UShooterInventoryBaseSwitcherEntry*>  Entries;                                                  // 0x0248(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardAmmoGunList");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardAmmoGunListEntry
// 0x0010 (0x0258 - 0x0248)
class UShooterInvCardAmmoGunListEntry : public UShooterUserWidget
{
public:
	class UImage*                                      GunIcon;                                                  // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  GunName;                                                  // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardAmmoGunListEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardAmmoInfo
// 0x0018 (0x0260 - 0x0248)
class UShooterInvCardAmmoInfo : public UShooterUserWidget
{
public:
	class UImage*                                      AmmoIcon;                                                 // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmmoName;                                                 // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmmoAmount;                                               // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardAmmoInfo");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardItem
// 0x0030 (0x0278 - 0x0248)
class UShooterInvCardItem : public UShooterUserWidget
{
public:
	class UShooterInvCardItemInfo*                     CardInfo;                                                 // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      CardBG;                                                   // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ItemIcon;                                                 // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ItemPrizeIcon;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ItemIconBG;                                               // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemDesc;                                                 // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardItem");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardItemInfo
// 0x0028 (0x0270 - 0x0248)
class UShooterInvCardItemInfo : public UShooterUserWidget
{
public:
	class UImage*                                      ItemInfoBG;                                               // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemType;                                                 // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemName;                                                 // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  RarityText;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemAmount;                                               // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardItemInfo");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardWeapAttachList
// 0x0018 (0x0260 - 0x0248)
class UShooterInvCardWeapAttachList : public UShooterUserWidget
{
public:
	class UTextBlock*                                  LevelTextNumber;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UShooterInventoryBaseSwitcherEntry*>  Entries;                                                  // 0x0250(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardWeapAttachList");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardWeapAttachListEntry
// 0x0018 (0x0260 - 0x0248)
class UShooterInvCardWeapAttachListEntry : public UShooterUserWidget
{
public:
	class UImage*                                      AttachmentIcon;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      AttachmentIconBG;                                         // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AttachmentName;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardWeapAttachListEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardWeapon
// 0x0020 (0x0268 - 0x0248)
class UShooterInvCardWeapon : public UShooterUserWidget
{
public:
	class UImage*                                      CardBG;                                                   // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInvCardWeaponInfo*                   CardInfo;                                                 // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInvCardWeapAttachList*               AttachmentList;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInvCardWeapStatList*                 StatList;                                                 // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardWeapon");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardWeaponInfo
// 0x0060 (0x02A8 - 0x0248)
class UShooterInvCardWeaponInfo : public UShooterUserWidget
{
public:
	class UImage*                                      WeaponIcon;                                               // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      WeaponIconBG;                                             // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      WeaponInfoBG;                                             // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  WeaponType;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  WeaponName;                                               // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmmoType1;                                                // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmmoAmount1;                                              // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmmoType2;                                                // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AmmoAmount2;                                              // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      FireModeSingle;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      FireModeBurst;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      FireModeAuto;                                             // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardWeaponInfo");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardWeapStatList
// 0x0010 (0x0258 - 0x0248)
class UShooterInvCardWeapStatList : public UShooterUserWidget
{
public:
	TArray<class UShooterInvCardWeapStatListEntry*>    StatEntries;                                              // 0x0248(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardWeapStatList");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventory
// 0x00A0 (0x02E8 - 0x0248)
class UShooterInventory : public UShooterUserWidget
{
public:
	class UWidgetAnimation*                            MenuOpenAnimation;                                        // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            MenuCloseAnimation;                                       // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            MenuDimAnimation;                                         // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            MenuUnDimAnimation;                                       // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ScreenDimAnimation;                                       // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ScreenUnDimAnimation;                                     // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            NoAmmoAnimation;                                          // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  NoAmmoTextWidget;                                         // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInventoryEquippedItemInfo*           EquippedItemInfoWidget;                                   // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInvCard*                             MenuSelectionCard;                                        // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInvCard*                             WorldPickupCard;                                          // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInvCard*                             SwapWithCard;                                             // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UShooterInventoryBaseList*>           InventoryLists;                                           // 0x02A8(0x0010) (ZeroConstructor, Transient)
	class UShooterInventoryBaseList*                   CurrentlySelectedList;                                    // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInventoryListSwitcherEntry*          EntryBeingSwapped;                                        // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInventoryListSwitcherEntry*          EntryToSwapWith;                                          // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerController*                           LocalPlayerController;                                    // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventory");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryButtons
// 0x0010 (0x0258 - 0x0248)
class UShooterInventoryButtons : public UShooterUserWidget
{
public:
	TArray<class UWidgetSwitcher*>                     WidgetSwitchers;                                          // 0x0248(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryButtons");
		return ptr;
	}


	void UpdateKeyBinding(bool bUsingGamepad);
};


// Class ShooterGame.ShooterInventoryEquippedItemInfo
// 0x0030 (0x0278 - 0x0248)
class UShooterInventoryEquippedItemInfo : public UShooterUserWidget
{
public:
	class UTextBlock*                                  ItemNameWidget;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemClipAmountWidget;                                     // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemStockAmountWidget;                                    // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemAmmoText;                                             // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemAmmoType;                                             // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ItemFireRateWidget;                                       // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryEquippedItemInfo");
		return ptr;
	}


	void OnInventoryUpdate();
};


// Class ShooterGame.ShooterInventoryListBaseEntry
// 0x0018 (0x0260 - 0x0248)
class UShooterInventoryListBaseEntry : public UShooterUserWidget
{
public:
	class UImage*                                      ItemImageWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     DefaultResourceObject;                                    // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     CurrentResourceObject;                                    // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryListBaseEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryAmmoListEntry
// 0x0010 (0x0270 - 0x0260)
class UShooterInventoryAmmoListEntry : public UShooterInventoryListBaseEntry
{
public:
	class UTextBlock*                                  ItemNameWidget;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemAmountWidget;                                         // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryAmmoListEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryListEntry
// 0x0030 (0x0290 - 0x0260)
class UShooterInventoryListEntry : public UShooterInventoryListBaseEntry
{
public:
	class UTextBlock*                                  ItemTotalAmountWidget;                                    // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ItemKeyWidget;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      RarityBG;                                                 // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      LockIcon;                                                 // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             WidgetSwitcher;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryListEntry");
		return ptr;
	}


	void UpdateKeyBinding(bool bUsingGamepad);
};


// Class ShooterGame.ShooterInventoryListEntryEquipped
// 0x0010 (0x02A0 - 0x0290)
class UShooterInventoryListEntryEquipped : public UShooterInventoryListEntry
{
public:
	class UImage*                                      InventoryMenuSelectedBG;                                  // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInventory*                           InventoryWidget;                                          // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryListEntryEquipped");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventorySortableEntry
// 0x0008 (0x0250 - 0x0248)
class UShooterInventorySortableEntry : public UShooterUserWidget
{
public:
	struct FShooterInventorySortableEntryData          EntryConfig;                                              // 0x0248(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventorySortableEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterInvCardWeapStatListEntry
// 0x0018 (0x0268 - 0x0250)
class UShooterInvCardWeapStatListEntry : public UShooterInventorySortableEntry
{
public:
	class UTextBlock*                                  StatName;                                                 // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UShooterInventoryBaseSwitcherEntry*>  StatLevelEntries;                                         // 0x0258(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInvCardWeapStatListEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryBaseList
// 0x0020 (0x0270 - 0x0250)
class UShooterInventoryBaseList : public UShooterInventorySortableEntry
{
public:
	TArray<class UShooterInventoryListSwitcherEntry*>  InventoryEntries;                                         // 0x0250(0x0010) (ZeroConstructor, Transient)
	class UShooterInventory*                           InventoryContainer;                                       // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryBaseList");
		return ptr;
	}


	void OnInventoryUpdate();
};


// Class ShooterGame.ShooterInventoryAmmoList
// 0x0000 (0x0270 - 0x0270)
class UShooterInventoryAmmoList : public UShooterInventoryBaseList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryAmmoList");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryList
// 0x0000 (0x0270 - 0x0270)
class UShooterInventoryList : public UShooterInventoryBaseList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryList");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryPrizeList
// 0x0000 (0x0270 - 0x0270)
class UShooterInventoryPrizeList : public UShooterInventoryBaseList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryPrizeList");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryBaseSwitcherEntry
// 0x0008 (0x0258 - 0x0250)
class UShooterInventoryBaseSwitcherEntry : public UShooterInventorySortableEntry
{
public:
	class UWidgetSwitcher*                             WidgetSwitcher;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryBaseSwitcherEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterInventoryListSwitcherEntry
// 0x0038 (0x0290 - 0x0258)
class UShooterInventoryListSwitcherEntry : public UShooterInventoryBaseSwitcherEntry
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0258(0x0010) MISSED OFFSET
	class UImage*                                      InventoryMenuSwapTargetedBG;                              // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDragDropOperation*                          DragDropOperation;                                        // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInventoryBaseList*                   ListContainer;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerController*                    LocalPlayerController;                                    // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInventory*                           InventoryWidget;                                          // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterInventoryListSwitcherEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterJuggernautWidget
// 0x0010 (0x0258 - 0x0248)
class UShooterJuggernautWidget : public UShooterUserWidget
{
public:
	class UProgressBar*                                JuggerBarWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreviousFuelPercent;                                      // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFuelDepleting;                                           // 0x0254(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterJuggernautWidget");
		return ptr;
	}


	void ToggleFuelState(bool bActive);
};


// Class ShooterGame.ShooterKillFeed
// 0x0078 (0x02C0 - 0x0248)
class UShooterKillFeed : public UShooterUserWidget
{
public:
	class UClass*                                      DeathMessageClass;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDeathMessages;                                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VisibleTime;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScrollSpeed;                                              // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NotRelevantKillAlpha;                                     // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x0264(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SelfColor;                                                // 0x0274(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SameTeamColor;                                            // 0x0284(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UVerticalBox*                                MessageListWidget;                                        // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UShooterKillFeedMessage*>             KillFeedMessagePool;                                      // 0x02A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterKillFeed");
		return ptr;
	}


	void OnDedicatedSpectatorToggled(bool bEnabled);
};


// Class ShooterGame.ShooterLockOnIcon
// 0x0000 (0x0248 - 0x0248)
class UShooterLockOnIcon : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLockOnIcon");
		return ptr;
	}


	void UpdateLockCursor(float LockCursor);
};


// Class ShooterGame.ShooterMapWidget
// 0x0170 (0x03B8 - 0x0248)
class UShooterMapWidget : public UShooterUserWidget
{
public:
	float                                              TotalMapSize;                                             // 0x0248(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MapShowSize;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCenterOnPlayer;                                          // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	struct FVector                                     MapCenter;                                                // 0x0254(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArrowAngleOffset;                                         // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NorthVector;                                              // 0x0264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MapMoveSpeedCurve;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MapMoveSpeed;                                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 MapZoomSpeedCurve;                                        // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MapZoomSpeed;                                             // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMapShowSize;                                           // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MapMarkerRadius;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDraggingMap;                                             // 0x0294(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	class UClass*                                      SquadMarkerWidgetClass;                                   // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WaypointMarkerWidgetSize;                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ComponentMarkerWidgetSize;                                // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MapImageWidget;                                           // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MapMaterialInstance;                                      // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ArrowWidget;                                              // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<uint32_t, class UUserWidget*>                 SquadMarkerWidgets;                                       // 0x02C8(0x0050) (ZeroConstructor, Transient)
	TMap<uint32_t, class UUserWidget*>                 ComponentMarkerWidgets;                                   // 0x0318(0x0050) (ZeroConstructor, Transient)
	struct FVector                                     CurrentMapPosition;                                       // 0x0368(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentMapShowSize;                                       // 0x0374(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0378(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMapWidget");
		return ptr;
	}


	struct FEventReply MyMarkerClicked(const struct FGeometry& InGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply MapScrolled(const struct FGeometry& InGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply MapClicked(const struct FGeometry& InGeometry, const struct FPointerEvent& MouseEvent);
	void ComponentMarkerRemoved(uint32_t ComponentID);
	void ComponentMarkerAdded(uint32_t ComponentID);
};


// Class ShooterGame.ShooterMovementKeyBindingWidget
// 0x0028 (0x0270 - 0x0248)
class UShooterMovementKeyBindingWidget : public UShooterUserWidget
{
public:
	class UWidgetSwitcher*                             InputModeSwitcherWidget;                                  // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  UpTextBlock;                                              // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  DownTextBlock;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  LeftTextBlock;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  RightTextBlock;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterMovementKeyBindingWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterNPCGameModesWidget
// 0x0008 (0x0250 - 0x0248)
class UShooterNPCGameModesWidget : public UShooterUserWidget
{
public:
	class UShooterUserWidget*                          CarryIconWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterNPCGameModesWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterNPCHealMeWidget
// 0x0000 (0x0248 - 0x0248)
class UShooterNPCHealMeWidget : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterNPCHealMeWidget");
		return ptr;
	}


	void ToggleHealLockOn(bool bActive);
	void OnResetVisuals();
	void OnRequestHeal();
	void OnHealPerformed();
};


// Class ShooterGame.ShooterNPCHealthBar
// 0x0068 (0x02B0 - 0x0248)
class UShooterNPCHealthBar : public UShooterUserWidget
{
public:
	class UImage*                                      HealthBarWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      MitigationWidget;                                         // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HealthBarInstanceDynamic;                                 // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           AttachedCharacter;                                        // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FShooterHealthBarColors                     CachedHealthBarColors;                                    // 0x0268(0x0044) (Transient)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02AC(0x0001) MISSED OFFSET
	bool                                               bIsForSpectatorScoreboard;                                // 0x02AD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterNPCHealthBar");
		return ptr;
	}


	void SetCharacter(class AShooterCharacter* Character, bool bForSpectatorScoreboard);
	void OnRequestHeal();
	void OnLowHealthStateChange(bool bLowHealth);
};


// Class ShooterGame.ShooterNPCMasterWidget
// 0x0040 (0x0288 - 0x0248)
class UShooterNPCMasterWidget : public UShooterUserWidget
{
public:
	bool                                               bDisplayBarsOnEnemies;                                    // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              EnemyHealthDisplayTime;                                   // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCanvasPanel*                                ScaleCanvasWidget;                                        // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterNPCHealthBar*                        HealthBarWidget;                                          // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterNPCNameWidget*                       NameWidget;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterNPCHealMeWidget*                     HealMeWidget;                                             // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterNPCGameModesWidget*                  GameModeWidget;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  DistanceText;                                             // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           AttachedCharacter;                                        // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterNPCMasterWidget");
		return ptr;
	}


	void SetCharacter(class AShooterCharacter* Character);
	class UCanvasPanel* GetScaleCanvasWidget();
	class UShooterNPCNameWidget* GetNameWidget();
	class UShooterNPCHealthBar* GetHealthBarWidget();
	class UShooterNPCHealMeWidget* GetHealMeWidget();
};


// Class ShooterGame.ShooterNPCNameWidget
// 0x0058 (0x02A0 - 0x0248)
class UShooterNPCNameWidget : public UShooterUserWidget
{
public:
	class AShooterCharacter*                           AttachedCharacter;                                        // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             PipSwitcherWidget;                                        // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DefaultPlayerWidget;                                      // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HealerWidget;                                             // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ArmoredJuggernautWidget;                                  // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KillConfMVPWidget;                                        // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  NameWidget;                                               // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0280(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterNPCNameWidget");
		return ptr;
	}


	void ToggleHealLockOn(bool bActive);
	void SetCharacter(class AShooterCharacter* Character);
	void OnUpdatePlayerName(const struct FText& NewName);
};


// Class ShooterGame.ShooterObjectiveWorldWidget
// 0x0010 (0x0258 - 0x0248)
class UShooterObjectiveWorldWidget : public UShooterUserWidget
{
public:
	bool                                               bAlwaysDisplayTwoDigitMinutes;                            // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UTextBlock*                                  CountdownTimerWidget;                                     // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterObjectiveWorldWidget");
		return ptr;
	}


	void SetCountdownTimer(int NewTimeInSeconds);
};


// Class ShooterGame.ShooterOptionsMenu
// 0x0038 (0x0280 - 0x0248)
class UShooterOptionsMenu : public UShooterUserWidget
{
public:
	struct FKEY                                        AltReturnToGameKey;                                       // 0x0248(0x0018) (Edit, DisableEditOnInstance)
	class UAkAudioEvent*                               ClickedSound;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HoveredSound;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AppearedSound;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HiddenSound;                                              // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterOptionsMenu");
		return ptr;
	}


	void ToggleOptionsMenu();
	void SetMapAndModeNames(const struct FText& ModeName, const struct FText& MapName, const struct FText& ModeDescription);
	void QuitGame();
	void PreGameEnded();
	void OnSpectatorToggled(bool bSpectator);
	void LeaveWithParty();
	void LeaveMatch();
	void GoToSettings();
	void GoToRoleDetails();
	void GoToProfile();
	void GoToPlayerOptions();
	void GoToCharacterSelect();
	class UTexture2D* GetModeImage();
	class UTexture2D* GetMapImage();
};


// Class ShooterGame.ShooterPlayerList
// 0x0038 (0x0280 - 0x0248)
class UShooterPlayerList : public UShooterUserWidget
{
public:
	bool                                               bSortPlayers;                                             // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSwapTeamsIfLocalPlayerIsBreakers;                        // 0x0249(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bListBots;                                                // 0x024A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x35];                                      // 0x024B(0x0035) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerList");
		return ptr;
	}


	void OnEntryVisibilityChanged(class UShooterPlayerListEntry* Entry, bool bIsVisible);
};


// Class ShooterGame.ShooterScoreboard
// 0x0048 (0x02C8 - 0x0280)
class UShooterScoreboard : public UShooterPlayerList
{
public:
	TArray<class UVerticalBox*>                        PlayerWidgetsForTeam_Highlights;                          // 0x0280(0x0010) (ZeroConstructor, Transient)
	class UTextBlock*                                  MapNameWidget;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  GameModeNameWidget;                                       // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  GameTimerWidget;                                          // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             RoleDetailsSwitcherWidget;                                // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  RoleDetailsKeyWidget;                                     // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInputHoldWidget*                     RoleDetailsButtonWidget;                                  // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerController*                    PlayerController;                                         // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreboard");
		return ptr;
	}

};


// Class ShooterGame.ShooterSpecScoreboardBar
// 0x0000 (0x0280 - 0x0280)
class UShooterSpecScoreboardBar : public UShooterPlayerList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSpecScoreboardBar");
		return ptr;
	}

};


// Class ShooterGame.ShooterPlayerListEntry
// 0x0008 (0x0250 - 0x0248)
class UShooterPlayerListEntry : public UShooterUserWidget
{
public:
	struct FShooterPlayerListEntryData                 EntryConfig;                                              // 0x0248(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerListEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterPlayerImageEntry
// 0x0048 (0x0298 - 0x0250)
class UShooterPlayerImageEntry : public UShooterPlayerListEntry
{
public:
	struct FShooterPlayerImageEntryData                PlayerImageEntryConfig;                                   // 0x0250(0x0020) (Edit, BlueprintVisible)
	class UImage*                                      PlayerImageWidget;                                        // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     DefaultResourceObject;                                    // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     CurrentResourceObject;                                    // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DeadImageWidget;                                          // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EShooterPlayerStatus>                  CurrentPlayerStatus;                                      // 0x0290(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerImageEntry");
		return ptr;
	}


	void OnPlayerStatusChanged(TEnumAsByte<EShooterPlayerStatus> PlayerStatus);
};


// Class ShooterGame.ShooterScoreboardEntry
// 0x0080 (0x0318 - 0x0298)
class UShooterScoreboardEntry : public UShooterPlayerImageEntry
{
public:
	class UImage*                                      TwitchLiveIconWidget;                                     // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  NameTextWidget;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UScrollBox*                                  NameScrollBoxWidget;                                      // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ScoreTextWidget;                                          // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  KillsTextWidget;                                          // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AssistsTextWidget;                                        // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  DeathsTextWidget;                                         // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PingTextWidget;                                           // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  HealsScoreWidget;                                         // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerLevelWidget;                                        // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             VoipSwitcherWidget;                                       // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      PartyImageWidget;                                         // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	class UImage*                                      RankIconWidget;                                           // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerState*                         CachedPlayerState;                                        // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreboardEntry");
		return ptr;
	}

};


// Class ShooterGame.ShooterSpecScoreboardEntry
// 0x0028 (0x0340 - 0x0318)
class UShooterSpecScoreboardEntry : public UShooterScoreboardEntry
{
public:
	class AShooterCharacter*                           ShooterCharacterReference;                                // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterNPCHealthBar*                        HealthGauge;                                              // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HealthSymbol;                                             // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAbilityLayoutWidget*                        ULTAbilityWidget;                                         // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCarryObject*                         CurrentCarryObject;                                       // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSpecScoreboardEntry");
		return ptr;
	}


	void OnCarryObjectChanged(class AShooterCarryObject* CarryObject);
};


// Class ShooterGame.ShooterPlayerScoreWidget
// 0x0030 (0x0278 - 0x0248)
class UShooterPlayerScoreWidget : public UShooterUserWidget
{
public:
	class UWidgetSwitcher*                             MicSwitcher;                                              // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerName;                                               // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             StanceSwitcher;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerCash;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerKills;                                              // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  SpectatingText;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerScoreWidget");
		return ptr;
	}


	void OnSpectatorTargetChanged(class AShooterCharacter* NewTarget);
};


// Class ShooterGame.ShooterPlayerStatusWidget
// 0x0058 (0x02A0 - 0x0248)
class UShooterPlayerStatusWidget : public UShooterUserWidget
{
public:
	struct FLinearColor                                HealthBarFillColorAlive;                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HealthBarFillColorDown;                                   // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                HealthBar;                                                // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                EnergyBar;                                                // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                FatigueBar;                                               // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                ArmorBar;                                                 // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ArmorLevel;                                               // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HelmetBar;                                                // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  HelmetLevel;                                              // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerStatusWidget");
		return ptr;
	}


	void OnAdrenalineBoost();
};


// Class ShooterGame.ShooterRadarIcon
// 0x0010 (0x0258 - 0x0248)
class UShooterRadarIcon : public UShooterUserWidget
{
public:
	class AShooterCharacter*                           Target;                                                   // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x0250(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterRadarIcon");
		return ptr;
	}


	void HideImages();
	void FadeOutWidget();
	void FadeInWidget();
};


// Class ShooterGame.ShooterRadar
// 0x0030 (0x0278 - 0x0248)
class UShooterRadar : public UShooterUserWidget
{
public:
	struct FShooterRadarData                           RadarConfig;                                              // 0x0248(0x0018) (Edit, BlueprintVisible)
	TArray<class UShooterRadarIcon*>                   RadarIcons;                                               // 0x0260(0x0010) (ZeroConstructor, Transient)
	class AShooterCharacter*                           Player;                                                   // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterRadar");
		return ptr;
	}


	void UpdateRadarIcon(class UShooterRadarIcon* RadarIcon, const struct FShooterRadarIconSet& EnemyIconSet, const struct FShooterRadarIconSet& TeamIconSet);
	void GatherActiveRadarIcons(class UOverlay* ParentOverlay, TArray<class UShooterRadarIcon*>* OutActiveRadarIcons);
};


// Class ShooterGame.ShooterScoreDebugWidget
// 0x0030 (0x0278 - 0x0248)
class UShooterScoreDebugWidget : public UShooterUserWidget
{
public:
	class UCanvasPanel*                                MainPanelWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                HelpPanelWidget;                                          // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TotalScoreWidget;                                         // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVerticalBox*                                ListWidget;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterScoreDebugWidgetMessage*             TemplateWidgetMessage;                                    // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreDebugWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterScoreDebugWidgetMessage
// 0x0000 (0x0248 - 0x0248)
class UShooterScoreDebugWidgetMessage : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreDebugWidgetMessage");
		return ptr;
	}

};


// Class ShooterGame.ShooterScoreLogWidget
// 0x00E8 (0x0330 - 0x0248)
class UShooterScoreLogWidget : public UShooterUserWidget
{
public:
	class UClass*                                      ScoreMessageClass;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxScoreMessages;                                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VisibleTime;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTimeBeforeHide;                                 // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxQueueDuration;                                         // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalAlphaFade;                                        // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TypeWriterSpeed;                                          // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowScores : 1;                                           // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsPrimaryWidget : 1;                                     // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAnimationInCode : 1;                                     // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFadeIn : 1;                                              // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFadeOut : 1;                                             // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNamesUpperCase : 1;                                      // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bShowZeroScores : 1;                                      // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPuntQueuedMultiKillsWhenHigherPriorityActive : 1;        // 0x026C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPuntQueuedMultiKillsOnlyWhenSameEventTime : 1;           // 0x026D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x026E(0x0002) MISSED OFFSET
	int                                                DebugIdentifier;                                          // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScrollSpeed;                                              // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScrollWidgetSize;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillBeepInterferenceTime;                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               GenericScoreSound;                                        // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FScoringMessage>                     VisibleMessages;                                          // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FScoringMessage>                     QueuedMessages;                                           // 0x02A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class UPanelWidget*                                PrimaryWidget;                                            // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UPanelWidget*                                MessageListWidget;                                        // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UPanelWidget*                                TemplateMessagesWidget;                                   // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FUserWidgetPool                             WidgetPool;                                               // 0x02C8(0x0050) (Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0318(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreLogWidget");
		return ptr;
	}

};


// Class ShooterGame.ShooterScoreMessage
// 0x0088 (0x02D0 - 0x0248)
class UShooterScoreMessage : public UShooterUserWidget
{
public:
	TEnumAsByte<EScoreVisualPriority>                  VisualPriority;                                           // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVictim;                                              // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowScore;                                               // 0x024A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x024B(0x0005) MISSED OFFSET
	class UTextBlock*                                  DescriptionWidget;                                        // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ScoringPlayerNameWidget;                                  // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ScoreValueWidget;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  VictimNameWidget;                                         // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      IconWidget;                                               // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            EntryAnimation;                                           // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ExitAnimation;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            TransAnimation;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0290(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterScoreMessage");
		return ptr;
	}

};


// Class ShooterGame.ShooterShieldGenWidget
// 0x0000 (0x0248 - 0x0248)
class UShooterShieldGenWidget : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterShieldGenWidget");
		return ptr;
	}


	void UpdateHealth(float healthCursor);
};


// Class ShooterGame.ShooterSubtitles
// 0x0008 (0x0250 - 0x0248)
class UShooterSubtitles : public UShooterUserWidget
{
public:
	class UTextBlock*                                  SubtitlesWidget;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSubtitles");
		return ptr;
	}

};


// Class ShooterGame.ShooterThreatIndicator
// 0x0170 (0x03B8 - 0x0248)
class UShooterThreatIndicator : public UShooterUserWidget
{
public:
	class UTexture2D*                                  MeleeTexture;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  RangedTexture;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ThreatColor;                                              // 0x0258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThreatCircleRadius;                                       // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeRenderScale;                                         // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosiveRenderScale;                                     // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BallisticRenderScale;                                     // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScaleY;                                                // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScaleY;                                                // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamageValue;                                           // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamageValue;                                           // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageSizeInterpRate;                                     // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           MaxThreats;                                               // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Threat2DFadeTime;                                         // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	struct FThreatIndicator2D                          Threats2D[0x5];                                           // 0x0298(0x0028) (Transient)
	int                                                CurrentThreatIndex;                                       // 0x0360(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UImage*                                      Images[0x5];                                              // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                CanvasPanels[0x5];                                        // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterThreatIndicator");
		return ptr;
	}


	void PlayHitAnim(int Index);
	void ClearThreatIndicators();
};


// Class ShooterGame.ShooterToastWidget
// 0x0088 (0x02D0 - 0x0248)
class UShooterToastWidget : public UShooterUserWidget
{
public:
	float                                              ToastMessageDuration;                                     // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UShooterAchievementData*                     AchievementImageData;                                     // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ToastReceivedSound;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ToastSoundDelay;                                          // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	TMap<class FString, struct FToastMessageDefinition> ToastMessagesWaitingOnLoad;                               // 0x0268(0x0050) (ZeroConstructor, Transient)
	TArray<struct FToastMessageDefinition>             PendingToastMessages;                                     // 0x02B8(0x0010) (ZeroConstructor, Transient)
	struct FTimerHandle                                CurrentToastTimerHandle;                                  // 0x02C8(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterToastWidget");
		return ptr;
	}


	void QueueToastMessage(const struct FText& ToastDescription, const struct FText& ToastLabel, const struct FText& FlairText1, const struct FText& FlairText2, const class FString& ToastImageName);
	void BPToastMessage(const struct FText& ToastDescription, const struct FText& ToastLabel, const struct FText& FlairText1, const struct FText& FlairText2, class UTexture2D* AchievementImage);
	void BPHideToast();
};


// Class ShooterGame.ShooterTooltipWidget
// 0x0000 (0x0248 - 0x0248)
class UShooterTooltipWidget : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTooltipWidget");
		return ptr;
	}


	void SetText(const struct FText& InText);
};


// Class ShooterGame.ShooterTutorialTooltipWidget
// 0x0030 (0x0278 - 0x0248)
class UShooterTutorialTooltipWidget : public UShooterUserWidget
{
public:
	class UWidgetSwitcher*                             InputSwitcherWidget;                                      // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  KeyTextWidget;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterInputHoldWidget*                     ButtonWidget;                                             // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterMovementKeyBindingWidget*            MovementKeysWidget;                                       // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ActionTextWidget;                                         // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  FlavorTextWidget;                                         // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterTutorialTooltipWidget");
		return ptr;
	}


	void UpdateAndShowTooltipInfo(const struct FTutorialToolTipInfo& ToolTipInfo);
	void SetTooltipKeybinding(const struct FName& ActionName, bool bMovementAction);
	void HideToolTip();
};


// Class ShooterGame.ShooterUserWidget_ATM
// 0x0010 (0x0258 - 0x0248)
class UShooterUserWidget_ATM : public UShooterUserWidget
{
public:
	class UCanvasPanel*                                Menu;                                                     // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  AccountBalance;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterUserWidget_ATM");
		return ptr;
	}


	void ToggleMenu();
	void ShowMenu();
	void OnWithdraw();
	void OnDeposit();
	void HideMenu();
};


// Class ShooterGame.ShooterUserWidget_HealByMessage
// 0x0028 (0x0270 - 0x0248)
class UShooterUserWidget_HealByMessage : public UShooterUserWidget
{
public:
	float                                              MessageDuration;                                          // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UCanvasPanel*                                HealedByPanelWidget;                                      // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerNameWidget;                                         // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            HealedByAnimation;                                        // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterUserWidget_HealByMessage");
		return ptr;
	}

};


// Class ShooterGame.ShooterUserWidget_RadialInteract
// 0x0008 (0x0250 - 0x0248)
class UShooterUserWidget_RadialInteract : public UShooterUserWidget
{
public:
	class UImage*                                      CircleBar;                                                // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterUserWidget_RadialInteract");
		return ptr;
	}

};


// Class ShooterGame.ShooterVictoryDefeatScreen
// 0x0048 (0x0290 - 0x0248)
class UShooterVictoryDefeatScreen : public UShooterUserWidget
{
public:
	class UWidgetAnimation*                            VictoryAnimation;                                         // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            DefeatAnimation;                                          // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  VictoryText;                                              // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPanelWidget*                                VictoryIcon;                                              // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  DefeatText;                                               // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPanelWidget*                                DefeatIcon;                                               // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  LawScoreText;                                             // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  BreakerScoreText;                                         // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Initialized;                                              // 0x0288(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterVictoryDefeatScreen");
		return ptr;
	}

};


// Class ShooterGame.ShooterWidget_MarkedForDeath
// 0x0008 (0x0250 - 0x0248)
class UShooterWidget_MarkedForDeath : public UShooterUserWidget
{
public:
	class UTextBlock*                                  MarkedText;                                               // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWidget_MarkedForDeath");
		return ptr;
	}

};


// Class ShooterGame.TeammateStatusWidget
// 0x0060 (0x02A8 - 0x0248)
class UTeammateStatusWidget : public UShooterUserWidget
{
public:
	struct FLinearColor                                HealthBarFillColorAlive;                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HealthBarFillColorDown;                                   // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  NameWidget;                                               // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             StanceSwitcherWidget;                                     // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HealthBarWidget;                                          // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                ArmorBarWidget;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ArmorLevelWidget;                                         // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HelmetBarWidget;                                          // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  HelmetLevelWidget;                                        // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerState*                         PlayerState;                                              // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TeammateStatusWidget");
		return ptr;
	}

};


// Class ShooterGame.TeammateWorldWidget
// 0x0030 (0x0278 - 0x0248)
class UTeammateWorldWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  PlayerNameWidget;                                         // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                PlayerHealthBar;                                          // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0258(0x0018) MISSED OFFSET
	class AShooterCharacter*                           CurrentShooterCharacter;                                  // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TeammateWorldWidget");
		return ptr;
	}

};


// Class ShooterGame.VariantClassSelectWidget
// 0x0000 (0x0248 - 0x0248)
class UVariantClassSelectWidget : public UShooterUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.VariantClassSelectWidget");
		return ptr;
	}

};


// Class ShooterGame.ZonelockTimerWidget
// 0x0010 (0x0258 - 0x0248)
class UZonelockTimerWidget : public UShooterUserWidget
{
public:
	class UTextBlock*                                  TimerWidget;                                              // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ZonelockTimerWidget");
		return ptr;
	}


	void OnZoneTimerWarningStop();
	void OnZoneTimerWarningStart();
};


// Class ShooterGame.ShooterWeapon_Detonator
// 0x0030 (0x0FF0 - 0x0FC0)
class AShooterWeapon_Detonator : public AShooterWeapon
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FC0(0x0010) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockRadius;                                              // 0x0FD8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0FDC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Detonator");
		return ptr;
	}


	void ServerDetonatePlacedExplosives();
};


// Class ShooterGame.ShooterWeapon_DualWield
// 0x0040 (0x1000 - 0x0FC0)
class AShooterWeapon_DualWield : public AShooterWeapon
{
public:
	class USkeletalMeshComponent*                      Mesh3P_L;                                                 // 0x0FC0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       MeshLAttachPointName;                                     // 0x0FC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldSetMasterPoseOnLWeapon;                             // 0x0FD0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0FD1(0x0007) MISSED OFFSET
	class FString                                      MasterPoseLReplaceNamespace;                              // 0x0FD8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      MasterPoseLReplaceWith;                                   // 0x0FE8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0FF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_DualWield");
		return ptr;
	}

};


// Class ShooterGame.ShooterWeapon_Placed
// 0x0010 (0x0FD0 - 0x0FC0)
class AShooterWeapon_Placed : public AShooterWeapon
{
public:
	struct FVector                                     PlacedItemOffset;                                         // 0x0FC0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlaceOnGround;                                           // 0x0FCC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FCD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Placed");
		return ptr;
	}

};


// Class ShooterGame.ShooterWeapon_SupplyLine
// 0x0000 (0x0FD0 - 0x0FD0)
class AShooterWeapon_SupplyLine : public AShooterWeapon_Placed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_SupplyLine");
		return ptr;
	}


	void ClientNotifyUseFailed();
};


// Class ShooterGame.ShooterWeapon_Scanner
// 0x0010 (0x0FD0 - 0x0FC0)
class AShooterWeapon_Scanner : public AShooterWeapon
{
public:
	class UClass*                                      MarkedPositionActorClass;                                 // 0x0FC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0FC8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Scanner");
		return ptr;
	}


	void NetMulticastPingEnemiesForTeam(TArray<struct FVector> EnemyPositionsInRange, class AShooterCharacter* UsingCharacter);
};


// Class ShooterGame.ShooterWeapon_Shotgun
// 0x0000 (0x0FC0 - 0x0FC0)
class AShooterWeapon_Shotgun : public AShooterWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Shotgun");
		return ptr;
	}

};


// Class ShooterGame.ShooterWeapon_Terminator
// 0x0000 (0x0FC0 - 0x0FC0)
class AShooterWeapon_Terminator : public AShooterWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Terminator");
		return ptr;
	}

};


// Class ShooterGame.ShooterWheeledVehicle
// 0x0018 (0x0420 - 0x0408)
class AShooterWheeledVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	class AShooterCharacter*                           Driver;                                                   // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWheeledVehicle");
		return ptr;
	}


	void OnInteract(class AShooterCharacter* OtherActor);
};


// Class ShooterGame.ShooterWorldSettings
// 0x0008 (0x0578 - 0x0570)
class AShooterWorldSettings : public AWorldSettings
{
public:
	class UTexture2D*                                  MapImage;                                                 // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWorldSettings");
		return ptr;
	}

};


// Class ShooterGame.TerminatorSpawner
// 0x0090 (0x0428 - 0x0398)
class ATerminatorSpawner : public AActor
{
public:
	struct FName                                       ExhaustSocketName;                                        // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ControllerClass;                                          // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ExhaustParticleSystem;                                    // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticleSystem;                                     // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnParticleSystem;                                      // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               RocketSound;                                              // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SpawnSound;                                               // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSpeed;                                                // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostArrivalWaitTime;                                      // 0x03E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ExhaustParticleSystemComponent;                           // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ImpactParticleSystemComponent;                            // 0x03F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FTerminatorInfo                             TerminatorInfo;                                           // 0x03F8(0x0008) (Transient)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0400(0x0014) MISSED OFFSET
	struct FVector                                     FinalDestination;                                         // 0x0414(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0420(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TerminatorSpawner");
		return ptr;
	}


	void NetMulticast_OnSpawnDone();
};


// Class ShooterGame.WinnersPodiumPlayerStart
// 0x0000 (0x03C8 - 0x03C8)
class AWinnersPodiumPlayerStart : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.WinnersPodiumPlayerStart");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
