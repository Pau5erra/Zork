#ifndef _ROOM_
#define _ROOM_
#include <iostream>

struct room{

	char* room1 = "Room1";
	char* descript = "On the east there is a window and \nOn the south a door\n";

	bool northR1 = false;
	bool eastR1 = true;
	bool westR1 = false;
	bool southR1 = true;

	void look(){

		printf("You are at %s\n%s", room1, descript);


	}

};
#endif