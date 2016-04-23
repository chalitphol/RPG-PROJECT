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

double attack::getDmgFactor(){
	return this->dmgFactor;
}
int attack::getHitNumber(){
	return this->hitNumber;
}

void attack::setDmgFactor(double f){
	this->dmgFactor = f;
}

void attack::setHitNumber(int h){
	this->hitNumber = h;
}

string attack::getType(){
		return this->typeName;
}

int attack::getHitChance(){
	return this->hitChance;
}
void attack::setHitChance(int x){
	if(x>100) x=100;
	else if(x<=0) x=1;
	this->hitChance = x;
}

int attack::getCriChance(){
	return this->criChance;
}

void attack::setCriChance(int x){
	if(x>100) x=100;
	else if(x<=0) x=1;
	this->criChance = x;
}

double attack::getCriFactor(){
	return this->criFactor;
}

void attack::setCriFactor(double x){
	this->criFactor = x;
}

string attack::getDetail(){
	return this->detail;
}

void attack::setDetail(string x){
	this->detail = x;
}

void attack::setAll(int id,string name,double dmg,int hit,int hitC,int criC,double criF,string desc){
	this->setID(id);
	this->setName(name);
	this->setDmgFactor(dmg);
	this->setHitNumber(hit);
	this->setHitChance(hitC);
	this->setCriChance(criC);
	this->setCriFactor(criF);
	this->setDetail(desc);
}

void attack::printItem(){
	cout << getID() << ", " << getName() << ", " << getDmgFactor() << ", " << getHitNumber() << ", " << getHitChance() << ", " << getCriChance() << ", " << 
			getCriFactor() << ", " << getDetail() <<"\n";
}
