#ifndef FrigateFactory_H
#define FrigateFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;
/** @brief Frigate Factory class
 */
class FrigateFactory : SpaceshipFactory
{
private:


public:
/** Default Constructor
 */
	FrigateFactory();
/** Default desctructor
 */
	~FrigateFactory();
	/** Method to create Frigate's
	 * @return newly created ship
	 */
	Spaceship* spaceShipFactoryMethod(string n);
	
};

#endif