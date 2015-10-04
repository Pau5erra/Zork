#include <iostream>
#include <string>
#include "RoomFather.h"

using namespace std;

int main(){
	string command; //aquesta variable és on es guarda el que posa l'usuari
	RoomFather RF;
	RF.setInfo();//Es posa tota la informació de les classes
	RF.setRoomState("LIVINGROOM");
	
	printf("Hello to my Zork\n");

	while (true){
		if (RF.getRoomState() == "LIVINGROOM"){
			RF.getInfoLivingRoom();
		}
		else if (RF.getRoomState() == "KITCHEN"){
			RF.getInfoKitchen();
		}
		else if (RF.getRoomState() == "FOREST"){
			RF.getInfoForest();
		}
		while (true){

			getline(cin, command);

			if (command == "quit"){
				printf("GoodBye\n");
				return 0;
			}
			else if (command == "look" || command == "look east" || command == "look south" || command == "look north" || command == "look west"){ //Quan vulgui mirar el que hi ha
				if (RF.getRoomState() == "LIVINGROOM"){

					RF.lookLivingRoom(command);
				}
				else if (RF.getRoomState() == "FOREST"){
					RF.lookForest(command);
				}
				else if (RF.getRoomState() == "KITCHEN"){
					RF.lookKitchen(command);
				}
			}
			else if (command == "go north" || command == "go east" || command == "go west" || command == "go south"){//Quan vulgui anar a algun lloc
				if (RF.getRoomState() == "LIVINGROOM"){
					if (RF.exitLivingRoom(command) == "Nothing"){
						printf("No Way\n");
					}
					else if (RF.exitLivingRoom(command) != "Nothing"){
						RF.setRoomState(RF.exitLivingRoom(command));
						break;
					}
					
				}
				else if (RF.getRoomState() == "KITCHEN"){
					if (RF.exitKitchen(command) == "Nothing"){
						printf("No Way\n");
					}
					else if (RF.exitKitchen(command) != "Nothing"){
						RF.setRoomState(RF.exitKitchen(command));
						break;
					}
				}
				else if (RF.getRoomState() == "FOREST"){
					if (RF.exitForest(command) == "Nothing"){
						printf("No Way\n");
					}
					else if (RF.exitForest(command) != "Nothing"){
						RF.setRoomState(RF.exitForest(command));
						break;
					}
				}
			}

			else{
				printf("Command Error\n");
			}
		}
	}
	return 0;
}
