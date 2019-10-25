#include "Spaceship.h"
#include <iostream>
#include <algorithm>


void Spaceship::addPassenger(People* p){
    if (currentCapacity < passengerCapacity){
        p->boardShip(this);
        passengers.push_back(p);
        currentCapacity++;
    } else {
        cout << "Spaceship is currently full" << endl;
    }
}

void Spaceship::removePassenger(People* p){
    vector<People*>::iterator it = find(passengers.begin(), passengers.end(), p);
    if (it != passengers.end()){
        p->leaveShip();
        passengers.erase(it);
        currentCapacity--;
    }   
}

int Spaceship::enterShip(People* p){
    return ++nextID;
}

void Spaceship::exitShip(int id) {
    //TODO: Does this function need any logic due to removePassenger??
}

void Spaceship::broadcast(string message){
    vector<People*>::iterator it;

    for (it = passengers.begin(); it != passengers.end(); ++it){
        (*it)->recieveSpaceshipError(message);
    }
}