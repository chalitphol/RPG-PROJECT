#include "player.h"

player::player(){
	this->setName("PLAYER");
	this->setGold(0);
	this->setACode(0);
}

player::player(string n){
	this->setName(n);
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
	this->name = tmp;
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

void player::addItem(int itemID){
	this->getItemList()->push_back(load::getItemData(itemID));
}

vector<Item>* player::getItemList(){
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

bool player::setWeapon(int w){
	if(load::getItemData(w).getItemType() == "WEAPON"){
		this->myWeapon = load::getItemData(w);
		return true;
	}else{
		this->myWeapon = load::getItemData(1);
		return false;
	}
}

bool player::setArmor(int a){
	if(load::getItemData(a).getItemType() == "ARMOR"){
		this->myArmor = load::getItemData(a);
		return true;
	}else{
		this->myArmor = load::getItemData(2);
		return false;
	}
}

Item player::getWeapon(){
	return this->myWeapon;
}

Item player::getArmor(){
	return this->myArmor;
}

string player::getType(){
		return this->typeName;
}

void player::addSkill(skill sk){
	this->getSkillList()->push_back(sk);
}

vector<skill>* player::getSkillList(){
	return &this->mySkill;
}

attack player::getAttack(){
	return this->myAttack;
}

void player::setAttack(int att){
	
}
