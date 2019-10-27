#include "State.h"
#include "Battleship.h"
#include "ExplorationVessel.h"
#include "FighterTransporter.h"
#include "Frigate.h"

State::State(vector<Spaceship*> s){
    for(int i=0; i<s.size(); i++)
    {

        Spaceship* clone;

        switch(s[i]->getType()){
            case 1:
                clone = new Battleship(s[i]->getName());
                break;
            case 2:
                clone = new ExplorationVessel(s[i]->getName());
                break;
            case 3:
                clone = new FighterTransporter(s[i]->getName());
                break;
            case 4:
                clone = new Frigate(s[i]->getName());
                break;
        }

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