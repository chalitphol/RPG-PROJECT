#include<iostream>
using namespace std;

class status{
	public:
		void setatk(int);
		void setdef(int);
		void sethp(int);
		int getatk();
		int	getdef();
		int gethp();
	
	private:
		int atk;
		int def;
		int hp;
	
};
