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
	/**Method to create Frigate's
	 */
	Spaceship* spaceShipFactoryMethod();
	
};

#endif