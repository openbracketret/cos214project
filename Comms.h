#ifndef Comms_H
#define Comms_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;
/** @brief Comms class
 */
class Comms : public People
{
private:


public:
/** Default constructor
 */
	Comms() : People() {};
/** Default desctructor
 */
	~Comms() {};
/** Recieve an error from the spaceship
 * @param message - the error message being received
 */
	void recieveSpaceshipError(string);
/** Send an error to the spaceship
 * @param message - the error message being sent
 */
	void sendErrorMessage(string);
	
};

#endif