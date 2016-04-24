#include "head.h"

#ifndef BATTLE_H
#define BATTLE_H
class battle{
	public:
		battle();
		battle(player*,int);

		string getType();
		player* getPlayer();
		monster* getMonster();
		int getPFinalDmg();
		int getEFinalDmg();
		vector<monsterMove>* getEAttack();
		int getGold();
		skill getPSkill();
		skill getESkill();
		int getTurn();
		monsterMove getEMove();
		int getBanTurn();
		bool isOnban();
		passive getPASSIVE();
		
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
		bool nextTurn();
		void setEMove(int);
		void setBanTurn(int);
		void onCD(int);
		
		int calcPDmg();
		int calcEDmg(attack);
		bool isCri();
		bool isHit();
		void battleScene(monsterMove);
		void battleScene();
		void console();
		void pattack();
		bool useItem(int);
		bool useSkill(int);
		void fight();
		void myTurn();
		void enemyTurn();
		
	private:
		player* PLAYER;
		monster ENEMY;
		passive PASSIVE;
		skill pSkill;
		skill eSkill;
		monsterMove eMove;
		int pFinalDmg;
		int eFinalDmg;
		vector<monsterMove> eAttack;
		int goldReward;
		string typeName = "BATTLE";
		int turn;
		int banTurn;
};

#endif
