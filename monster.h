#include "head.h"
//#include "status.h"
#ifndef MONSTER_H
#define MONSTER_H
class monster{
	public:
		string getType();
	private:
		string name;
		status stat;
		string typeName = "MONSTER";
		
		
};

#endif
