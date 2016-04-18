#include "head.h"

class player{
	public:
		player(char[12]);
		status getStat();
		string getName();
		int getGold();
		int getCHP();
		void setStat(int,int,int);
		void setName(string);
		void setGold(int);
		void addGold(int);
		void setCHP(int);
		void addCHP(int);
	private:
		int curHP;
		status stat;
		char[12] name;
		int gold; 
};
