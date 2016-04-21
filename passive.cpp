#include "passive.h"

int passive::getID(){
	return this->passiveID;
}

string passive::getName(){
	return this->passiveName;
}

void passive::setID(int id){
	this->passiveID = id;
}

void passive::setName(string n){
	this->passiveName = n;
}

string passive::getType(){
		return this->typeName;
	}
