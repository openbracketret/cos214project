#ifndef Engineer_H
#define Engineer_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;
/** @brief Engineer class
 */
class Engineer : public People
{
private:


public:
/** Default constructor
 */
	Engineer() : People() {};
/** Default desctructor
 */

/**
 * creates Engineer
*/
People* createPeople();

	~Engineer() {};
/** Recieve an error from the spaceship
 * @param message - the message being recieved
 */
	void recieveSpaceshipError(string);
/** Send an error to the spaceship
 * @param message - the message being sent
 */
	void sendErrorMessage(string);	
};

#endif