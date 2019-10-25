#ifndef SPACESHIPTRANSPORTER_H
#define SPACESHIPTRANSPORTER_H

#include "Spaceship.h"

class SpaceshipTransporter : public Spaceship {
    public:
        SpaceshipTransporter() {};
        ~SpaceshipTransporter() {};
        virtual void addComponent(Spaceship*) {};
};

#endif