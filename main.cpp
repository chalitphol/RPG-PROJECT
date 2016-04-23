#include "head.h"

vector<Item> itemData;
vector<monster> monsterData;
vector<skill> skillData;
vector<passive> passiveData;
vector<attack> attackData;
vector<monsterMove> monAttackData;
vector<Town> townData;
vector<Room> roomData;
vector<Dungeon> dungeonData;

int main(){
	load::loadItemData();
	load::loadAttackData();
	load::loadMonAttackData();
	load::loadMonsterData();
	GAME *core = new GAME();
//	cout << "Hi I am " << core->getPlayer()->getName() << endl;
//	cout << "This is my stat ATK = " << core->getPlayer()->getStat().getAtk() <<" DEF = "<<core->getPlayer()->getStat().getDef()<<" MAXHP = "<<core->getPlayer()->getStat().getMaxhp()<<endl;
//	
	for(int i=0;i<load::getItemData()->size();i++){
		load::getItemData(i).printItem();
	}
	cout << "ItemData size " << itemData.size()<<endl;
	
	for(int i=0;i<load::getAttackData()->size();i++){
		load::getAttackData(i).printItem();
	}
	cout << "AttackData size " << attackData.size()<<endl;
	cout<<core->getPlayer()->getAttack().getName();
	core->getPlayer()->setWeapon(3);
	cout<<core->getPlayer()->getAttack().getName()<<endl;
	
	for(int i=0;i<load::getMonAttackData()->size();i++){
		cout << load::getMonAttackData(i).getName() <<endl;
	}
	cout << "MonsterAttackData size " << monAttackData.size()<<endl;
	
	for(int i=0;i<load::getMonsterData()->size();i++){
		cout << load::getMonsterData(i).getName() <<"--->";
		for(int j =0;j<load::getMonsterData(i).getAttackMove()->size();j++){
			cout<<load::getMonsterData(i).getAttackMove()->at(j).getName()<<",";
		}
		cout<<"\n";
	}
	cout << "MonsterData size " << monsterData.size()<<endl;
	return 0;
}//	getch();
