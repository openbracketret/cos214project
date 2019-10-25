#include "Navigator.h"
#include <iostream>
#include "Spaceship.h"

void Navigator::recieveSpaceshipError(string message){
    cout << "Navigator " << id << " has been warned of: " << message << endl;
}

void Navigator::sendErrorMessage(string message){
    onboard->broadcast(message);
}