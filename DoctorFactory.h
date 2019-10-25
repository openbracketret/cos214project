#ifndef DoctorFactory_H
#define DoctorFactory_H

#include <string>
#include <vector>
#include "People.h"
#include "PeopleFactory.h"

using namespace std;
/** @brief Doctor Factory class
 */
class DoctorFactory : public PeopleFactory
{


public:
/** Default constructor
 */
	DoctorFactory();
/** Default destructor
 */
	~DoctorFactory();
	
};

#endif