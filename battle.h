#include "head.h"

#ifndef BATTLE_H
#define BATTLE_H
class battle{
	public:
		battle();
		battle(player*,int);

		string getType();
		player* getPlayer();
		monster getMonster();
		int getPFinalDmg();
		int getEFinalDmg();
		vector<monsterMove>* getEAttack();
		int getGold();
		skill getPSkill();
		skill getESkill();
		int getTurn();
		
		void setPlayer(player*);
		void setEnemy(int);
		void setPassive(int);
		void setPFinalDmg(int);
		void setEFinalDmg(int);
		void setEAtack(vector<monsterMove>);
		void setGold(int);
		void setPSkill(int);
		void setESkill(int);
		void setTurn(int);
		void nextTurn();
		
		int calcPDmg();
		int calcEDmg(attack);
		bool isCri();
		bool isHit();
		void battleScene();
	private:
		player* PLAYER;
		monster ENEMY;
		passive PASSIVE;
		skill pSkill;
		skill eSkill;
		int pFinalDmg;
		int eFinalDmg;
		vector<monsterMove> eAttack;
		int goldReward;
		string typeName = "BATTLE";
		int turn;
};

#endif
