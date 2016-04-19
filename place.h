#include "head.h"
using namespace std;

class Place{
	public:
		int getId();
		string getName();
		void setId(int);
		void setName(string);

	private:
		int id;
		string name;
};

class Room: public Place{
	public:
	private:
};

class town: public Place{
	public:
	private:
};

class dungeon: public Place{
	public:
	private:
};


