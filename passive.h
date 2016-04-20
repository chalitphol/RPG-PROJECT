#include "head.h"

class passive{
	public:
		int getID();
		string getName();
		void setID(int);
		void setName(string);
	private:
		int passiveID;
		string passiveName;
};
