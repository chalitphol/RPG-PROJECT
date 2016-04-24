#include "head.h"

vector<Item> itemData;
vector<monster> monsterData;
vector<skill> skillData;
vector<passive> passiveData;
vector<attack> attackData;
vector<monsterMove> monAttackData;
vector<Place> placeData;

int main(){
	load::loadItemData();
	load::loadAttackData();
	load::loadMonAttackData();
	load::loadMonsterData();
	load::loadPlaceData();
	load::loadSkillData();
	load::loadPassiveData();
	GAME *core = new GAME();

	core->chapter0();
	cout<< core->getPlayer()->getName()<<endl;
	cout<< core->getPlayer()->getPassive().getName();
	return 0;
}//	getch();




//{	cout << "Hi I am " << core->getPlayer()->getName() << endl;
//	cout << "This is my stat ATK = " << core->getPlayer()->getStat().getAtk() <<" DEF = "<<core->getPlayer()->getStat().getDef()<<" MAXHP = "<<core->getPlayer()->getStat().getMaxhp()<<endl;
////	
//	cout << "ItemData size " << itemData.size()<<endl;
//	
//	for(int i=0;i<load::getAttackData()->size();i++){
//		load::getAttackData(i).printItem();
//	}
//	cout << "AttackData size " << attackData.size()<<endl;
//	cout<<core->getPlayer()->getAttack().getName();
//	core->getPlayer()->setWeapon(3);
//	cout<<core->getPlayer()->getAttack().getName()<<endl;
//	
//	for(int i=0;i<load::getMonAttackData()->size();i++){
//		cout << load::getMonAttackData(i).getName() <<endl;
//	}
//	cout << "MonsterAttackData size " << monAttackData.size()<<endl;
//	
//	for(int i=0;i<load::getMonsterData()->size();i++){
//		cout << load::getMonsterData(i).getName() <<"--->";
//		for(int j =0;j<load::getMonsterData(i).getAttackMove()->size();j++){
//			cout<<load::getMonsterData(i).getAttackMove()->at(j).getName()<<",";
//		}
//		cout<<"\n";
//	}
//	cout << "MonsterData size " << monsterData.size()<<endl<<endl;
//	for(int i=0;i<load::getPlaceData()->size();i++){
//		cout << load::getPlaceData(i).getName() <<"--->";
//		for(int j =0;j<load::getPlaceData(i).getDestination()->size();j++){
//			cout<<load::getPlaceData(i).getDestination()->at(j)<<",";
//		}
//		cout<<"\n";
//	}
//	cout << "PlaceData size " << placeData.size()<<endl<<endl;
//	cout <<"Im at "<< load::getPlaceData(1).getName() <<" I can go to "<<load::getPlaceData(1).getDestination(0).getName()<<endl<<endl;
	
//	for(int i=0;i<load::getSkillData()->size();i++){
//		cout <<"."<<"   "<< skillData.at(i).getName() <<"--->";
//		cout<<"\n";
//	}
//	cout << "SkillData size " << skillData.size()<<endl<<endl;
//	for(int i=0;i<load::getPassiveData()->size();i++){
//		cout <<"."<<"   "<< passiveData.at(i).getName() <<"--->";
//		cout<<"\n";
//	}
//	cout << "SkillData size " << passiveData.size()<<endl<<endl;}
