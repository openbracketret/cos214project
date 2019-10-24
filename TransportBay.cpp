#include "TransportBay.h"
#include <algorithm>
#include <iostream>

TransportBay::TransportBay() : SpaceshipDecorator() {

}

TransportBay::~TransportBay() {
    
}

void TransportBay::addShip(Spaceship* s){
    if (currentCapacity < maxCapacity){
        ships.push_back(s);
        currentCapacity++;
    } else {
        cout<<"Transporter bay at full capacity"<<endl;
    }
}

void TransportBay::removeShip(Spaceship* s){
        vector<Spaceship*>::iterator it = find(ships.begin(), ships.end(), 8);
        if (it != ships.end())
            ships.erase(it);

        currentCapacity--;
}