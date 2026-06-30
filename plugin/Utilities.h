//
// Utilities.h
//

#pragma once

#include "plugin/MQ2Navigation.h"

#include <functional>

namespace nav {

//----------------------------------------------------------------------------
// Utility
inline bool ValidIngame(bool bCheckDead)
{
	// CTD prevention function
	PCHARINFO charInfo = GetCharInfo();
	return GetGameState() == GAMESTATE_INGAME
		&& charInfo
		&& charInfo->pSpawn
		&& GetPcProfile()
		&& (!bCheckDead || charInfo->Stunned != 3);
}

} // namespace nav

void ClickDoor(PDOOR pDoor);
