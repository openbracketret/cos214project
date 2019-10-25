#include "RefuelStation.h"

RefuelStation::RefuelStation(){

}

RefuelStation::~RefuelStation(){

}

void RefuelStation::refuelSpaceship(Spaceship* s){
    int fill = s->getMaxFuel() - s->getFuel();
    s->addFuel(fill);
}