#include "head.h"
#include "status.h"

class player{
	public:
		player(char[12]);
		status getStat();
		string getName();
		int getGold();
		int getCHP();
		int getACode();
		void setStat(int,int,int);
		void setName(string);
		void setGold(int);
		void addGold(int);
		void setCHP(int);
		void addCHP(int);
		void setACode(int);
	private:
		int aCode;
		int curHP;
		status stat;
		char[12] name;
		int gold; 
};
