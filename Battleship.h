#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "Spaceship.h"

class Battleship : public Spaceship{

    public:
        Battleship();

        virtual void addComponent(Spaceship*);
};

#endif