#include "place.h"

int Place::getID(){
	return id;
}
string Place::getName(){
	return name;
}
vector<int>* Place::getDestination(){
	return &this->destinationList;
}
string Place::getType(){
	return this->typeName;
}
string Place::getPlaceType(){
	return this->placeType;
}

void Place::setID(int ID){
	this->id = ID;
}
void Place::setName(string name){
	this->name = name;
}
void Place::addDestination(int d){
	this->destinationList.push_back(d);
}
void Place::setPlaceType(string place){
	this->placeType = place;
}
void Place::setAll(int id,string n,string type,string dest){
	this->setID(id);
	this->setName(n);
	this->setPlaceType(type);
	
	dest = dest.substr(1,dest.find_first_of(']'));//  [x,x,x,] -> x,x,x,]
	while(dest != "]"){
		this->addDestination(atoi(dest.substr(0,dest.find_first_of(',')).c_str() ));
		dest = dest.substr(dest.find_first_of(',')+1,dest.find_first_of('\0'));
	}
}
