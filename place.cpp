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

vector*<int> Place::getDistination{
	return &distinationList;
}

void Place::addDistination(int d){
	distinationList->push_back(d);
}

void Place::delDistination(int d){
	
}

vector*<Room> Town::getRoom(){
	return &roomList;
}
	
void Town::addRoom(Room r){
	roomList->push_back(r);
}

void Towm::delRoom(Room r){


}
