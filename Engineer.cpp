#include "Engineer.h"
#include <iostream>
#include "Spaceship.h"

void Engineer::recieveSpaceshipError(string message){
    cout << "Engineer " << id << " has been warned of: " << message << endl;
}

void Engineer::sendErrorMessage(string message){
    onboard->broadcast(message);
}