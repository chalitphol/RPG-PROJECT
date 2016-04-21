#include "attack.h"

int attack::getID(){
	return this->attackID;
}

string attack::getName(){
	return this->attackName;
}

void attack::setID(int id){
	this->attackID = id;
}

void attack::setName(string n){
	this->attackName = n;
}

double attack::getFactor(){
	return this->dmgFactor;
}
int attack::getHitNumber(){
	return this->hitNumber;
}

void attack::setFactor(int f){
	this->dmgFactor = f;
}

void attack::setHitNumber(int h){
	this->hitNumber = h;
}

string attack::getType(){
		return this->typeName;
	}
