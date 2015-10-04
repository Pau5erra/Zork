#include <iostream>
#include <string>
#include "RoomFather.h"

using namespace std;

int main(){
	string command; //aquesta variable �s on es guarda el que posa l'usuari
	RoomFather RF;
	RF.setInfo();//Es posa tota la informaci� de les classes
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
				system("PAUSE");
				return 0;
			}
			else if (command == "look" || command == "look east" || command == "look south" || command == "look north" || command == "look west"){ //Quan vulgui mirar el que hi ha
				if (RF.getRoomState() == "LIVINGROOM"){//Comprova a l'habitaci� que est�, depenent de quina estigui, executara un codi o un altre

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
					if (RF.exitLivingRoom(command) != "NOTHING"){
						RF.setRoomState(RF.exitLivingRoom(command));
						break;
					}
				printf("No Way\n");

				}

				else if (RF.getRoomState() == "KITCHEN"){
				if (RF.exitKitchen(command) != "NOTHING"){
						RF.setRoomState(RF.exitKitchen(command));
						break;
					}

				printf("No Way\n");

				}
				else if (RF.getRoomState() == "FOREST"){
					if (RF.exitForest(command) != "NOTHING"){
						RF.setRoomState(RF.exitForest(command));
						break;
					}

				printf("No Way\n");

				}
			}

			else{
				printf("Command Error\n");
			}
		}
	}
	return 0;
}
