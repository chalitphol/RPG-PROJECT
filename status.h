#include<iostream>
using namespace std;

class status{
	public:
		void setAtk(int);
		void setDef(int);
		void setHp(int);
		int getAtk();
		int	getDef();
		int getHp();
	
	private:
		int atk;
		int def;
		int hp;
	
};
