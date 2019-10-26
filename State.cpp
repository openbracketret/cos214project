#include "State.h"

State::State(vector<Spaceship*> s){
    for(int i=0; i<s.size(); i++)
    {
        Spaceship* clone = new Spaceship(s[i]->getName());
        clone->setCurrentCapacity(s[i]->getCurrentCapacity());
        clone->setDisplacement(s[i]->getDisplacement());
        clone->setMaxFuel(s[i]->getMaxFuel());
        clone->setMaxSpeed(s[i]->getMaxSpeed());
        clone->setPassengerCapacity(s[i]->getPassengerCapacity());
        clone->setPower(s[i]->getPower());
        clone->setStallSpeed(s[i]->getStallSpeed());
        clone->setThrust(s[i]->getThrust());

        ships.push_back(clone);
    }
}

State::~State(){
    for(int i=0;i<ships.size();i++){
        delete ships[i];
        ships.erase(ships.begin());
    }
}