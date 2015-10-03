#include <iostream>
#include <string>
#include "LivingRoom.h"
#include "Exit.h"
#include "Kitchen.h"
#include "Forest.h"
using namespace std;


int main(){
	string command; //aquesta variable és on es guarda el que posa l'usuari
	LivingRoom r;
	Kitchen k;
	Forest f;
	r.setInfoLivingRoom();//Es posa tota la informació de les classes
	k.setInfoKitchen();
	f.setInfoForest();

	printf("Hello to my Zork\n");
	r.getInfoLivingRoom();
	
	while (true){

		getline(cin, command);

		if (command == "quit"){
			printf("GoodBye\n");
			return 0;
		}
		else if (command == "look" || command=="look east" || command=="look south" || command=="look north" || command=="look west"){ //Quan vulgui mirar el que hi ha
			r.lookLivingRoom(command);
		}
		else if (command == "go north" || command == "go east" || command == "go west" || command == "go south"){//Quan vulgui anar a algun lloc
			if (r.exitLivingRoom(command) == "No Way"){
				printf("No way\n");
			}
			else if (r.exitLivingRoom(command) == "East"){//entra a la cuina
				k.getInfoKitchen();
				while (true){//no surt de la cuina fins que no apreti quit o go west
					getline(cin, command);
					if (command == "quit"){
						printf("GoodBye\n");
						return 0;
					}
					else if (command == "look"){
						k.lookKitchen(command);
					}
					else if (command == "go west"){
						r.getInfoLivingRoom();
						break;
					}
					else
					{
						printf("Command Error\n");
					}
				}
			}
			else if (r.exitLivingRoom(command) == "South"){//entra al bosc
				f.getInfoForest();
				while (true){// no surt del bosc fins que no apreti quit o go north
					getline(cin, command);
					if (command == "quit"){
						printf("GoodBye\n");
						return 0;
					}
					else if (command == "look"){
						f.lookForest(command);
					}
					else if (command == "go north"){
						r.getInfoLivingRoom();
						break;
					}
					else
						printf("Command Error\n");
				}
			}
		}
		else{
			printf("Command Error\n");
		}
	}
	return 0;
}

