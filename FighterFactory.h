#ifndef FighterFactory_H
#define FighterFactory_H

#include <string>
#include <vector>
#include "PeopleFactory.h"

using namespace std;

class FighterFactory : public PeopleFactory
{


public:

	FighterFactory();
	~FighterFactory();
	
};

#endif