#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Basic.hpp"
#include "RH_CoreUObject_classes.hpp"
#include "RH_Engine_classes.hpp"
#include "RH_SlateCore_classes.hpp"
#include "RH_InputCore_classes.hpp"
#include "RH_Slate_classes.hpp"
#include "RH_UMG_classes.hpp"
#include "RH_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ShooterGame.EHitType
enum class EHitType : uint8_t
{
	EHitType__Normal               = 0,
	EHitType__Headshot             = 1,
	EHitType__Shield               = 2,
	EHitType__Invalid              = 3,
	EHitType__EHitType_MAX         = 4
};


// Enum ShooterGame.EShooterAllegiance
enum class EShooterAllegiance : uint8_t
{
	EShooterAllegiance__Breakers   = 0,
	EShooterAllegiance__Law        = 1,
	EShooterAllegiance__Count      = 2,
	EShooterAllegiance__Invalid    = 3,
	EShooterAllegiance__EShooterAllegiance_MAX = 4
};


// Enum ShooterGame.EBluePrintFlowControl
enum class EBluePrintFlowControl : uint8_t
{
	EBluePrintFlowControl__Failure = 0,
	EBluePrintFlowControl__Success = 1,
	EBluePrintFlowControl__EBluePrintFlowControl_MAX = 2
};


// Enum ShooterGame.EDialogueConflictResolution
enum class EDialogueConflictResolution : uint8_t
{
	EDialogueConflictResolution__Discard = 0,
	EDialogueConflictResolution__Wait = 1,
	EDialogueConflictResolution__DiscardOldest = 2,
	EDialogueConflictResolution__EDialogueConflictResolution_MAX = 3
};


// Enum ShooterGame.ELootType
enum class ELootType : uint8_t
{
	ELootType__Cash                = 0,
	ELootType__Food                = 1,
	ELootType__HealthPack          = 2,
	ELootType__HealthPack01        = 3,
	ELootType__HealthPack02        = 4,
	ELootType__Prize_boombox       = 5,
	ELootType__Prize_tv            = 6,
	ELootType__Prize_cellphone     = 7,
	ELootType__Prize_walkman       = 8,
	ELootType__Prize_gameconsole   = 9,
	ELootType__Prize_bigcheck      = 10,
	ELootType__Prize_alps          = 11,
	ELootType__Prize_bahamas       = 12,
	ELootType__Prize_cleveland     = 13,
	ELootType__Ammo                = 14,
	ELootType__Ammo01              = 15,
	ELootType__Ammo02              = 16,
	ELootType__Ammo03              = 17,
	ELootType__Ammo04              = 18,
	ELootType__Ammo05              = 19,
	ELootType__Ammo06              = 20,
	ELootType__Ammo07              = 21,
	ELootType__Ammo_Rocket         = 22,
	ELootType__Ammo_Arrow          = 23,
	ELootType__Helmet              = 24,
	ELootType__Helmet01            = 25,
	ELootType__Helmet02            = 26,
	ELootType__Helmet03            = 27,
	ELootType__Vest                = 28,
	ELootType__Vest01              = 29,
	ELootType__Vest02              = 30,
	ELootType__Vest03              = 31,
	ELootType__Weapon              = 32,
	ELootType__Weapon_hipower      = 33,
	ELootType__Weapon_ppk          = 34,
	ELootType__Weapon_python       = 35,
	ELootType__Weapon_wildmagnum   = 36,
	ELootType__Weapon_spas12       = 37,
	ELootType__Weapon01            = 38,
	ELootType__Weapon_ithica       = 39,
	ELootType__Weapon_sawedoff     = 40,
	ELootType__Weapon_uzi          = 41,
	ELootType__Weapon_tec9         = 42,
	ELootType__Weapon_hitec        = 43,
	ELootType__Weapon_m12          = 44,
	ELootType__Weapon_m16          = 45,
	ELootType__Weapon_ak74         = 46,
	ELootType__Weapon_famas        = 47,
	ELootType__Weapon_aug          = 48,
	ELootType__Weapon_dragunov     = 49,
	ELootType__Weapon_m14          = 50,
	ELootType__Weapon_fal          = 51,
	ELootType__Weapon_m60          = 52,
	ELootType__Weapon_frag         = 53,
	ELootType__Weapon_rx           = 54,
	ELootType__Weapon_noisemaker   = 55,
	ELootType__Weapon_smokebomb    = 56,
	ELootType__Holster             = 57,
	ELootType__FannyPack           = 58,
	ELootType__Weapon_trampoline   = 59,
	ELootType__Weapon_cover        = 60,
	ELootType__Weapon_dummy        = 61,
	ELootType__Weapon_supplyline   = 62,
	ELootType__Weapon_confettibomb = 63,
	ELootType__Weapon_rockets      = 64,
	ELootType__Weapon_bow          = 65,
	ELootType__Weapon_scanner      = 66,
	ELootType__None                = 67,
	ELootType__ELootType_MAX       = 68
};


// Enum ShooterGame.ECustomFXPerspective
enum class ECustomFXPerspective : uint8_t
{
	ECustomFXPerspective__FirstPerson = 0,
	ECustomFXPerspective__ThirdPerson = 1,
	ECustomFXPerspective__Custom   = 2,
	ECustomFXPerspective__ECustomFXPerspective_MAX = 3
};


// Enum ShooterGame.ETutorialTooltipCategory
enum class ETutorialTooltipCategory : uint8_t
{
	ETutorialTooltipCategory__CashDrop = 0,
	ETutorialTooltipCategory__Spin2Win = 1,
	ETutorialTooltipCategory__MysteryDoor = 2,
	ETutorialTooltipCategory__FinalShowdown = 3,
	ETutorialTooltipCategory__VendingMachine_Weapon = 4,
	ETutorialTooltipCategory__VendingMachine_Gear = 5,
	ETutorialTooltipCategory__Recycle = 6,
	ETutorialTooltipCategory__ATM  = 7,
	ETutorialTooltipCategory__ZipLine = 8,
	ETutorialTooltipCategory__HealthStation = 9,
	ETutorialTooltipCategory__BikeRace = 10,
	ETutorialTooltipCategory__ETutorialTooltipCategory_MAX = 11
};


// Enum ShooterGame.EZoneStatus
enum class EZoneStatus : uint8_t
{
	EZoneStatus__Safe              = 0,
	EZoneStatus__Warning           = 1,
	EZoneStatus__Danger            = 2,
	EZoneStatus__EZoneStatus_MAX   = 3
};


// Enum ShooterGame.EWeaponIconType
enum class EWeaponIconType : uint8_t
{
	EWeaponIconType__Large         = 0,
	EWeaponIconType__Small         = 1,
	EWeaponIconType__KillCard      = 2,
	EWeaponIconType__IconType_Max  = 3,
	EWeaponIconType__EWeaponIconType_MAX = 4
};


// Enum ShooterGame.EAttachmentsClasses
enum class EAttachmentsClasses : uint8_t
{
	EAttachmentsClasses__Barrel    = 0,
	EAttachmentsClasses__Underbarrel = 1,
	EAttachmentsClasses__Scope     = 2,
	EAttachmentsClasses__Mag       = 3,
	EAttachmentsClasses__Misc      = 4,
	EAttachmentsClasses__None      = 5,
	EAttachmentsClasses__EAttachmentsClasses_MAX = 6
};


// Enum ShooterGame.EAttachmentMisc
enum class EAttachmentMisc : uint8_t
{
	EAttachmentMisc__HairTrigger   = 0,
	EAttachmentMisc__RubberizedGrip = 1,
	EAttachmentMisc__None          = 2,
	EAttachmentMisc__EAttachmentMisc_MAX = 3
};


// Enum ShooterGame.EAttachmentMag
enum class EAttachmentMag : uint8_t
{
	EAttachmentMag__ExtendedMag    = 0,
	EAttachmentMag__QuickdrawMag   = 1,
	EAttachmentMag__None           = 2,
	EAttachmentMag__EAttachmentMag_MAX = 3
};


// Enum ShooterGame.EAttachmentUnderbarrel
enum class EAttachmentUnderbarrel : uint8_t
{
	EAttachmentUnderbarrel__LaserSight = 0,
	EAttachmentUnderbarrel__None   = 1,
	EAttachmentUnderbarrel__EAttachmentUnderbarrel_MAX = 2
};


// Enum ShooterGame.EAttachmentBarrel
enum class EAttachmentBarrel : uint8_t
{
	EAttachmentBarrel__Silencer    = 0,
	EAttachmentBarrel__ExtendedBarrel = 1,
	EAttachmentBarrel__None        = 2,
	EAttachmentBarrel__EAttachmentBarrel_MAX = 3
};


// Enum ShooterGame.EAttachmentScope
enum class EAttachmentScope : uint8_t
{
	EAttachmentScope__Scope2       = 0,
	EAttachmentScope__Scope4       = 1,
	EAttachmentScope__Scope8       = 2,
	EAttachmentScope__None         = 3,
	EAttachmentScope__EAttachmentScope_MAX = 4
};


// Enum ShooterGame.EArmorLevel
enum class EArmorLevel : uint8_t
{
	EArmorLevel__None              = 0,
	EArmorLevel__Light             = 1,
	EArmorLevel__Medium            = 2,
	EArmorLevel__Heavy             = 3,
	EArmorLevel__Special           = 4,
	EArmorLevel__EArmorLevel_MAX   = 5
};


// Enum ShooterGame.EWeaponClass
enum class EWeaponClass : uint8_t
{
	EWeaponClass__Pistol           = 0,
	EWeaponClass__Rifle            = 1,
	EWeaponClass__Shotgun          = 2,
	EWeaponClass__SMG              = 3,
	EWeaponClass__Fists            = 4,
	EWeaponClass__MeleeWeapon_OneHand = 5,
	EWeaponClass__MeleeWeapon_TwoHand = 6,
	EWeaponClass__Special          = 7,
	EWeaponClass__Class_Max        = 8,
	EWeaponClass__EWeaponClass_MAX = 9
};


// Enum ShooterGame.EAmmoType
enum class EAmmoType : uint8_t
{
	EAmmoType__Pistol              = 0,
	EAmmoType__Pistol01            = 1,
	EAmmoType__Pistol02            = 2,
	EAmmoType__Pistol03            = 3,
	EAmmoType__Rifle               = 4,
	EAmmoType__Rifle01             = 5,
	EAmmoType__Shells              = 6,
	EAmmoType__Rocket              = 7,
	EAmmoType__Arrow               = 8,
	EAmmoType__Ammo_Max            = 9,
	EAmmoType__EAmmoType_MAX       = 10
};


// Enum ShooterGame.EShooterClass
enum class EShooterClass : uint8_t
{
	EShooterClass__Enforcer_Law    = 0,
	EShooterClass__Enforcer_Breaker = 1,
	EShooterClass__Vanguard_Law    = 2,
	EShooterClass__Vanguard_Breaker = 3,
	EShooterClass__Brute_Law       = 4,
	EShooterClass__Brute_Breaker   = 5,
	EShooterClass__Assassin_Law    = 6,
	EShooterClass__Assassin_Breaker = 7,
	EShooterClass__Recon_Law       = 8,
	EShooterClass__Recon_Breaker   = 9,
	EShooterClass__Tank_Law        = 10,
	EShooterClass__Tank_Breaker    = 11,
	EShooterClass__Juggernaut_Law  = 12,
	EShooterClass__Juggernaut_Breaker = 13,
	EShooterClass__BattleMedic_Law = 14,
	EShooterClass__BattleMedic_Breaker = 15,
	EShooterClass__TimeCop_Law     = 16,
	EShooterClass__TimeCop_Breaker = 17,
	EShooterClass__Harrier_Law     = 18,
	EShooterClass__Harrier_Breaker = 19,
	EShooterClass__Heavy_Law       = 20,
	EShooterClass__Heavy_Breaker   = 21,
	EShooterClass__Legionnaire_Law = 22,
	EShooterClass__Legionnaire_Breaker = 23,
	EShooterClass__Count           = 24,
	EShooterClass__EShooterClass_MAX = 25
};


// Enum ShooterGame.ECardinalDirection
enum class ECardinalDirection : uint8_t
{
	ECardinalDirection__NORTH      = 0,
	ECardinalDirection__SOUTH      = 1,
	ECardinalDirection__EAST       = 2,
	ECardinalDirection__WEST       = 3,
	ECardinalDirection__NORTH_WEST = 4,
	ECardinalDirection__NORTH_EAST = 5,
	ECardinalDirection__SOUTH_WEST = 6,
	ECardinalDirection__SOUTH_EAST = 7,
	ECardinalDirection__INVALID    = 8,
	ECardinalDirection__ECardinalDirection_MAX = 9
};


// Enum ShooterGame.EShooterGang
enum class EShooterGang : uint8_t
{
	EShooterGang__TASC             = 0,
	EShooterGang__TheArchangels    = 1,
	EShooterGang__Lifers           = 2,
	EShooterGang__TheSyndicate     = 3,
	EShooterGang__Valkyries        = 4,
	EShooterGang__OnePercent       = 5,
	EShooterGang__Enigmas          = 6,
	EShooterGang__Terrans          = 7,
	EShooterGang__TheSentient      = 8,
	EShooterGang__Shura            = 9,
	EShooterGang__TheSpoiled       = 10,
	EShooterGang__TheHooked        = 11,
	EShooterGang__WreckingKrewe    = 12,
	EShooterGang__TheCounselors    = 13,
	EShooterGang__Count            = 14,
	EShooterGang__EShooterGang_MAX = 15
};


// Enum ShooterGame.EShooterSlots
enum class EShooterSlots : uint8_t
{
	EShooterSlots__SLOT_BASE       = 0,
	EShooterSlots__SLOT_HEAD       = 1,
	EShooterSlots__SLOT_UPPERARMS  = 2,
	EShooterSlots__SLOT_LOWERARMS  = 3,
	EShooterSlots__SLOT_HANDS      = 4,
	EShooterSlots__SLOT_TORSO      = 5,
	EShooterSlots__SLOT_UPPERLEGS  = 6,
	EShooterSlots__SLOT_LOWERLEGS  = 7,
	EShooterSlots__SLOT_FEET       = 8,
	EShooterSlots__SLOT_TERTIARY   = 9,
	EShooterSlots__SLOT_SCOPE      = 10,
	EShooterSlots__SLOT_GRIP       = 11,
	EShooterSlots__SLOT_MAG        = 12,
	EShooterSlots__Count           = 13,
	EShooterSlots__EShooterSlots_MAX = 14
};


// Enum ShooterGame.EVoipState
enum class EVoipState : uint8_t
{
	EVoipState__DiscordSpeaking    = 0,
	EVoipState__DiscordQuiet       = 1,
	EVoipState__DefaultSpeaking    = 2,
	EVoipState__DefaultQuiet       = 3,
	EVoipState__Muted              = 4,
	EVoipState__EVoipState_MAX     = 5
};


// Enum ShooterGame.ERarityLevel
enum class ERarityLevel : uint8_t
{
	ERarityLevel__Base             = 0,
	ERarityLevel__White            = 1,
	ERarityLevel__Green            = 2,
	ERarityLevel__Blue             = 3,
	ERarityLevel__Purple           = 4,
	ERarityLevel__Gold             = 5,
	ERarityLevel__Count            = 6,
	ERarityLevel__ERarityLevel_MAX = 7
};


// Enum ShooterGame.EGameMode
enum class EGameMode : uint8_t
{
	EGameMode__Overcharge          = 0,
	EGameMode__TurfWar             = 1,
	EGameMode__Blitz               = 2,
	EGameMode__Uplink              = 3,
	EGameMode__Occupy              = 4,
	EGameMode__Larceny             = 5,
	EGameMode__TDM                 = 6,
	EGameMode__Elimination         = 7,
	EGameMode__Tutorial            = 8,
	EGameMode__KillConfirmed       = 9,
	EGameMode__EGameMode_MAX       = 10
};


// Enum ShooterGame.EAudioDamageCategory
enum class EAudioDamageCategory : uint8_t
{
	EAudioDamageCategory__Ballistic = 0,
	EAudioDamageCategory__Explosion = 1,
	EAudioDamageCategory__Electricity = 2,
	EAudioDamageCategory__Kick     = 3,
	EAudioDamageCategory__SwordStab = 4,
	EAudioDamageCategory__SwordSlice = 5,
	EAudioDamageCategory__Environment_Ozone = 6,
	EAudioDamageCategory__Environment_KillZ = 7,
	EAudioDamageCategory__MaxAudioDamageCategories = 8,
	EAudioDamageCategory__EAudioDamageCategory_MAX = 9
};


// Enum ShooterGame.EShooterDialogType
enum class EShooterDialogType : uint8_t
{
	EShooterDialogType__None       = 0,
	EShooterDialogType__Generic    = 1,
	EShooterDialogType__ControllerDisconnected = 2,
	EShooterDialogType__EShooterDialogType_MAX = 3
};


// Enum ShooterGame.EShooterPhysMaterialType
enum class EShooterPhysMaterialType : uint8_t
{
	EShooterPhysMaterialType__Default = 0,
	EShooterPhysMaterialType__Concrete = 1,
	EShooterPhysMaterialType__Dirt = 2,
	EShooterPhysMaterialType__Water = 3,
	EShooterPhysMaterialType__Metal = 4,
	EShooterPhysMaterialType__Wood = 5,
	EShooterPhysMaterialType__Grass = 6,
	EShooterPhysMaterialType__Glass = 7,
	EShooterPhysMaterialType__Flesh = 8,
	EShooterPhysMaterialType__Armor = 9,
	EShooterPhysMaterialType__Water_Flat = 10,
	EShooterPhysMaterialType__Leaves = 11,
	EShooterPhysMaterialType__Rock = 12,
	EShooterPhysMaterialType__Rock_Orange = 13,
	EShooterPhysMaterialType__Glass_Unbreakable = 14,
	EShooterPhysMaterialType__Wood_Red = 15,
	EShooterPhysMaterialType__Wood_Tree = 16,
	EShooterPhysMaterialType__Stone = 17,
	EShooterPhysMaterialType__Cloth = 18,
	EShooterPhysMaterialType__Electric_Panel = 19,
	EShooterPhysMaterialType__Energy_Barrier = 20,
	EShooterPhysMaterialType__Glass_Broken = 21,
	EShooterPhysMaterialType__Carpet = 22,
	EShooterPhysMaterialType__Wood_Deck = 23,
	EShooterPhysMaterialType__Tile_Rooftop = 24,
	EShooterPhysMaterialType__Grate = 25,
	EShooterPhysMaterialType__Metal_Thin = 26,
	EShooterPhysMaterialType__Gravel = 27,
	EShooterPhysMaterialType__Carbon_Fiber = 28,
	EShooterPhysMaterialType__Rubber = 29,
	EShooterPhysMaterialType__Shield = 30,
	EShooterPhysMaterialType__Coal = 31,
	EShooterPhysMaterialType__Padding = 32,
	EShooterPhysMaterialType__MaxShooterPhysMaterialTypes = 33,
	EShooterPhysMaterialType__EShooterPhysMaterialType_MAX = 34
};


// Enum ShooterGame.EAbilityDebuff
enum class EAbilityDebuff : uint8_t
{
	EAbilityDebuff__None           = 0,
	EAbilityDebuff__KnockUp        = 1,
	EAbilityDebuff__EAbilityDebuff_MAX = 2
};


// Enum ShooterGame.ERunType
enum class ERunType : uint8_t
{
	ERunType__ERunType_None        = 0,
	ERunType__ERunType_FreightTrain = 1,
	ERunType__ERunType_MAX         = 2
};


// Enum ShooterGame.EDodgeType
enum class EDodgeType : uint8_t
{
	EDodgeType__DodgeType_None     = 0,
	EDodgeType__DodgeType_Air      = 1,
	EDodgeType__DodgeType_Leap     = 2,
	EDodgeType__DodgeType_ForwardBoost = 3,
	EDodgeType__DodgeType_MAX      = 4
};


// Enum ShooterGame.EShooterHudPosition
enum class EShooterHudPosition : uint8_t
{
	EShooterHudPosition__Left      = 0,
	EShooterHudPosition__FrontLeft = 1,
	EShooterHudPosition__Front     = 2,
	EShooterHudPosition__FrontRight = 3,
	EShooterHudPosition__Right     = 4,
	EShooterHudPosition__BackRight = 5,
	EShooterHudPosition__Back      = 6,
	EShooterHudPosition__BackLeft  = 7,
	EShooterHudPosition__EShooterHudPosition_MAX = 8
};


// Enum ShooterGame.EShooterCrosshairDirection
enum class EShooterCrosshairDirection : uint8_t
{
	EShooterCrosshairDirection__Left = 0,
	EShooterCrosshairDirection__Right = 1,
	EShooterCrosshairDirection__Top = 2,
	EShooterCrosshairDirection__Bottom = 3,
	EShooterCrosshairDirection__Center = 4,
	EShooterCrosshairDirection__EShooterCrosshairDirection_MAX = 5
};


// Enum ShooterGame.EShooterMatchState
enum class EShooterMatchState : uint8_t
{
	EShooterMatchState__Warmup     = 0,
	EShooterMatchState__Playing    = 1,
	EShooterMatchState__Won        = 2,
	EShooterMatchState__Lost       = 3,
	EShooterMatchState__EShooterMatchState_MAX = 4
};


// Enum ShooterGame.EShooterCharacterIndex
enum class EShooterCharacterIndex : uint8_t
{
	EShooterCharacterIndex__None   = 0,
	EShooterCharacterIndex__Me     = 1,
	EShooterCharacterIndex__MyTeam = 2,
	EShooterCharacterIndex__OtherTeam = 3,
	EShooterCharacterIndex__EShooterCharacterIndex_MAX = 4
};


