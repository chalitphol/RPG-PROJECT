#include 'status.h'
using namespace std;

int status::getAtk(int a){
	this->atk=a;
}

int status::getDef(int d){
	this->def=d;
}

int status::getHp(int h){
	this->hp=h;
}

int status::getMaphp(int m)
{
	this->mapHp=m;
}

void status::setAtk(int a)
{
	this->Atk=a;
}

void status::setDef(int d)
{
	this->def=d;
}

void status::setHp(int h)
{
	if(h>maxHp){
		this->hp=maxHp;
	}else if(h<=0){
		this->hp=0;
	}
}

void status::setMaxhp(int m)
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

void status::setAll(int a,int d,int m)
{
	this->setAtk(a);
	this->setDef(d);
	this->setMaxhp(m);
}

status::status(int a,int d,int m)
{
	this->setAll(a,d,m)
}
