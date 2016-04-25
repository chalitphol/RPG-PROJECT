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
		//void chapter1(int);  
		void chapter2(int);
		void chapter3(int);
};

#endif
