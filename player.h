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
		Place getACode();
		passive getPassive();
		Item getWeapon();
		Item getArmor();
		string getType();
		vector<Item>* getItemList();
		vector<skill>* getSkillList();
		attack getAttack();
		
		void setName(string);
		void setGold(int);
		void addGold(int);
		void setACode(int);
		void addItem(int);
		void delItem(int);
		void setPassive(int);
		bool setWeapon(int);
		bool setArmor(int);
		void addSkill(skill);
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
