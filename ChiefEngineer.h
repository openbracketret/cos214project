#ifndef ChiefEngineer_H
#define ChiefEngineer_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;
/** @brief Chief Engineer class
 */
class ChiefEngineer : public People
{


public:
/** Default constructor
 */
	ChiefEngineer() : People() {};
	/** Default destructor
	 */
	~ChiefEngineer() {};
	/** Receive an error from the spaceship
	 * @param message - The message being transmitted
	 */
	void recieveSpaceshipError(string);
	/** Send an error to the spaceship
	 * @param message - the message to transmit
	 */
	void sendErrorMessage(string);
	
};

#endif