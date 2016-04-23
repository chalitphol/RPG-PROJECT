#include "head.h"
#ifndef PLACE_H
#define PLACE_H

class Place{
	public:
		int getID();
		string getName();
		vector<int>* getDestination();
		string getType();
		string getPlaceType();
		Place getDestination(int);
		
		void setID(int);
		void setName(string);
		void addDestination(int);
		void setPlaceType(string);
		void setAll(int,string,string,string);
		
	private:
		string typeName = "PLACE";
		int id;
		string name;
		string placeType; //TOWN, DUNGEON, SHOP, ROOM
		vector<int> destinationList;
};

#endif


