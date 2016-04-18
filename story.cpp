#include <iostream>
#include "story.h"
using namespace std;

Story::chapter(){
	int c = 0;
	string enter;
	switch(c){
		case 0;
			C0();
			break;
		case 1;
			C1();
			break;
	
}
Story::C0(){
	cout << "Once upon a time there has The kingdom was a fertile kingdom.";
	getline(cin,enter);
	cout << "\n the population was well happy.";
	getline(cin,enter);
	cout <<  "\n Everyone lived in peace .\n" ;
	getline(cin,enter);
	cout << "\n until one day the dark lord has appeared."; 
	getline(cin,enter);
	cout << "\n The peace was gone. People were in fear.";
	getline(cin,enter); 
	cout << "\n the invasion spead out wide.";
	getline(cin,enter);
	cout << "\n The people were waiting for a hero to defeat the dark lord. "; 
}
