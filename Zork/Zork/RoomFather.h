#include "LivingRoom.h"
#include "Kitchen.h"
#include "Forest.h"

class RoomFather : public Kitchen , public LivingRoom , public Forest //hereda toooots els mètodes de les altres habitacions
{
private:

	char* room_state;

public:

	void setInfo(){ //carrega la info de totes les classes

		setInfoLivingRoom();
		setInfoForest();
		setInfoKitchen();

	}
	void setRoomState(char* next_room){ //Per canviar d'habitació
		room_state = next_room;
	}
	char* getRoomState(){ //Et diu l'habitació que estas actualment

		return room_state;
	}

};