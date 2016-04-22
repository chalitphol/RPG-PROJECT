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
		int getiAtk();
		void setiAtk(int);
		int getiDef();
		void setiDef(int);
		int getiHp();
		void setiHp(int);
		string getItemType();
		void setItemType(string);
		string getProp();
		void setProp(string);
		void setAll(int,string,int,int,string,int,int,int,string,string);
		Item(int,string,int,int,string,int,int,int,string,string);
		Item();
		string itemType = " ";
		string property = " ";
		void printItem();
	private:
		string typeName = "ITEM";
		int itemID;
		string itemName;
		int itemPriceB;
		int itemPriceS;
		string itemDetail;
		int iAtk;
		int iDef;
		int iHp;
		
};

//class Weapon: public Item{
//	public:
//		int getiAtk();
//		void setiAtk(int);
//		int getiDef();
//		void setiDef(int);
//		int getiHp();
//		void setiHp(int);
//	protected:
//		
//};
//
//class Armor: public Item{
//	public:
//		int getiAtk();
//		void setiAtk(int);
//		int getiDef();
//		void setiDef(int);
//		int getiHp();
//		void setiHp(int);
//	protected:
//		int iAtk;
//		int iDef;
//		int iHp;
//};
//
//class Consumable: public Item{
//	public:
//		int getiAtk();
//		void setiAtk(int);
//		int getiDef();
//		void setiDef(int);
//		int getiHp();
//		void setiHp(int);
//	protected:
//		int iAtk;
//		int iDef;
//		int iHp;
//};
#endif
