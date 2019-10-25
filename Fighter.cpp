#include "Fighter.h"
#include <iostream>
#include "Spaceship.h"

void Fighter::recieveSpaceshipError(string message){
    cout << "Fighter " << id << " has been warned of: " << message << endl;
}

void Fighter::sendErrorMessage(string message){
    onboard->broadcast(message);
}