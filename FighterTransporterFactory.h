#ifndef FighterTransporterFactory_H
#define FighterTransporterFactory_H

#include <string>
#include <vector>
#include "SpaceshipFactory.h"

using namespace std;
/** @brief Fighter Transporter Factory class
 */
class FighterTransporterFactory : SpaceshipFactory
{
private:


public:
	/** Defualt constructor
	 */
	FighterTransporterFactory();
	/** Default desctructor
	 */
	~FighterTransporterFactory();
	/** Method to create FighterTransporter's
	 * @return newly created spaceship
	 */
	Spaceship* spaceShipFactoryMethod();
	
};

#endif