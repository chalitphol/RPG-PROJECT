#include "place.h"

int Place::getId(){
	return id;
}

string Place::getName(){
	return name;
}

void Place::setId(int id){
	id = id;
}

void Place::setName(string name){
	name = name;
}

vector<int>* Place::getDestination(){
	return &this->destinationList;
}

void Place::addDestination(int d){
	destinationList.push_back(d);
}

vector<Room>* Town::getRoom(){
	return &this->roomList;
}
	
void Town::addRoom(Room r){
	roomList.push_back(r);
}

string Place::getType(){
		return this->typeName;
	}
