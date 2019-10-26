#include "ExplorationVessel.h"

void ExplorationVessel::visit(Planet* p){
    double value = p->getResourceRate() / p->getThreatLevel();
}