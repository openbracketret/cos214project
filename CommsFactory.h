#ifndef CommsFactory_H
#define CommsFactory_H

#include <string>
#include <vector>
#include "PeopleFactory.h"
#include "Comms.h"

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
People* create(){ return new Comms();};

	
};

#endif