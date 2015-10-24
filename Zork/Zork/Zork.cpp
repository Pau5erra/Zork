#include <iostream>
#include <string>
#include "Room.h"
#include "Look.h"
#include "Exit.h"
#include "Object.h"

using namespace std;

int main(){
	string command; //aquesta variable és on es guarda el que posa l'usuari
	Room R;
	Object O;
	Look L;
	Exit E;
	R.setInfo();//Es posa tota la informació de les classes
	O.setObjects();
	R.setRoomState("LIVINGROOM");
	
	printf("Hello to my Zork\n");

	while (true){
		if (R.getRoomState() == "LIVINGROOM"){
			R.getInfoLivingRoom();
		}
		else if (R.getRoomState() == "KITCHEN"){
			R.getInfoKitchen();
		}
		else if (R.getRoomState() == "FOREST"){
			R.getInfoForest();
		}
		while (true){

			getline(cin, command);

			if (command == "quit"){
				printf("GoodBye\n");
				system("PAUSE");
				return 0;
			}
			else if (L.commandLook(command)){ //Quan vulgui mirar el que hi ha
				if (R.getRoomState() == "LIVINGROOM"){//Comprova a l'habitació que està, depenent de quina estigui, executara un codi o un altre

					R.lookLivingRoom(command);
				}
				else if (R.getRoomState() == "FOREST"){
					R.lookForest(command);
				}
				else if (R.getRoomState() == "KITCHEN"){
					R.lookKitchen(command);
				}
			}
			else if (L.commandLookObject(command)){
				if (R.getRoomState() == "LIVIGROOM"){
					R.lookObjectsLivingRoom(command);
				}
				else if (R.getRoomState() == "KITCHEN"){
					R.lookObjectsKitchen(command);
				}
			}
			else if (E.commandGo(command)){//Quan vulgui anar a algun lloc
				if (R.getRoomState() == "LIVINGROOM"){
					if (R.exitLivingRoom(command) != "NOTHING"){
						R.setRoomState(R.exitLivingRoom(command));
						break;
					}
				printf("No Way\n");

				}

				else if (R.getRoomState() == "KITCHEN"){
				if (R.exitKitchen(command) != "NOTHING"){
						R.setRoomState(R.exitKitchen(command));
						break;
					}

				printf("No Way\n");

				}
				else if (R.getRoomState() == "FOREST"){
					if (R.exitForest(command) != "NOTHING"){
						R.setRoomState(R.exitForest(command));
						break;
					}

				printf("No Way\n");

				}
			}
			else if (O.commandTakeObject(command)){//Quan vulgui agafar un objecte
				O.TakeObject(command);
			}
			else if (command == "inventory"){//Per mirar inventory
				O.lookInventory();
			}

			else if (O.commandDropObject(command)){//Quan vulgui deixar un objecte
			
				O.dropObject(command);

			}
			else{
				printf("Command Error\n");
			}
		}
	}
	return 0;
}
