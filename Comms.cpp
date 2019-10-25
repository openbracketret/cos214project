#include "Comms.h"
#include <iostream>
#include "Spaceship.h"


void Comms::recieveSpaceshipError(string message){
    cout << "Comms " << id << " has been warned of: " << message << endl;
}

void Comms::sendErrorMessage(string message){
    onboard->broadcast(message);
}