#ifndef SPACESTATIONFACTORY_H
#define SPACESTATIONFACTORY_H

#include "SpaceshipFactory.h"

class SpaceStationFactory : public SpaceshipFactory {
    public:
        SpaceStationFactory();
        ~SpaceStationFactory();
        /**Method to create SpaceStation
	    */
        Spaceship* spaceStationFactoryMethod();
};

#endif