// Enum ShooterGame.EPickupSoundType
enum class EPickupSoundType : uint8_t
{
	EPickupSoundType__Ammo         = 0,
	EPickupSoundType__Weapon       = 1,
	EPickupSoundType__Armor        = 2,
	EPickupSoundType__Money        = 3,
	EPickupSoundType__Burger       = 4,
	EPickupSoundType__Cosmetic     = 5,
	EPickupSoundType__Medical      = 6,
	EPickupSoundType__COUNT        = 7,
	EPickupSoundType__EPickupSoundType_MAX = 8
};


// Enum ShooterGame.GravityBubble
enum class EGravityBubble : uint8_t
{
	GravityBubble__Increased       = 0,
	GravityBubble__Zero            = 1,
	GravityBubble__Inverted        = 2,
	GravityBubble__Custom          = 3,
	GravityBubble__GravityBubble_MAX = 4
};


// Enum ShooterGame.EShooterAbilitySoundType
enum class EShooterAbilitySoundType : uint8_t
{
	EShooterAbilitySoundType__Start = 0,
	EShooterAbilitySoundType__Stop = 1,
	EShooterAbilitySoundType__EShooterAbilitySoundType_MAX = 2
};


// Enum ShooterGame.EAbilityButtonPressType
enum class EAbilityButtonPressType : uint8_t
{
	EAbilityButtonPressType__None  = 0,
	EAbilityButtonPressType__Press = 1,
	EAbilityButtonPressType__Release = 2,
	EAbilityButtonPressType__EAbilityButtonPressType_MAX = 3
};


// Enum ShooterGame.EAbilityType
enum class EAbilityType : uint8_t
{
	EAbilityType__AbilityE         = 0,
	EAbilityType__AbilityShift     = 1,
	EAbilityType__AbilityQ         = 2,
	EAbilityType__AbilityJump      = 3,
	EAbilityType__AbilityTarget    = 4,
	EAbilityType__AbilityPassive   = 5,
	EAbilityType__AbilitySpecialJump = 6,
	EAbilityType__None             = 7,
	EAbilityType__EAbilityType_MAX = 8
};


// Enum ShooterGame.EShooterDialogueCharacterFunction
enum class EShooterDialogueCharacterFunction : uint8_t
{
	EShooterDialogueCharacterFunction__Invalid = 0,
	EShooterDialogueCharacterFunction__Taunt = 1,
	EShooterDialogueCharacterFunction__SplitterFullyCharged = 2,
	EShooterDialogueCharacterFunction__FlagCapture = 3,
	EShooterDialogueCharacterFunction__BatteryPickup = 4,
	EShooterDialogueCharacterFunction__BatteryDrop = 5,
	EShooterDialogueCharacterFunction__AbilityFail = 6,
	EShooterDialogueCharacterFunction__ArmorBreak = 7,
	EShooterDialogueCharacterFunction__LowHealth = 8,
	EShooterDialogueCharacterFunction__RunLoop = 9,
	EShooterDialogueCharacterFunction__RunStop = 10,
	EShooterDialogueCharacterFunction__Targeting = 11,
	EShooterDialogueCharacterFunction__SelfHitConfirmation = 12,
	EShooterDialogueCharacterFunction__OniWrathStart = 13,
	EShooterDialogueCharacterFunction__OniWrathEnd = 14,
	EShooterDialogueCharacterFunction__GrappleImpactEnemy = 15,
	EShooterDialogueCharacterFunction__GrappleImpactWall = 16,
	EShooterDialogueCharacterFunction__HawkeyeTag = 17,
	EShooterDialogueCharacterFunction__HawkeyeUntag = 18,
	EShooterDialogueCharacterFunction__MedicHeal = 19,
	EShooterDialogueCharacterFunction__NinjaKickImpact = 20,
	EShooterDialogueCharacterFunction__SwipeHitFlesh = 21,
	EShooterDialogueCharacterFunction__SwipeHitArmor = 22,
	EShooterDialogueCharacterFunction__DamageWarningBehind = 23,
	EShooterDialogueCharacterFunction__DamageWarningAbove = 24,
	EShooterDialogueCharacterFunction__DamageWarningBelow = 25,
	EShooterDialogueCharacterFunction__GaveEnforcerBuff = 26,
	EShooterDialogueCharacterFunction__ReceivedEnforcerBuff = 27,
	EShooterDialogueCharacterFunction__AllyObjectiveEncourage = 28,
	EShooterDialogueCharacterFunction__AllyObjectiveAffirm = 29,
	EShooterDialogueCharacterFunction__EShooterDialogueCharacterFunction_MAX = 30
};


// Enum ShooterGame.EMomentSignificance
enum class EMomentSignificance : uint8_t
{
	EMomentSignificance__MomentSignificance_Neutral = 0,
	EMomentSignificance__MomentSignificance_Good = 1,
	EMomentSignificance__MomentSignificance_VeryGood = 2,
	EMomentSignificance__MomentSignificance_ExtremelyGood = 3,
	EMomentSignificance__MomentSignificance_MAX = 4
};


// Enum ShooterGame.EScoreVisualBucketUsage
enum class EScoreVisualBucketUsage : uint8_t
{
	EScoreVisualBucketUsage__SELF_SCORED = 0,
	EScoreVisualBucketUsage__SELF_SCORED_OR_VICTIM = 1,
	EScoreVisualBucketUsage__GLOBAL_EVENT = 2,
	EScoreVisualBucketUsage__SAME_TEAM_AS_SCORER = 3,
	EScoreVisualBucketUsage__OPPOSITE_TEAM_AS_SCORER = 4,
	EScoreVisualBucketUsage__NONE  = 5,
	EScoreVisualBucketUsage__EScoreVisualBucketUsage_MAX = 6
};


// Enum ShooterGame.EScoreVisualBucket
enum class EScoreVisualBucket : uint8_t
{
	EScoreVisualBucket__SCORE_LOG  = 0,
	EScoreVisualBucket__KILL_LOG   = 1,
	EScoreVisualBucket__MAJOR_EVENT = 2,
	EScoreVisualBucket__NONE       = 3,
	EScoreVisualBucket__EScoreVisualBucket_MAX = 4
};


// Enum ShooterGame.ESpecialScoringFunction
enum class ESpecialScoringFunction : uint8_t
{
	ESpecialScoringFunction__UNDEFINED = 0,
	ESpecialScoringFunction__DOUBLEKILL = 1,
	ESpecialScoringFunction__KILLSTREAK = 2,
	ESpecialScoringFunction__DOMINATION = 3,
	ESpecialScoringFunction__REVENGE = 4,
	ESpecialScoringFunction__ANNIHILATION = 5,
	ESpecialScoringFunction__NAMECHECK = 6,
	ESpecialScoringFunction__DAMAGECHECK = 7,
	ESpecialScoringFunction__DAMAGERANGE = 8,
	ESpecialScoringFunction__CARRIER = 9,
	ESpecialScoringFunction__HEALTHCHECK = 10,
	ESpecialScoringFunction__GRAVEKILL = 11,
	ESpecialScoringFunction__ESpecialScoringFunction_MAX = 12
};


// Enum ShooterGame.EScoreVisualPriority
enum class EScoreVisualPriority : uint8_t
{
	EScoreVisualPriority__DEFAULT  = 0,
	EScoreVisualPriority__HIDDEN   = 1,
	EScoreVisualPriority__LOW      = 2,
	EScoreVisualPriority__ADDITION = 3,
	EScoreVisualPriority__KILL     = 4,
	EScoreVisualPriority__MEDIUM   = 5,
	EScoreVisualPriority__HIGH     = 6,
	EScoreVisualPriority__ULTRA    = 7,
	EScoreVisualPriority__LINKED   = 8,
	EScoreVisualPriority__EScoreVisualPriority_MAX = 9
};


// Enum ShooterGame.EScore
enum class EScore : uint8_t
{
	EScore__UNDEFINED              = 0,
	EScore__POINTS_DEPRECATED      = 1,
	EScore__KILL                   = 2,
	EScore__ASSIST                 = 3,
	EScore__DEATH                  = 4,
	EScore__NAMECHECK              = 5,
	EScore__HEAL                   = 6,
	EScore__SHIELD                 = 7,
	EScore__EVENT                  = 8,
	EScore__EScore_MAX             = 9
};


// Enum ShooterGame.EUsingMultiplayerFeatures
enum class EUsingMultiplayerFeatures : uint8_t
{
	EUsingMultiplayerFeatures__UsingMultiplayerFeatures_Yes = 0,
	EUsingMultiplayerFeatures__UsingMultiplayerFeatures_No = 1,
	EUsingMultiplayerFeatures__UsingMultiplayerFeatures_Undefined = 2,
	EUsingMultiplayerFeatures__UsingMultiplayerFeatures_MAX = 3
};


// Enum ShooterGame.EBuffType
enum class EBuffType : uint8_t
{
	EBuffType__Unspecified         = 0,
	EBuffType__MarkedForDeath      = 1,
	EBuffType__IncreasedGravity    = 2,
	EBuffType__EBuffType_MAX       = 3
};


// Enum ShooterGame.EBuffInteraction
enum class EBuffInteraction : uint8_t
{
	EBuffInteraction__Additive     = 0,
	EBuffInteraction__Override     = 1,
	EBuffInteraction__EBuffInteraction_MAX = 2
};


// Enum ShooterGame.EBluePrintOperator
enum class EBluePrintOperator : uint8_t
{
	EBluePrintOperator__Equals     = 0,
	EBluePrintOperator__NotEquals  = 1,
	EBluePrintOperator__GreaterThan = 2,
	EBluePrintOperator__GreaterThanEquals = 3,
	EBluePrintOperator__LessThan   = 4,
	EBluePrintOperator__LessThanEquals = 5,
	EBluePrintOperator__Or         = 6,
	EBluePrintOperator__OrNot      = 7,
	EBluePrintOperator__And        = 8,
	EBluePrintOperator__AndNot     = 9,
	EBluePrintOperator__EBluePrintOperator_MAX = 10
};


// Enum ShooterGame.EBluePrintBranchControl
enum class EBluePrintBranchControl : uint8_t
{
	EBluePrintBranchControl__IsTrue = 0,
	EBluePrintBranchControl__IsFalse = 1,
	EBluePrintBranchControl__EBluePrintBranchControl_MAX = 2
};


// Enum ShooterGame.EMatchmakingMatchState
enum class EMatchmakingMatchState : uint8_t
{
	EMatchmakingMatchState__Warmup = 0,
	EMatchmakingMatchState__InMatch = 1,
	EMatchmakingMatchState__BetweenMatches = 2,
	EMatchmakingMatchState__EMatchmakingMatchState_MAX = 3
};


// Enum ShooterGame.EToolTipTargetClassEnum
enum class EToolTipTargetClassEnum : uint8_t
{
	EToolTipTargetClassEnum__Enforcer = 0,
	EToolTipTargetClassEnum__Assassin = 1,
	EToolTipTargetClassEnum__Vanguard = 2,
	EToolTipTargetClassEnum__Titan = 3,
	EToolTipTargetClassEnum__Wraith = 4,
	EToolTipTargetClassEnum__BattleMedic = 5,
	EToolTipTargetClassEnum__Juggernaut = 6,
	EToolTipTargetClassEnum__Gunslinger = 7,
	EToolTipTargetClassEnum__Harrier = 8,
	EToolTipTargetClassEnum__Tank  = 9,
	EToolTipTargetClassEnum__Legionnaire = 10,
	EToolTipTargetClassEnum__Heavy = 11,
	EToolTipTargetClassEnum__All   = 12,
	EToolTipTargetClassEnum__Invalid = 13,
	EToolTipTargetClassEnum__EToolTipTargetClassEnum_MAX = 14
};


// Enum ShooterGame.EWeaponAction
enum class EWeaponAction : uint8_t
{
	EWeaponAction__SemiAuto        = 0,
	EWeaponAction__FullAuto        = 1,
	EWeaponAction__BurstFire       = 2,
	EWeaponAction__Action_Max      = 3,
	EWeaponAction__EWeaponAction_MAX = 4
};


// Enum ShooterGame.EWeaponStats
enum class EWeaponStats : uint8_t
{
	EWeaponStats__Accuracy         = 0,
	EWeaponStats__Control          = 1,
	EWeaponStats__Range            = 2,
	EWeaponStats__FireRate         = 3,
	EWeaponStats__Damage           = 4,
	EWeaponStats__Stats_Max        = 5,
	EWeaponStats__EWeaponStats_MAX = 6
};


// Enum ShooterGame.EInventoryItemRarity
enum class EInventoryItemRarity : uint8_t
{
	EInventoryItemRarity__Rarity   = 0,
	EInventoryItemRarity__Rarity01 = 1,
	EInventoryItemRarity__Rarity02 = 2,
	EInventoryItemRarity__Rarity03 = 3,
	EInventoryItemRarity__Rarity04 = 4,
	EInventoryItemRarity__Rarity_Max = 5
};


// Enum ShooterGame.EShooterUIScreen
enum class EShooterUIScreen : uint8_t
{
	EShooterUIScreen_HUD           = 0,
	EShooterUIScreen_Map           = 1,
	EShooterUIScreen_MiniMap       = 2,
	EShooterUIScreen_PlayerScore   = 3,
	EShooterUIScreen_PlayerStatus  = 4,
	EShooterUIScreen_TeammateStatus = 5,
	EShooterUIScreen_Compass       = 6,
	EShooterUIScreen_ZoneLock      = 7,
	EShooterUIScreen_Inventory     = 8,
	EShooterUIScreen_KillLog       = 9,
	EShooterUIScreen_Spectator     = 10,
	EShooterUIScreen_GameModePanel = 11,
	EShooterUIScreen_GameText      = 12,
	EShooterUIScreen_VictoryDefeatScreen = 13,
	EShooterUIScreen_Chat          = 14,
	EShooterUIScreen_OptionsMenu   = 15,
	EShooterUIScreen_InGameNotification = 16,
	EShooterUIScreen_Subtitles     = 17,
	EShooterUIScreen_FrontEndKillCard = 18,
	EShooterUIScreen_FadeManager   = 19,
	EShooterUIScreen_Tooltip       = 20,
	EShooterUIScreen_Count         = 21,
	EShooterUIScreen_MAX           = 22
};


// Enum ShooterGame.EShooterCharacterMaterialPerson
enum class EShooterCharacterMaterialPerson : uint8_t
{
	EShooterCharacterMaterialPerson__ThirdPersonAndFirstPerson = 0,
	EShooterCharacterMaterialPerson__ThirdPersonOnly = 1,
	EShooterCharacterMaterialPerson__FirstPersonOnly = 2,
	EShooterCharacterMaterialPerson__EShooterCharacterMaterialPerson_MAX = 3
};


// Enum ShooterGame.EShooterCharacterMaterialSetMode
enum class EShooterCharacterMaterialSetMode : uint8_t
{
	EShooterCharacterMaterialSetMode__CharacterAndWeapons = 0,
	EShooterCharacterMaterialSetMode__CharacterOnly = 1,
	EShooterCharacterMaterialSetMode__WeaponsOnly = 2,
	EShooterCharacterMaterialSetMode__EShooterCharacterMaterialSetMode_MAX = 3
};


// Enum ShooterGame.ESlowTimeState
enum class ESlowTimeState : uint8_t
{
	ESlowTimeState__INACTIVE       = 0,
	ESlowTimeState__ACTIVE         = 1,
	ESlowTimeState__DEACTIVATING   = 2,
	ESlowTimeState__ESlowTimeState_MAX = 3
};


// Enum ShooterGame.EVehicleSeatState
enum class EVehicleSeatState : uint8_t
{
	EVehicleSeatState__None        = 0,
	EVehicleSeatState__Zipline     = 1,
	EVehicleSeatState__BmxDriver   = 2,
	EVehicleSeatState__BmxBackPassenger = 3,
	EVehicleSeatState__BmxFrontPassenger = 4,
	EVehicleSeatState__BuggyDriver = 5,
	EVehicleSeatState__BuggyPassenger = 6,
	EVehicleSeatState__SedanDriver = 7,
	EVehicleSeatState__SedanRightPassenger = 8,
	EVehicleSeatState__SedanLeftPassenger = 9,
	EVehicleSeatState__Wingsuit    = 10,
	EVehicleSeatState__EVehicleSeatState_MAX = 11
};


// Enum ShooterGame.EAimState
enum class EAimState : uint8_t
{
	EAimState__HipFire             = 0,
	EAimState__OTS                 = 1,
	EAimState__ADS                 = 2,
	EAimState__EAimState_MAX       = 3
};


// Enum ShooterGame.EHealSoundType
enum class EHealSoundType : uint8_t
{
	EHealSoundType__None           = 0,
	EHealSoundType__SelfHeal       = 1,
	EHealSoundType__HealingStation = 2,
	EHealSoundType__BattleMedicDrone = 3,
	EHealSoundType__BattleMedicUltDome = 4,
	EHealSoundType__HealthPack     = 5,
	EHealSoundType__HarrierHealthPack = 6,
	EHealSoundType__Other          = 7,
	EHealSoundType__EHealSoundType_MAX = 8
};


// Enum ShooterGame.EKickType
enum class EKickType : uint8_t
{
	EKickType__LeftFoot            = 0,
	EKickType__RightFoot           = 1,
	EKickType__BothFeet            = 2,
	EKickType__EKickType_MAX       = 3
};


// Enum ShooterGame.EHealWidgetState
enum class EHealWidgetState : uint8_t
{
	EHealWidgetState__LockOn       = 0,
	EHealWidgetState__Healing      = 1,
	EHealWidgetState__Requested    = 2,
	EHealWidgetState__EHealWidgetState_MAX = 3
};


// Enum ShooterGame.EPopupTextTemplate
enum class EPopupTextTemplate : uint8_t
{
	EPopupTextTemplate__Damage     = 0,
	EPopupTextTemplate__Headshot   = 1,
	EPopupTextTemplate__Heal       = 2,
	EPopupTextTemplate__MaxPopupTextTemplates = 3,
	EPopupTextTemplate__EPopupTextTemplate_MAX = 4
};


// Enum ShooterGame.EPawnMesh
enum class EPawnMesh : uint8_t
{
	EPawnMesh__FirstPerson         = 0,
	EPawnMesh__ThirdPerson         = 1,
	EPawnMesh__EPawnMesh_MAX       = 2
};


// Enum ShooterGame.ESmashState
enum class ESmashState : uint8_t
{
	ESmashState__None              = 0,
	ESmashState__Dive              = 1,
	ESmashState__Smashing          = 2,
	ESmashState__ESmashState_MAX   = 3
};


// Enum ShooterGame.EWeaponAmmo
enum class EWeaponAmmo : uint8_t
{
	EWeaponAmmo__Bullet            = 0,
	EWeaponAmmo__Rocket            = 1,
	EWeaponAmmo__Laser             = 2,
	EWeaponAmmo__EWeaponAmmo_MAX   = 3
};


// Enum ShooterGame.EHitImpactSwitch
enum class EHitImpactSwitch : uint8_t
{
	EHitImpactSwitch__HitSound1    = 0,
	EHitImpactSwitch__HitSound2    = 1,
	EHitImpactSwitch__HitSound3    = 2,
	EHitImpactSwitch__EHitImpactSwitch_MAX = 3
};


// Enum ShooterGame.EStateAnimationLayer
enum class EStateAnimationLayer : uint8_t
{
	EStateAnimationLayer__UpperBody = 0,
	EStateAnimationLayer__LowerBody = 1,
	EStateAnimationLayer__FullBody = 2,
	EStateAnimationLayer__LeftArm  = 3,
	EStateAnimationLayer__TertiaryWeapon = 4,
	EStateAnimationLayer__AdditiveHit = 5,
	EStateAnimationLayer__AdditiveOne = 6,
	EStateAnimationLayer__EStateAnimationLayer_MAX = 7
};


// Enum ShooterGame.ESlateDrawEffectConfig
enum class ESlateDrawEffectConfig : uint8_t
{
	ESlateDrawEffectConfig__None   = 0,
	ESlateDrawEffectConfig__DisabledEffect = 1,
	ESlateDrawEffectConfig__IgnoreTextureAlpha = 2,
	ESlateDrawEffectConfig__NoBlending = 3,
	ESlateDrawEffectConfig__PreMultipliedAlpha = 4,
	ESlateDrawEffectConfig__NoGamma = 5,
	ESlateDrawEffectConfig__NoGammaAndPreMultipliedAlpha = 6,
	ESlateDrawEffectConfig__ESlateDrawEffectConfig_MAX = 7
};


// Enum ShooterGame.ECachedWidgetEffect
enum class ECachedWidgetEffect : uint8_t
{
	ECachedWidgetEffect__DISABLED  = 0,
	ECachedWidgetEffect__BACKGROUND = 1,
	ECachedWidgetEffect__FOREGROUND = 2,
	ECachedWidgetEffect__ECachedWidgetEffect_MAX = 3
};


// Enum ShooterGame.EControlZoneState
enum class EControlZoneState : uint8_t
{
	EControlZoneState__Neutral     = 0,
	EControlZoneState__TeamACapturing = 1,
	EControlZoneState__TeamBCapturing = 2,
	EControlZoneState__TeamAOwned  = 3,
	EControlZoneState__TeamBOwned  = 4,
	EControlZoneState__EControlZoneState_MAX = 5
};


// Enum ShooterGame.ESupportType
enum class ESupportType : uint8_t
{
	ESupportType__DAMAGED          = 0,
	ESupportType__HEAL             = 1,
	ESupportType__MARKED           = 2,
	ESupportType__INSIDE_VOLUME    = 3,
	ESupportType__ESupportType_MAX = 4
};


// Enum ShooterGame.EMenuWorldState
enum class EMenuWorldState : uint8_t
{
	EMenuWorldState__None          = 0,
	EMenuWorldState__CharacterSelect = 1,
	EMenuWorldState__Home          = 2,
	EMenuWorldState__Customization = 3,
	EMenuWorldState__EMenuWorldState_MAX = 4
};


