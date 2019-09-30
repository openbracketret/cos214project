#ifndef ExplorationVesselFactory_H
#define ExplorationVesselFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"
#include "ExplorationVessel.h"

using namespace std;

class ExplorationVesselFactory : public SpaceshipFactory
{
private:


public:

	ExplorationVesselFactory();
	~ExplorationVesselFactory();
	/**Method to create exploration vessels's;
	 */
	Spaceship* spaceShipFactoryMethod();
	
};

#endif