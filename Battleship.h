#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "Spaceship.h"

class Battleship : public Spaceship{

    public:
        Battleship() : Spaceship() {};
        ~Battleship() {};

        virtual void addComponent(Spaceship*) {};
};

#endif