#ifndef Navigator_H
#define Navigator_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;
/** @brief Navigator class
 */
class Navigator : public People
{
private:


public:
/** Default constructor
 */
	Navigator() : People() {};
/** Default desctructor
 */
	~Navigator() {};
/** Recieve an error from the spaceship
 * @param message - the error being received
 */
	void recieveSpaceshipError(string);
/** Send an error to the spaceship
 * @param message - the error being sent
 */
	void sendErrorMessage(string);
	
};

#endif