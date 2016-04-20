#include "head.h"

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
	private:
		int attackID;
		string attackName;
		double dmgFactor;
		int hitNumber;
};
