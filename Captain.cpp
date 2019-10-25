#include "Captain.h"
#include <iostream>
#include "Spaceship.h"

using namespace std;

void Captain::recieveSpaceshipError(string message){
    cout << "Captain has been warned of:" << message << endl;
}

void Captain::sendErrorMessage(string message){
    onboard->broadcast(message);
}