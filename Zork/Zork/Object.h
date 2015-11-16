class Object{
private:
	bool food;
	bool knife;
	bool helmet;


public:
	void setObjects(){
		food = false;
		knife = false;
		helmet = false;
	}

	bool commandTakeObject(string command){
		if (command == "take food" || command == "take knife" || command == "take helmet"){
			return true;
		}
		else{
			return false;
		}
	}

	void TakeObject(string command){
		if (command == "take food"){
			food = true;
			printf("You have now food\n");
		}
		else if (command == "take knife"){
			knife = true;
			printf("You have now a knife\n");
		}
		else if (command == "take helmet"){
			helmet = true;
			printf("You have now a helmet\n");
		}
	}

	void lookInventory(){

		if (food==false && knife==false && helmet== false){
			printf("inventory is empty\n");
		}
	
		if (food){
			printf("You have food\n");
		}
		if (helmet){
			printf("You have a helmet\n");
		}
		if (knife){
			printf("You have a knife\n");
		}
	}
	
	bool commandDropObject(string command){
		if (command == "drop knife" || command == "drop helmet" || command == "drop food"){
			return true;
		}
		else{
			return false;
		}
	}

	void dropObject(string command){
		if (knife){//Comprovo si té l'objecte agafat
			if (command == "drop knife"){
				knife = false;
				printf("You drop a knife\n");
			}
		}
		if (helmet){
			if (command == "drop helmet"){
				helmet = false;
				printf("You drop a helmet\n");
			}
		}
		if (food){
			if (command == "drop food"){
				food = false;
				printf("You drop some food on the floor\n");
			}
		}
	}
};