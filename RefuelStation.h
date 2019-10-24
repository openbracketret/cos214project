#ifndef REFUEL_STATION_H
#define REFUEL_STATION_H

#include <string>
#include <vector>
#include "SpaceshipDecorator.h"

using namespace std;

class RefuelStation : public SpaceshipDecorator
{
private:

public:

	RefuelStation();
    ~RefuelStation();
    /**Refuel spaceships that have used all their resources
        @param s spaceship to be refueled
    */
    void refuelSpaceship(Spaceship* s);
};

#endif