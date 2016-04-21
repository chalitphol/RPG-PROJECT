#include "item.h"
#include <iostream>
using namespace std;

//Class Item

int Item::getID(){
	return this->itemID;
}

string Item::getName(){
	return this->itemName;
}

int Item::getPB(){
	return this->itemPriceB;
}

int Item::getPS(){
	return this->itemPriceS;
}

string Item::getDetail(){
	return this->itemDetail;
}

void Item::setID(int a){
	this->itemID = a;
}

void Item::setName(string a){
	this->itemName = a;
}

void Item::setPB(int a){
	this->itemPriceB = a;
}

void Item::setPS(int a){
	this->itemPriceS = a;
}

void Item::setDetail(string a){
	this->itemDetail = a;
}


int Item::getiAtk(){
	return this->iAtk;
}

int Item::getiDef(){
	return this->iDef;
}
int Item::getiHp(){
	return this->iHp;
}

void Item::setiAtk(int a){
	this->iAtk = a;
}

void Item::setiDef(int a){
	this->iDef = a;
}

void Item::setiHp(int a){
	this->iHp = a;
}

string Item::getType(){
		return this->typeName;
}

string Item::getItemType(){
	return this->itemType;
}

void Item::setItemType(string name){
	this->itemType = name;
}
