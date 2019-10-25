#ifndef SpaceshipTransporterFactory_H
#define SpaceshipTransporterFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;
/** @brief Spaceship Transporter Factory class
 */
class SpaceshipTransporterFactory : SpaceshipFactory
{
private:


public:
/** default constructor
 */
	SpaceshipTransporterFactory();
/** default desctructor
 */
	~SpaceshipTransporterFactory();
	/** Method to create Spaceships Transports
	 * @return newly created spaceship
	 */
	Spaceship* spaceShipFactoryMethod();
	
};

#endif