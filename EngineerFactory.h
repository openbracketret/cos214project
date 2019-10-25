#ifndef EngineerFactory_H
#define EngineerFactory_H

#include <string>
#include <vector>
#include "People.h"
#include "PeopleFactory.h"

using namespace std;
/** @brief Engineer Factory class
 */
class EngineerFactory : public PeopleFactory
{


public:
/** Default constructor
 */
	EngineerFactory();
/** Default desctructor
 */
	~EngineerFactory();
	
};

#endif