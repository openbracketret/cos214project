#include "TransportBay.h"

TransportBay::TransportBay() : SpaceshipDecorator() {

}

TransportBay::~TransportBay() {
    
}

void TransportBay::addShip(Spaceship* s){
    ships.push_back(s);
}

void TransportBay::removeShip(Spaceship* s){
    //TODO: Add algorithm to remove ships
}