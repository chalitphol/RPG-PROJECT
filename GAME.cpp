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
	cout << "Once upon a time there has The kingdom was a fertile kingdom.";
	getline(cin,enter);
	cout << "The population was well happy.";
	getline(cin,enter);
	cout <<  "Everyone lived in peace." ;
	getline(cin,enter);
	cout << "Until one day The Dark Lord has appeared."; 
	getline(cin,enter);
	cout << "The peace was gone. People were in fear.";
	getline(cin,enter); 
	cout << "The invasion spead out wide.";
	getline(cin,enter);
	cout << "The people were waiting for a hero to defeat The Dark Lord.";
	getline(cin,enter);
	getline(cin,enter);
	
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
	int pass;
	if((c1 == "3" && c2 == "2")||(c1 == "1" && c2 =="2"))pass = 1;
	else if((c1 == "3" && c2 == "1")||(c1 == "2" && c2 =="1"))pass = 2;
	else if((c1 == "1" && c2 == "1")||(c1 == "2" && c2 =="2"))pass = 3;
	else if(c1 == "3" && c2 == "3")pass = 4;
	else if(c1 == "1" && c2 == "3")pass = 5;
	else pass = 6;
	
	this->getPlayer()->setPassive(pass);
	this->getPlayer()->setName(name);
	
}

