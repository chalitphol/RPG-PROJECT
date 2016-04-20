#include "head.h"

class skill{
	public:
		int getID();
		string getName();
		void setID(int);
		void setName(string);
	private:
		int skillID;
		string skillName;
};
