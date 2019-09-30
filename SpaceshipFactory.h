#ifndef SpaceshipFactory_H
#define SpaceshipFactory_H

#include <string>
#include <vector>
#include "Spaceship.h"

using namespace std;

class SpaceshipFactory
{
private:
	Spaceship* spaceShip; /**Pointer to spaceship(Product)*/


public:

	SpaceshipFactory();
	~SpaceshipFactory();
	virtual Spaceship* spaceShipFactoryMethod(); /**Factory method*/
	
};

#endif