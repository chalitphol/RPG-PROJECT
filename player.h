#include "head.h"
#include "status.h"
#include "Item.h"
#include "passive.h"

class player{
	public:
		player(char[12]);
		status getStat();
		string getName();
		int getGold();
		int getACode();
		void setName(string);
		void setGold(int);
		void addGold(int);
		void setACode(int);
		status getStatus();
		void addItem(Item);
		void delItem(int);
		vector<Item> getItemList();
		void setPassive(passive);
		passive getPassive();
		void setWeapon(Weapon);
		void setArmor(Armor);
		Weapon getWeapon();
		Armor getArmor();
	private:
		status stat;
		int aCode;
		string name;
		int gold;
		vector<Item> inventory;
		passive myPassive;
		Weapon myWeapon;
		Armor myArmor;
};
