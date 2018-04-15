#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SocketIO.ESIOConnectionState
enum class ESIOConnectionState : uint8_t
{
	ESIOConnectionState__Disconnected = 0,
	ESIOConnectionState__ConnectingToServer = 1,
	ESIOConnectionState__ConnectedToServer = 2,
	ESIOConnectionState__ConnectingToWebsocket = 3,
	ESIOConnectionState__ConnectedToWebsocket = 4,
	ESIOConnectionState__ConnectingToEndpoint = 5,
	ESIOConnectionState__ConnectedToEndpoint = 6,
	ESIOConnectionState__MaxState  = 7,
	ESIOConnectionState__ESIOConnectionState_MAX = 8
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
