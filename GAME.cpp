#include "GAME.h"

GAME::GAME(){
	
}

GAME::GAME(string name){
	this->PLAYER.setName(name);
}

player* GAME::getPlayer(){
	return &this->PLAYER;
}

string GAME::getType(){
	return this->typeName;
}

