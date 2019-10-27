#ifndef NavigatorFactory_H
#define NavigatorFactory_H

#include <string>
#include <vector>
#include "PeopleFactory.h"
#include "Navigator.h"

using namespace std;
/** @brief Navigator factory class
 */
class NavigatorFactory : public PeopleFactory
{


public:
/** Default constructor
 */
	NavigatorFactory() {};
/** Default desctructor
 */
	~NavigatorFactory() {};
	People* create(){return new Navigator();};
};

#endif