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

vector<int> Place::getDestination(){
	return this->destinationList;
}

void Place::addDestination(int d){
	destinationList.push_back(d);
}

void Place::delDestination(int d){
	
}

vector<Room> Town::getRoom(){
	return roomList;
}
	
void Town::addRoom(Room r){
	roomList.push_back(r);
}

void Town::delRoom(Room r){


}
string Place::getType(){
		return this->typeName;
	}
