#include "head.h"
#include "player.h"
#include "monster.h"

#ifndef BATTLE_H
#define BATTLE_H
class battle{
	public:
		string getType();
	private:
		string typeName = "BATTLE";
};

#endif
