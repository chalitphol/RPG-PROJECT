#include "head.h"
using namespace std;

class Place{
	public:
		int getId();
		string getName();
		void setId(int);
		void setName(string);
		vector*<int> getDistination();
		void addDistination(int);
		void delDistination(int);
		
	protected:
		int id;
		string name;
		vector<int> destinationList;
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
		
	protected:		
		vector<Room> roomList;
		
};

class Dungeon: public Place{
	public:
	protected:
};


