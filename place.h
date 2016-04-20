#include "head.h"
using namespace std;

class Place{
	public:
		int getId();
		string getName();
		void setId(int);
		void setName(string);

	protected:
		int id;
		string name;
};

class Room: public Place{
	public:
	protected:
		
};

class Town: public Place{
	public:
		vector*<Room> getRoom();
		void addRoom(Room);
		void delRoom(Room);
		vector*<int> getDistination();
		void addDistination(int);
		void delDistination(int);
		
		
	protected:
		vector<int> distinationList;
		vector<Room> roomList;
		
};

class Dungeon: public Place{
	public:
	protected:
};


