#include "Armory.h"

Armory::Armory() : SpaceshipDecorator() {

}

Armory::~Armory(){
    
}

void Armory::addShip(Spaceship* s) {
    space->addShip(s);
}