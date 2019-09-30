#ifndef FrigateFactory_H
#define FrigateFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;

class FrigateFactory : SpaceshipFactory
{
private:


public:

	FrigateFactory();
	~FrigateFactory();
	Spaceship* spaceShipFactoryMethod();/**<Factory method*/
	
};

#endif