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
		vector<attack>* getAttackMove();
		
		void setName(string);
		void setClass(string);
		void setMonID(int);
		
	private:
		string name;
		status stat;
		string Class;
		int monID;
		vector<attack> attackMove;
		
		string typeName = "MONSTER";
};

#endif
