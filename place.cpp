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

vector*<Room> Town::getRoom(){
	return &roomList;
}
	
void Town::addRoom(Room r){
	roomList->push_back(r);
}

void Towm::delRoom(Room r){


}

vector*<int> Town::getDistination{
	return &distinationList;
}

void Town::addDistination(int d){
	distinationList->push_back(d)
}

void Town::delDistination(int d){
	
}
