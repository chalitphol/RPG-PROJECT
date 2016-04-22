#include "head.h"

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
		vector<Item>* getItemList();
		void setPassive(passive);
		passive getPassive();
		void setWeapon(int);
		void setArmor(int);
		Item getWeapon();
		Item getArmor();
		string getType();
		void addSkill(skill);
		vector<skill>* getSkillList();
	private:
		status stat;
		int aCode;
		string name;
		int gold;
		vector<Item> inventory;
		vector<skill> mySkill;
		passive myPassive;
		Item myWeapon;
		Item myArmor;
		string typeName = "PLAYER";
};

#endif
