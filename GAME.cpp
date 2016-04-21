#include "GAME.h"

GAME::GAME(){
	this->PLAYER.setName("ANNOYVERYMUCH");
}

GAME::GAME(string name){
	this->PLAYER.setName(name);
}

template <class T>
void GAME::addData(vector<T> &data,T obj){
	data.push_back(obj);
}

player* GAME::getPlayer(){
	return &this->PLAYER;
}

vector<Item> GAME::getItemData(){
	return this->itemData;
}

vector<monster> GAME::getMonsterData(){
	return this->monsterData;
}

vector<skill> GAME::getSkillData(){
	return this->skillData;
}

vector<passive> GAME::getPassiveData(){
	return this->passiveData;
}

vector<attack> GAME::getAttackData(){
	return this->attackData;
}

vector<Place> GAME::getPlaceData(){
	return this->placeData;
}

string GAME::getType(){
		return this->typeName;
	}
	
void GAME::loadItemData(){
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
			
			cout<<obj->getID()<<obj->getName()<<obj->getItemType()<<obj->getDetail()<<endl;
		}
    }
}
