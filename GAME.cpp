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

void GAME::chapter0(){
	string enter,c1,c2,name,cmd;
	show::clear();
//	cout << "Once upon a time there has The kingdom was a fertile kingdom.";
//	getline(cin,enter);
//	cout << "The population was well happy.";
//	getline(cin,enter);
//	cout <<  "Everyone lived in peace.\n" ;
//	getline(cin,enter);
//	cout << "Until one day The Dark Lord has appeared."; 
//	getline(cin,enter);
//	cout << "The peace was gone. People were in fear.";
//	getline(cin,enter); 
//	cout << "The invasion spead out wide.";
//	getline(cin,enter);
//	cout << "The people were waiting for a hero to defeat The Dark Lord.";
//	getline(cin,enter);
//	getline(cin,enter);
	
	show::clear();
	cout << "Your family is......\n\n";
	cout << "[1] Hunter family.\n[2] Noble family.\n[3] You live in slum with others child.\n";
	do{
		cout << "COMMAND : ";
		getline(cin,c1);
	}while(!(c1=="1" || c1=="2" || c1=="3")); 
	
	show::clear();
	cout << "You want to defeat The Dark Lord because......\n";
	
	cout << "\n[1] You want fame and money.\n[2] Your village was destroyed.Your family were killed.You want to revenge.\n[3] Your want the highest honor.\n";
	do{
		cout << "COMMAND : ";
		getline(cin,c2);
	}while(!(c2=="1" || c2=="2" || c2=="3")); 
		
	do{
		show::clear();
		cout << "What is your name?\n\n";
		do{
			cout << "COMMAND : ";
			getline(cin,name);
		}while(name.size()>=10 || name.size()==0);
		cout<<"Your name is [" << name << "] right ?\n";
		cout<<"[1] YES\n[2] NO\n";
		cout << "COMMAND : ";
		getline(cin,cmd);
	}while(cmd != "1");
}
