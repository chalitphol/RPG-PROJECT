#include<iostream>
using namespace std;

class status{
	public:
		void getatk(int);
		void getdef(int);
		void gethp(int);
		int setatk();
		int	setdef();
		int sethp();
	
	private:
		int atk;
		int def;
		int hp;
	
};