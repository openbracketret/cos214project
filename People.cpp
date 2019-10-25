#include "People.h"
#include "Spaceship.h"

void People::boardShip(Spaceship* s){
    onboard = s;
    id = onboard->enterShip(this);
}

void People::leaveShip(){
    onboard->exitShip(id);
    onboard = nullptr;
}