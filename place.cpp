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
	return &roomlist;
}
	
void Town::addRoom(Room r){
	roomlist.push_back(r);
}

void Towm::delRoom(Room r){

}
