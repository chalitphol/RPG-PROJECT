#include "item.h"
#include <iostream>
using namespace std;

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
