#ifndef Captain_H
#define Captain_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;
/** @brief Captain class
 */
class Captain : public People
{
private:


public:
	/** Default constructor
	 */
	Captain() : People() {};
	/** Default destructor
	 */
	~Captain() {};
	/** Receive an error from the spaceship
	 * @param message - The message to be received
	 */
	void recieveSpaceshipError(string);
	/** Send an error to the spaceship
	 * @param message - The message to be sent
	 */
	void sendErrorMessage(string);
	
};

#endif