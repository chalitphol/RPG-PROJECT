#include 'status.h'
using namespace std;

int status::setAtk(){
	return this->atk;
}

int status::setDef(){
	return this->def;
}

int status::setHp(){
	return this->hp;
}

int status::setMaphp()
{
	return this->mapHp;
}

void status::getAtk(int a)
{
	this->Atk=a;
}

void status::getDef(int d)
{
	this->def=d;
}

void status::getHp(int h)
{
	this->Hp=h;
}

void status::getMaxhp(int m)
{
	this->maxHp=m;
}

void status::addAtk(int a)
{
	this->setAtk(getAtk()+a);
}

void status::addDef(int d)
{
	this->setDef(getAtk()+d);
}

void status::addHp(int h)
{
	this->setHp(getHp()+h);
}

void status::addMaxhp(int m)
{
	this->setMaphp(getMaxhp()+m);
}