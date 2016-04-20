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

class DunGeon: public Place{
	public:
	protected:
};


