#include "head.h"
#ifndef ITEM_H
#define ITEM_H

class Item{
	public:
		int getID();
		string getName();
		int getPB();
		int getPS();
		string getDetail();
		void setID(int);
		void setName(string);
		void setPB(int);
		void setPS(int);
		void setDetail(string);
		string getType();
	private:
		string typeName = "ITEM";	
	protected:
		int itemID;
		string itemName;
		int itemPriceB;
		int itemPriceS;
		string itemDetail;
};

class Weapon: public Item{
	public:
		int getiAtk();
		void setiAtk(int);
		int getiDef();
		void setiDef(int);
		int getiHp();
		void setiHp(int);
	protected:
		int iAtk;
		int iDef;
		int iHp;
};

class Armor: public Item{
	public:
		int getiAtk();
		void setiAtk(int);
		int getiDef();
		void setiDef(int);
		int getiHp();
		void setiHp(int);
	protected:
		int iAtk;
		int iDef;
		int iHp;
};

class Consumable: public Item{
	public:
		int getiAtk();
		void setiAtk(int);
		int getiDef();
		void setiDef(int);
		int getiHp();
		void setiHp(int);
	protected:
		int iAtk;
		int iDef;
		int iHp;
};
#endif
