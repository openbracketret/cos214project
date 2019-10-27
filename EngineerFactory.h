#ifndef EngineerFactory_H
#define EngineerFactory_H

#include <string>
#include <vector>
#include "People.h"
#include "PeopleFactory.h"
#include "Engineer.h"

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

/**
 * virtual Engineer
*/
People* create(){ return new Engineer();};
	
};

#endif