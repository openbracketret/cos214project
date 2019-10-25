#ifndef PeopleFactory_H
#define PeopleFactory_H

#include <string>
#include <vector>

using namespace std;
/** @brief People Factory class
 */
class PeopleFactory
{


public:
/** Default constructor
 */
	PeopleFactory();
/** Default desctructor
 */
	~PeopleFactory();
	Doctor* createDoctor();
	Fighter* createFighter();
	Navigator* createNavigator();
	CommanderOfTheFleet* creatCommanderOfTheFleet();
	ChiefEngineer* createChiefEngineer();
	Comms* createComms();
	Captain* createCaptain();
	
	
};

#endif