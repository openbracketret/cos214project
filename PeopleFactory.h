#ifndef PeopleFactory_H
#define PeopleFactory_H

#include <string>
#include <vector>
#include "Doctor.h"

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
	virtual People* create()=0;
	
	
};

#endif