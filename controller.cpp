#include "GAME.h"

void GAME::console(){
	string cmd="";
	int c=0;
		cout <<"\t"<<"Choose your action.\n";
		cout <<"\t"<<"[1] INVENTORY\n";
		cout <<"\t"<<"[2] SKILL\n";
		cout <<"\t"<<"[3] GO TO\n\n";
		while(cmd != "6969"){
			do{
				cout <<"\t"<<"COMMAND: ";
				getline(cin,cmd);
			}while(!(cmd == "1" || cmd == "2" || cmd == "3"));
			
			if(cmd=="1") {
				cout<<endl;
				show::printData(core);
				getPlayer()->showItemList();
				do{
					cout <<"\t"<<"COMMAND: ";
					getline(cin,cmd);
				}while(!(atoi(cmd.c_str()) < getPlayer()->getItemList()->size() && atoi(cmd.c_str()) >=0));
				getPlayer()->use(atoi(cmd.c_str()));
				cmd = "6969";	
			}
			else if(cmd=="2") {
				cout<<endl;
				if(!getPlayer()->showSkillList())cout << "\tYou have no skill.\n";
				getch();
				cmd = "6969";
			}else if(cmd=="3") {
				cout<<endl;
				show::printData(core);
				getPlayer()->getACode().printDestinationList();
				do{
					cout <<"\tCOMMAND: ";
					getline(cin,cmd);
				}while(!(atoi(cmd.c_str()) < getPlayer()->getACode().getDestination()->size() && atoi(cmd.c_str()) >=0));
				
				cmd = "6969";
			}
		}
}
