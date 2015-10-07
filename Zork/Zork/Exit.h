
class Exit{
	public:
		bool commandGo(string command){
			if (command == "go north" || command == "go east" || command == "go west" || command == "go south"){
				return true;
			}
			else{
				return false;
			}
		}

};