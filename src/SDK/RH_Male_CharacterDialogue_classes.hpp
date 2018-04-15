#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Male_CharacterDialogue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Male_CharacterDialogue.Male_CharacterDialogue_C
// 0x0000 (0x0498 - 0x0498)
class UMale_CharacterDialogue_C : public UBaseCharacterDialogue_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Male_CharacterDialogue.Male_CharacterDialogue_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
