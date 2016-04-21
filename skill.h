#include "head.h"

#ifndef SKILL_H
#define SKILL_H
class skill{
	public:
		int getID();
		string getName();
		void setID(int);
		void setName(string);
		string getType();
	private:
		int skillID;
		string skillName;
		string typeName = "SKILL";
};

#endif
