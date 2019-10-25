#ifndef CaptainFactory_H
#define CaptainFactory_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class CaptainFactory : public PeopleFactory
{


public:

	CaptainFactory();
	~CaptainFactory();
	
};

#endif