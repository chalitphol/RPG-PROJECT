#include "head.h"

#ifndef GAME_H
#define GAME_H

class GAME{
	private:
		player PLAYER;
		int mainPt = 0;
		int subPt = 0;
		string typeName = "GAME";

	public:
		GAME();
		GAME(string);
		
		player* getPlayer();
		string getType();
		
		void chapter0();
};

#endif
