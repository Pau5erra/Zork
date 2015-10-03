#ifndef _FOREST_
#define _FOREST_

#include <iostream>
using namespace std;

class Forest{
private:
	char* forest;
	char* description_forest;
	char* look_forest;
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
};
#endif