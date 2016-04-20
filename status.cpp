#include "status.h"
#include<ctime>
#include<cstdlib>

int status::getAtk(int a){
	this->atk=a;
}

int status::getDef(int d){
	this->def=d;
}

int status::getHp(int h){
	this->hp=h;
}

int status::getMaxhp(int m)
{
	this->maxHp=m;
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
	this->setMaxhp(getMaxhp()+m);
}

void status::setAll(int a,int d,int m)
{
	this->setAtk(a);
	this->setDef(d);
	this->setMaxhp(m);
}

status::status(int a,int d,int m)
{
	this->setAll(a,d,m);
}

status::status()
{
	int addA=0,addD=0,addM=0,count=0;
	srand(time(0));
	for(int i=0; i<12; i++)
	{
		count=rand()%3;
		if(count=0){
			addA++;
		}else if(count=1){
			addD++;
		}else if(count=2){
			addM++;
		}
		
	}
	this->setAtk(5+addA);
	this->setDef(5+addD);
	this->setMaxhp(5+addM);
	this->setHp(maxHp);
	
}
