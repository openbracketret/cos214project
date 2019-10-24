#include "Spaceship.h"
#include <iostream>
#include <algorithm>


void Spaceship::addPassenger(People* p){
    if (currentCapacity < passengerCapacity){
        passengers.push_back(p);
        currentCapacity++;
    } else {
        cout << "Spaceship is currently full" << endl;
    }
}

void Spaceship::removePassenger(People* p){
    vector<People*>::iterator it = find(passengers.begin(), passengers.end(), 8);
    if (it != passengers.end())
        passengers.erase(it);

    currentCapacity--;
}