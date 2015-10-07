
class Look{

public:
	bool commandLook(string command){
		if (command == "look" || command == "look east" || command == "look south" || command == "look north" || command == "look west"){
			return true;
		}
		else{

			return false;
		}
	}



};