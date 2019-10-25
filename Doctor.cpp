#include "Doctor.h"
#include <iostream>
#include "Spaceship.h"

void Doctor::recieveSpaceshipError(string message){
    cout << "Doctor " << id << " has been warned of: " << message << endl;
}

void Doctor::sendErrorMessage(string message){
    onboard->broadcast(message);
}