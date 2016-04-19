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
	public:
		int itemID;
		string itemName;
		int itemPriceB;
		int itemPriceS;
		string itemDetail;
};
#endif
