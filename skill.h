#include "head.h"

#ifndef SKILL_H
#define SKILL_H
class skill{
	public:
		int getID();
		string getName();
		string getType();
		int* getModPlayer();
		int* getModWeapon();
		int* getModArmor();
		double* getModPlayerAttack();
		int* getModMonster();
		double* getModMonsterAttack(); 
		int getTurn();
		int getCooldown();
		
		void setID(int);
		void setName(string);
		void setTurn(int);
		void setCooldown(int);
		void setModPlayer(int,int,int,int,int);
		void setModWeapon(int,int,int);
		void setModArmor(int,int,int);
		void setModPlayerAttack(double,double,double,double,double);
		void setModMonster(int,int,int,int,int);
		void setModMonsterAttack(double,double,double,double,double);
		void setAll(int,string,int,int,int,int,int,int,int,int,int,int,int,int,double,double,double,double,double,int,int,int,int,int,double,double,double,double,double,int,int);
		
	private:
		int skillID;
		string skillName;
		string typeName = "SKILL";
		int damage;
		int modPlayer[5];// ATK , DEF , MAXHP , HP , GOLD
		int modWeapon[3];// ATK , DEF , MAXHP
		int modArmor[3];// ATK , DEF , MAXHP
		double modPlayerAttack[5];// dmgFactor , hitNumber , hitChance , criChance , criFactor
		int modMonster[5];// ATK , DEF , MAXHP , HP , GOLD
		double modMonsterAttack[5];// dmgFactor , hitNumber , hitChance , criChance , criFactor
		int turn;
		int cooldown;
		
};

#endif
