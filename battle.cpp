#include "battle.h"

battle::battle(player* p,int m){
	this->setPlayer(p);
	this->setEnemy(m);
}

string battle::getType(){
	return this->typeName;
}
player* battle::getPlayer(){
	return this->PLAYER;
}
monster battle::getMonster(){
	return this->ENEMY;
}
int battle::getPFinalDmg(){
	return this->pFinalDmg;
}
int battle::getEFinalDmg(){
	return this->eFinalDmg;
}
vector<monsterMove>* battle::getEAttack(){
	return &this->eAttack;
}
int battle::getGold(){
	return this->goldReward;
}
skill battle::getPSkill(){
	return this->pSkill;
}
skill battle::getESkill(){
	return this->eSkill;
}

void battle::setPlayer(player* pt){
	this->PLAYER = pt;
}
void battle::setEnemy(int index){
	this->ENEMY = load::getMonsterData(index);
}
void battle::setPassive(int index){
	this->PASSIVE = load::getPassiveData(index);
}
void battle::setPFinalDmg(int dmg){
	this->pFinalDmg = dmg;
}
void battle::setEFinalDmg(int dmg){
	this->eFinalDmg = dmg;
}
void battle::setEAtack(vector<monsterMove> vec){
	this->eAttack = vec;
}
void battle::setGold(int gold){
	this->goldReward = gold;
}
void battle::setPSkill(int i){
	this->pSkill = load::getSkillData(i);
}
void battle::setESkill(int i){
	this->eSkill = load::getSkillData(i);
}

int battle::calcPDmg(){
	double tmp = 0;
	int patk = this->getPlayer()->getStat()->getAtk() + this->getPSkill().getModPlayer(0) + this->getESkill().getModPlayer(0);
	int edef = this->getMonster().getStat()->getDef() + this->getPSkill().getModMonster(1) + this->getESkill().getModMonster(1);
	cout << patk;
	tmp = pow(patk,2) / (patk + edef);
	
	return tmp;
}
bool battle::isCri(){
	
}
