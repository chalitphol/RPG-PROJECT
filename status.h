#include<iostream>
using namespace std;

class status{
	public:
		void getAtk(int);
		void getDef(int);
		void getHp(int);
		int setAtk();
		int	setDef();
		int setHp();
		int addAtk();
		int addDef();
		int addHp();
		setAll(int, int, int);
		
	private:
		int atk;
		int def;
		int hp;
		int maxHp;
	
};