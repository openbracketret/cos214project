#include "Bridge.h"

Bridge::Bridge(Strategy* s) : SpaceshipDecorator() {
    strategy = s;
}

Bridge::~Bridge() {
    
}

double Bridge::getResources(double a, double b){
    return strategy->execute(a, b);
}