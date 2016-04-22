#include "head.h"
#include "Item.h"
#include "monster.h"
#include "skill.h"
#include "passive.h"
#include "attack.h"
#include "place.h"
#include "player.h"

#ifndef GAME_H
#define GAME_H

class GAME{
	private:
		vector<Item> itemData;
		vector<monster> monsterData;
		vector<skill> skillData;
		vector<passive> passiveData;
		vector<attack> attackData;
		vector<Place> placeData;
		player PLAYER;
		string typeName = "GAME";
		template <class T>
		void addData(vector<T>*,T);

		
	public:
		GAME();
		GAME(string);
		vector<Item>* getItemData();
		Item getItemData(int);
		vector<monster> getMonsterData();
		vector<skill> getSkillData();
		vector<passive> getPassiveData();
		vector<attack> getAttackData();
		vector<Place> getPlaceData();
		player* getPlayer();
		string getType();
		void loadItemData();
};

#endif
