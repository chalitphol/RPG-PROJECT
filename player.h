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
		void addItem(int);
		void delItem(int);
		void setPassive(passive);
		passive getPassive();
		bool setWeapon(int);
		bool setArmor(int);
		Item getWeapon();
		Item getArmor();
		string getType();
		void addSkill(skill);
		vector<Item>* getItemList();
		vector<skill>* getSkillList();
		attack getAttack();
		void setAttack(int);
	private:
		status stat;
		int aCode;
		string name = "PLAYER";
		int gold;
		vector<Item> inventory;
		vector<skill> mySkill;
		passive myPassive;
		Item myWeapon;
		Item myArmor;
		attack myAttack;
		string typeName = "PLAYER";
};

#endif
