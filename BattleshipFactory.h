#ifndef BattleshipFactory_H
#define BattleshipFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;

class BattleshipFactory : public SpaceshipFactory
{
private:


public:

	BattleshipFactory();
	~BattleshipFactory();
	/** Method to create Battleships
	 */
	Spaceship* spaceShipFactoryMethod();
	
};

#endif