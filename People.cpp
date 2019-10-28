#include "People.h"
#include "Spaceship.h"
#include "CommanderOfTheFleet.h"

void People::boardShip(Spaceship* s){
    onboard = s;
    id = onboard->enterShip(this);
}

void People::leaveShip(){
    onboard->exitShip(id);
    onboard = nullptr;
}

void People::beginCommand(string type, Spaceship* s){
    CommanderOfTheFleet* cc = CommanderOfTheFleet::instance();
    cc->doCommand(type, s);
}