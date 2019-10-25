#ifndef STATE_H
#define STATE_H
#include "SpaceshipTransporter.h"
#include <vector>

using namespace std;

class State {
    public:
        State(vector<Spaceship*> s);
        vector<Spaceship*> getSpaceships(){return ships;};
        ~State();
    private:
       vector<Spaceship*> ships;
};

#endif