#include<iostream>
using namespace std;

class status{
	public:
		void getAtk(int);
		void getDef(int);
		void getHp(int);
		void getMaxhp(int);
		int setAtk();
		int	setDef();
		int setHp();
		int setMaxhp();
		void addAtk();
		void addDef();
		void addHp();
		void addMaxhp();
		setAll(int, int, int);
		
	private:
		int atk;
		int def;
		int hp;
		int maxHp;
	
};