#ifndef CommsFactory_H
#define CommsFactory_H

#include <string>
#include <vector>
#include "PeopleFactory.h"

using namespace std;
/** @brief CommsFactory class
 */
class CommsFactory : public PeopleFactory
{
private:


public:
/** Default constructor
 */
	CommsFactory() : PeopleFactory() {};
/** Default desctructor
 */
	~CommsFactory() {};
/**
 * pure virtual comms creator
*/
virtual People* createPeople()=0;

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