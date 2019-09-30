#ifndef FighterTransporterFactory_H
#define FighterTransporterFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;

class FighterTransporterFactory : SpaceshipFactory
{
private:


public:

	FighterTransporterFactory();
	~FighterTransporterFactory();
	Spaceship* spaceShipFactoryMethod();/**<Factory method*/
	
};

#endif