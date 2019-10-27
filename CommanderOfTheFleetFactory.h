#ifndef CommanderOfTheFleetFactory_H
#define CommanderOfTheFleetFactory_H

#include <string>
#include <vector>
#include "People.h"
#include "PeopleFactory.h"
#include "CommanderOfTheFleet.h"

using namespace std;
/** @brief Commander of the fleet factory class
 */
class CommanderOfTheFleetFactory : public PeopleFactory
{


public:
/** Default constructor
 */
	CommanderOfTheFleetFactory();
	/** Default desctructor
	 */
	~CommanderOfTheFleetFactory();

/**
 * creates CommanderOfTheFleet
*/
People* create() {return CommanderOfTheFleet::instance();};
	
};

#endif