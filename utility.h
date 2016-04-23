#include "head.h"

#ifndef UTILITY_H
#define UTILITY_H

namespace load{
	
	template <class T>
	void addData(vector<T> *data,T obj);
	
	vector<Item>* getItemData();
	Item getItemData(int);
	
	vector<monster>* getMonsterData();

	vector<skill>* getSkillData();
	
	vector<passive>* getPassiveData();
	
	vector<attack>* getAttackData();
	attack getAttackData(int);
	
	vector<Town>* getTownData();
	
	vector<Room>* getRoomData();
	
	vector<Dungeon>* getDungeonData();
	
	void loadItemData();
	void loadAttackData();
	
}

#endif
