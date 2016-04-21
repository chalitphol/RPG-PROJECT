#include "status.h"

int status::getAtk(){
	return this->atk;
}

int status::getDef(){
	return this->def;
}

int status::getHp(){
	return this->hp;
}

int status::getMaxhp()
{
	return this->maxHp;
}

void status::setAtk(int a)
{
	this->atk = a;
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
	this->setMaxhp(getMaxhp()+m);
}

void status::setAll(int a,int d,int m)
{
	this->setAtk(a);
	this->setDef(d);
	this->setMaxhp(m);
	this->setHp(this->maxHp);
}

status::status(int a,int d,int m)
{
	this->setAll(a,d,m);
}

status::status(){
	int count = 0 , base = 5;
	this->setAll(base,base,base);
	srand(time(0));
	for(int i=0; i<12; i++)
	{
		count=rand()%3;
		if(count==0){
			this->setAtk(this->getAtk()+1);
		}else if(count==1){
			this->setDef(this->getDef()+1);
		}else if(count==2){
			this->setMaxhp(this->getMaxhp()+1);
		}
		
	}
	this->setHp(maxHp);
	
}

string status::getType(){
		return this->typeName;
	}
