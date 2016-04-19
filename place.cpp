#include "place.h"

int Place::getId(){
	return id;
}

string Place::getName(){
	return name;
}

void Place::setId(int i){
	id = i;
}

void Place::setName(string n){
	name = n;
}
