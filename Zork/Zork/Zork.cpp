#include <iostream>
#include <string>
#include "Room.h"
#include "Exit.h"
using namespace std;


int main(){
	string a;
	room r;

	printf("Estas a la %s\n", r.room1);

	while (true){
		getline(cin, a);
		
		if (a == "quit"){
			printf("GoodBye\n");
			break;
		}
		else if (a == "look"){
			
			r.look();

		}
		else{
			printf("Command Error\n");
		}
	}
	system("PAUSE");
	return 0;
}

