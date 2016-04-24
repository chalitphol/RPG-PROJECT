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
int battle::getTurn(){
	return this->turn;
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
void battle::setTurn(int t){
	this->turn = t;
}
void battle::nextTurn(){
	this->setTurn(getTurn()+1);
}

int battle::calcPDmg(){
	double tmp = 0;
	int patk = this->getPlayer()->getStat()->getAtk() + this->getPSkill().getModPlayer(0) + this->getESkill().getModPlayer(0);
	int edef = this->getMonster().getStat()->getDef() + this->getPSkill().getModMonster(1) + this->getESkill().getModMonster(1);
	
	tmp = pow(patk,2) / (patk + edef);
	if(isCri()){
		tmp = tmp * this->getPSkill().getModPlayerAttack(4) * this->getESkill().getModPlayerAttack(4) * this->getPlayer()->getAttack().getCriFactor();
	}
	
	tmp = tmp * this->getPSkill().getModPlayerAttack(0) * this->getESkill().getModPlayerAttack(0) * this->getPlayer()->getAttack().getDmgFactor();
	
	return tmp;
}
int battle::calcEDmg(attack move){
	double tmp = 0;
	int pdef = this->getPlayer()->getStat()->getDef() + this->getPSkill().getModPlayer(1) + this->getESkill().getModPlayer(1);
	int eatk = this->getMonster().getStat()->getAtk() + this->getPSkill().getModMonster(0) + this->getESkill().getModMonster(0);
	
	tmp = pow(eatk,2) / (eatk + pdef);
	if(isCri()){
		tmp = tmp * this->getPSkill().getModMonsterAttack(4) * this->getESkill().getModMonsterAttack(4) * move.getCriFactor();
	}
	
	tmp = tmp * this->getPSkill().getModMonsterAttack(0) * this->getESkill().getModMonsterAttack(0) * move.getDmgFactor();
	
	return tmp;
}
bool battle::isCri(){
	int value = this->getPlayer()->getAttack().getCriChance() + this->getPSkill().getModPlayerAttack(3) + this->getESkill().getModPlayerAttack(3);
	if(value > 100)value = 100;
	else if(value < 0)value = 0;
	if(value >= (rand()%100 +1)){
		return true;
	}else{
		return false;
	}
}
bool battle::isHit(){
	int value = this->getPlayer()->getAttack().getHitChance() + this->getPSkill().getModPlayerAttack(2) + this->getESkill().getModPlayerAttack(2);
	if(value > 100)value = 100;
	else if(value < 0)value = 0;
	
	if(value >= (rand()%100 +1)){
		return true;
	}else{
		return false;
	}
}
