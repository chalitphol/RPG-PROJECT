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
	GAME *core = new GAME("BABARA");
	cout << "Hi I am " << core->getPlayer()->getName() << endl;
	cout << "This is my stat ATK = " << core->getPlayer()->getStat().getAtk() <<" DEF = "<<core->getPlayer()->getStat().getDef()<<" MAXHP = "<<core->getPlayer()->getStat().getMaxhp();
	cout << "\nData size " << itemData.size()<<endl;
	load::loadItemData();
	for(int i=0;i<load::getItemData()->size();i++){
		load::getItemData(i).printItem();
	}
	cout << "\nData size " << itemData.size()<<endl;
//	getch();

	return 0;
}
