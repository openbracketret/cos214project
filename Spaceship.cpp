#include "Spaceship.h"
#include <iostream>


void Spaceship::addPassenger(People* p){
    if (currentCapacity < passengerCapacity){
        passengers.push_back(p);
        currentCapacity++;
    } else {
        cout << "Spaceship is currently full" << endl;
    }
}

void Spaceship::removePassenger(People* p){
    //TODO: Algorithm to remove passenger from ship. Also currentCapacity--
}