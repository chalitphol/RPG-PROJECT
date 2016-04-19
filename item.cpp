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

//Class Weapon

int Weapon::getiAtk(){
	return this->iAtk;
}

int Weapon::getiDef(){
	return this->iDef;
}
int Weapon::getiHp(){
	return this->iHp;
}

void Weapon::setiAtk(int a){
	this->iAtk = a;
}

void Weapon::setiDef(int a){
	this->iDef = a;
}

void Weapon::setiHp(int a){
	this->iHp = a;
}

//Class Armor

int Armor::getiAtk(){
	return this->iAtk;
}

int Armor::getiDef(){
	return this->iDef;
}
int Armor::getiHp(){
	return this->iHp;
}

void Armor::setiAtk(int a){
	this->iAtk = a;
}

void Armor::setiDef(int a){
	this->iDef = a;
}

void Armor::setiHp(int a){
	this->iHp = a;
}

//Class Consumable

int Consumable::getiAtk(){
	return this->iAtk;
}

int Consumable::getiDef(){
	return this->iDef;
}
int Consumable::getiHp(){
	return this->iHp;
}

void Consumable::setiAtk(int a){
	this->iAtk = a;
}

void Consumable::setiDef(int a){
	this->iDef = a;
}

void Consumable::setiHp(int a){
	this->iHp = a;
}

