#include "TransportBay.h"
#include <algorithm>

TransportBay::TransportBay() : SpaceshipDecorator() {

}

TransportBay::~TransportBay() {
    
}

void TransportBay::addShip(Spaceship* s){
    ships.push_back(s);
    currentCapacity++;
}

void TransportBay::removeShip(Spaceship* s){
        vector<Spaceship*>::iterator it = find(ships.begin(), ships.end(), 8);
        if (it != ships.end())
            ships.erase(it);

        currentCapacity--;
}