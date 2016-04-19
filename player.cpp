#include "player.h"

player::player(char[12]){
	
}

status player::getStat(){
	return this->stat;
}

string player::getName(){
	string s = this->name;
	return s;
}

int player::getGold(){
	return this->gold;
}

void player::setGold(int gold){
	this->gold = gold;
}

void player::setName(string tmp){
	return tmp.substr(0.12);
}

void player::addGold(int amount){
	this->setGold(getGold() + amount);
}

int player::getCHP(){
	return this->curHP;
}

int player::getACode(){
	return this->aCode;
}

void player::setACode(int target){
	this->aCode = target;
}

status player::getStat(){
	return this->stat;
}

