#include "skill.h"

int skill::getID(){
	return this->skillID;
}

string skill::getName(){
	return this->skillName;
}

void skill::setID(int id){
	this->skillID = id;
}

void skill::setName(string n){
	this->skillName = n;
}

string skill::getType(){
		return this->typeName;
	}
