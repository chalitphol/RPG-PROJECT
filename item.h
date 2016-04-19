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
	private:
		int itemID;
		string itemName;
		int itemPriceB;
		int itemPriceS;
		string itemDetail;
};

class Weapon:class Item{
	public:
		int getiAtk();
		void setiAtk(int);
		int getiDef();
		void setiDef(int);
		int getiHp();
		void setiHp(int);
	private:
		int iAtk;
		int iDef;
		int iHp;
};

class Armor:class Item{
	public:
		int getiAtk();
		void setiAtk(int);
		int getiDef();
		void setiDef(int);
		int getiHp();
		void setiHp(int);
	private:
		int iAtk;
		int iDef;
		int iHp;
};

class Consumable:class Item{
	public:
		int getiAtk();
		void setiAtk(int);
		int getiDef();
		void setiDef(int);
		int getiHp();
		void setiHp(int);
	private:
		int iAtk;
		int iDef;
		int iHp;
};
#endif
