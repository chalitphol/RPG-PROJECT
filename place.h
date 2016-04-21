#include "head.h"
#ifndef PLACE_H
#define PLACE_H

class Place{
	public:
		int getId();
		string getName();
		void setId(int);
		void setName(string);
		vector<int> getDestination();
		void addDestination(int);
		void delDestination(int);
		string getType();
		
	private:
		string typeName = "PLACE";
		
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
		vector<Room> getRoom();
		void addRoom(Room);
		void delRoom(Room);
		
	protected:		
		vector<Room> roomList;
		
};

class Dungeon: public Place{
	public:
	protected:
};

#endif


