#include "head.h"

#ifndef UTILITY_H
#define UTILITY_H

namespace load{
	
	template <class T>
	void addData(vector<T> *data,T obj);
	
	vector<Item>* getItemData();
	Item getItemData(int);
	
	vector<monster>* getMonsterData();
	monster getMonsterData(int);

	vector<skill>* getSkillData();
	skill getSkillData(int);
	
	vector<passive>* getPassiveData();
	passive getPassiveData(int);
	
	vector<attack>* getAttackData();
	attack getAttackData(int);
	
	vector<Town>* getTownData();
	Town getTownData(int);
	
	vector<Room>* getRoomData();
	Room getRoomData(int);
	
	vector<Dungeon>* getDungeonData();
	Dungeon getDungeonData(int);
	
	void loadItemData();
	void loadAttackData();
	
}

#endif
