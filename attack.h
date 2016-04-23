#include "head.h"

#ifndef ATTACK_H
#define ATTACK_H
class attack{
	public:
		int getID();
		string getName();
		void setID(int);
		void setName(string);
		double getDmgFactor();
		int getHitNumber();
		void setDmgFactor(double);
		void setHitNumber(int);
		int getHitChance();
		void setHitChance(int);
		int getCriChance();
		void setCriChance(int);
		double getCriFactor();
		void setCriFactor(double);
		string getDetail();
		void setDetail(string);
		string getType();
		void printItem();
		void setAll(int,string,double,int,int,int,double,string);
	private:
		int attackID;
		string attackName;
		double dmgFactor;
		int hitNumber;
		int hitChance;
		int criChance;
		double criFactor;
		string detail;
		string typeName = "ATTACK";
};

#endif