// Enum ShooterGame.EMenuActorAnimState
enum class EMenuActorAnimState : uint8_t
{
	EMenuActorAnimState__CharacterSelect = 0,
	EMenuActorAnimState__Lobby     = 1,
	EMenuActorAnimState__Customization = 2,
	EMenuActorAnimState__EMenuActorAnimState_MAX = 3
};


// Enum ShooterGame.EDoorOpenState
enum class EDoorOpenState : uint8_t
{
	DOORSTATE_Closed               = 0,
	DOORSTATE_OpenNormal           = 1,
	DOORSTATE_OpenReverse          = 2,
	DOORSTATE_MAX                  = 3
};


// Enum ShooterGame.EFlagState
enum class EFlagState : uint8_t
{
	EFlagState__IN_BASE            = 0,
	EFlagState__ATTACHED           = 1,
	EFlagState__CONTESTED          = 2,
	EFlagState__INACTIVE           = 3,
	EFlagState__EFlagState_MAX     = 4
};


// Enum ShooterGame.EGamepadPreset
enum class EGamepadPreset : uint8_t
{
	EGamepadPreset__Standard       = 0,
	EGamepadPreset__Bumper_Jumper  = 1,
	EGamepadPreset__Tactical       = 2,
	EGamepadPreset__Alternative    = 3,
	EGamepadPreset__Shoulder_Swap  = 4,
	EGamepadPreset__Bumper_Jumper01 = 5,
	EGamepadPreset__Alternative01  = 6,
	EGamepadPreset__EGamepadPreset_MAX = 7
};


// Enum ShooterGame.EFrontendSkipState
enum class EFrontendSkipState : uint8_t
{
	EFrontendSkipState__None       = 0,
	EFrontendSkipState__StartSkip  = 1,
	EFrontendSkipState__WaitFrontDataLoad = 2,
	EFrontendSkipState__WaitGameDataLoad = 3,
	EFrontendSkipState__WaitWorldFullyLoad = 4,
	EFrontendSkipState__PickClass  = 5,
	EFrontendSkipState__JustWait   = 6,
	EFrontendSkipState__EFrontendSkipState_MAX = 7
};


// Enum ShooterGame.ERoundState
enum class ERoundState : uint8_t
{
	ERoundState__Invalid           = 0,
	ERoundState__PreGame           = 1,
	ERoundState__Warmup            = 2,
	ERoundState__Spawning          = 3,
	ERoundState__Active            = 4,
	ERoundState__RoundEnd          = 5,
	ERoundState__MatchEnd          = 6,
	ERoundState__ERoundState_MAX   = 7
};


// Enum ShooterGame.ELocaleOptions
enum class ELocaleOptions : uint8_t
{
	ELocaleOptions__English        = 0,
	ELocaleOptions__Korean         = 1,
	ELocaleOptions__German         = 2,
	ELocaleOptions__French         = 3,
	ELocaleOptions__Japanese       = 4,
	ELocaleOptions__Spanish        = 5,
	ELocaleOptions__Chinese        = 6,
	ELocaleOptions__Russian        = 7,
	ELocaleOptions__Italian        = 8,
	ELocaleOptions__ELocaleOptions_MAX = 9
};


// Enum ShooterGame.ECrosshairStyle
enum class ECrosshairStyle : uint8_t
{
	ECrosshairStyle__BasicDot      = 0,
	ECrosshairStyle__BasicCircle   = 1,
	ECrosshairStyle__BasicCross    = 2,
	ECrosshairStyle__WeaponSpecific = 3,
	ECrosshairStyle__ECrosshairStyle_MAX = 4
};


// Enum ShooterGame.EHitPipStyle
enum class EHitPipStyle : uint8_t
{
	EHitPipStyle__Default          = 0,
	EHitPipStyle__ClassicFill      = 1,
	EHitPipStyle__None             = 2,
	EHitPipStyle__EHitPipStyle_MAX = 3
};


// Enum ShooterGame.EThumbstickStyle
enum class EThumbstickStyle : uint8_t
{
	EThumbstickStyle__DualZone     = 0,
	EThumbstickStyle__SingleZone   = 1,
	EThumbstickStyle__EThumbstickStyle_MAX = 2
};


// Enum ShooterGame.EChatDisplaySize
enum class EChatDisplaySize : uint8_t
{
	EChatDisplaySize__Minimum      = 0,
	EChatDisplaySize__Normal       = 1,
	EChatDisplaySize__Long         = 2,
	EChatDisplaySize__EChatDisplaySize_MAX = 3
};


// Enum ShooterGame.EMajorGameShowEvents
enum class EMajorGameShowEvents : uint8_t
{
	EMajorGameShowEvents__None     = 0,
	EMajorGameShowEvents__CashDrop = 1,
	EMajorGameShowEvents__BikeRace = 2,
	EMajorGameShowEvents__Chopper  = 3,
	EMajorGameShowEvents__EMajorGameShowEvents_MAX = 4
};


// Enum ShooterGame.EFinalShowdownState
enum class EFinalShowdownState : uint8_t
{
	EFinalShowdownState__Inactive  = 0,
	EFinalShowdownState__Countdown = 1,
	EFinalShowdownState__Sundown   = 2,
	EFinalShowdownState__Closing   = 3,
	EFinalShowdownState__PreCountdown = 4,
	EFinalShowdownState__EFinalShowdownState_MAX = 5
};


// Enum ShooterGame.EChatMode
enum class EChatMode : uint8_t
{
	EChatMode__TeamChat            = 0,
	EChatMode__AllChat             = 1,
	EChatMode__EChatMode_MAX       = 2
};


// Enum ShooterGame.EObjectiveZoneDetectionType
enum class EObjectiveZoneDetectionType : uint8_t
{
	EObjectiveZoneDetectionType__ZoneDetectionType_PhysicsOverlap = 0,
	EObjectiveZoneDetectionType__ZoneDetectionType_Sphere = 1,
	EObjectiveZoneDetectionType__ZoneDetectionType_Cylinder = 2,
	EObjectiveZoneDetectionType__ZoneDetectionType_MAX = 3
};


// Enum ShooterGame.EPoolState
enum class EPoolState : uint8_t
{
	EPoolState__ReadyToLaunch      = 0,
	EPoolState__InFlight           = 1,
	EPoolState__Exploded           = 2,
	EPoolState__MaxPoolStates      = 3,
	EPoolState__EPoolState_MAX     = 4
};


// Enum ShooterGame.EWeather
enum class EWeather : uint8_t
{
	EWeather__Sunrise              = 0,
	EWeather__Midday               = 1,
	EWeather__Sunset               = 2,
	EWeather__Night                = 3,
	EWeather__EWeather_MAX         = 4
};


// Enum ShooterGame.ETimeOfDay
enum class ETimeOfDay : uint8_t
{
	ETimeOfDay__Sunrise            = 0,
	ETimeOfDay__Midday             = 1,
	ETimeOfDay__Sunset             = 2,
	ETimeOfDay__Night              = 3,
	ETimeOfDay__EOM                = 4,
	ETimeOfDay__ETimeOfDay_MAX     = 5
};


// Enum ShooterGame.GaugeType
enum class EGaugeType : uint8_t
{
	GaugeType__EGaugeType_Health   = 0,
	GaugeType__EGaugeType_DamageFeedback = 1,
	GaugeType__EGaugeType_Shield   = 2,
	GaugeType__EGaugeType_Armor    = 3,
	GaugeType__EGaugeType_MAX      = 4
};


// Enum ShooterGame.EAbilityWidgetType
enum class EAbilityWidgetType : uint8_t
{
	EAbilityWidgetType__LEFT       = 0,
	EAbilityWidgetType__RIGHT      = 1,
	EAbilityWidgetType__ULTIMATE   = 2,
	EAbilityWidgetType__EAbilityWidgetType_MAX = 3
};


// Enum ShooterGame.EAbilityWidgetState
enum class EAbilityWidgetState : uint8_t
{
	EAbilityWidgetState__UNINITIALIZED = 0,
	EAbilityWidgetState__AFTER_REP_ABILITIES = 1,
	EAbilityWidgetState__ABILITY_NOT_FOR_THIS_PAWN = 2,
	EAbilityWidgetState__TICKING   = 3,
	EAbilityWidgetState__READY     = 4,
	EAbilityWidgetState__ACTIVE    = 5,
	EAbilityWidgetState__COOLDOWN  = 6,
	EAbilityWidgetState__EMP_BLOCKED = 7,
	EAbilityWidgetState__CHAR_INVALID = 8,
	EAbilityWidgetState__EAbilityWidgetState_MAX = 9
};


// Enum ShooterGame.EBigAdviceState
enum class EBigAdviceState : uint8_t
{
	EBigAdviceState__Hidden        = 0,
	EBigAdviceState__WarningZone   = 1,
	EBigAdviceState__DangerZone    = 2,
	EBigAdviceState__FinalShowdownCountdown = 3,
	EBigAdviceState__FinalShowdownClosing = 4,
	EBigAdviceState__EBigAdviceState_MAX = 5
};


