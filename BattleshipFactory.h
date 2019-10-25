#ifndef BattleshipFactory_H
#define BattleshipFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;
/** @brief Battleship Factory class
 */
class BattleshipFactory : public SpaceshipFactory
{


public:
	/** Default constructor
	 */
	BattleshipFactory();
	/** Defauly desctructor
	 */
	~BattleshipFactory();
	/** Method to create Battleships
	 * @return new spaceship
	 */
	Spaceship* spaceShipFactoryMethod();
	
};

#endif