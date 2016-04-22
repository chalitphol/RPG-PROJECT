#include "utility.h"

template <class T>
void load::addData(vector<T> *data,T obj){
	data->push_back(obj);
}

vector<Item>* load::getItemData(){
	return &itemData;
}

Item load::getItemData(int index){
	return itemData[index];
}

vector<monster>* load::getMonsterData(){
	return &monsterData;
}

vector<skill>* load::getSkillData(){
	return &skillData;
}

vector<passive>* load::getPassiveData(){
	return &passiveData;
}

vector<attack>* load::getAttackData(){
	return &attackData;
}

vector<Town>* load::getTownData(){
	return &townData;
}

vector<Room>* load::getRoomData(){
	return &roomData;
}

vector<Dungeon>* load::getDungeonData(){
	return &dungeonData;
}

void load::loadItemData(){
	ifstream src;
	src.open("data/ITEM.txt");
	string line;
	while(getline(src, line)){// .substr(0,textline.find_first_of(':'))
		if(line.substr(0,line.find_first_of('/')+1) != "/"){
		
			Item *obj = new Item();
			int id = atoi( line.substr(0,line.find_first_of(',')).c_str() );
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			string name = line.substr(0,line.find_first_of(','));
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			int SP = atoi( line.substr(0,line.find_first_of(',')).c_str() );
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			int BP = atoi( line.substr(0,line.find_first_of(',')).c_str() );
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			string type = line.substr(0,line.find_first_of(','));
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			int atk = atoi( line.substr(0,line.find_first_of(',')).c_str() );
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			int def = atoi( line.substr(0,line.find_first_of(',')).c_str() );
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			int hp = atoi( line.substr(0,line.find_first_of(',')).c_str() );
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			string skill = line.substr(0,line.find_first_of(','));
			line = line.substr(line.find_first_of(',')+1,line.find_first_of('\0'));
			string desc = line.substr(0,line.find_first_of('\0'));

			obj->setAll(id,name,SP,BP,type,atk,def,hp,skill,desc);
			
			load::addData(load::getItemData(),*obj);
		}
	}
}


