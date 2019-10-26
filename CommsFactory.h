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
People* createPeople();

	
};

#endif