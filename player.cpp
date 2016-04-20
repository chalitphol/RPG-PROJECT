#include "player.h"

player::player(char[12] n){
	this->setName(n);
	this->stat()
	this->setGold(0);
	this->setACode(0);
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
	return tmp.substr(0,12);
}

void player::addGold(int amount){
	this->setGold(getGold() + amount);
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

void player::addItem(Item item){
	this->getItemList()->push_back(item);
}

vector*<Item> player::getItemList(){
	return &this->inventory;
}

void player::delItem(int index){
	this->getItemList()->erase(this->getItemList()->begin() + index);
}
void player::setPassive(passive p){
	this->myPassive.setID(p.getID());
	this->myPassive.setName(p.getName());
}

passive player::getPassive(){
	return this->myPassive;
}

void player::setWeapon(Weapon w){
	this->myWeapon.setID(w.getID());
}

void player::setArmor(Armor a){
	this->myArmor.setID(a.getID());
}

Weapon player::getWeapon(){
	return this->myWeapon;
}

Armor player::getArmor(){
	return this->myArmor;
}
