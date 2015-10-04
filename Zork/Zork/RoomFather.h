#include "LivingRoom.h"
#include "Kitchen.h"
#include "Forest.h"

class RoomFather : public Kitchen , public LivingRoom , public Forest //hereda tots els mètodes de les altres habitacions
{
private:

	char* room_state;

public:

	void setInfo(){

		setInfoLivingRoom();
		setInfoForest();
		setInfoKitchen();

	}
	void setRoomState(char* next_room){
		room_state = next_room;
	}
	char* getRoomState(){

		return room_state;
	}

};