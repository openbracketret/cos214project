#ifndef STATE_H
#define STATE_H
#include "Memento.h"
#include "SpaceshipTransporter.h"

using namespace std;

class State {
    public:
        State();
    private:
       vector<People*> passengers;
       int currentCapacity;
       int fuel;
       int energy;
       int resources; 
};

#endif