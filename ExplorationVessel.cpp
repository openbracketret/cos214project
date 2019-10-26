#include "ExplorationVessel.h"

double ExplorationVessel::visit(Planet* p){
    double value = p->getResourceRate() / p->getThreatLevel();
}