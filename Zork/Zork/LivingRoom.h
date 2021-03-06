#ifndef _LIVINGROOM_
#define _LIVINGROOM_
#include <iostream>

using namespace std;

class LivingRoom{
private:
	const char* livingroom;
	const char* description_livingroom;
	const char* look_livingroom;
	const char* look_east_livingroom;
	const char* look_south_livingroom;
	const char* noway;
	const char* east_livingroom;
	const char* south_livingroom;
	const char* helmet_description;
	const char* sofa_description;

public:

	//Room();
	void setInfoLivingRoom(){ 

		livingroom = "Living Room";
		description_livingroom = "You can see a helmet on the floor and a sofa";
		look_livingroom = "You see a door on the east and a window on the south";
		look_east_livingroom = "There's a door on the east";
		look_south_livingroom = "There's a window on the south";
		noway = "No Way";

		east_livingroom = "East";
		south_livingroom = "South";

		helmet_description = "The helmet seems broken but usable";
		sofa_description = "Brand new sofa is waiting for someone to sit";
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
			return "NOTHING";
		}
		else if (direction == "go east"){
			return "KITCHEN";
		}
		else if (direction == "go south"){
			return "FOREST";
		}
	}
	void lookObjectsLivingRoom(string command){
		if (command == "look sofa"){
			printf("%s\n", sofa_description);
		}
		else if (command == "look helmet"){
			printf("%s\n", helmet_description);
		}
	}
};
#endif