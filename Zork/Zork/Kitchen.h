#ifndef _KITCHEN_
#define _KITCHEN_
#include <iostream>

using namespace std;

class Kitchen{
private:
	const char* kitchen;
	const char* description_kitchen;
	const char* look_kitchen;

	const char* west_kitchen;

	const char* description_knife;

public:
	void setInfoKitchen(){

		kitchen = "Kitchen";
		description_kitchen = "You can see some food and knife on the table";
		look_kitchen = "There's somthing under the table";

		west_kitchen = "West";

		description_knife = "A sharp knife is waiting to kill somebody\n";
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
			return "NOTHING";
		}
		else if (direction == "go west"){
			return "LIVINGROOM";
		}
	}
	void lookObjectsKitchen(string command){
		if (command == "look knife"){
			printf("%s\n", description_knife);
		}
	}
};

#endif