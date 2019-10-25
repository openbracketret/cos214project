#ifndef MEMENTO_H
#define MEMENTO_H
#include "Fighter.h"
#include "SpaceshipTransporter.h"
#include "State.h"

using namespace std;

class Memento {
    public:
        virtual ~Memento();
    private:
        Memento()
        vector<State*> _states;
};

#endif