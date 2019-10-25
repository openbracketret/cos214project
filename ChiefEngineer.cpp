#include "ChiefEngineer.h"
#include <iostream>
#include "Spaceship.h"

void ChiefEngineer::recieveSpaceshipError(string message){
    cout << "Chief Engineer " << id << " has been warned of: " << message << endl;
}

void ChiefEngineer::sendErrorMessage(string message){
    onboard->broadcast(message);
}