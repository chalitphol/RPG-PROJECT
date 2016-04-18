#include <iostream>
#include "story.h"
using namespace std;

Story::chapter(int cm,int cs){
	string enter;
	switch(cm){
		case 0:
			switch(cs){
				case 0:
					cout << "Once upon a time there has The kingdom was a fertile kingdom.";
					getline(cin,enter);
					cout << "The population was well happy.";
					getline(cin,enter);
					cout <<  "Everyone lived in peace .\n" ;
					getline(cin,enter);
					cout << "Until one day the dark lord has appeared."; 
					getline(cin,enter);
					cout << "The peace was gone. People were in fear.";
					getline(cin,enter); 
					cout << "The invasion spead out wide.";
					getline(cin,enter);
					cout << "The people were waiting for a hero to defeat the dark lord. "; 
					break;
			}
			break;
		case 1:

			break;
	}
}

int Story::getCM(){
	return this->CM;
}

int Story::getCS(){
	return this->CS;
}

void Story::setCM(int cm){
	this->CM = cm;
}

void Story::setCS(int cs){
	this->CS = cs;
}

Story::Story(){
	
}
