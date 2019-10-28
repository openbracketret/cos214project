#include "ExplorationVessel.h"
#include "Planet.h"
#include <iostream>


void ExplorationVessel::visit(Planet* p){
    cout << "Exploration vessel: " << getName() << " visited a planet" << endl;
    double value = p->getResourceRate() / p->getThreatLevel();
}