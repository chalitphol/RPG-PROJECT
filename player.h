#include "head.h"
#include "status.h"
#include "Item.h"

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
		status getStat();
		void addItem(Item);
		void delItem(int);
		vector*<Item> getItemList();
	private:
		status stat;
		int aCode;
		char[12] name;
		int gold;
		vector<Item> inventory;
};
