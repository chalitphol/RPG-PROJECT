#include<iostream>
using namespace std;

class status{
	public:
		void setAtk(int);
		void setDef(int);
		void setHp(int);
		void setMaxhp(int);
		int getAtk();
		int	getDef();
		int getHp();
		int getMaxhp();
		void addAtk();
		void addDef();
		void addHp();
		void addMaxhp();
		void setAll(int, int, int);
		status(int,int,int);
		
	private:
		int atk;
		int def;
		int hp;
		int maxHp;
	
};