// Enum ShooterGame.EShooterPlayerStatus
enum class EShooterPlayerStatus : uint8_t
{
	EShooterPlayerStatus__Loading  = 0,
	EShooterPlayerStatus__Alive    = 1,
	EShooterPlayerStatus__Dead     = 2,
	EShooterPlayerStatus__EShooterPlayerStatus_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShooterGame.GameplayTimer
// 0x0020
struct FGameplayTimer
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	float                                              Timer;                                                    // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.CityMakerData
// 0x0060
struct FCityMakerData
{
	bool                                               bGriddedBuildings;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GridRandomness;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BuildingSize;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BuildingSizeOuter;                                        // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuildingSizeRandomAmount;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuildingDensityPerKmSq;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PropDensityPerKmSq;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscardBuildingsIntersectingBuildings;                   // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscardPropsIntersectingBuildings;                       // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<class UStaticMesh*>                         BuildingMeshes;                                           // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<class UStaticMesh*>                         PropMeshes;                                               // 0x0050(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.DialogueLine
// 0x0040
struct FDialogueLine
{
	class UAkAudioEvent*                               Sound;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnDiscardSound;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           ConflictResolutionSamePriority;                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           ConflictResolutionLowerPriority;                          // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              StartTime;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MustStartTime;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ActualStartTime;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinReplayTime;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasPlayedStreamingSoundYet;                               // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	uint32_t                                           Seed;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAkSoundInstance*                            SoundInstance;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkSoundInstance*                            DiscardSoundInstance;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterPawnInfo
// 0x00D8
struct FShooterPawnInfo
{
	struct FName                                       CharName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomizationName;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TelemetryName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayRole;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EShooterAllegiance>                    Allegiance;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class UTexture2D*                                  SmallPortrait;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MediumPortrait;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BigPortrait;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SpectatorPortrait;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FootPrint;                                                // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     RoleIcon;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            Pawn;                                                     // 0x0080(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UShooterCustomizationDefinition*             CharacterCustomizationData;                               // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UShooterCustomizationDefinition*>     WeaponCustomizationData;                                  // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UClass>                            MenuActor;                                                // 0x00B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShooterGame.LootClasses
// 0x0220
struct FLootClasses
{
	class UClass*                                      AmmoPickup_23;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_10;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_46;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_45;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_224;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_309;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_12g;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_10g;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_Rocket;                                        // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AmmoPickup_Arrow;                                         // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CashPickup;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Boombox;                                      // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_TV;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Cellphone;                                    // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Walkman;                                      // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Gameconsole;                                  // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Bigcheck;                                     // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Alps;                                         // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Bahamas;                                      // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrizePickup_Cleveland;                                    // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FoodPickup;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HealthPack_2;                                             // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HealthPack_3;                                             // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HealthPack_4;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Helmet_2;                                                 // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Helmet_3;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Helmet_4;                                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Helmet_5;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Vest_2;                                                   // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Vest_3;                                                   // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Vest_4;                                                   // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Vest_5;                                                   // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_1912;                                        // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_hipower;                                     // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_ppk;                                         // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_python;                                      // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_wildmagnum;                                  // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_spas12;                                      // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_1888;                                        // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_madmax;                                      // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_ithica;                                      // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_uzi;                                         // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_hitec;                                       // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_tec9;                                        // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_m12;                                         // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_m16;                                         // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_famas;                                       // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_aug;                                         // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_ak74;                                        // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_dragunov;                                    // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_m14;                                         // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_fal;                                         // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_m60;                                         // 0x01A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_frag;                                        // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_RX;                                          // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Noisemaker;                                  // 0x01B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Smokebomb;                                   // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Pickup_Holster;                                           // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Pickup_FannyPack;                                         // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Vehicle_BMX;                                              // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Trampoline;                                  // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Cover;                                       // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Dummy;                                       // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_SupplyLine;                                  // 0x01F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_ConfettiBomb;                                // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Rockets;                                     // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Bow;                                         // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponPickup_Scanner;                                     // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.GroundLootItem
// 0x0008
struct FGroundLootItem
{
	TEnumAsByte<ELootType>                             LootType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                DropWeight;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.VendingMachineItem
// 0x0010
struct FVendingMachineItem
{
	TEnumAsByte<ELootType>                             LootType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinCost;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCost;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DropWeight;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCustSkeletalMeshInfo
// 0x0038
struct FShooterCustSkeletalMeshInfo
{
	struct FName                                       ComponentTag;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     SkelMesh;                                                 // 0x0008(0x0020) (Edit)
	TArray<TAssetPtr<class UMaterialInterface>>        MaterialSets;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustomizationSkeletalMeshComponent
// 0x0040
struct FShooterCustomizationSkeletalMeshComponent
{
	struct FName                                       ActorTag;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterCustSkeletalMeshInfo                SkeletalComponetInfo;                                     // 0x0008(0x0038) (Edit)
};

// ScriptStruct ShooterGame.ShooterCustomizationInfo
// 0x0060
struct FShooterCustomizationInfo
{
	class FString                                      SkinName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            CustomizationContainer;                                   // 0x0010(0x0020) (Edit)
	TAssetPtr<class UClass>                            CustomizationBlueprintActor;                              // 0x0030(0x0020) (Edit)
	TArray<struct FShooterCustomizationSkeletalMeshComponent> CustomizationSkinMeshData;                                // 0x0050(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.ShooterDeathDecalInfo
// 0x0050
struct FShooterDeathDecalInfo
{
	struct FName                                       LoadName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            CustomizationBlueprintActor;                              // 0x0008(0x0020) (Edit)
	TAssetPtr<class UTexture2D>                        DeathDecal;                                               // 0x0028(0x0020) (Edit, BlueprintVisible)
	bool                                               IsGolden;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.DecalData
// 0x0058
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  RandomDecalMaterialList;                                  // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DecalSize;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRandomDecalSize;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRandomDecalSize;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRandomRoll;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRandomRoll;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DecalStartTimeParamName;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DecalLifeSpanParamName;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DecalImpactNormalParamName;                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AnisotropicDirection;                                     // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowRandomRoll;                                         // 0x0054(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAnisotropicEffect;                                     // 0x0055(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldRandomlyPickMaterial;                              // 0x0056(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldRandomlyPickDecalSize;                             // 0x0057(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterBloodImpactDefinition
// 0x0030
struct FShooterBloodImpactDefinition
{
	class UParticleSystem*                             ImpactEffect;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ImpactEffectRobot;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ImpactEffectShielded;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactExitRandomAngle;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumDecals;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WorldDecalArray;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WorldDecalArrayRobot;                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterBloodImpactData
// 0x0050
struct FShooterBloodImpactData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAudioDamageCategory>                  DamageCategory;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MinDamage;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamage;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLowGravity;                                              // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKillShot;                                                // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterBloodImpactDefinition               ImpactDefinition;                                         // 0x0020(0x0030) (Edit)
};

// ScriptStruct ShooterGame.ShooterDamageImpactSounds
// 0x0040
struct FShooterDamageImpactSounds
{
	class UAkAudioEvent*                               DamageImpact;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DamageImpact_Armor;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DamageImpact_Shield;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               HeadshotImpact;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               HeadshotImpact_Armor;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               HeadshotImpact_Shield;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FatalDamageImpact;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FatalHeadshotImpact;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PickupSoundPair
// 0x0010
struct FPickupSoundPair
{
	TEnumAsByte<EPickupSoundType>                      Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               Sound;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterPhysicsVolumeOzoneConfig
// 0x0020
struct FShooterPhysicsVolumeOzoneConfig
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageOverTime;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MaxSpeedOverTime;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 GroundDamageOverTime;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterEndOfMatchConfig
// 0x0008
struct FShooterEndOfMatchConfig
{
	float                                              EndOfMatchWaitTime;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MatchEndedInWarmupTime;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterFreeCameraMovement
// 0x0010
struct FShooterFreeCameraMovement
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurningBoost;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterChaseCamSettings
// 0x0080
struct FShooterChaseCamSettings
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LockToSelfBoneName;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BlendToSelfCurve;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendToKillerDelay;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BlendToKillerCurve;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendToPitchIfNoKiller;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoRagdollMomentumFadeOutSpeed;                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendToDefault3PRotationDelay;                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BlendToDefault3PRotationCurve;                            // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResetupOnDeathTime;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwitchToNextBestLevelCameraTime;                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KillZOffset;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShooterFreeCameraMovement                  DefaultFreeCameraMovement;                                // 0x0050(0x0010) (Edit)
	struct FShooterFreeCameraMovement                  FastFreeCameraMovement;                                   // 0x0060(0x0010) (Edit)
	float                                              VehicleZOffset;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VehicleCamDistance;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VehicleCamPitch;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCustStickerSlot
// 0x0028
struct FShooterCustStickerSlot
{
	struct FName                                       LoadName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UCustomStickerData>                StickerData;                                              // 0x0008(0x0020) (Edit)
};

// ScriptStruct ShooterGame.ShooterHealthBarColors
// 0x0044
struct FShooterHealthBarColors
{
	struct FLinearColor                                PrimaryHealthColor;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LowHealthColor;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EmptyHealthColor;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShieldColor;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowHealthPercent;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCameraOffsetInfo
// 0x0018
struct FShooterCameraOffsetInfo
{
	struct FVector                                     SocketOffset;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmLength;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DampFactor;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSmoothAdjust;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterArmorConfig
// 0x000C
struct FShooterArmorConfig
{
	TEnumAsByte<EArmorLevel>                           ArmorLevel;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ArmorHealth;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorMitigation;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterNameCatalogue
// 0x0040
struct FShooterNameCatalogue
{
	TArray<class FString>                              Prefix;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              BodyOne;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              BodyTwo;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Suffix;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.GravityBubblePreset
// 0x0010
struct FGravityBubblePreset
{
	TEnumAsByte<EGravityBubble>                        GravityType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CharacterGravityScale;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterFallingDownGravityScale;                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.GravityVolumeData
// 0x0060
struct FGravityVolumeData
{
	TEnumAsByte<EGravityBubble>                        GravityType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CustomCharacterGravityScale;                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomCharacterFallingDownGravityScale;                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomProjectileGravityScale;                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveSpeedMultiplier;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableBothPointAndNonPointGravity;                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoCalculateOrbitalAcceleration;                         // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              PointGravityAcceleration;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PointGravityAccelerationCurve;                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowJumpEscape;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseBlending;                                              // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyToFriendlyCharacters;                                // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyToEnemyCharacters;                                   // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyToFriendlyProjectiles;                               // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyToEnemyProjectiles;                                  // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyToObjectives;                                        // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	float                                              DistFromBrushEdge;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSphereCurve;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class UCurveFloat*                                 HorizontalCurve;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VerticalCurveUp;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 GravityScaleOverTime;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterGravityScale;                                    // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CharacterFallingDownGravityScale;                         // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartTime;                                                // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.GravitySeedData
// 0x0070
struct FGravitySeedData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoOrbitRadius;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoOrbitAccel;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoOrbitAccelTimeLimit;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOrbitSpeed;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOrbitExitSpeed;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActiveBuffToApply;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyBuffToTeammates;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyBuffToEnemies;                                      // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachToOwner;                                           // 0x0022(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowOwnerToFly;                                         // 0x0023(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGravityEffectEnemiesOnly;                                // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              TimeDilation;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeDilation_MoveSpeedFactor;                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeDilation_FireRateFactor;                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowApplyGravity;                                       // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              SoundRetriggerDelay;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopFXSpawnDelay;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EnterSound;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ExitSound;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LoopingActiveSound;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               KillSound;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSendProjectileDeflectionTelemetry;                 // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FName                                       DeflectionTelemetryKey;                                   // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.VoiceOverData
// 0x0040
struct FVoiceOverData
{
	class UAkAudioEvent*                               Friend;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Enemy;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Carrier;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SpectatorLaw;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SpectatorBreakers;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Priority;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinReplayTime;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWaitTime;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delay;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           SamePrioConflictResolution;                               // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           LowerPrioConflictResolution;                              // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.ActiveButton
// 0x0570
struct FActiveButton
{
	class UButton*                                     Button;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FButtonStyle                                DefaultStyle;                                             // 0x0010(0x02B0) (BlueprintVisible, Transient)
	struct FButtonStyle                                ActiveStyle;                                              // 0x02C0(0x02B0) (BlueprintVisible, Transient)
};

// ScriptStruct ShooterGame.ShooterAbilityData
// 0x0078
struct FShooterAbilityData
{
	class UAkAudioEvent*                               StartAbilitySound;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StopAbilitySound;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoolDownDuration;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxActiveDuration;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOVBlendInSpeed;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOVBlendOutSpeed;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartFOVBlendOnAbilityStart;                             // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreFOVOnLand;                                        // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreFOVOnStop;                                        // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	float                                              RestoreFOVTime;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClientLockoutDuration;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUltimateAbility;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCauseRadarVisibility;                                 // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartSoundLocalOnly;                                     // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartCooldownOnStop;                                     // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOnReplica;                                         // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreEMP;                                               // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	TArray<class UClass*>                              EffectorAbilties;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkAudioEvent*                               CooldownReadySound;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TelemetryName;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKEY>                                OverrideKeys;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0068(0x0004) MISSED OFFSET
	float                                              UltimateForgivenessTime;                                  // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOverrideKeys;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityBindInfoCommandIDPair
// 0x0018
struct FShooterAbilityBindInfoCommandIDPair
{
	class FString                                      CommandString;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EInputEvent>                           InputID;                                                  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityBindInfo
// 0x0018
struct FShooterAbilityBindInfo
{
	TArray<struct FShooterAbilityBindInfoCommandIDPair> CommandBindings;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ShooterAbilityClass;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.MinMaxColoredRange
// 0x0018
struct FMinMaxColoredRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PlayerMarker
// 0x001C
struct FPlayerMarker
{
	struct FVector2D                                   MarkerLocation;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                MarkerColor;                                              // 0x0008(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMarkerVisible;                                           // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ComponentMarker
// 0x0018
struct FComponentMarker
{
	class UClass*                                      MarkerWidgetClass;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WidgetSizeScale;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayOnMap;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayOnCompass;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateComponent;                                         // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSquadmateWidget;                                         // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.DroidData
// 0x0048
struct FDroidData
{
	struct FName                                       TelemetrySafeName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanTakeDamage;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UParticleSystem*                             DroidIdleFX;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DroidDestroyedFX;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DroidDisabledFX;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroidActiveSound;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroidDisableSound;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroidDestroyedSound;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDamageOwner;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              OwnerDamageScalar;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ScoreSound
// 0x0028
struct FScoreSound
{
	class UAkAudioEvent*                               SoundToPlay;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               MusicStinger;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               GenericSoundOverride;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DialoguePriority;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundDelay;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           SamePriorityConflictResolution;                           // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PumpData
// 0x000C
struct FPumpData
{
	uint32_t                                           KEY;                                                      // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           v1;                                                       // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           v2;                                                       // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.TooltipPair
// 0x0020
struct FTooltipPair
{
	TEnumAsByte<ETutorialTooltipCategory>              Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       LocalizedText;                                            // 0x0008(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.BuffFXData
// 0x0020
struct FBuffFXData
{
	class UParticleSystem*                             BuffFX;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ActivePSU;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttached;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.BuffData
// 0x0090
struct FBuffData
{
	TEnumAsByte<EBuffInteraction>                      BuffInteractionType;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteDuration;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MaxRefreshCount;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInfiniteRefreshes;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MaxStacks;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBuffFXData>                         FirstPersonFXs;                                           // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBuffFXData>                         AlternateFirstPersonFXs;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBuffFXData>                         ThirdPersonFXs;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBuffFXData>                         AlternateThirdPersonFXs;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEvent*                               StartSound;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StartMix;                                                 // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EndSound;                                                 // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EndMix;                                                   // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BuffActivateScoreEvent;                                   // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OnAssistScoreEvent;                                       // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTriggerAssistScoreEventForKillByOwner;                   // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBuffType>                             BuffType;                                                 // 0x0089(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.AccelGateBuffConfig
// 0x000C
struct FAccelGateBuffConfig
{
	float                                              MoveSpeedMultiplier;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldAffectGravity;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.AmpedBuffData
// 0x0010
struct FAmpedBuffData
{
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealingMultiplier;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageReductionMultiplier;                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.BloodBoilBuffData
// 0x0014
struct FBloodBoilBuffData
{
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialLifeExtension;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddedLifeExtension;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLifeExtension;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.DamageIncreaseBuffData
// 0x0004
struct FDamageIncreaseBuffData
{
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.DamageOverTimeData
// 0x0018
struct FDamageOverTimeData
{
	float                                              DamagePerSecond;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           FirstPersonFX;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.DamageReductionBuffData
// 0x0008
struct FDamageReductionBuffData
{
	float                                              DamageReduction;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFrontalOnly;                                           // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.DamageTransferData
// 0x0010
struct FDamageTransferData
{
	float                                              DamageTransferPercentage;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.DestroyBuffData
// 0x0020
struct FDestroyBuffData
{
	class UCurveFloat*                                 ReloadPowerGrowthCurve;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 kickDamagePowerGrowthCurve;                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WeaponDamagePowerGrowthCurve;                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BuffDurationGrowthCurve;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.EnergyDamageScalar_Data
// 0x0004
struct FEnergyDamageScalar_Data
{
	float                                              EnergyDamageReductionScalar;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.AbilityAnimations
// 0x00A0
struct FAbilityAnimations
{
	class UAnimMontage*                                Throw;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                NinjaKickAttack;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll_Back;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll_Left;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll_Right;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll_BackRight;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll_BackLeft;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll_ForwardRight;                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll_ForwardLeft;                                   // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FlyingKick;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveRoll_In;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveRoll_Landing;                                         // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GenericEAbilityAnim;                                      // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZipLineRide;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DownButNotOut;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RevivedFromDown;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                InteractLoop;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GenericDance;                                             // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.WeaponAnimations
// 0x0318
struct FWeaponAnimations
{
	class UAnimMontage*                                BaseIdle;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Idle;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sprint_TransInLoop;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sprint_TransOut;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Idle;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               WeaponBonesStaticReplace;                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TertiaryActiveBaseIdle;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TertiaryActiveIdle;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TertiaryFireIdle;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                NoHands;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace*                        AimOffset;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace*                        AimOffsetWeaponDown;                                      // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace*                        BlindFireAimOffset;                                       // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Fire;                                                     // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Fire;                                          // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AltFire;                                                  // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_AltFire;                                       // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ChargeUp;                                                 // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_ChargeUp;                                      // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Unequip;                                                  // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Unequip;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Equip;                                                    // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Equip;                                         // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                EquipFirst;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_EquipFirst;                                    // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Reload;                                                   // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Reload;                                        // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Reload_3;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Reload_4;                                                 // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Reload_Long;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CycleReloadStart;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_CycleReloadStart;                              // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CycleReloadEnd;                                           // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_CycleReloadEnd;                                // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FastWeaponDrop;                                           // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_FastWeaponDrop;                                // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FastWeaponRaise;                                          // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_FastWeaponRaise;                               // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ADS_In;                                                   // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_ADS_In;                                        // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ADS_Out;                                                  // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_ADS_Out;                                       // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ADS_Fire;                                                 // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_ADS_Fire;                                      // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ADS_Fire_Scoped;                                          // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_ADS_Fire_Scoped;                               // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ADS_Idle;                                                 // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ADS_Idle_Scoped;                                          // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Recoil;                                                   // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Recoil;                                        // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RecoilSettle;                                             // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_RecoilSettle;                                  // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AltRecoil;                                                // 0x01A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_AltRecoil;                                     // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AltRecoilSettle;                                          // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_AltRecoilSettle;                               // 0x01B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeftArmBase;                                              // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThrowOverride;                                            // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_ThrowOverride;                                 // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                NinjaKickAttackOverride;                                  // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_NinjaKickAttackOverride;                       // 0x01E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 IdleRunStartOverride;                                     // 0x01E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 IdleRunOverride;                                          // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                InitialWeaponReset;                                       // 0x01F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BlindFireInLoop;                                          // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_BlindFireInLoop;                               // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BlindFireOut;                                             // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_BlindFireOut;                                  // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BlindFireInLoop_Override;                                 // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_BlindFireInLoop_Override;                      // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BlindFireOut_Override;                                    // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_BlindFireOut_Override;                         // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BlindFireOneShot;                                         // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_BlindFireOneShot;                              // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               ZeroGIdle_Override;                                       // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace1D*                      ZeroGAimOffset_Override;                                  // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JumpUpperBodyOverride;                                    // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JumpLowerBodyOverride;                                    // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JumpStartOverride;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DoubleJumpOverride;                                       // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                NormalLand_Override;                                      // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HardLand_Override;                                        // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               RiseFall_Override;                                        // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 Dodge_Override;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponModeSwitchAnim;                                     // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FireOut;                                                  // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Inspect;                                                  // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Inspect;                                       // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SwitchFireMode;                                           // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_SwitchFireMode;                                // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_Throw;                                         // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_NinjaKickAttack;                               // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Throw_Setup;                                              // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Throw_Hold;                                               // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Throw;                                                    // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Throw_Quick;                                              // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Quick_Melee_2;                                            // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Quick_Melee_3;                                            // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ColorBlender
// 0x003C
struct FColorBlender
{
	struct FLinearColor                                ColorA;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueA;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueB;                                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorC;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueC;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.Team
// 0x0010
struct FTeam
{
	TArray<class AShooterCharacter*>                   TeamPlayers;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ProjectilePool
// 0x0028
struct FProjectilePool
{
	TArray<class AShooterProjectile*>                  InactiveProjectiles;                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterProjectile*>                  ActiveProjectiles;                                        // 0x0010(0x0010) (ZeroConstructor, Transient)
	bool                                               Initialized;                                              // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                NumSpawned;                                               // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.ImpactInfo
// 0x00A8
struct FImpactInfo
{
	class AShooterProjectile*                          Projectile;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              Weapon;                                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x0010(0x0088) (Transient, IsPlainOldData)
	class UClass*                                      ImpactEffect;                                             // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.GamepadButtonIcons
// 0x0028
struct FGamepadButtonIcons
{
	struct FKEY                                        KEY;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  XboxIcon;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PS4Icon;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.TutorialToolTipInfo
// 0x0040
struct FTutorialToolTipInfo
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMovementAction;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       ActionText;                                               // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       FlavorText;                                               // 0x0028(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ShooterGame.ShooterMenu
// 0x0010
struct FShooterMenu
{
	class UClass*                                      Widget;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPerMenuPositionOverride
// 0x0020
struct FShooterPerMenuPositionOverride
{
	TEnumAsByte<EShooterUIScreen>                      VisibleScreen;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterUIScreen>                      PositionOverriddenScreen;                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector2D                                   PositionOverride;                                         // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnchors                                    AnchorsOverride;                                          // 0x000C(0x0010) (Edit)
	bool                                               bDisableDistortionEffect;                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.AttachmentUIData
// 0x00D0
struct FAttachmentUIData
{
	struct FText                                       AttachmentHUDName;                                        // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FSlateBrush                                 AttachmentIcon;                                           // 0x0020(0x0090) (Edit, DisableEditOnInstance)
	int                                                BonusWeaponUIStatLevels[0x5];                             // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.WeaponAttachmentUIData
// 0x0820
struct FWeaponAttachmentUIData
{
	struct FAttachmentUIData                           BarrelAttachments[0x2];                                   // 0x0000(0x00D0) (Edit)
	struct FAttachmentUIData                           ScopeAttachments[0x3];                                    // 0x01A0(0x00D0) (Edit)
	struct FAttachmentUIData                           MagAttachments[0x2];                                      // 0x0410(0x00D0) (Edit)
	struct FAttachmentUIData                           UnderbarrelAttachments;                                   // 0x05B0(0x00D0) (Edit)
	struct FAttachmentUIData                           SlotlessAttachments[0x2];                                 // 0x0680(0x00D0) (Edit)
};

// ScriptStruct ShooterGame.AmmoTypeHUDData
// 0x01E0
struct FAmmoTypeHUDData
{
	struct FText                                       AmmoTypeHUDName;                                          // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       AmmoTypeDescription;                                      // 0x0018(0x0018) (Edit, DisableEditOnInstance)
	struct FSlateBrush                                 AmmoTypeIcons[0x3];                                       // 0x0030(0x0090) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CosmeticLootSpawnerData
// 0x0010
struct FCosmeticLootSpawnerData
{
	struct FName                                       ItemName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BodyPart;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.CosmeticHUDData
// 0x0200
struct FCosmeticHUDData
{
	struct FCosmeticLootSpawnerData                    CosmeticID;                                               // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FText                                       CosmeticHUDName;                                          // 0x0010(0x0018) (Edit, DisableEditOnInstance)
	int                                                CosmeticRarityLevel;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       CosmeticDescription;                                      // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FSlateBrush                                 CosmeticIcons[0x3];                                       // 0x0050(0x0090) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.MiscPickupHUDData
// 0x00E0
struct FMiscPickupHUDData
{
	struct FName                                       PickupName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       PickupHUDName;                                            // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       PickupDescription;                                        // 0x0020(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSlateBrush                                 PickupIcon;                                               // 0x0040(0x0090) (Edit, DisableEditOnInstance)
	int                                                PickupRarityLevel;                                        // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.SubtitleData
// 0x0020
struct FSubtitleData
{
	struct FText                                       SubtitleText;                                             // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              DisplayTime;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.SubtitleMarkerData
// 0x0018
struct FSubtitleMarkerData
{
	struct FName                                       MarkerName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSubtitleData>                       SubtitleData;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.Shooter3DInfo
// 0x0024
struct FShooter3DInfo
{
	struct FVector2D                                   ParabolaFactor;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalMaxDelta;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalSpringyness;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMaxDelta;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalSpringyness;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlerpFactor;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimPointDistance;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateFactor;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.HUDBalancerConfig
// 0x0020
struct FHUDBalancerConfig
{
	float                                              MinTickFrequency;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultTickFrequency;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTickFrequency;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRenderFrequency;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTickJobsPerFrame;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRenderJobsPerFrame;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxLogEntries;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ForceAll;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlternateTickingRendering;                                // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct ShooterGame.PickupRarityData
// 0x0018
struct FPickupRarityData
{
	class UParticleSystem*                             PickupRarityFXTemplate;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        RarityColors;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.NamedSlateBrush
// 0x00A0
struct FNamedSlateBrush
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0010(0x0090) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.KillCardData
// 0x0130
struct FKillCardData
{
	TArray<struct FNamedSlateBrush>                    Backgrounds;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNamedSlateBrush>                    Frames;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNamedSlateBrush>                    Portraits;                                                // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, int>                            BackgroundsMap;                                           // 0x0030(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            FramesMap;                                                // 0x0080(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            PortraitsMap;                                             // 0x00D0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PlayerStandingsData
// 0x00D0
struct FPlayerStandingsData
{
	int                                                MinRank;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxRank;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       SuperlativeText;                                          // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	struct FSlateBrush                                 Background;                                               // 0x0020(0x0090) (Edit, DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SuperlativeCalloutSound;                                  // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ClientProjectHitRequest
// 0x0098
struct FClientProjectHitRequest
{
	int                                                ProjectileID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FHitResult                                  HitInfo;                                                  // 0x0008(0x0088) (IsPlainOldData)
	float                                              DistanceTraveled;                                         // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.OverridePSData
// 0x0018
struct FOverridePSData
{
	struct FName                                       OverrideName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             OverrideFX;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             OverrideTeamFX;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.AttachedSoundData
// 0x0010
struct FAttachedSoundData
{
	class UAkSoundInstance*                            LoopingAC;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ID;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.TakeHitInfo
// 0x0190
struct FTakeHitInfo
{
	float                                              ActualDamage;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           PawnInstigator;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DamageEventClassID;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SelfHitVOSeed;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TargetHitVOSeed;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnsureReplicationByte;                                    // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FDamageEvent                                GeneralDamageEvent;                                       // 0x0030(0x0030)
	struct FPointDamageEvent                           PointDamageEvent;                                         // 0x0060(0x00C8)
	struct FRadialDamageEvent                          RadialDamageEvent;                                        // 0x0128(0x0068)
};

// ScriptStruct ShooterGame.MeleeAttackConfig
// 0x0018
struct FMeleeAttackConfig
{
	float                                              AttackRange;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkillShotRadius;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreAimPitch;                                          // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UClass*                                      ImpactTemplate;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.NinjaKickConfigData
// 0x0098
struct FNinjaKickConfigData
{
	float                                              NinjaKickDamage;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FMeleeAttackConfig                          NinjaKickMeleeConfig;                                     // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	float                                              NinjaKickImpulse;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AdditiveImpulse;                                          // 0x0024(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NinjaKickTrackSpeedModifier;                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NinjaKickTrackAirSpeedModifier;                           // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToWallForKickoff;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallKickoffImpulse;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickMaxAccelOverride;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickTimeUntilDamage;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickDamageDuration;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationBeforeUnlockCam;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ViewTrackDegreesPerSecond;                                // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZeroStaminaDamageMultiplier;                              // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveStaminaDamageMultiplier;                            // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveStaminaAnimSpeedMultiplier;                         // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMitigation;                                         // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FailSound;                                                // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EnemyImpactSound;                                         // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HitFoleySound;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      KickBuff;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PopupTextData
// 0x0048
struct FPopupTextData
{
	class UMaterialInterface*                          PopupMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnPoint;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffsetMin;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffsetMax;                                           // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   EndPointScreenOffset;                                     // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FadeCurve;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AliveTime;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnabled;                                                // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PopupText
// 0x0030
struct FPopupText
{
	class UTextRenderComponent*                        TextComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartTime;                                                // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PeriodicSound
// 0x0010
struct FPeriodicSound
{
	class UAkAudioEvent*                               AkSound;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalBetweenPlays;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundPlayedTime;                                          // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.BuffStatMultiplierData
// 0x002C
struct FBuffStatMultiplierData
{
	float                                              BuffMovementSpeedMultiplier;                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuffDamageMultiplier;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KickDamageMultiplier;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReloadSpeedMultiplier;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageReductionMultiplier;                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeaponSwapSpeedMultiplier;                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealingOutputMultiplier;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrontalDamageReductionMultiplier;                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              JumpSpeedMultplier;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinHP;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AbilityRechargeMultiplier;                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterHealingSoundPair
// 0x0010
struct FShooterHealingSoundPair
{
	TEnumAsByte<EHealSoundType>                        SoundType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.TetherTargetData
// 0x0010
struct FTetherTargetData
{
	class UParticleSystemComponent*                    TetheredPSC;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooterCharacter*                           TetherTarget;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.AbilityDebuffData
// 0x0018
struct FAbilityDebuffData
{
	class AShooterCharacter*                           Victim;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DebuffStartTime;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebuffDuration;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAbilityDebuff>                        DebuffType;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.ScoreTriggerType
// 0x0020
struct FScoreTriggerType
{
	struct FName                                       SpecificEvent;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MultiplyScoreByCounter;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageDealt;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EScore>                                ScoreType;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bOnlyWhenHeadshot : 1;                                    // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bOnlyWhenBlindfire : 1;                                   // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bEnableInShipping : 1;                                    // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.KillAssistData
// 0x0048
struct FKillAssistData
{
	class AController*                                 Attacker;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              AttackerWeapon;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeStamp;                                                // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FScoreTriggerType                           ScoreTriggerType;                                         // 0x0018(0x0020) (Transient)
	struct FVector                                     LastDmgLoc;                                               // 0x0038(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PerspectiveMontagesPlayedInState
// 0x0020
struct FPerspectiveMontagesPlayedInState
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAnimMontage*>                        AltAnimMontages;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      StateMontagesPlayedIn;                                    // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.CachedPickupSpawn
// 0x0028
struct FCachedPickupSpawn
{
	struct FVector                                     SpawnPos;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnDir;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      PickUp;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PerspectiveFXData
// 0x0068
struct FPerspectiveFXData
{
	class UParticleSystem*                             FirstPersonFX;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FirstPersonSpectatedBreakerFX;                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FirstPersonSpectatedLawFX;                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonAllyFX;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonEnemyFX;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonSpectatedLawFX;                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SocketNames;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FVector                                     LocationOffset;                                           // 0x0040(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UClass*                                      ImpactTemplate;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamEndName;                                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResartFXWhenPerspectiveChanges;                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PerspectiveFX
// 0x00B0
struct FPerspectiveFX
{
	struct FPerspectiveFXData                          PerspectiveFXData;                                        // 0x0000(0x0068) (Transient)
	class AShooterCharacter*                           ShooterCharacter;                                         // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              AttachToWeapon;                                           // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            SpawnedParticles;                                         // 0x0080(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UParticleSystem*                             ParticleSystemChosen;                                     // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooterImpactEffect*>                SpawnedImpacts;                                           // 0x0098(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCharacterMaterialShaderParameters
// 0x01B0
struct FShooterCharacterMaterialShaderParameters
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            CharacterThirdPersonMaterials;                            // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            WeaponThirdPersonMaterials;                               // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            CharacterFirstPersonMaterials;                            // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            WeaponFirstPersonMaterials;                               // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x150];                                     // 0x0060(0x0150) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterReplicatedArmor
// 0x0018
struct FShooterReplicatedArmor
{
	class UClass*                                      ArmorClass;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ArmorHealth;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ArmorMaxHealth;                                           // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EArmorLevel>                           ArmorLevel;                                               // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.DebugBodyPosition
// 0x0018
struct FDebugBodyPosition
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C)
	struct FVector_NetQuantizeNormal                   Rotation;                                                 // 0x000C(0x000C)
};

// ScriptStruct ShooterGame.HealOverTimeData
// 0x000C
struct FHealOverTimeData
{
	float                                              HealPerSecond;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InstantBoost;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHealSoundType>                        HealSoundType;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.MarkedForDeathData
// 0x0004
struct FMarkedForDeathData
{
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PointAttractorData
// 0x0008
struct FPointAttractorData
{
	float                                              PullForce;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.SpeedBuffData
// 0x0008
struct FSpeedBuffData
{
	float                                              SpeedMultiplier;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpSpeedMultiplier;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.StatisBuffData
// 0x0068
struct FStatisBuffData
{
	float                                              SlowMultiplier;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlowLateralFriction;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGravityVolumeData                          VolumeData;                                               // 0x0008(0x0060) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.WeaponSwapBuffData
// 0x0008
struct FWeaponSwapBuffData
{
	float                                              SpeedMultiplier;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadMultiplier;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.IntelBuffData
// 0x0018
struct FIntelBuffData
{
	class UMaterial*                                   intelMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               TagSound;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               UntagSound;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_AimDirDash
// 0x000C
struct FShooterAbilityData_AimDirDash
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpamSpeed;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpamTimeThreshold;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_AkimboDuzi
// 0x0008
struct FShooterAbilityData_AkimboDuzi
{
	class UClass*                                      AkimboDuziTemplate;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_AmpedUp
// 0x0038
struct FShooterAbilityData_AmpedUp
{
	class UClass*                                      PassiveBuffToApply;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionDamageMax;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageMin;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionInnerRadius;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionOuterRadius;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageFallOff;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageMitigation;                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamagePassThrough;                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UParticleSystem*                             BuffActiveFX;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BuffActiveSound;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_Applybuff
// 0x0018
struct FShooterAbilityData_Applybuff
{
	class UClass*                                      buff;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApplyRange;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardX;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardY;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyToTeammate;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_Backflip
// 0x000C
struct FShooterAbilityData_Backflip
{
	float                                              HorizontalSpeed;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakingDecelOverride;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_DroneAttack
// 0x0028
struct FShooterAbilityData_DroneAttack
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmo;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmmoRegen;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FireSound;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalSpawnOffset;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizSpawnOffset;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_BattleHeal
// 0x0028
struct FShooterAbilityData_BattleHeal
{
	float                                              Heal;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMitigation;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CooldownReducedPerHealTick;                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealSound;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           NovaMaterial;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           NovaMaterial_FP;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_Battlestation
// 0x0018
struct FShooterAbilityData_Battlestation
{
	class UClass*                                      BattlestationClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BattlestationSpawnTime;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffsetVector;                                        // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_CatalyzeBuff
// 0x0018
struct FShooterAbilityData_CatalyzeBuff
{
	class UClass*                                      BuffToCatalyze;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CatalyzeRadius;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UParticleSystem*                             ActivationFx;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ChargeJump
// 0x0010
struct FShooterAbilityData_ChargeJump
{
	float                                              MinJumpImpulse;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxJumpImpulse;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedMultiplier;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxChargeTime;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ChargeShot
// 0x0018
struct FShooterAbilityData_ChargeShot
{
	class UAkAudioEvent*                               ChargeSound;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlindDuration;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlindBillboardSize;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           DebugLaserCannonMaterial;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ChargeDashBoost
// 0x0004
struct FShooterAbilityData_ChargeDashBoost
{
	float                                              SlideSpeed;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_CombatRoll
// 0x0040
struct FShooterAbilityData_CombatRoll
{
	float                                              TotalDisplacement;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTurnSpeed;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeWhenInputUnlocks;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundThresholdForLanding;                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundThresholdForAirDive;                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDisplacementAir;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplacementDurationFromAir;                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplacementDurationFromGround;                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeForLanding;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               SlideStartSound;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollCollisionScale;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RollDisplacementCurve;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ComboSystem
// 0x0038
struct FShooterAbilityData_ComboSystem
{
	float                                              ComboPointsOnDamage;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboPointsOnKill;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboFlatLoss;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboBlinkPenalty;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboRailgunCost;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      DecayRates;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxComboMoveSpeedMultiplier;                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ComboEffectCurve;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ConcussionBlast
// 0x000C
struct FShooterAbilityData_ConcussionBlast
{
	float                                              BaseSpeed;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceSpeed;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocity;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_DeployTeleporter
// 0x0008
struct FShooterAbilityData_DeployTeleporter
{
	class UClass*                                      TeleportStartActor;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_DevourGravity
// 0x0018
struct FShooterAbilityData_DevourGravity
{
	class UClass*                                      BuffToApply;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EMPRadius;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UParticleSystem*                             ActivationFx;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_Throw
// 0x0040
struct FShooterAbilityData_Throw
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditivePitchAngle;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InheritPlayerVelocity;                                    // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       ThrowBoneName;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanCook;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     ThrowRelativePositionOverride;                            // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PredictiveArcPointFX;                                     // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PredictiveArcImpactFX;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumArcSegments;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterProjectilePredictionData
// 0x0030
struct FShooterProjectilePredictionData
{
	TArray<class AActor*>                              IgnoreActors;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              InitialSpeed;                                             // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ThrowableRadius;                                          // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0018(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_DroneManager
// 0x0088
struct FShooterAbilityData_DroneManager
{
	float                                              FriendlyTargetBillboardSize;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FriendlyTargetRange;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DroneDeployDelay;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DroneSpawnDelay;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DroneTag;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachmentSocket;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachmentSocketSelfLeft;                                 // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachmentSocketSelfRight;                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DroneClass;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DroneMaxSpawnTime;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRestrictDroneApplication;                                // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              SendDroneFXDelay;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UParticleSystem*                             FriendlyDroneWarpOut;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EnemyDroneWarpOut;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpectatedLawDroneWarpOut;                                 // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               WarpOutSound_Begin;                                       // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               WarpOutSound_Execute;                                     // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneFrenzyTriggeredSound_Left;                           // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneFrenzyTriggeredSound_Right;                          // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DroneFrenzyRetriggerDelay;                                // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageCDRFactor;                                          // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_GhostScoutMode
// 0x0010
struct FShooterAbilityData_GhostScoutMode
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      BuffToApply;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_GravitySmash
// 0x0020
struct FShooterAbilityData_GravitySmash
{
	class UClass*                                      GravitySeed;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalBoost;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallGravityScale;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRange;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_HackDrone
// 0x0008
struct FShooterAbilityData_HackDrone
{
	class UClass*                                      Drone;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_JetGlider
// 0x0068
struct FShooterAbilityData_JetGlider
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmUpSpeed;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmUpduration;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionChangeAcceleration;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMaxRate;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedFOV;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialBoost;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoosterUpForce;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoosterDownForce;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecel;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelUsagePerSecond;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpFuelUsage;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelRegen;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 JetGliderIdleCurve;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IdleAccel;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               HoverActiveSound;                                         // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HoverStartMoveSound;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HoverEndSound;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BoostJumpSound;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_JumpBlink
// 0x0004
struct FShooterAbilityData_JumpBlink
{
	float                                              DoubleTapTime;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_KneeSlide
// 0x0038
struct FShooterAbilityData_KneeSlide
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloorThreshold;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownBoost;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackDashSpeed;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackDashUpSpeed;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnSpeed;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SlideOutSound;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SlideStartSound;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BackDashSound;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_LaserUnibeamFX
// 0x0058
struct FShooterAbilityData_LaserUnibeamFX
{
	class UParticleSystem*                             FirstPersonFX;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ThirdFriendlyFX;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ThirdEnemyFX;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ImpactTemplate;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDelay;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FirstPersonAttachPoint;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThirdPersonAttachPoint;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EndPointParameter;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX;                                                 // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AShooterImpactEffect*                        ActiveImpactEffect;                                       // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_LaserUnibeam
// 0x0040
struct FShooterAbilityData_LaserUnibeam
{
	float                                              WindUpTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTurnSpeed;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpVelocity;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamagePerSecond;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShooterAbilityData_LaserUnibeamFX>  Effects;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterAbilityData_LaserUnibeamFX>  LawEffects;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterAbilityData_LaunchLobberMine
// 0x0018
struct FShooterAbilityData_LaunchLobberMine
{
	float                                              AltFireDelay;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AltFireMaxCharges;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AltFireCooldown;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_Mantle
// 0x0014
struct FShooterAbilityData_Mantle
{
	float                                              CastStartHeight;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CastRange;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbSpeed;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFuel;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_MimicShield
// 0x0020
struct FShooterAbilityData_MimicShield
{
	class UClass*                                      PassiveBuffToApply;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MimicShieldClass;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BillBoardX;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardY;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApplyRange;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_NinjaSprint
// 0x001C
struct FShooterAbilityData_NinjaSprint
{
	float                                              BaseSpeed;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Accel;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnFriction;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactVerticalSpeed;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CombatRolllSpeed;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CombatRollDuration;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CombatRollCooldown;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_OniWrath
// 0x0048
struct FShooterAbilityData_OniWrath
{
	class UClass*                                      SpeedBuff;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HealAmountOnKill;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationExtentionOnKill;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsUntilReady;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsGainedFromKills;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ShadowMaterial;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StartSound;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LoopingActiveSound;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EndSound;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DamageBuffFX;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TeamDamageBuffFX;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_Paladin
// 0x0020
struct FShooterAbilityData_Paladin
{
	class UClass*                                      ShieldClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldSpawnTime;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApproxShieldRadius;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwayImpulseScale;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpImpulseScale;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               PushbackSound;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_PaladinFervor
// 0x0048
struct FShooterAbilityData_PaladinFervor
{
	float                                              Shield;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      UltimateWeapon;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealTickRate;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealRadius;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfHealMultiplier;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealSound;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealPerScoreEvent;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UParticleSystem*                             HealPulseFX;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealPulseSound;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseRate;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParticleScale;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_PassiveHeal
// 0x0028
struct FShooterAbilityData_PassiveHeal
{
	float                                              TickRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealPerTick;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCooldownOnHit;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               HealingBeginSound;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealingEndInterruptedSound;                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealingEndMaxHealthSound;                                 // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_PhaseWalk
// 0x0008
struct FShooterAbilityData_PhaseWalk
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_PickupPlacement
// 0x0020
struct FShooterAbilityData_PickupPlacement
{
	class UClass*                                      PlacedActor;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeSpawn;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxActiveDeploys;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDistance;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalOffset;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngleLimit;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ShieldGen
// 0x0018
struct FShooterAbilityData_ShieldGen
{
	class UClass*                                      TotemClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeLimitation;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_PowerGun
// 0x0018
struct FShooterAbilityData_PowerGun
{
	class UClass*                                      UltimateWeapon;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoolDownMultiplier;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthThreshold;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxShots;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_PrincessDash
// 0x0008
struct FShooterAbilityData_PrincessDash
{
	float                                              FwdSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpSpeed;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_QuickFire
// 0x0008
struct FShooterAbilityData_QuickFire
{
	float                                              FireDelay;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExitDelay;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_RailGun
// 0x0030
struct FShooterAbilityData_RailGun
{
	float                                              AmmoGenRate;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRailgunShots;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeDelay;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ChargeSound;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ChargeFXTeam;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ChargeFXEnemy;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChargeAttachName;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ReconKnife
// 0x0008
struct FShooterAbilityData_ReconKnife
{
	class UClass*                                      KnifeClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_ReconSonar
// 0x0010
struct FShooterAbilityData_ReconSonar
{
	class UClass*                                      TargetBuff;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Length;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_Revive
// 0x0010
struct FShooterAbilityData_Revive
{
	class UClass*                                      Indicator;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_RocketPunch
// 0x0008
struct FShooterAbilityData_RocketPunch
{
	float                                              MinRocketPunchFlyDistance;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRocketPunchFlyDistance;                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_SamuraiBoostJump
// 0x0028
struct FShooterAbilityData_SamuraiBoostJump
{
	class UCurveFloat*                                 BoostSpeedByTime;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostSpeed;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostTriggerSpeed;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BoostSound;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BoostStart;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BoostEnd;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_SamuraiDefense
// 0x0028
struct FShooterAbilityData_SamuraiDefense
{
	class UCurveFloat*                                 SpeedByTime;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BoostSound;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorGen;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      SelfBuffClass;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_SelfHeal
// 0x000C
struct FShooterAbilityData_SelfHeal
{
	float                                              HealPerSecond;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealing;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectDelay;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponData
// 0x03A0
struct FWeaponData
{
	class UClass*                                      WeaponAnimations;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ImpactItemClass;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             IdleFXFirst;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             IdleFXThird;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IdleFXAttachPoint;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             IdleFXFirstOff;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             IdleFXThirdOff;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IdleFXAttachPointOff;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DetonationTriggeredSound;                                 // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OnDamageBuff;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              OnEquipBuffs;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              OnADSBuffs;                                               // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      UseItemBuff;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAmmoType>                             MyAmmoType;                                               // 0x0078(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAmmoType>                             MyAmmoTypeSecondary;                                      // 0x0079(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          MyWeaponClass;                                            // 0x007A(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007B(0x0001) MISSED OFFSET
	int                                                RecycleValue;                                             // 0x007C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoPerClipSecondary;                                     // 0x0084(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialClips;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialAmmo;                                              // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenShots[0x2];                                    // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bInfiniteClip : 1;                                        // 0x0098(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bInfiniteClipSecondary : 1;                               // 0x0098(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bCylcingReload : 1;                                       // 0x0098(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHasAltFireMode : 1;                                      // 0x0098(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bCanCauseRadarVisibility : 1;                             // 0x0098(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bIsTertiaryWeapon : 1;                                    // 0x0098(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bUseDefaultReticle : 1;                                   // 0x0098(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bDoesAllowReload : 1;                                     // 0x0098(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bSetMasterPoseComponent : 1;                              // 0x0099(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bDoAttachFXToMuzzle : 1;                                  // 0x0099(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bHasADS : 1;                                              // 0x0099(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bCanUseWhileDriving : 1;                                  // 0x0099(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UseHUDAmmoCounter : 1;                                    // 0x0099(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAddPlayerVelocity : 1;                                   // 0x0099(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAltFireRotatesPattern : 1;                               // 0x0099(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bDisableIdleFXDuringReload : 1;                           // 0x0099(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	TEnumAsByte<EWeaponAmmo>                           AmmoTypes[0x2];                                           // 0x009C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	float                                              TargetingFOV;                                             // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetingFirstPersonFOV;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetingFOVBlendSpeed;                                   // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationScale;                                      // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              NoAnimReloadDuration;                                     // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x00B4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class FString                                      MasterPoseReplaceNamespace;                               // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	class FString                                      MasterPoseReplaceWith;                                    // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	float                                              BlindFireDelay;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BlindFireTransOutCancelTime;                              // 0x00DC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanMoveWhileUsing;                                        // 0x00E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              SelfDamageScalar;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticleRange;                                             // 0x00E8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FireAudioRampAccel;                                       // 0x00EC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FireAudioRampDecel;                                       // 0x00F0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FName                                       FireAudioRampParamName;                                   // 0x00F8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeedMultiplier;                                       // 0x0100(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipSpeedMultiplier;                                     // 0x0104(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnFrictionMultiplier;                                   // 0x0108(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafeMultiplier;                                         // 0x010C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BackpedalMultiplier;                                      // 0x0110(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AimAssistModifier;                                        // 0x0114(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWeaponSwapIsModeChange;                                  // 0x0118(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanInspect;                                              // 0x0119(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanCustomize;                                            // 0x011A(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x011B(0x0005) MISSED OFFSET
	class UClass*                                      ItemSpawnedOnKill;                                        // 0x0120(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OnKillBuff;                                               // 0x0128(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseLongReload;                                           // 0x0130(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRangeCrosshair;                                        // 0x0131(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	float                                              RangeCrosshairTraceRadius;                                // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeCrosshairDampInFactor;                               // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeCrosshairDampOutFactor;                              // 0x013C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalProjectileLaunchOffset;                           // 0x0140(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 InRangeCrosshair;                                         // 0x0148(0x0018) (Edit, DisableEditOnInstance)
	bool                                               bShareRefireTimers;                                       // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotifyRefireCooldown;                                    // 0x0161(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowAltFireFromReload;                                  // 0x0162(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowFullAuto;                                           // 0x0163(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFullAutoOnly;                                            // 0x0164(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowBurst;                                              // 0x0165(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowBurstSecondary;                                     // 0x0166(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0167(0x0001) MISSED OFFSET
	float                                              AccelerationFromRecoil;                                   // 0x0168(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class FString                                      WeaponName;                                               // 0x0170(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       WeaponNameForAnim;                                        // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	struct FSlateBrush                                 HUDIcons[0x3];                                            // 0x0190(0x0090) (Edit, DisableEditOnInstance)
	int                                                WeaponRarityLevelOverride;                                // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UIStatLevels[0x5];                                        // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       WeaponDescription;                                        // 0x0358(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      AssociatedPickupClass;                                    // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMeleeAttackConfig                          QuickMeleeConfig;                                         // 0x0378(0x0018) (Edit, DisableEditOnInstance)
	bool                                               bThrown;                                                  // 0x0390(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanThrow;                                                // 0x0391(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePitchOverride;                                        // 0x0392(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0393(0x0001) MISSED OFFSET
	float                                              ThrowPitchOverride;                                       // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ProceduralSway
// 0x0018
struct FProceduralSway
{
	float                                              PitchScale;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchSpeed;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              YawScale;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              YawSpeed;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RollScale;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RollSpeed;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponKickData
// 0x0014
struct FWeaponKickData
{
	float                                              KickPitchMin;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              KickPitchMax;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              KickYawMin;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              KickYawMax;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              KickDuration;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.LaserWeaponData
// 0x0038
struct FLaserWeaponData
{
	class UCurveFloat*                                 DamageByDistance;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OnHitBuff;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OnHitTargetBuff;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                Damage;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinDamage;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              Range;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardX;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardY;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ConnectToTeammates : 1;                                   // 0x002C(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bLaserBeamRequiresTarget : 1;                             // 0x002C(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bTickDamageEveryFrame : 1;                                // 0x002C(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	bool                                               bUseSecondLaserBeam;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.InstantWeaponData
// 0x00B0
struct FInstantWeaponData
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AltFireDamageType;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageByDistance;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OnHitBuff;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OnHitEnemyBuff;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponSpread;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadModifier_Walk;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadModifier_Air;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadModifier_Crouch;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadModifier_Prone;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadModifier_OTS;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadModifier_ADS;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SpreadDistribution;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringSpreadIncrement;                                    // 0x0050(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringSpreadMax;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringSpreadRecoverySpeed;                                // 0x0058(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseSpreadRecoverySpeed;                                  // 0x005C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseSpreadGrowthSpeed;                                    // 0x0060(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseMaxSpread;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloffStartRange;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloffEndRange;                                    // 0x006C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponRange;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AssistRange;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AssistBillboardX;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AssistBillboardY;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                HitDamage;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMaxRange;                                           // 0x0084(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinDamage;                                                // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                RadialDamageOuterZone;                                    // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialDamageInnerZoneSize;                                // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientSideHitLeeway;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedViewDotHitDir;                                     // 0x0098(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfImpulse;                                              // 0x009C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              GibHealthThreshold;                                       // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadshotDamageMultiplier;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PassThroughDamagePercentage;                              // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamagePenetratePlayers;                                   // 0x00AC(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRadialDamage;                                          // 0x00AD(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
};

// ScriptStruct ShooterGame.WeaponFireMode
// 0x00E8
struct FWeaponFireMode
{
	class UParticleSystem*                             MuzzleFX;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             StartFireMuzzleFX;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TracerFX;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TracerFX3P;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TracerFX3PTeam;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFXThirdPersonOverride;                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FireCameraShake;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        FireForceFeedback;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FireSound;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FireLoopSound;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FireFinishSound;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LowAmmoSound;                                             // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LowAmmoThresholdSound;                                    // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OutOfAmmoSound;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BulletWhizzSound;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LowAmmoAmount;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                LowAmmoThresholdAmount;                                   // 0x007C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoConsumed;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoReloadDelay;                                          // 0x0084(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartFireSoundPlaysOnce : 1;                             // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bLoopedMuzzleFX : 1;                                      // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bLoopedFireAnim : 1;                                      // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bUseDetonate : 1;                                         // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bUseProjectileRedirection : 1;                            // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bUseAngleBetweenShoots : 1;                               // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      OverrideFullAuto : 1;                                     // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bAllowingHomingProjectiles : 1;                           // 0x0088(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              ProjPitchRedirAngle;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjYawRedirAngle;                                        // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HitTraceRadius;                                           // 0x0094(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      AnglesBetweenShoots;                                      // 0x0098(0x0010) (Edit, ZeroConstructor, Config)
	float                                              AdditivePitchAngle;                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BulletBySoundRadius;                                      // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BulletWhizzCDTime;                                        // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AbilityResourceUsage;                                     // 0x00B4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberofBurstFireShots;                                   // 0x00B8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenBurstShots;                                    // 0x00BC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVOnShoot;                                               // 0x00C0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVHoldTime;                                              // 0x00C4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVBlendOut;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowInputBuffering;                                     // 0x00CC(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	unsigned char                                      bUseAllAmmoOnFire : 1;                                    // 0x00D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      bStopShakeOnStopFire : 1;                                 // 0x00D0(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	bool                                               bFireOnPress;                                             // 0x00D4(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              DelayBeforeOtherModeCanFire;                              // 0x00D8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FireLoopDelay;                                            // 0x00DC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRefire;                                               // 0x00E0(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ActiveFireMode
// 0x0020
struct FActiveFireMode
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UAkSoundInstance*                            FireAC;                                                   // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponBarrelConfig
// 0x0018
struct FWeaponBarrelConfig
{
	class UAkAudioEvent*                               Silencer_FireSound;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Silencer_FireLoopSound;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtendedBarrel_ProjectileSpeedMultiplier;                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.WeaponScopeConfig
// 0x0014
struct FWeaponScopeConfig
{
	bool                                               bScopeIsDefault;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scope_SpreadModifier;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scope2_FOV;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scope4_FOV;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scope8_FOV;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponMagConfig
// 0x0008
struct FWeaponMagConfig
{
	int                                                ExtendedMag_AmmoPerClip;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuickdrawMag_ReloadSpeedScalar;                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponUnderbarrelConfig
// 0x0004
struct FWeaponUnderbarrelConfig
{
	float                                              LaserSight_SpreadModifier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponMiscAttachmentConfig
// 0x0018
struct FWeaponMiscAttachmentConfig
{
	float                                              HairTrigger_TimeBetweenShots;                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponKickData                             RubberizedGrip_Kick;                                      // 0x0004(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponAttachmentConfig
// 0x0070
struct FWeaponAttachmentConfig
{
	TEnumAsByte<EAttachmentBarrel>                     SupportedBarrel;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FWeaponBarrelConfig                         BarrelConfig;                                             // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttachmentScope>                      SupportedScope;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FWeaponScopeConfig                          ScopeConfig;                                              // 0x0024(0x0014) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttachmentMag>                        SupportedMag;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FWeaponMagConfig                            MagConfig;                                                // 0x003C(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttachmentUnderbarrel>                SupportedUnderbarrel;                                     // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FWeaponUnderbarrelConfig                    UnderbarrelConfig;                                        // 0x0048(0x0004) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttachmentMisc>                       SupportedMiscAttachment;                                  // 0x004C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FWeaponMiscAttachmentConfig                 MiscAttachmentConfig;                                     // 0x0050(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttachmentsClasses>                   Level1Attachment;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAttachmentsClasses>                   Level2Attachment;                                         // 0x0069(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAttachmentsClasses>                   Level3Attachment;                                         // 0x006A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAbilityData_ShockwavePunch
// 0x00B0
struct FShooterAbilityData_ShockwavePunch
{
	float                                              DashSpeed;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchDamage;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShockWaveZone;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoneSpawnInterval;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoneSpawnSeperationDistance;                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoneLifeTime;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowFromGround;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              DashZVelocity;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDashTime;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxZoneCount;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               PunchLandSound;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               PunchExplodeSound;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PassiveBuffToApply;                                       // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTravelDistance;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTravelDistance;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilDamage;                                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FMeleeAttackConfig                          PunchMeleeConfig;                                         // 0x0058(0x0018) (Edit, DisableEditOnInstance)
	float                                              BottomHalf;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TopHalf;                                                  // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Height;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageImpulse;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchImpulseToTarget;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardSize;                                            // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchImpulseRange;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UClass*                                      PrimaryAttack_DamageType;                                 // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostImpulseStrength;                                     // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackRadius;                                          // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackImpulse;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackDamage;                                          // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunJuiceDecay;                                            // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunJuiceGrowth;                                           // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_SkyGrab
// 0x0050
struct FShooterAbilityData_SkyGrab
{
	float                                              FuelConsumeRate;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelGenRate;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageReduction;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamageCache;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageCacheMultiplier;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystem*                             HandFX;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HandFX3P;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HandFXAttach1P;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HandFXAttach3P;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TrailTargetParam;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ReflectBeam;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ReflectDamageType;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_SlowFall
// 0x0018
struct FShooterAbilityData_SlowFall
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lift;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StartSound;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EndSound;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_SmokeBomb
// 0x0008
struct FShooterAbilityData_SmokeBomb
{
	class UClass*                                      GrenadeClass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_StealthTumble
// 0x0020
struct FShooterAbilityData_StealthTumble
{
	class UCurveFloat*                                 SpeedByTime;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BoostSound;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           Stealth;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterTotemConfigData
// 0x0018
struct FShooterTotemConfigData
{
	float                                              MaxHealth;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFadeOutTime;                                          // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              DestroyFadeOutTime;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               TakeDamageEvent;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_Totem
// 0x0020
struct FShooterAbilityData_Totem
{
	class UClass*                                      TotemClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOrientToControlRotation;                                 // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MaxPlacementDist;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPlacementDist;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundSpawnOffset;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallSpawnOffset;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployDelay;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_TPNade
// 0x0010
struct FShooterAbilityData_TPNade
{
	float                                              InitialBoost;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TP_Delay;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TeleportFX;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_TripWire
// 0x0010
struct FShooterAbilityData_TripWire
{
	class UClass*                                      TripWireClass;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLength;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxActiveTripWires;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAbilityData_WallJump
// 0x0018
struct FShooterAbilityData_WallJump
{
	float                                              AwayFromWallBoost;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalBoost;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalThreshold;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CastDistance;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeSinceImpact;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceFactor;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterBotConfig
// 0x0050
struct FShooterBotConfig
{
	struct FName                                       NickName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ClassName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CQCRange;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AggroRange;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLookSpeed;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookProportionalCoefficient;                              // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookDerivativeCoefficient;                                // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOV;                                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootSenseRadius;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecentlyTookDamageMaxTime;                                // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SemiAutoFireRateMax;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SemiAutoFireRateMin;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullAutoBurstRateMax;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullAutoBurstRateMin;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FullAutoBurstBulletCountMax;                              // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FullAutoBurstBulletCountMin;                              // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bShouldDropInventoryOnDeath : 1;                          // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverSenseLoot : 1;                                    // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverSenseInventory : 1;                               // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverSenseMoveLocations : 1;                           // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterBotMemory_TargetInfo
// 0x0018
struct FShooterBotMemory_TargetInfo
{
	TArray<class AShooterCharacter*>                   PotentialTargets;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	class AShooterCharacter*                           Target;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterBotMemory_WeaponInfo
// 0x0004
struct FShooterBotMemory_WeaponInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterBotMemory_LootInfo
// 0x0090
struct FShooterBotMemory_LootInfo
{
	TArray<class AShooterPickup*>                      AmmoPickups;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterPickup*>                      WeaponPickups;                                            // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterPickup*>                      ArmorPickups;                                             // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<class AShooterPickup*>                      OtherPickups;                                             // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterBotMemory_MovementInfo
// 0x0060
struct FShooterBotMemory_MovementInfo
{
	TArray<class AActor*>                              PrioritySortedPOIs;                                       // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterBotMemory
// 0x0150
struct FShooterBotMemory
{
	struct FShooterBotMemory_TargetInfo                TargetInfo;                                               // 0x0000(0x0018) (Transient)
	struct FShooterBotMemory_WeaponInfo                WeaponInfo;                                               // 0x0018(0x0004) (Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FShooterBotMemory_LootInfo                  LootInfo;                                                 // 0x0020(0x0090) (Transient)
	struct FShooterBotMemory_MovementInfo              MovementInfo;                                             // 0x00B0(0x0060) (Transient)
	TArray<class AShooterWeapon*>                      PrioritySortedWeapons;                                    // 0x0110(0x0010) (ZeroConstructor, Transient)
	class AShooterPickup*                              LootTarget;                                               // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0128(0x0028) MISSED OFFSET
};

// ScriptStruct ShooterGame.TerminatorBotConfig
// 0x000C
struct FTerminatorBotConfig
{
	float                                              PursueSpeedModifier;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PursueMinDist;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.TransitionBinding
// 0x0010
struct FTransitionBinding
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.StateTransitionBinding
// 0x0010 (0x0020 - 0x0010)
struct FStateTransitionBinding : public FTransitionBinding
{
	class UShooterAIState*                             TransitionState;                                          // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.StateTransitionBindings
// 0x0010
struct FStateTransitionBindings
{
	TArray<struct FStateTransitionBinding>             TransitionBindings;                                       // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.StateTransitionMap
// 0x0050
struct FStateTransitionMap
{
	TMap<class UShooterAIState*, struct FStateTransitionBindings> StateTransitions;                                         // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ShockbladeAnims
// 0x00C0
struct FShockbladeAnims
{
	class UAnimMontage*                                Attack_2;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Attack_3;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Attack_4;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Throw;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Catch;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Fly;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Fly_ReverseGrip;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Throw_Romerus;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Catch_Romerus;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Fly_Romerus;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Throw_Idle;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_Throw_Idle_Romerus;                               // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_HitWall;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_DrawGun;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_WallIdle;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Grapple_WallFire;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpinAttack;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GrappleAttack;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Attack_1_RightArm;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Attack_2_RightArm;                                        // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Attack_3_RightArm;                                        // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sword_Throw;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sword_Dash;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.DodgeAnims
// 0x0028
struct FDodgeAnims
{
	class UAnimMontage*                                DodgeForward;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DodgeBack;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DodgeLeft;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DodgeRight;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.BattleMedicAnims
// 0x0010
struct FBattleMedicAnims
{
	class UAnimMontage*                                Ulti;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.BruteAnims
// 0x0088
struct FBruteAnims
{
	class UAnimMontage*                                Leap_ChargeIntro;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Leap_ChargeLoop;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Leap;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Leap_Fall;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Leap_Land;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Leap_Cancel;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OverCharge_ChargeIntro;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OverCharge_ChargeLowIntensity;                            // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OverCharge_ChargeHighIntensity;                           // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OverCharge_Detonate;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OverCharge_Detonate_Air;                                  // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OverCharge_GroundStompIn;                                 // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OverCharge_GroundStompOut;                                // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LightingHands_Idle;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LightingHands_Fire;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LightingHands_TransOut;                                   // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.DMRAnims
// 0x0028
struct FDMRAnims
{
	class UAnimMontage*                                Run_InLoop;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Run_Out;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatRoll;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Inject;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.LifeDocAnims
// 0x0090
struct FLifeDocAnims
{
	class UAnimMontage*                                StartUnstable;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideStart;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideStartUpperBody;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideStartLowerBody;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideLoop;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideLoopUpperBody;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideLoopLowerBody;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideEnd;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideEndUpperBody;                                        // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideEndLowerBody;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GauntletIdle;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GauntletTransIn;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GauntletFire;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GauntletFireCharge;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GauntletOut;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GauntletSelfHeal;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HealingSprint;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.GhostAnims
// 0x0020
struct FGhostAnims
{
	class UAnimMontage*                                Tumble;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CrouchIdle;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CrouchFire;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.HeavyAnims
// 0x0078
struct FHeavyAnims
{
	class UAnimMontage*                                SkyGrabLoop;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SkyGrabPull;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PlaceGenerator;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperLMG;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperLMG_WeaponMesh;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperLMG_Loop;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperLMG_Loop_WeaponMesh;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperLMG_Close;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperLMG_Close_WeaponMesh;                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideForward;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideBack;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideLeft;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideRight;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideJump;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.HitmanAnims
// 0x0010
struct FHitmanAnims
{
	class UAnimMontage*                                Hawkeye_Recharge;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.LaserShoesAnims
// 0x0038
struct FLaserShoesAnims
{
	class UAnimMontage*                                LaserKick;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LaserUnibeam;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LaserUnibeamEnd;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BackwardsBoost_InLoop;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BackwardsBoost_LoopOnly;                                  // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BackwardsBoost_Out;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.EnergySwordShieldAnims
// 0x0040
struct FEnergySwordShieldAnims
{
	class UAnimMontage*                                EnergySwordSlash_LeftArm_One;                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                EnergyShield_RightArm_Bash;                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                EnergySwordShield_TransOut;                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ApplyDamageTransfer;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RiftWalkCast;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RiftWalkIdle;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RiftWalkArrive;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ReconAnims
// 0x00D0
struct FReconAnims
{
	class UAnimMontage*                                Blink_In;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Blink_Loop;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Blink_Out;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Blink_Out_Back;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Blink_Out_Left;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Blink_Out_Right;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Blink_Out_Up;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RailgunIdle;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ComboAttack;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnifeSwipe;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnifeStab;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnifeToss;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PistolQuickSwap;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperIn;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperOut;                                                 // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SuperLoop;                                                // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ChargeCombo;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RightGunRaise;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeftArmAltFire;                                           // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeftArmAltFire_Drop;                                      // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeftArmAltFire_QuickDrop;                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeftGunFireOverride;                                      // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeftGunReloadOverride;                                    // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RightGunFireOverride;                                     // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RightGunReloadOverride;                                   // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.SamuraiAnims
// 0x0048
struct FSamuraiAnims
{
	class UAnimMontage*                                BlinkAttack;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AkimboDuziEquip;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AkimboDuziIdle;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AkimboDuziBaseIdle;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AkimboDuziFire;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AkimboDuziDrop;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Dodge;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MeleeEquip;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShieldGauntletAnims
// 0x0080
struct FShieldGauntletAnims
{
	class UAnimMontage*                                Attack_2;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Attack_3;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Attack_4;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ShieldUP_Intro;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ShieldUP_Loop;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ShieldUP_Outro;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RocketPunch_TransIN;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RocketPunch_Loop;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RocketPunch_TransOut;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RocketPunch_Air_Idle;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RocketPunch_Catch;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LungePunchStart;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LungePunchEnd;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GravitySmash;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ShoulderCharge;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.TimeCopAnims
// 0x00B0
struct FTimeCopAnims
{
	class UAnimMontage*                                ChronoTrigger;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideKick;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideKickOut;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideKick_Body;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SlideKickOut_Body;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HandleClampAdditive;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HandleClampAdditive_TransOut;                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BackDash;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WallJump_Fwd;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WallJump_Back;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WallJump_Left;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WallJump_Right;                                           // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FlipJump_Fwd;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FlipJump_Back;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FlipJump_Left;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FlipJump_Right;                                           // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AirJump;                                                  // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AirJump_Fwd;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AirJump_Back;                                             // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AirJump_Left;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AirJump_Right;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.VanguardAnims
// 0x0050
struct FVanguardAnims
{
	class UAnimMontage*                                Starfall_Windup;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Starfall_FlightTransIn;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Starfall_Loop;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Starfall_Impact;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JetPulse_Windup;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JetPulse_Loop;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JetPulse_Out;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BarrelRoll_Left;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BarrelRoll_Right;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.HackerAnims
// 0x0010
struct FHackerAnims
{
	class UAnimMontage*                                DroneDeploy;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.JuggernautAnims
// 0x00E0
struct FJuggernautAnims
{
	class UAnimMontage*                                ShotgunMeleeHit;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponMesh_ShotgunMeleeHit;                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ShotgunMeleeMiss;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PumpAction;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TransformWeapon;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                UltimatePumpAction;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                UltimateFire;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ArmorUp;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ArmorDown;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ArmorExplode;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Helmet_ArmorUp;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Helmet_ArmorDown;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Helmet_Explode;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Helmet_Idle;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZenithBlade_Shoot;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZenithBlade_Pull;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZenithBlade_Punch;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sprint;                                                   // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sprint_In;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sprint_Out;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Sprint_Jump_Out;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PullUp;                                                   // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PullUp_In;                                                // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PullUp_Out;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpecialKick;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SprintFall;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SprintLand;                                               // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShieldAnimations
// 0x0040
struct FShieldAnimations
{
	class UAnimMontage*                                Throw;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Catch;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Raise;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RaisedIdle;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Lower;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Catch_Fast;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Catch_Busy;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.BounceData
// 0x0014
struct FBounceData
{
	float                                              IntensityMin;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityMax;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallTimeMin;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallTimeMax;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityMultiplier;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.CompressedMoveFlagBehavior
// 0x0040
struct FCompressedMoveFlagBehavior
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class UCurveFloat*                                 DisplacementCurve;                                        // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.GravitySeedAndTime
// 0x0010
struct FGravitySeedAndTime
{
	class AShooterGravitySeed*                         GravitySeed;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.CompressedMove
// 0x002C
struct FCompressedMove
{
	unsigned char                                      AckId;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DeltaTimeMS;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             InputX;                                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             InputY;                                                   // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           CompressedRotation;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShotsRequestedPrimary;                                    // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShotsRequestedSecondary;                                  // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToFire;                                             // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToFireLaser;                                        // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector_NetQuantize10                       CameraOffset;                                             // 0x0010(0x000C)
	struct FVector_NetQuantize10                       MuzzleOffset;                                             // 0x001C(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.CompressedMoveAck
// 0x0030
struct FCompressedMoveAck
{
	unsigned char                                      AckId;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector_NetQuantize10                       Location;                                                 // 0x0004(0x000C)
	struct FVector_NetQuantize10                       Velocity;                                                 // 0x0010(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         Base;                                                     // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      PrimaryAmmo;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentInventoryIndex;                                    // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.BotStartConfig
// 0x0028
struct FBotStartConfig
{
	struct FText                                       BotName;                                                  // 0x0000(0x0018) (Edit)
	struct FName                                       ClassName;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStartAggressive : 1;                                     // 0x0020(0x0001) (Edit)
	unsigned char                                      bLookAtPlayer : 1;                                        // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ParabolicConfig
// 0x00D0
struct FParabolicConfig
{
	unsigned char                                      bPreviewEffectMaterial : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<ESlateDrawEffectConfig>                SlateDrawEffectConfig;                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              ZOffset;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClipAgainstScreen : 1;                                   // 0x000C(0x0001) (Edit)
	unsigned char                                      bUseOffset : 1;                                           // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              EntireHUDScale;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSRGBVertexColor : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData03[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
	struct FSlateBrush                                 Overlay_Brush;                                            // 0x0020(0x0090) (Edit, BlueprintVisible)
	TEnumAsByte<ECachedWidgetEffect>                   Overlay_Draw;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateDrawEffectConfig>                Overlay_SlateDrawEffectConfig;                            // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1E];                                      // 0x00B2(0x001E) MISSED OFFSET
};

// ScriptStruct ShooterGame.CaptureZoneData
// 0x000C
struct FCaptureZoneData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TeamNumber;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFlagsRequiredToScore;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterLoadWeaponInfo
// 0x00C0
struct FShooterLoadWeaponInfo
{
	class FString                                      LoadName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSlateBrush                                 WeaponIcon;                                               // 0x0010(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            LoadWeapon;                                               // 0x00A0(0x0020) (Edit)
};

// ScriptStruct ShooterGame.VirtualCharacterLight
// 0x0030
struct FVirtualCharacterLight
{
	struct FName                                       PositionShaderName;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       ColorShaderName;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterChatStyle
// 0x0978 (0x0980 - 0x0008)
struct FShooterChatStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FEditableTextBoxStyle                       TextEntryStyle;                                           // 0x0010(0x0860) (Edit)
	struct FSlateBrush                                 BackingBrush;                                             // 0x0870(0x0090) (Edit)
	struct FSlateColor                                 BoxBorderColor;                                           // 0x0900(0x0028) (Edit)
	struct FSlateColor                                 TextColor;                                                // 0x0928(0x0028) (Edit)
	struct FSlateSound                                 RxMessgeSound;                                            // 0x0950(0x0018) (Edit)
	struct FSlateSound                                 TxMessgeSound;                                            // 0x0968(0x0018) (Edit)
};

// ScriptStruct ShooterGame.ControlZoneData
// 0x0010
struct FControlZoneData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeRequiredCapture;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ScoringRate;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScoringInterval;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCustomizationPartComponent
// 0x0018
struct FShooterCustomizationPartComponent
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMasterPoseToBody;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCustomizationLoadoutItem
// 0x0010
struct FShooterCustomizationLoadoutItem
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCustomizationLoadout
// 0x0018
struct FShooterCustomizationLoadout
{
	struct FName                                       BodyType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FShooterCustomizationLoadoutItem>    Items;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.ShooterCustomizationComponentData
// 0x0038
struct FShooterCustomizationComponentData
{
	struct FName                                       BodyPartName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BodyComponentName;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FShooterCustomizationPartComponent>  Components;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FShooterCustomizationLoadout                InitialLoadout;                                           // 0x0020(0x0018) (Edit)
};

// ScriptStruct ShooterGame.ShooterCustomizationCompressedLoadoutItem
// 0x0004
struct FShooterCustomizationCompressedLoadoutItem
{
	int8_t                                             PartIndex;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	int16_t                                            ItemIndex;                                                // 0x0002(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCustomizationCompressedLoadout
// 0x0018
struct FShooterCustomizationCompressedLoadout
{
	int8_t                                             BodyTypeIndex;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FShooterCustomizationCompressedLoadoutItem> Items;                                                    // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ShooterCustomizationLoadedItem
// 0x0178
struct FShooterCustomizationLoadedItem
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (ZeroConstructor, Transient)
	bool                                               bApplyVIDsValues;                                         // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<float>                                      VIDsValuesToHide;                                         // 0x0028(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, float>                          Morphs;                                                   // 0x0038(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, float>                          MaterialScalarParameters;                                 // 0x0088(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, struct FLinearColor>            MaterialVectorParameters;                                 // 0x00D8(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, class UTexture*>                MaterialTextureParameters;                                // 0x0128(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ShooterCustomizationLoadedLoadout
// 0x0050
struct FShooterCustomizationLoadedLoadout
{
	TMap<struct FName, struct FShooterCustomizationLoadedItem> Items;                                                    // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ShooterCustomizationVID
// 0x0010
struct FShooterCustomizationVID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCustomizationMorph
// 0x0010
struct FShooterCustomizationMorph
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCustomizationMaterialScalarParam
// 0x0010
struct FShooterCustomizationMaterialScalarParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCustomizationMaterialVectorParam
// 0x0018
struct FShooterCustomizationMaterialVectorParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCustomizationMaterialTextureParam
// 0x0028
struct FShooterCustomizationMaterialTextureParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UTexture>                          Value;                                                    // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustomizationBodyItemData
// 0x0038
struct FShooterCustomizationBodyItemData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	TArray<TAssetPtr<class UMaterialInterface>>        Materials;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustomizationPartVIDs
// 0x0018
struct FShooterCustomizationPartVIDs
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        VIDs;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustomizationPartMorphs
// 0x0018
struct FShooterCustomizationPartMorphs
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShooterCustomizationMorph>          Morphs;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustomizationPartMaterialParams
// 0x0038
struct FShooterCustomizationPartMaterialParams
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShooterCustomizationMaterialScalarParam> ScalarParams;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationMaterialVectorParam> VectorParams;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationMaterialTextureParam> TextureParams;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustomizationItemData
// 0x0080
struct FShooterCustomizationItemData
{
	struct FName                                       ItemName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            SetupActor;                                               // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FShooterCustomizationBodyItemData>   BodyItems;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               IncompatibleParts;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationPartVIDs>       PartVIDsToHide;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationPartMorphs>     PartMorphs;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationPartMaterialParams> PartMaterialParams;                                       // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAvailableForSpawn;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCustomizationItemSetupPartData
// 0x0010
struct FShooterCustomizationItemSetupPartData
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PartComponentName;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCustomizationItemSetupBodyData
// 0x0020
struct FShooterCustomizationItemSetupBodyData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BodyComponentName;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FShooterCustomizationItemSetupPartData> Parts;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustomizationItemSetupComponentData
// 0x0060
struct FShooterCustomizationItemSetupComponentData
{
	TArray<struct FName>                               IncompatibleParts;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationPartVIDs>       PartVIDsToHide;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationPartMorphs>     PartMorphs;                                               // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FShooterCustomizationItemSetupBodyData> Bodies;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UShooterCustomizationData>         CustomizationData;                                        // 0x0040(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.KillFeedMessage
// 0x00F0
struct FKillFeedMessage
{
	class AShooterCharacter*                           KillerCharacter;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      KillerName;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class FString                                      VictimName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class FString                                      KillMethodDesc;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSlateBrush                                 HUDBrush;                                                 // 0x0040(0x0090) (BlueprintVisible, BlueprintReadOnly, Transient)
	int                                                KillerTeamNum;                                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                VictimTeamNum;                                            // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MyTeamNum;                                                // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HideTime;                                                 // 0x00DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                KillerPositionIndex;                                      // 0x00E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TriggerCounter;                                           // 0x00E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bKillerIsOwner : 1;                                       // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bVictimIsOwner : 1;                                       // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bKillMethodBrushValid : 1;                                // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bKillMethodNameValid : 1;                                 // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bKillMethodIsWeapon : 1;                                  // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bKillMethodIsAbility : 1;                                 // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bKillMethodIsMelee : 1;                                   // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bSuicide : 1;                                             // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bRelevantToSelf : 1;                                      // 0x00E9(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsScore : 1;                                             // 0x00E9(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.DamageDoneData
// 0x0050
struct FDamageDoneData
{
	TMap<class FString, uint16_t>                      WeaponDamageDone;                                         // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.SupportData
// 0x0010
struct FSupportData
{
	class AShooterPlayerState*                         Supporter;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeStamp;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ESupportType>                          TypeOfSupport;                                            // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.TakenDamage
// 0x0020
struct FTakenDamage
{
	float                                              DamageTaken;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterPlayerState*                         Instigator;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeStamp;                                                // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.DamageSource
// 0x0160
struct FDamageSource
{
	float                                              DamageTaken;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AShooterPlayerState*                         Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      InstigatorName;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class UShooterDamageType*                          KillerDamageType;                                         // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FSlateBrush                                 SourceIcon;                                               // 0x0030(0x0090) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FSlateBrush                                 SourceIconLarge;                                          // 0x00C0(0x0090) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               bKillingBlow;                                             // 0x0150(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0151(0x000F) MISSED OFFSET
};

// ScriptStruct ShooterGame.CustomizationData
// 0x0070
struct FCustomizationData
{
	struct FName                                       CharacterSkinName;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CharacterMaterialSetID;                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponOneSkinName;                                        // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponOneMaterialSetID;                                   // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponTwoSkinName;                                        // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponTwoMaterialSetID;                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponThreeSkinName;                                      // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponOneStickerName;                                     // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponTwoStickerName;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       KickDecalName;                                            // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponOneDeathDecalName;                                  // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       WeaponTwoDeathDecalName;                                  // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       MVPTauntName;                                             // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AccountPortraitName;                                      // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.PlayerCustomizationBodyPart
// 0x0020
struct FPlayerCustomizationBodyPart
{
	class FString                                      part_type;                                                // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      part_name;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.ShooterFrontEndMenuData
// 0x0028
struct FShooterFrontEndMenuData
{
	struct FName                                       CharacterID;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            MenuActor;                                                // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterCustAccountPortrait
// 0x0028
struct FShooterCustAccountPortrait
{
	struct FName                                       LoadName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UCustomAccountPortraitData>        PortraitData;                                             // 0x0008(0x0020) (Edit)
};

// ScriptStruct ShooterGame.ShooterFrontEndScene
// 0x0018
struct FShooterFrontEndScene
{
	TEnumAsByte<EMenuWorldState>                       Scene;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UTexture2D*>                          BackdropTextures;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterMenuSceneScale
// 0x0008
struct FShooterMenuSceneScale
{
	TEnumAsByte<EMenuWorldState>                       MenuScene;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MenuActorScale;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PlayerCustomizationLoadoutPreference
// 0x0040
struct FPlayerCustomizationLoadoutPreference
{
	class FString                                      body_type;                                                // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      primary_weapon;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPlayerCustomizationBodyPart>        body_parts;                                               // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FPlayerCustomizationBodyPart>        kill_card;                                                // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.CustomizationLoadedMaterialData
// 0x0020
struct FCustomizationLoadedMaterialData
{
	struct FStringAssetReference                       LoadRef;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	int                                                UsedMaterialIndex;                                        // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaterialPtr;                                              // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.CustomizationLoadedMeshData
// 0x0030
struct FCustomizationLoadedMeshData
{
	struct FName                                       ComponentTag;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FStringAssetReference                       LoadRef;                                                  // 0x0008(0x0010) (ZeroConstructor, Transient)
	class USkeletalMesh*                               MeshPtr;                                                  // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCustomizationLoadedMaterialData>    MaterialData;                                             // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.CustomizationActorSkinData
// 0x0018
struct FCustomizationActorSkinData
{
	struct FName                                       ActorTag;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomizationLoadedMeshData>        LoadedMeshDatas;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.DeathAnimSelection
// 0x0028
struct FDeathAnimSelection
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DeathAnim;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AngularDriveCurve;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthThreshold;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSendBlueprintFXEvent;                                    // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFromFront;                                               // 0x001D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFromLeft;                                                // 0x001E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFromRight;                                               // 0x001F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFromBack;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBullet;                                                  // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplosion;                                               // 0x0022(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bElectricity;                                             // 0x0023(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSword;                                                   // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnvironment;                                             // 0x0025(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceAlwaysUseThisAnim;                                  // 0x0026(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
};

// ScriptStruct ShooterGame.DestructionStage
// 0x0038
struct FDestructionStage
{
	class UStaticMesh*                                 StaticMeshSwap;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   MaterialSwap;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaterialSwapIndex;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleFX;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToNextStage;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDamagePassesThrough;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterDoorPanelConfig
// 0x0010
struct FShooterDoorPanelConfig
{
	struct FName                                       MeshName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpenDegrees;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpenOffset;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterDoorPanel
// 0x0150
struct FShooterDoorPanel
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x0000(0x0150) MISSED OFFSET
};

// ScriptStruct ShooterGame.FlagData
// 0x0018
struct FFlagData
{
	int                                                TimeBeforeReturn;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalPointsPerKill;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EnemyTeamNumber;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TouchRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowTouchReturn;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.GamepadPresetOption
// 0x0070
struct FGamepadPresetOption
{
	class FString                                      LoadOut1;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      LoadOut2;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      LoadOut3;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      LoadOut4;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      LoadOut5;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	class FString                                      LoadOut6;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor)
	class FString                                      LoadOut7;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.PlayerFrontendData
// 0x0028
struct FPlayerFrontendData
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                prestige_level;                                           // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               is_live_streaming;                                        // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      twitch_name;                                              // 0x0010(0x0010) (ZeroConstructor, Transient)
	int                                                PartyIndex;                                               // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PlayerCustomizationClassPreference
// 0x0020
struct FPlayerCustomizationClassPreference
{
	class FString                                      class_name;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPlayerCustomizationLoadoutPreference> loadouts;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PlayerCustomizationPreference
// 0x0020
struct FPlayerCustomizationPreference
{
	class FString                                      player_id;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPlayerCustomizationClassPreference> classes;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PlayersCustomizationPreference
// 0x0010
struct FPlayersCustomizationPreference
{
	TArray<struct FPlayerCustomizationPreference>      player_prefs;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.AssetLoadInfo
// 0x0028
struct FAssetLoadInfo
{
	TAssetPtr<class UObject>                           Asset;                                                    // 0x0000(0x0020) (Edit)
	bool                                               LoadSynchronously;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.AssetLoadGroup
// 0x0038
struct FAssetLoadGroup
{
	struct FName                                       State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetLoadInfo>                      LoadBefore;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAssetLoadInfo>                      LoadAtBegin;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAssetLoadInfo>                      UnloadAtEnd;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_Skin_MetaData
// 0x0010
struct FCharacterPreferenceCustomizationData_Skin_MetaData
{
	class FString                                      skin_name;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_Sticker_MetaData
// 0x0010
struct FCharacterPreferenceCustomizationData_Sticker_MetaData
{
	class FString                                      sticker_name;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_Sticker
// 0x0010
struct FCharacterPreferenceCustomizationData_Sticker
{
	struct FCharacterPreferenceCustomizationData_Sticker_MetaData game_metadata;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_Skin
// 0x0020
struct FCharacterPreferenceCustomizationData_Skin
{
	struct FCharacterPreferenceCustomizationData_Skin_MetaData game_metadata;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FCharacterPreferenceCustomizationData_Sticker sticker;                                                  // 0x0010(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_MVPAnim_MetaData
// 0x0010
struct FCharacterPreferenceCustomizationData_MVPAnim_MetaData
{
	class FString                                      animation_name;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_MVPAnimation
// 0x0010
struct FCharacterPreferenceCustomizationData_MVPAnimation
{
	struct FCharacterPreferenceCustomizationData_MVPAnim_MetaData game_metadata;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_KickDecal_MetaData
// 0x0010
struct FCharacterPreferenceCustomizationData_KickDecal_MetaData
{
	class FString                                      kick_decal_name;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData_KickDecal
// 0x0010
struct FCharacterPreferenceCustomizationData_KickDecal
{
	struct FCharacterPreferenceCustomizationData_KickDecal_MetaData game_metadata;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.CharacterPreferenceCustomizationData
// 0x0080
struct FCharacterPreferenceCustomizationData
{
	struct FCharacterPreferenceCustomizationData_Skin  primary_weapon_skin;                                      // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FCharacterPreferenceCustomizationData_Skin  secondary_weapon_skin;                                    // 0x0020(0x0020) (Edit, DisableEditOnInstance)
	struct FCharacterPreferenceCustomizationData_Skin  character_skin;                                           // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	struct FCharacterPreferenceCustomizationData_MVPAnimation mvp_animation;                                            // 0x0060(0x0010) (Edit, DisableEditOnInstance)
	struct FCharacterPreferenceCustomizationData_KickDecal kick_decal;                                               // 0x0070(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PlayerPreferences
// 0x0060
struct FPlayerPreferences
{
	struct FName                                       PlayerId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AccountPortraitLoadName;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class FString, struct FCharacterPreferenceCustomizationData> CharacterCustomizationPreferences;                        // 0x0010(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ZoneCloseData
// 0x000C
struct FZoneCloseData
{
	float                                              WarningDurationMinutes;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumToClose;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CloseRandom;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.AudioEventLengthPair
// 0x0010
struct FAudioEventLengthPair
{
	class UAkAudioEvent*                               EventToPlay;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApproxLength;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.AnnouncerAudio
// 0x0068
struct FAnnouncerAudio
{
	TArray<struct FAudioEventLengthPair>               MatchStarts;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEvent*                               CashDropStart;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FinalShowdownStart;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FinalShowdownTimeOfDayChange;                             // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SelfDeath;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SelfDeath_Top5;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               PostMatchRewards;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Spin2WinStart;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ZoneClosure_31;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ZoneClosure_6;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SpecialDeliveryStart;                                     // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VictoryMusic;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.CrowdAudio
// 0x0010
struct FCrowdAudio
{
	class UAkAudioEvent*                               SelfKillEnemy;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SelfDeath;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.Spin2WinEventData
// 0x000C
struct FSpin2WinEventData
{
	float                                              TriggerTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumEventsToSpawn;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEventTriggered;                                          // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.StartingPattern
// 0x0018
struct FStartingPattern
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        Pattern;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.BikeRaceEventData
// 0x000C
struct FBikeRaceEventData
{
	float                                              TriggerTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumEventsToSpawn;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEventTriggered;                                          // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.LMSConfig
// 0x0188
struct FLMSConfig
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowdownRadius;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowDownSpawnHeight;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowDownTargetHeight;                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowDownShrinkSpeed;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowDownAnnounceDelay;                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInDangerZoneBeforeTerminator;                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartupPhaseDurationMinutes;                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientDamage_1;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientDamage_2;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientDamage_3;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientDamage_4;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientDamage_5;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowdownMinSize;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowdownCountdownDuration;                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalShowdownCountdownDurationPerSafeZone;                // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashDropZonesThreshold;                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumLeftAliveForFinalShowdown_Max;                         // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumLeftAliveForFinalShowdown_Min;                         // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SafeZoneThresholdForFinalShowdown;                        // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCosmetics;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumCashDrops;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FZoneCloseData>                      ZoneCloseTimes;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      FinalShowdownTemplate;                                    // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CashDropTemplate;                                         // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnnouncerAudio                             AnnouncerAudioPackage;                                    // 0x0078(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCrowdAudio                                 CrowdAudioPackage;                                        // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSpin2WinEventData>                  Spin2WinEvents;                                           // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Spin2WinCrateTemplate;                                    // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStartingPattern>                    StartingPatterns;                                         // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              Spin2WinSpawnHeight;                                      // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	TArray<struct FBikeRaceEventData>                  BikeRaceEvents;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      BikeRaceEventTemplate;                                    // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DangerZoneDamageTypeClass;                                // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FinalShowdownGridLocationTemplate;                        // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               CutToBlackSound;                                          // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CutToBlackDuration;                                       // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               PreludeCountdownSound;                                    // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               CutFromBlackSound;                                        // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DeathTaxCashPickup;                                       // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndOfMatchOnDeathDelayTime;                               // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TArray<int>                                        MajorGameShowEventDropRates;                              // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.MapZone
// 0x00A0
struct FMapZone
{
	class AShooterBotAIController_Terminator*          TerminatorController;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EZoneStatus>                           ZoneStatus;                                               // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FVector>                             LandscapePoints;                                          // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              PointOfInterestActors;                                    // 0x0020(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty ShooterGame.MapZone.Pickups
	TArray<class AShooterCosmeticLootSpawner*>         Cosmetics;                                                // 0x0080(0x0010) (ZeroConstructor, Transient)
	bool                                               bSearchFlag;                                              // 0x0090(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                I;                                                        // 0x0094(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                J;                                                        // 0x0098(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.LoadRequest
// 0x0070
struct FLoadRequest
{
	class AShooterCustomizationLoadManager*            InstancedLoadManager;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FStringAssetReference>               Targets;                                                  // 0x0008(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterAsyncLoadManager
// 0x0020
struct FShooterAsyncLoadManager
{
	TArray<struct FLoadRequest>                        LoadRequests;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.GravitySeedStackData
// 0x0020
struct FGravitySeedStackData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UCurveFloat*                                 GravityScaleOverTime;                                     // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.BlackHoleSeedData
// 0x0004
struct FBlackHoleSeedData
{
	float                                              PullForce;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.HUDScreenWidget
// 0x0010
struct FHUDScreenWidget
{
	class UUserWidget*                                 Widget;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.HitReticleData
// 0x0020
struct FHitReticleData
{
	class AShooterCharacter*                           Pawn;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CursorizedHealth;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxHealth;                                                // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentHealth;                                            // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Damage;                                                   // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeSinceDamage;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EHitType>                              HitType;                                                  // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.HitLocationData
// 0x0020
struct FHitLocationData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // 0x0014(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeAdded;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.CachedWidgetState
// 0x0080
struct FCachedWidgetState
{
	class UShooterCachedWidget*                        CacheWidget;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct ShooterGame.NpcWidgetCache
// 0x0010
struct FNpcWidgetCache
{
	class UUserWidget*                                 Widget;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           AttachedCharacter;                                        // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.IconComponentData
// 0x0050
struct FIconComponentData
{
	class UClass*                                      IconWidgetClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinMaxOffset;                                             // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinMaxDistance;                                           // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EdgeScreenPercent;                                        // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleAtMaxDistance;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleAtMinDistance;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceForScale;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceForScale;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityAtMaxDistance;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityAtMinDistance;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceForOpacity;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceForOpacity;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequireLOS;                                               // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDistanceTextRequireNoLOS;                                // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	float                                              MaxRangeForHiding;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGameModeIcon;                                          // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnlyArrowWhenOffscreen;                              // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct ShooterGame.ReplicatedSpectatedMovement
// 0x0024
struct FReplicatedSpectatedMovement
{
	struct FVector                                     SpectatedLocation;                                        // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     SpectatedVelocity;                                        // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    SpectatedRotation;                                        // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.ReplicatedSpectatedTargetInfo
// 0x0014 (0x0038 - 0x0024)
struct FReplicatedSpectatedTargetInfo : public FReplicatedSpectatedMovement
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AShooterPlayerState*                         TargetChasePlayer;                                        // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      TargetAimState;                                           // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.LootItem
// 0x0018
struct FLootItem
{
	struct FName                                       LootName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ItemActor;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DropWeight;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.LootWeightRange
// 0x0010
struct FLootWeightRange
{
	int                                                MinWeight;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxWeight;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LootName;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.LootTable
// 0x0020
struct FLootTable
{
	TArray<struct FLootItem>                           LootItems;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLootWeightRange>                    LootWeightRanges;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ObjectiveZoneSettings
// 0x0010
struct FObjectiveZoneSettings
{
	TEnumAsByte<EObjectiveZoneDetectionType>           ZoneDetectionType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinHeight;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHeight;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.CosmeticNameAnimPair
// 0x0010
struct FCosmeticNameAnimPair
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimationAsset*                             AnimToPlay;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeaponPickupData
// 0x0018
struct FWeaponPickupData
{
	class UClass*                                      Weapon;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowConsumablesToStack;                                 // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                VendingAmmo;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultPickupAmount;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimitiveImpactDefintion
// 0x0018
struct FPrimitiveImpactDefintion
{
	TArray<struct FDecalData>                          Decals;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DecalLifeSpanOverride;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinImpactMagnitude;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.AudioImpactRegion
// 0x0038
struct FAudioImpactRegion
{
	class UAkAudioEvent*                               ImpactEvent;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RetriggerTime;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FName>                               ImpactBoneNames;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxTriggerCount;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FTimerHandle                                ImpactTimerHandle;                                        // 0x0028(0x0008) (Transient)
	int                                                TimesTriggered;                                           // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimitiveImpactConfig
// 0x0078
struct FPrimitiveImpactConfig
{
	struct FPrimitiveImpactDefintion                   LightImpact;                                              // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FPrimitiveImpactDefintion                   MediumImpact;                                             // 0x0018(0x0018) (Edit, DisableEditOnInstance)
	struct FPrimitiveImpactDefintion                   HeavyImpact;                                              // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	float                                              SoundEventFrequency;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldScaleWithImpactStrength;                           // 0x004C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              MaxScale;                                                 // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxActiveDecals;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistBetweenDecals;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FAudioImpactRegion>                  AudioImpactRegions;                                       // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAudioImpactMagnitude;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAudioImpactMagnitude;                                  // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.DroneMoveAck
// 0x001C
struct FDroneMoveAck
{
	unsigned char                                      AckId;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize10                       EndPosition;                                              // 0x0004(0x000C)
	struct FVector_NetQuantize10                       Velocity;                                                 // 0x0010(0x000C)
};

// ScriptStruct ShooterGame.IntelMineData
// 0x0018
struct FIntelMineData
{
	float                                              DetectionRadius;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuffToApply;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GravitySurge;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.FireZoneData
// 0x0018
struct FFireZoneData
{
	int                                                NumTicks;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerTick;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PulsarData
// 0x0050
struct FPulsarData
{
	float                                              DetectionRadius;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      BuffToApply;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             InitialExplosionEffect;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeammateInitialExplosionEffect;                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PulseFX;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeammatePulseFX;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyPulseFX;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeammateDestroyPulseFX;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeTillPulseffect;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseStrength;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpImpulse;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.StickyDartData
// 0x0020
struct FStickyDartData
{
	float                                              MaxDamage;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDamage;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ExplosionTemplate;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.AccelGateConfig
// 0x0030
struct FAccelGateConfig
{
	float                                              VelocityMultiplier;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	class UClass*                                      TeamBuffClass;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TeamBuffClassTwo;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EnemyDebuffClass;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EnemyDebuffClassTwo;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShieldData
// 0x0038
struct FShieldData
{
	float                                              MaxShieldHealth;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDealDamageBasedOnMissingHealth;                          // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              DamageRange;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BottomHalf;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TopHalf;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Height;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageImpulse;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      PrimaryAttack_DamageType;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EnemyBuffClass;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.BunkerBusterData
// 0x0018
struct FBunkerBusterData
{
	int                                                NumBombsFired;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditivePitch;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostSpawnDelay;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      BombClass;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.DroidShieldData
// 0x0018
struct FDroidShieldData
{
	float                                              HealAmount;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealTickRate;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealRadius;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfHealMultiplier;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealPerScoreEvent;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DestroyDuration;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.EMPData
// 0x0060
struct FEMPData
{
	float                                              DetectionRadius;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuffToApply;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             InitialExplosionEffect;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeammateInitialExplosionEffect;                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PulseFX;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeammatePulseFX;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyPulseFX;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeammateDestroyPulseFX;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeTillPulseffect;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDealDamageOnPulse;                                       // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              DamagePerPulse;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHealTeammatesOnPulse;                                    // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              HealPerPulse;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.GroundLava
// 0x0010
struct FGroundLava
{
	float                                              DamagePerTick;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToGroundForDamage;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.HealMineData
// 0x00E8
struct FHealMineData
{
	float                                              HealPerTick;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumTicks;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealLifeSpan;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Shield;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               HealSound;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           FirstPersonFX;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimePerTick;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHealTargetOnly;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              HealPerScoreEvent;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DroneMaxSpawnTime;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UltCooldownReductionOnHeal;                               // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UltCooldownReductionOnProtect;                            // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FriendlyShieldBroken;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FriendlyShieldTimedOut;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EnemyShieldBroken;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EnemyShieldTimedOut;                                      // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpectatedLawShieldBroken;                                 // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpectatedLawShieldTimedOut;                               // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FriendlyDroneAttach;                                      // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EnemyDroneAttach;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpectatedLawDroneAttach;                                  // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachFXSocketName;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachFXDelay;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UParticleSystem*                             FriendlyDroneWarpIn;                                      // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EnemyDroneWarpIn;                                         // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpectatedLawDroneWarpIn;                                  // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DroneActivationSound;                                     // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FriendlyBubbleOffset;                                     // 0x00B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EnemyBubbleOffset;                                        // 0x00C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClutchHealPercent;                                        // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UAnimSequence*                               DroneLeftIdle;                                            // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DroneRightIdle;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.LightingSphereData
// 0x0040
struct FLightingSphereData
{
	float                                              DetectionRadius;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      BuffToApply;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             InitialExplosionEffect;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LightingZoneEffect;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LightingFX;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyPulseFX;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenShocks;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamagePerShock;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PoisonData
// 0x0018
struct FPoisonData
{
	int                                                NumTicks;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerTick;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.TrackerBombData
// 0x0060
struct FTrackerBombData
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamage;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDamage;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PingRadius;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumPings;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PingFX;                                                   // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               PingSound;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TargetBuff;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionTemplate;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionScalar;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachPositionOffset;                                     // 0x0044(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachRotationOffset;                                     // 0x0050(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDestroyAfterAttach;                                 // 0x005C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.StickyMineData
// 0x0018
struct FStickyMineData
{
	float                                              DamageMin;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMax;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      StickyMineDamageType;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.TripWireData
// 0x0030
struct FTripWireData
{
	class UParticleSystem*                             BeamFX;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamFX_Enemy;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamTargetName;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TripWireDamageType;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OnHitBuff;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ProjectileWeaponData
// 0x0108
struct FProjectileWeaponData
{
	float                                              ProjectileLife;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionDamage;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionMinDamage;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionDirectHitDamage;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadShotMultiplier;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionInnerRadius;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionOuterRadius;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetBuffRadius;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AirBurstRadius;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AirBurstBillboard;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AirBurstDelay;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfImpulse;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMitigation;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PassThroughDamagePercentage;                              // 0x0034(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HomingRange;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HomingBillboardSize;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               HomeToTeammates;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              DelayBeforeDamageCanTriggerImpact;                        // 0x0044(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AreaHeal;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageTriggersImpact;                                     // 0x004C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TargetBuff;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanTargetBuffSelf;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UClass*                                      TeammateTargetBuff;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SelfBuff;                                                 // 0x0070(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDamageSelf;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UCurveFloat*                                 DamageByDistance;                                         // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FleshHitSound;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AwaySound;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       AwaySounds;                                               // 0x0098(0x0010) (Edit, ZeroConstructor)
	class UAkAudioEvent*                               HealSound;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PoolSize;                                                 // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAirburstTeammates;                                       // 0x00B4(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              DirectHealAmount;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              NetUpdateFrequency;                                       // 0x00BC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ParticleBaseLength;                                       // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParticleDesiredLength;                                    // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnedItemOffset;                                        // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverrideGravity;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlendFromMuzzle;                                         // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachItemToHitTeamCharacter;                            // 0x00D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachItemToHitEnemyCharacter;                           // 0x00D2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x00D3(0x0005) MISSED OFFSET
	struct FName                                       AttachmentSocket;                                         // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachmentOffset;                                         // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachmentRotation;                                       // 0x00EC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChargedShotTelemetryName;                                 // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bImpactOnStop;                                            // 0x0100(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ProjectileExplosionInfo
// 0x0030
struct FProjectileExplosionInfo
{
	unsigned char                                      bExploded : 1;                                            // 0x0000(0x0001)
	unsigned char                                      bDamageCausedByOwner : 1;                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         ImpactPosition;                                           // 0x0004(0x000C)
	struct FRotator                                    RotationAtImpact;                                         // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              DamagedActors;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.ProjectileBounceNadeData
// 0x0020
struct FProjectileBounceNadeData
{
	float                                              ExplodeTimeAfterBounce;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumBouncesBeforeTimer;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExplodeOnDirectHit;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExplodeOnDirectHitTeam;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UAkAudioEvent*                               BounceSound;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceSoundRetriggerTime;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ClusterData
// 0x0010
struct FClusterData
{
	float                                              MinTheta;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTheta;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPhi;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPhi;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ProjectileWeaponData_ClusterNade
// 0x0030
struct FProjectileWeaponData_ClusterNade
{
	TArray<struct FClusterData>                        ClusterGrenadeDatas;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ClusterDelay;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoClusterDelay;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterMinTime;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirBurstGroundCheck;                                      // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NoClusterExplosionTemplate;                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ProjectileWeaponData_EMPFrag
// 0x0004
struct FProjectileWeaponData_EMPFrag
{
	float                                              JuiceToAdd;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.FlashbangData
// 0x0008
struct FFlashbangData
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ProjectileGroundDetonateData
// 0x0004
struct FProjectileGroundDetonateData
{
	float                                              MaximumNormalAngleForImpact;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterProjData_Orb
// 0x000C
struct FShooterProjData_Orb
{
	float                                              BillBoardX;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BillBoardY;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HealRange;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ProjectileWeaponData_NinjaFrag
// 0x0008
struct FProjectileWeaponData_NinjaFrag
{
	float                                              UpImpulse;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwayImpulse;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ProjectileWeaponData_ReconKnife
// 0x0008
struct FProjectileWeaponData_ReconKnife
{
	float                                              ImpulseAmt;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowAttachToAlly;                                       // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ProjectileWeaponData_ShockBall
// 0x0018
struct FProjectileWeaponData_ShockBall
{
	float                                              ChainReactionRadius;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChainReactionTimeBetweenExplosions;                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboDamage;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboMinDamage;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboDamageInnerRadius;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboDamageOuterRadius;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterShieledObjectData
// 0x0040
struct FShooterShieledObjectData
{
	class UClass*                                      NeutralShield;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TeamShield;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ShieldDepletingStatusText;                                // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TakeObjectStatusText;                                     // 0x0028(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ShooterGame.ShooterCarryObjectData
// 0x0060
struct FShooterCarryObjectData
{
	bool                                               AutoAttach;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaintainCarrierVelocity;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDropVelocity;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxOzoneTime;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowUserDrop;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowResetToNearestPoint;                                // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequireLOSForPickup;                                     // 0x0012(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	float                                              InheritUserDropVelocity;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInheritedUserDropVelocity;                             // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddDirectionalUserDropVelocity;                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachmentOffset;                                         // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachmentRotation;                                       // 0x002C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachmentSocket;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DeathWhileCarryingStinger;                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       YouHaveTheObjectText;                                     // 0x0048(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.SeatSocketAndExitOffsets
// 0x0020
struct FSeatSocketAndExitOffsets
{
	struct FName                                       SeatSocket;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVehicleSeatState>                     SeatType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FVector>                             SeatExitOffsets;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.SimpleWheelData
// 0x0028
struct FSimpleWheelData
{
	struct FName                                       Socket;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelRadius;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationFactor;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakeFactor;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSteerAngle;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpMultiplier;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Axle;                                                     // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.VehicleAudioData
// 0x0068
struct FVehicleAudioData
{
	class UAkAudioEvent*                               DriverEnterVehicleEvent;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DriverExitVehicleEvent;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AccelerateVehicleEvent;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DecelerateVehicleEvent;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleStartBrakingEvent;                                 // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleStopBrakingEvent;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleStartMovingEvent;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleStopMovingEvent;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleStartBeingInAirEvent;                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleStopBeingInAirEvent;                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleJumpEvent;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               VehicleSkidEvent;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleSkidVelocityLost;                                  // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleSkidTimeFrame;                                     // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.VehicleMoveAck
// 0x0034
struct FVehicleMoveAck
{
	unsigned char                                      AckId;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize10                       EndPosition;                                              // 0x0004(0x000C)
	struct FRotator                                    EndRotation;                                              // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       Velocity;                                                 // 0x001C(0x000C)
	struct FVector                                     RotationalVelocity;                                       // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ScoreBucket
// 0x0001
struct FScoreBucket
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ShooterGame.ScoreVisualConfiguration
// 0x0040
struct FScoreVisualConfiguration
{
	class UTexture2D*                                  Icon;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  AltIcon;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TemplateWidgetClass;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               OverrideEvents;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EScoreVisualBucketUsage>               Usage;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EScoreVisualBucket>                    BucketType;                                               // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              AppearDelay;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleTime;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EScoreVisualPriority>                  VisualPriority;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bShowScorer : 1;                                          // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bShowVictim : 1;                                          // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bForceDisplay : 1;                                        // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bOverrideKill : 1;                                        // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterScorableEvent
// 0x0190
struct FShooterScorableEvent
{
	struct FScoreTriggerType                           TriggerType;                                              // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	struct FScoreSound                                 ScoringSound;                                             // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	class FString                                      DeveloperComment;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                Score;                                                    // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	struct FName                                       ScoreBucketName;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StreakCountBucketName;                                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StreakPreviousScoreBucketName;                            // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                StreakThreshold;                                          // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                StreakChainID;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              StreakTimeRange;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthAmount;                                             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageRangeValues;                                        // 0x00A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FScoreBucket                                ScoreBucket;                                              // 0x00AC(0x0001) (Transient)
	TEnumAsByte<ESpecialScoringFunction>               ScoringFunction;                                          // 0x00AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	struct FScoreVisualConfiguration                   BigMessageConfiguration;                                  // 0x00B0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	struct FScoreVisualConfiguration                   ScoreFeedConfiguration;                                   // 0x00F0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	struct FScoreVisualConfiguration                   KillFeedConfiguration;                                    // 0x0130(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bIsAssistScore : 1;                                       // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bStopProcessing : 1;                                      // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bScoreVictim : 1;                                         // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bSwapTest : 1;                                            // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bUseHealthPercentage : 1;                                 // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bShowOnVictimScreen : 1;                                  // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bBroadcastToKillFeed : 1;                                 // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bDebugLogging : 1;                                        // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bEnableMagicMomentsEvent : 1;                             // 0x0171(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	int                                                NvidiaHighlightsNamingPriority;                           // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMomentSignificance>                   MomentImportance;                                         // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class FString                                      HeaderTitle;                                              // 0x0180(0x0010) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
};

// ScriptStruct ShooterGame.PersistentPlayer
// 0x0020
struct FPersistentPlayer
{
	class AShooterPlayerState*                         PlayerState;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterShieldData
// 0x0030
struct FShooterShieldData
{
	float                                              BaseHealth;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyOnNoHealth;                                       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              PlayerCheckRadius;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DepletionZoneDamageRateForPlayerCount;                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BeginRegenerationDelay;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegenerationRate;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDepleteUnoccupiedShield;                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              UnoccupiedDepletionRate;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnoccupiedDepletionStartTime;                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ThreatIndicatorComponentData
// 0x0014
struct FThreatIndicatorComponentData
{
	float                                              VisibleTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeInTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotOffset;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchFlipAngle;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.TimeDilationZoneData
// 0x0020
struct FTimeDilationZoneData
{
	float                                              EnemyCharacterBaseFactor;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnemyCharacterSpeedFactor;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnemyCharacterFireFactor;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnemyProjectileFactor;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FriendCharacterBaseFactor;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FriendCharacterSpeedFactor;                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FriendCharacterFireFactor;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsInnerZone;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.AbilityConfig
// 0x0018
struct FAbilityConfig
{
	struct FName                                       AbilityClassName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AbilityIcon;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesFuel;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterInventorySortableEntryData
// 0x0004
struct FShooterInventorySortableEntryData
{
	int                                                RowOrder;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterPlayerListEntryData
// 0x0008
struct FShooterPlayerListEntryData
{
	TEnumAsByte<EShooterAllegiance>                    Allegiance;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RowOrder;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterScalarMaterialParameter
// 0x0010
struct FShooterScalarMaterialParameter
{
	struct FName                                       ScalarName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScalarValue;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterVectorMaterialParameter
// 0x0018
struct FShooterVectorMaterialParameter
{
	struct FName                                       VectorName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VectorValue;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterPlayerImageEntryData
// 0x0020
struct FShooterPlayerImageEntryData
{
	TArray<struct FShooterScalarMaterialParameter>     ScalarMaterialParameters;                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FShooterVectorMaterialParameter>     VectorMaterialParameters;                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShooterGame.ShooterRadarData
// 0x0018
struct FShooterRadarData
{
	float                                              InnerRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RadarIconClass;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShowElevationZOffset;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowEnemies;                                             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterRadarIconSet
// 0x0018
struct FShooterRadarIconSet
{
	class UImage*                                      IconImage;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      HighElevationImage;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LowElevationImage;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ScoringMessage
// 0x0100
struct FScoringMessage
{
	class UClass*                                      TemplateWidgetClass;                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShooterScoreMessage*                        Widget;                                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScoreVisualConfiguration                   Config;                                                   // 0x0010(0x0040) (Transient)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0050(0x00B0) MISSED OFFSET
};

// ScriptStruct ShooterGame.UserWidgetPool
// 0x0050
struct FUserWidgetPool
{
	TMap<class UClass*, class UUserWidget*>            WidgetPool;                                               // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ThreatIndicator2D
// 0x0028
struct FThreatIndicator2D
{
	class AShooterCharacter*                           EnemyPlayer;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     EnemyPositionCache;                                       // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeTimer;                                                // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetDamageAmount;                                       // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentDamageAmount;                                      // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeSinceHit;                                             // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ToastMessageDefinition
// 0x0080
struct FToastMessageDefinition
{
	float                                              ToastDuration;                                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       ToastDescription;                                         // 0x0008(0x0018) (Transient)
	struct FText                                       ToastLabel;                                               // 0x0020(0x0018) (Transient)
	struct FText                                       FlairText1;                                               // 0x0038(0x0018) (Transient)
	struct FText                                       FlairText2;                                               // 0x0050(0x0018) (Transient)
	struct FStringAssetReference                       ImageAssetRefString;                                      // 0x0068(0x0010) (ZeroConstructor, Transient)
	class UTexture2D*                                  TextureReference;                                         // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShotgunData
// 0x0008
struct FShotgunData
{
	int                                                NumShotsInSpread;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BarrelSpread;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.TerminatorInfo
// 0x0008
struct FTerminatorInfo
{
	class AShooterCharacter*                           TargetCharacter;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.ProjectileHomingTarget
// 0x0010
struct FProjectileHomingTarget
{
	class AShooterCharacter*                           HomingTarget;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentlockOnTime;                                        // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.AbilityPersistentData
// 0x000C
struct FAbilityPersistentData
{
	float                                              ActivationCursor;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillStacks;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PassiveBuffStacks;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCustMaterialElement
// 0x0050
struct FShooterCustMaterialElement
{
	TAssetPtr<class UMaterialInterface>                Material;                                                 // 0x0000(0x0020) (Edit)
	TAssetPtr<class UTexture>                          Texture;                                                  // 0x0020(0x0020) (Edit)
	struct FName                                       TextureParamName;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.SpawnProjectileData
// 0x0060
struct FSpawnProjectileData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FireDir;                                                  // 0x0014(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       Instigator;                                               // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 OwnerController;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BlindFired;                                               // 0x003C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class APawn*                                       TargetActor;                                              // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   IgnorePlayers;                                            // 0x0048(0x0010) (ZeroConstructor, Transient)
	int8_t                                             AwaySoundIndex;                                           // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.MeleeData
// 0x0080
struct FMeleeData
{
	class AShooterCharacter*                           Attacker;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShooterWeapon*                              AttackerWeapon;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AActor*>                              IgnoredActors;                                            // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              OutDamagedActors;                                         // 0x0020(0x0010) (ZeroConstructor, Transient)
	float                                              Damage;                                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	bool                                               bCounterPlayerVelocity;                                   // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              DamageMitigation;                                         // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AdditiveImpulseDirection;                                 // 0x0040(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PassThroughDamagePercentage;                              // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ExecuteDamageMultiplier;                                  // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ExecuteHealthThreshold;                                   // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bImpulseAlongAim;                                         // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FMeleeAttackConfig                          MeleeAttackConfig;                                        // 0x0068(0x0018) (Transient)
};

// ScriptStruct ShooterGame.ShooterLoadAbilityInfo
// 0x00C0
struct FShooterLoadAbilityInfo
{
	class FString                                      LoadName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSlateBrush                                 AbilityIcon;                                              // 0x0010(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            LoadAbility;                                              // 0x00A0(0x0020) (Edit)
};

// ScriptStruct ShooterGame.MovingInterpolationData
// 0x0040
struct FMovingInterpolationData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ShooterGame.WorldKickDecalParameters
// 0x0038
struct FWorldKickDecalParameters
{
	float                                              DecalLifeSpan;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadePower;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GoldMetallicFactor;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GoldRoughnessFactor;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                GoldBaseColor;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          InWorldKickDecalBaseMaterial;                             // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WorldKickDecalSortOrder;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KickDecalScale;                                           // 0x002C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.RankIconData
// 0x0020 (0x0028 - 0x0008)
struct FRankIconData : public FTableRowBase
{
	TAssetPtr<class UTexture2D>                        RankIcon;                                                 // 0x0008(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct ShooterGame.ShooterCharacterNotGameThreadTickFunction
// 0x0008 (0x0060 - 0x0058)
struct FShooterCharacterNotGameThreadTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.RagdollBodyAccel
// 0x001C
struct FRagdollBodyAccel
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ShooterGame.SavedBodyTransforms
// 0x0018
struct FSavedBodyTransforms
{
	TArray<struct FTransform>                          BodyTransforms;                                           // 0x0000(0x0010) (ZeroConstructor)
	float                                              TIME;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.WeaponAnim
// 0x0010
struct FWeaponAnim
{
	class UAnimMontage*                                Pawn1P;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Pawn3P;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterAnimInstanceProxy
// 0x0000 (0x03A0 - 0x03A0)
struct FShooterAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct ShooterGame.ExtractedCustomizationItemBodyData
// 0x0030
struct FExtractedCustomizationItemBodyData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              Blueprints;                                               // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ExtractedCustomizationItemData
// 0x0050
struct FExtractedCustomizationItemData
{
	struct FName                                       PartName;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FExtractedCustomizationItemBodyData> Bodies;                                                   // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<struct FName>                               IncompatibleParts;                                        // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<struct FShooterCustomizationPartVIDs>       PartVIDsToHide;                                           // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<struct FShooterCustomizationPartMorphs>     PartMorphs;                                               // 0x0040(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.AssetComponent
// 0x0010
struct FAssetComponent
{
	class USCS_Node*                                   SCS_Node;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UActorComponent*                             Component;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShooterGame.PlayerCustomizationPartPairs
// 0x0020
struct FPlayerCustomizationPartPairs
{
	class FString                                      part_type;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              part_names;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PlayerCustomizationBodyParts
// 0x0010
struct FPlayerCustomizationBodyParts
{
	TArray<struct FPlayerCustomizationBodyPart>        body_parts;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.CustomizationMaterialSet
// 0x0020
struct FCustomizationMaterialSet
{
	class UMaterialInterface*                          MaterialPtr;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture*                                    TexturePtr;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParamValue;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.CustomizationLoadData
// 0x0030
struct FCustomizationLoadData
{
	TAssetPtr<class USkeletalMesh>                     MeshAssetPtr;                                             // 0x0000(0x0020) (Transient)
	TArray<struct FShooterCustMaterialElement>         MaterialAssetPtrs;                                        // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ShooterDoorTweener
// 0x00B0
struct FShooterDoorTweener
{
	class UStaticMeshComponent*                        TargetMesh;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0008(0x00A8) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterDoorTween
// 0x004C
struct FShooterDoorTween
{
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0000(0x004C) MISSED OFFSET
};

// ScriptStruct ShooterGame.BackendLootItem
// 0x0028
struct FBackendLootItem
{
	class FString                                      part_type;                                                // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      part_name;                                                // 0x0010(0x0010) (ZeroConstructor)
	float                                              drop_weight;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.BackendLootTable
// 0x0020
struct FBackendLootTable
{
	class FString                                      Version;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FBackendLootItem>                    Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.ShowdownGridLocations
// 0x0010
struct FShowdownGridLocations
{
	TArray<struct FVector>                             Locations;                                                // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.CosmeticLootItem
// 0x0018
struct FCosmeticLootItem
{
	struct FName                                       ItemName;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       BodyPart;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DropWeight;                                               // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.BalancerLogEntry
// 0x0030
struct FBalancerLogEntry
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ShooterGame.LockonCrosshairIconData
// 0x0030
struct FLockonCrosshairIconData
{
	struct FCanvasIcon                                 Icon;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 ScaleCurve;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RotationCurve;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AlphaCurve;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.LockonCrosshairData
// 0x0010
struct FLockonCrosshairData
{
	TArray<struct FLockonCrosshairIconData>            IconData;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.SpectatedPingEvent
// 0x0018
struct FSpectatedPingEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.SpectatedRotationEvent
// 0x0020
struct FSpectatedRotationEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.SpectatedMovementEvent
// 0x0028
struct FSpectatedMovementEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ShooterGame.ScoreLog
// 0x0030
struct FScoreLog
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ShooterGame.ScoreLogEntry
// 0x000C
struct FScoreLogEntry
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.ScoreHandlingState
// 0x0004
struct FScoreHandlingState
{
	uint32_t                                           HasHandledMultiKillChainBitfield;                         // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.UniquePlayerID
// 0x0004
struct FUniquePlayerID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.TimeOfDayConfig
// 0x0001
struct FTimeOfDayConfig
{
	TEnumAsByte<ETimeOfDay>                            StartTOD;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.NetworkPerformance
// 0x0008
struct FNetworkPerformance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PlayerCashOperationResult
// 0x0018
struct FPlayerCashOperationResult
{
	class FString                                      player_id;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           currency;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               did_update;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PlayerCashInfo
// 0x0018
struct FPlayerCashInfo
{
	class FString                                      player_id;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           currency;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PlayersCashInfo
// 0x0010
struct FPlayersCashInfo
{
	TArray<struct FPlayerCashInfo>                     players_cash;                                             // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
