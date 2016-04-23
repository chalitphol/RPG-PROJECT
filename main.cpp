#include "head.h"

vector<Item> itemData;
vector<monster> monsterData;
vector<skill> skillData;
vector<passive> passiveData;
vector<attack> attackData;
vector<Town> townData;
vector<Room> roomData;
vector<Dungeon> dungeonData;

int main(){
	GAME *core = new GAME();
	cout << "Hi I am " << core->getPlayer()->getName() << endl;
	cout << "This is my stat ATK = " << core->getPlayer()->getStat().getAtk() <<" DEF = "<<core->getPlayer()->getStat().getDef()<<" MAXHP = "<<core->getPlayer()->getStat().getMaxhp()<<endl;
	cout << "ItemData size " << itemData.size()<<endl;
	load::loadItemData();
	for(int i=0;i<load::getItemData()->size();i++){
		load::getItemData(i).printItem();
	}
	cout << "ItemData size " << itemData.size()<<endl;
	
	cout << "\nAttackData size " << attackData.size()<<endl;
	load::loadAttackData();
	for(int i=0;i<load::getAttackData()->size();i++){
		load::getAttackData(i).printItem();
	}
	cout << "AttackData size " << attackData.size()<<endl;
	return 0;
}//	getch();
