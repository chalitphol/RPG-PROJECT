#include "head.h"

#ifndef SKILL_H
#define SKILL_H
class skill{
	public:
		int getID();
		string getName();
		string getType();
		int[5]* getModPlayer();
		int[3]* getModWeapon();
		int[3]* getModArmor();
		double[5]* getModPlayerAttack();
		int[5]* getModMonster();
		double[5]* getModMonsterAttack(); 
		
		void setID(int);
		void setName(string);
		
	private:
		int skillID;
		string skillName;
		string typeName = "SKILL";
		int damage;
		int[5] modPlayer;// ATK , DEF , MAXHP , HP , GOLD
		int[3] modWeapon;// ATK , DEF , MAXHP
		int[3] modArmor;// ATK , DEF , MAXHP
		double[5] modPlayerAttack;// dmgFactor , hitNumber , hitChance , criChance , criFactor
		int[5] modMonster;// ATK , DEF , MAXHP , HP , GOLD
		double[5] modMonsterAttack;// dmgFactor , hitNumber , hitChance , criChance , criFactor
		
};

#endif
