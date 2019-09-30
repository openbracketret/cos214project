#ifndef SpaceshipTransporterFactory_H
#define SpaceshipTransporterFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;

class SpaceshipTransporterFactory : SpaceshipFactory
{
private:


public:

	SpaceshipTransporterFactory();
	~SpaceshipTransporterFactory();
	Spaceship* spaceShipFactoryMethod();/**<Factory method*/
	
};

#endif