#ifndef DoctorFactory_H
#define DoctorFactory_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class DoctorFactory : public PeopleFactory
{


public:

	DoctorFactory();
	~DoctorFactory();
	
};

#endif