#include "battle.h"

battle::battle(player* p,int m){
	this->setPlayer(p);
	this->setEnemy(m);
	this->setTurn(1);
	this->setBanTurn(0);
	this->setPassive(getPlayer()->getPassive().getID());
	this->getMonster()->getStat()->setHp(getMonster()->getStat()->getMaxhp());
}

string battle::getType(){
	return this->typeName;
}
player* battle::getPlayer(){
	return this->PLAYER;
}
monster* battle::getMonster(){
	return &this->ENEMY;
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
monsterMove battle::getEMove(){
	return this->eMove;
}
int battle::getBanTurn(){
	return this->banTurn;
}
bool battle::isOnban(){
	if(getBanTurn()>getTurn()){
		return true;
	}
	return false;
}
passive battle::getPASSIVE(){
	return this->PASSIVE;
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
bool battle::nextTurn(){
	getch();
	this->setTurn(getTurn()+1);
	if(getPlayer()->getStat()->getHp()==0 || getMonster()->getStat()->getHp()==0)return false;
	else return true;
}
void battle::setEMove(int i){
	this->eMove = load::getMonAttackData(i);
}
void battle::setBanTurn(int b){
	this->banTurn = b;
}
void battle::onCD(int n){
	this->setBanTurn(this->getTurn()+(2*n));
}

int battle::calcPDmg(){
	double tmp = 0;
	int patk = this->getPlayer()->getStat()->getAtk() + this->getPSkill().getModPlayer(0) + this->getESkill().getModPlayer(0);
	int edef = this->getMonster()->getStat()->getDef() + this->getPSkill().getModMonster(1) + this->getESkill().getModMonster(1);
	
	tmp = pow(patk,2) / (patk + edef);
	if(isCri()){
		tmp = tmp * this->getPSkill().getModPlayerAttack(4) * this->getESkill().getModPlayerAttack(4) * this->getPlayer()->getAttack().getCriFactor();
		if(getPASSIVE().getName() == "HUNTER"){
			tmp *= getPASSIVE().getCriFactor();
		}
	}
	
	tmp = tmp * this->getPSkill().getModPlayerAttack(0) * this->getESkill().getModPlayerAttack(0) * this->getPlayer()->getAttack().getDmgFactor();
	
	if(getPASSIVE().getName() == "PRIDE"){
		tmp *= getPASSIVE().getDmgFactor();
	}
	if(getPASSIVE().getName() == "REVENGER" && (getPlayer()->getStat()->getHp() < 5)){
		tmp *= getPASSIVE().getDmgFactor();
	}
	return tmp;
}
int battle::calcEDmg(attack move){
	double tmp = 0;
	int pdef = this->getPlayer()->getStat()->getDef() + this->getPSkill().getModPlayer(1) + this->getESkill().getModPlayer(1);
	int eatk = this->getMonster()->getStat()->getAtk() + this->getPSkill().getModMonster(0) + this->getESkill().getModMonster(0);
	
	tmp = pow(eatk,2) / (eatk + pdef);
	if(isCri()){
		tmp = tmp * this->getPSkill().getModMonsterAttack(4) * this->getESkill().getModMonsterAttack(4) * move.getCriFactor();
	}
	
	tmp = tmp * this->getPSkill().getModMonsterAttack(0) * this->getESkill().getModMonsterAttack(0) * move.getDmgFactor();

	return tmp;
}
bool battle::isCri(){
	int value = this->getPlayer()->getAttack().getCriChance() + this->getPSkill().getModPlayerAttack(3) + this->getESkill().getModPlayerAttack(3);
	if(getPASSIVE().getName() == "HUNTER"){
		value += getPASSIVE().getCriChanceAdd();
	}
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
void battle::battleScene(monsterMove move){
	show::printData(core);
	cout <<setw(27)<<"ENEMY"<<" TURN  :  "<< this->getTurn() <<endl<<endl;
	cout <<setw(33)<<this->getMonster()->getName()<<"  ["<<this->getMonster()->getStat()->getHp()<<"/"<<this->getMonster()->getStat()->getMaxhp()<<"]\n\n";
	cout <<setw(35)<<move.getName()<<endl<<endl;
}
void battle::battleScene(){
	show::printData(core);
	cout <<setw(27)<<"YOUR TURN  :  "<< this->getTurn() <<endl<<endl;
	cout <<setw(33)<<this->getMonster()->getName()<<"  ["<<this->getMonster()->getStat()->getHp()<<"/"<<this->getMonster()->getStat()->getMaxhp()<<"]\n\n";
	cout <<endl;
}
void battle::console(){
	string cmd="";
	int c=0;
		cout <<"\t"<<"Choose your action.\n";
		cout <<"\t"<<"[1] ATTACK\n";
		cout <<"\t"<<"[2] ITEM\n";
		cout <<"\t"<<"[3] SKILL\n\n";
		while(cmd != "6969"){
			do{
				cout <<"\t"<<"COMMAND: ";
				getline(cin,cmd);
			}while(!(cmd == "1" || cmd == "2" || cmd == "3" || cmd == "4"));
			
			if(cmd=="1") {
				this->pattack();
				cmd = "6969";	
			}
			else if(cmd=="2") {
				if(this->getPlayer()->showItemList("CONSUMABLE")){
					cout <<"Which item do you want\n";
					do{
						cout <<"COMMAND: ";	
						cin>>c;
					}while(!useItem(c));
					cmd = "6969";
				}
			}else if(cmd=="3") {
				if(!isOnban()){
					if(this->getPlayer()->showSkillList()){
						do{
							cout <<"COMMAND: ";	
							getline(cin,cmd);
							cin>>c;
						}while(!useSkill(c));
						cmd = "6969";
					}
				}else{
					cout<<"On cooldown\n";
				}
			}
		}
}

void battle::pattack(){
	for(int i=0;i<this->getPlayer()->getAttack().getHitNumber();i++){
		if(isHit()){
			this->setPFinalDmg(calcPDmg());
			this->getMonster()->getStat()->takeDamage(getPFinalDmg());
			this->battleScene();
			cout << "\tEnemy took damage "<<getPFinalDmg()<<" points "<<this->ENEMY.getStat()->getHp();
			
		}else{
			this->battleScene();
			cout << "MISS";
		}
		getch();
	}
}
bool battle::useItem(int index){
	if(load::getItemData(index).getItemType() == "CONSUMABLE"){
		this->getPlayer()->getStat()->addAll(load::getItemData(index).getiAtk(),load::getItemData(index).getiDef(),load::getItemData(index).getiMaxHp());
		this->getPlayer()->getStat()->addHp(load::getItemData(index).getiHp());
		this->getPlayer()->delItem(index);
		return true;
	}
	return false;
}
bool battle::useSkill(int index){
	if(index>0 && index<this->getPlayer()->getSkillList()->size()){
		this->setPSkill(this->getPlayer()->getSkillList()->at(index).getID());
		this->onCD(this->getPSkill().getCooldown());
		return true;
	}
	return false;
}
void battle::fight(){
	do{
		myTurn();
		enemyTurn();	
	}while(nextTurn());
	
}
void battle::myTurn(){
	battleScene();
	console();
}
void battle::enemyTurn(){
	battleScene();
}
