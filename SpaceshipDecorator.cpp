#include "SpaceshipDecorator.h"

SpaceshipDecorator::SpaceshipDecorator() {
    space = 0;
}

void SpaceshipDecorator::addComponent(Spaceship* comp){
    if (space == 0){
        space = comp;
    } else {
        space->addComponent(comp);
    }
}