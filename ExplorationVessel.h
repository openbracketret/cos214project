#ifndef EXPLORATIONVESSEL_H
#define EXPLORATIONVESSEL_H

#include "Spaceship.h"

class ExplorationVessel : public Spaceship {

    public:
        ExplorationVessel() {};
        ~ExplorationVessel() {};
        virtual void addComponent(Spaceship*) {};

};

#endif