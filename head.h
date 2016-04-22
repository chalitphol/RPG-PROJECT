#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <vector>
#include <ctime>
#include <conio.h>
#include <string>

using namespace std;

extern vector<Item> itemData;
extern vector<monster> monsterData;
extern vector<skill> skillData;
extern vector<passive> passiveData;
extern vector<attack> attackData;
extern vector<Town> townData;
extern vector<Room> roomData;
extern vector<Dungeon> dungeonData;

#include "utility.h"
#endif

#include "Item.h"
#include "monster.h"
#include "skill.h"
#include "passive.h"
#include "attack.h"
#include "place.h"
#include "GAME.h"
#include "player.h"
