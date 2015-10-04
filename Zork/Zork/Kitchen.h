#ifndef _KITCHEN_
#define _KITCHEN_
#include <iostream>

using namespace std;

class Kitchen{
private:
	char* kitchen;
	char* description_kitchen;
	char* look_kitchen;

	char* west_kitchen;

public:
	void setInfoKitchen(){

		kitchen = "Kitchen";
		description_kitchen = "You can see some food and knife on the table";
		look_kitchen = "There's somthing under the table";

		west_kitchen = "West";
	}
	void getInfoKitchen(){

		printf("You are at the %s\n%s\n", kitchen, description_kitchen);

	}
	void lookKitchen(string command){
		if (command == "look"){
			
			printf("%s\n", look_kitchen);
		}
	}
	char* exitKitchen(string direction){ //depenent de on trii anar, sortira una cosa o una altre

		if (direction == "go east" || direction == "go north" || direction =="go south"){
			return "Nothing";
		}
		else if (direction == "go west"){
			return "LIVINGROOM";
		}
	}
};

#endif