void GAME::chapter1(int session){
	switch(session){
		case 1:
			show::clear();
			cout << "3 years after The Dark Lord's invasion.";
			cout << "At the town.";
			cout << PLAYER->getName() << ": Miss how much is it?";
			cout << "Merchant: It's 30 gold";
			cout << "Townspeople shouting.";
			cout << "Mister A: Monsters !!";
			cout << "Merchant: Let's escape.";
			cout << PLAYER->getName() << ":…(Walking to monster)";
			cout << "Centaur Leader: Kill them all and take everything.";
			cout << "Centaur A: Hey! Why you don't run?";
			cout << PLAYER->getName() << "....";
			cout << "Centaur B: I think this guy is fear and go mad.";
			cout << "Centaurs: Hah hah ha!";
			cout << "Chop!!";
			cout << "The head of monster are flown away from their shoulder.";
			cout << "Centaur Leader: How dare you!!";
			cout << PLAYER->getName() << "I will kill you all.";
			show::clear();
			break;
		case 2:
			show::clear();
			cout << "Townspeople: He can get rid of all of monsters . Who is he?";
			cout << "Little girl: H..Hero.";
			cout << "People shouting.";
			cout << "Hero!! Hero!!";
			show::clear();
			cout << "Chapter 1 Hero Born";
			show::clear();
			cout << "Mayor: Thank you for your help. If you didn't come, our town would get a lot of damage.";
			cout << PLAYER->getName() << ": I just can't let people suffered without doing anything with it.";
			cout << "Mayor: You are such a good person. We would like to reward you but sorry,\n at this situation we don't have enough money to use except maintain the town.";
			cout << PLAYER->getName() << ": Never mind ,I just want to help.";
			cout << "Mayor: we're really thank for your help. ";
			cout << "Mister B: Mayor!";
			cout << "Mayou: What's happen?";
			cout << "Mister B: There are still soldiers who were wounded remained but we are running out of herbs.";
			cout << "Mayor: that's bad. Sir if it's not annoying you too much. Could you go to collect herbs for us?";
			cout << PLAYER->getName() << ": Okay, I will help.";
			show::clear();
			cout << "Quest: Collect the herb.\nDetail:: Collect 5 herb from the monster in forest and send it to the mayor.";
			show::clear();
			break;
		case 3:
			show::clear();
			cout << "Mayor: You help us a lot. I want to give this to you. It's not something important but keep it.";
			cout << "You got skill: heal1";
			show::clear();
			cout << "Quest: Go to the forest";
			cout << "Detail: There will be something going on.";
			show::clear();
			break;
		case 4:
			show::clear();
			cout << PLAYER->getName() << ":(walking in the forest)";
			cout << "Man's sound : Help!! Somebody Help us please!!";
			cout <<  "See injured man with monster around.";
			show::clear();
			break;
		case 5:
			show::clear();
			cout << PLAYER->getName() << "Are you ok?";
			cout << "The man: Yes,I'm okay. But my sister cough! Cough!";
			cout << PLAYER->getName() << "Hey!";
			cout << "Give him a herb";
			cout << "The man: T..Thank.";
			cout << PLAYER->getName() << "What happen to your sister?";
			cout << "The man: My s..sister was caught by the monster";
			cout << PLAYER->getName() << "What they caught your sister for?";
			cout << "The man: three year ago after The Dark Lord come.\nIn addition to the occupation,he caught many people who have a magic power to drain their power for increase his strength.\nMy sister Her power has awakened lately. she has a strong magic power but can't control it perfectly.\nSo we decide to go to the city to find someone that can teach her how to control it.\nBut on the way we were attacked. \n(smash the ground) I can't do anything.(…crying)"
			cout << PLAYER->getName() << ": Do you know where they go?";
			cout << "The man: Huh!"
			cout << PLAYER->getName() << ": I will help you bring her back.";
			cout << "I heard about One of the two Knights of The Dark Lord has set up the fort in this forest.\nMaybe My sister was brought to there.";
			cout << PLAYER->getName() << "Okay let's go!!";
			show::clear();
			cout << "Quest: Help the girl\nDetail: go to the deepest part of the forest ";
			show::clear();
			break;
		case 6:
			show::clear();
			cout << "The man: Finally we're here";
			cout << PLAYER->getName() << ": Yeah.";
			cout << "Open the gate.";
			cout << "The man: that's her.";
			cout << "The faint girl was tied with the rope at the middle of the fort";
			cout << PLAYER->getName() << ": Let's get her.";
			cout << "Sound the ground shaking."
			cout << "Behemoth: Oh! look like I have many guest come today.";
			cout << "A big monster wearing the armor look down to us.";
			cout << "Behemoth: What you guy come for?";
			cout << "The man: Give my sister back!!";
			cout << "Behemoth:Wonderful! To help family. What an impressive story.\nBut I can't let that happen. This girl has a powerful magic power if My lord get this power.\nThere will no one in this land can against him.";
			cout << PLAYER->getName() << "Then we have to use force to bring her back.";
			cout << "Behemoth: Oh! What a brave young men. Who are you?";
			cout << PLAYER->getName() << ": I'm " << PLAYER->getName() << ". Remember, this is the name of the person you lost.";
			cout << "Behemoth: Haha! Then show me your strength";
			show::clear();
		case 7:
			show::clear();
			cout << "Behemoth: argh!! You are so strong. Maybe you are someone who can defeat my lord.\nBut I can't let's that happen. because I am Behemoth the one of the two Knights. ";
			cout << "Behemoth's body begin to emitting light";
			cout << "The man: That's bad he self explode. At this range we can survive.";
			cout <<  PLAYER->getName() << ": I will stop him. Argh!"
			cout << "Behemoth: Bwah hah hah!! Die!! For my lorddddd. ";
			cout << "Boooommm!!";
			cout << "The man: ahhhhhhh huh! We're not died. Why?";
			cout <<  PLAYER->getName() << ": I think it's because of her";
			cout << "In front of us have the girl use a barrier protected us.";
			cout << "My sis!! You save us. Are you ok? Do you have any wound."
			cout << "The girl: I'm okay bro. thank you for coming to help me. And you are?";
			cout <<  PLAYER->getName() << "I'm " << PLAYER->getName();
			cout << "The girl: Thank you very much. If you don't come with my brother,he will be died for sure.";
			cout << "The man: Hey hey!! Why you said like that? I'm your brother anyway.";
			cout << "The girl: But you're too weak. You can't do anything when we're attacked.";
			cout << "The man: Argh...";
			cout << "Hah hah ha";
			cout <<  PLAYER->getName() << ": Let's get out of here.";
			cout << "Walking.";
			cout << "The man: What do you intend to do next?";
			cout <<  PLAYER->getName() << "My aim is kill the dark lord. Now ,The first obstacle was eliminated. I will fight for peace of all.";
			cout << "let I go with you.\nI forgot to introduce myself. My name is Guitar. \nI'm martial art master. I can help you more or less";
			cout <<  PLAYER->getName() <<": but…";
			cout << "Guitar: please, I can't let my sister be the target like this anymore.";
			cout << PLAYER->getName() << "O..Okay.";
			cout << "Guitar: Thank.";
			cout << "The girl: I will go to.";
			cout << "Guitar: It's dangerous I can't allow you to go.";
			cout << "The girl: but if you go who will protect me.";
			cout << "Guitar: ugh..";
			cout << "The girl: Agree then. Mister " << PLAYER->getName() << " I'm Asuna nice to meet you. I'm just a trainee magician but I think I'm useful more than my brother anyway.";
			cout << "Guitar: Hey!!";
			cout << "Asuna: Booo!!";
			cout << PLAYER->getName() << ": Okay, Now let's go to the next village."
			cout << "Guitar and Asuna: Yeahh!!";
			show::clear();
	}
}
