#include "head.h"

#ifndef ATTACK_H
#define ATTACK_H
class attack{
	public:
		int getID();
		string getName();
		void setID(int);
		void setName(string);
		double getFactor();
		int getHitNumber();
		void setFactor(int);
		void setHitNumber(int);
		string getType();
	private:
		int attackID;
		string attackName;
		double dmgFactor;
		int hitNumber;
		string typeName = "ATTACK";
};

#endif
