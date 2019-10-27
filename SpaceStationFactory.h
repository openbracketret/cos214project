#ifndef SPACESTATIONFACTORY_H
#define SPACESTATIONFACTORY_H

#include "SpaceshipFactory.h"
/** @brief Spacestation Factory class
 */
class SpaceStationFactory : public SpaceshipFactory {
    public:
    /** Default constructor
     */
        SpaceStationFactory();
    /** Default destructor
     */
        ~SpaceStationFactory();
        /** Method to create SpaceStation
         * @return new spaceship
	    */
        Spaceship* spaceshipFactoryMethod(string n);
};

#endif