#ifndef Doctor_H
#define Doctor_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;
/** @brief Doctor class
 */
class Doctor : public People
{
private:


public:
/** Default constructor
 */
	Doctor() : People() {};
/** Default destructor
 */
	~Doctor() {};
/** Receive an error from the spaceship
 * @param message - the message being received
 */
	void recieveSpaceshipError(string);
/** Send an error to the spaceship
 * @param message - the message being sent
 */
	void sendErrorMessage(string);
	
};

#endif