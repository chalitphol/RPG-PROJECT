#include "head.h"

#ifndef GAME_H
#define GAME_H

class GAME{
	private:
		player PLAYER;
		int mainPt = 0;
		int subPt = 0;
		string typeName = "GAME";
		string gStatus = "OKAY";

	public:
		GAME();
		GAME(string);
		
		player* getPlayer();
		string getType();
		int getSubPt();
		int getMainPt();
		string getGStatus();
		
		void setSubPt(int);
		void setMainPt(int);
		void nextSubPt();
		void nextMainPt();
		void gameOver();
		
		void chapter0();
		void chapter1(int);
		void chapter2(int);
		void chapter3(int);
		
		void console();
		
};

#endif
