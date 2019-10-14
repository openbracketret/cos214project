#ifndef FRIGATE_H
#define FRIGATE_H

#include "Spaceship.h"

class Frigate : public Spaceship {

    public:
        Frigate();
        virtual void addComponent(Spaceship*);
};

#endif