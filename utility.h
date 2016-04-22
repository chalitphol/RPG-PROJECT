#include "head.h"

#ifndef UTILITY_H
#define UTILITY_H

namespace load{
	
	template <class T>
	void addData(vector<T> *data,T obj);
	
	vector<Item>* getItemData();
	
	Item getItemData(int index);
	
	vector<monster>* getMonsterData();

	vector<skill>* getSkillData();
	
	vector<passive>* getPassiveData();
	
	vector<attack>* getAttackData();
	
	vector<Town>* getTownData();
	
	vector<Room>* getRoomData();
	
	vector<Dungeon>* getDungeonData();
	
	void loadItemData();
	
}

#endif
