#include "monster.h"

string monster::getType(){
	return this->typeName;
}
status monster::getStat(){
	return this->stat;
}
string monster::getName(){
	return this->name;
}
string monster::getClass(){
	return this->Class;
}
int monster::getMonID(){
	return this->monID;
}
vector<attack>* monster::getAttackMove(){
	return &this->attackMove;
}

void monster::setName(string n){
	this->name = n;
}
void monster::setClass(string c){
	this->Class = c;
}
void monster::setMonID(int id){
	this->monID = id;
}
