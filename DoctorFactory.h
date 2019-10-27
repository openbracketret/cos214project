#ifndef DoctorFactory_H
#define DoctorFactory_H

#include <string>
#include <vector>
#include "People.h"
#include "PeopleFactory.h"
#include "Doctor.h"

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

/**
 * creates doctor
*/
People* create() {return new Doctor();};
	
};

#endif