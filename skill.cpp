#include "skill.h"

int skill::getID(){
	return this->skillID;
}
string skill::getName(){
	return this->skillName;
}
int* skill::getModPlayer(){
	return &this->modPlayer[0];
}
int* skill::getModWeapon(){
	return &this->modWeapon[0];
}
int* skill::getModArmor(){
	return &this->modArmor[0];
}
double* skill::getModPlayerAttack(){
	return &this->modPlayerAttack[0];
}
int* skill::getModMonster(){
	return &this->modMonster[0];
}
double* skill::getModMonsterAttack(){
	return &this->modMonsterAttack[0];
}
int skill::getTurn(){
	return this->turn;
}
int skill::getCooldown(){
	return this->cooldown;
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
void skill::setTurn(int t){
	this->turn = t;
}
void skill::setCooldown(int c){
	this->cooldown = c;
}
void skill::setAll(int id,string name,int dmg,int patk,int pdef,int pmhp,int php,int pg,int watk,int wdef,int wmhp,int aatk,int adef,int amhp,double padmgf,double pahn,double pahc,double pacc,double pacf,int matk,int mdef,int mmhp,int mhp,int mg,double madmgf,double mahn,double mahc,double macc,double macf,int turn,int cd){
	
}
