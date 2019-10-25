#ifndef EngineerFactory_H
#define EngineerFactory_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class EngineerFactory : public PeopleFactory
{


public:

	EngineerFactory();
	~EngineerFactory();
	
};

#endif