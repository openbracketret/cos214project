#ifndef Fighter_H
#define Fighter_H

#include <string>
#include <vector>
#include "People.h"
#include "Memento.h"
#include "Planet.h"

using namespace std;
/** @brief Fighter class
 */
class Fighter : public People
{
private:


public:
/** Default constructor
 */
	Fighter() : People() {};
/** Default desctructor
 */
	~Fighter() {};
/** Recieve an error from the spaceship
 * @param message - the message being recieved
 */
	void recieveSpaceshipError(string);
/** Send an error to the spaceship
 * @param message - the message being sent
 */
	void sendErrorMessage(string);
/** get type of person */
	string getType() {return "fighter";};
	
};

#endif