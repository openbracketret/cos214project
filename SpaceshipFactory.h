#ifndef SpaceshipFactory_H
#define SpaceshipFactory_H

#include <string>
#include <vector>
#include "Spaceship.h"
#include "SpaceshipDecorator.h"
#include "Armory.h"
#include "Bridge.h"
#include "SickBay.h"
#include "SleepingQuarters.h"
#include "TransportBay.h"
#include "FighterBay.h"
#include "RefuelStation.h"

using namespace std;

class SpaceshipFactory
{
private:
	Spaceship* spaceShip; /**<Pointer to spaceship(Product)*/


public:

	SpaceshipFactory();
	~SpaceshipFactory();
	/** Virtual method for creation of spaceships
	 * @return newly created spaceship
	 */
	virtual Spaceship* spaceShipFactoryMethod(string n) = 0; 
	
};

#endif