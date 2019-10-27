#include "ExplorationVessel.h"
#include "Planet.h"

void ExplorationVessel::visit(Planet* p){
    double value = p->getResourceRate() / p->getThreatLevel();
}