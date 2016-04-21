#include "head.h"

#ifndef PASSIVE_H
#define PASSIVE_H
class passive{
	public:
		int getID();
		string getName();
		void setID(int);
		void setName(string);
		string getType();
	private:
		int passiveID;
		string passiveName;
		string typeName = "PASSIVE";
};

#endif
