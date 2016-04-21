#include "head.h"
#include "status.h"
#include "Item.h"
#include "passive.h"

#ifndef PLAYER_H
#define PLAYER_H
class player{
	public:
		player(string);
		player();
		status getStat();
		string getName();
		int getGold();
		int getACode();
		void setName(string);
		void setGold(int);
		void addGold(int);
		void setACode(int);
		void addItem(Item);
		void delItem(int);
		vector<Item> getItemList();
		void setPassive(passive);
		passive getPassive();
		void setWeapon(int);
		void setArmor(int);
		Item getWeapon();
		Item getArmor();
		string getType();
	private:
		status stat;
		int aCode;
		string name;
		int gold;
		vector<Item> inventory;
		passive myPassive;
		Item myWeapon;
		Item myArmor;
		string typeName = "PLAYER";
};

#endif
