#include "head.h"

#ifndef MONSTER_H
#define MONSTER_H
class monster{
	public:
		string getType();
		status getStat();
		string getName();
		string getClass();
		int getMonID();
		vector<monsterMove>* getAttackMove();
		skill getMonSkill();
		
		void setName(string);
		void setClass(string);
		void setMonID(int);
		void addAttack(int);
		void setSkill(int);
		void setAll(int,string,int,int,int,string,int,string);
		
	private:
		string name;
		status stat;
		string Class;//COMMON, RARE, MINIBOSS, BOSS
		int monID;
		vector<monsterMove> attackMove;
		skill monSkill;
		
		string typeName = "MONSTER";
};

#endif
