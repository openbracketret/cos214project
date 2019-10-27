#ifndef ExplorationVesselFactory_H
#define ExplorationVesselFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"
#include "ExplorationVessel.h"

using namespace std;
/** @brief Exploration Vessel Factory class
 */
class ExplorationVesselFactory : public SpaceshipFactory
{
private:


public:
/** Defualt constructor
 */
	ExplorationVesselFactory();
/** Default desctructor
 */
	~ExplorationVesselFactory();
	/** Method to create exploration vessels
	 * @return new spaceship
	 */
	Spaceship* spaceShipFactoryMethod(string n);
	
};

#endif