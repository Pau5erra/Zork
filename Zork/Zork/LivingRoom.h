#ifndef _LIVINGROOM_
#define _LIVINGROOM_
#include <iostream>

using namespace std;

class LivingRoom{
private:
	char* livingroom;
	char* description_livingroom;
	char* look_livingroom;
	char* look_east_livingroom;
	char* look_south_livingroom;
	char* noway;
	char* east_livingroom;
	char* south_livingroom;

public:

	//Room();
	void setInfoLivingRoom(){ 

		livingroom = "Living Room";
		description_livingroom = "You can see some clothes on the floor and a sofa";
		look_livingroom = "You see a door on the east and a window on the south";
		look_east_livingroom = "There's a door on the east";
		look_south_livingroom = "There's a window on the south";
		noway = "No Way";

		east_livingroom = "East";
		south_livingroom = "South";
	}

	void getInfoLivingRoom(){

		printf("You are at the %s\n%s\n", livingroom, description_livingroom);
	}
	void lookLivingRoom(string command){ //depenent de que ha posat sortira una cosa o una altre

		if (command == "look"){
			printf("%s\n", look_livingroom);
		}
		else if (command == "look east"){
			printf("%s\n", look_east_livingroom);
		}
		else if (command == "look south"){
			printf("%s\n", look_south_livingroom);
		}
		else if (command == "look north" || command == "look west"){
			printf("You are looking to a wall\n");
		}
	} 
	char* exitLivingRoom(string direction){ //depenent de on trii anar, sortira una cosa o una altre

		if (direction == "go north"|| direction=="go west"){
			return "Nothing";
		}
		else if (direction == "go east"){
			return "KITCHEN";
		}
		else if (direction == "go south"){
			return "FOREST";
		}
	}

};
#endif