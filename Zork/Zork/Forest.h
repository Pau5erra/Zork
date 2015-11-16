#ifndef _FOREST_
#define _FOREST_

#include <iostream>
using namespace std;

class Forest{
private:
	const char* forest;
	const char* description_forest;
	const char* look_forest;
public:

	void setInfoForest(){
		forest = "Forest";
		description_forest = "There are a lot of trees and no way to get out";
		look_forest = "There's no way out";
	}
	void getInfoForest(){

		printf("You are at the %s\n%s\n", forest, description_forest);
	}
	void lookForest(string command){
		if (command == "look"){

			printf("%s\n", look_forest);
		}
	}
	char* exitForest(string direction){ //depenent de on trii anar, sortira una cosa o una altre

		if (direction == "go east" || direction == "go west" || direction == "go south"){

			return "NOTHING";
		}
		else if (direction == "go north"){
			return "LIVINGROOM";
		}
	}
};
#endif