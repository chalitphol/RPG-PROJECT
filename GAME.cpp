#include "GAME.h"

GAME::GAME(){
	this->PLAYER.setName("PLAYER");
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

