#ifndef Navigator_H
#define Navigator_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class Navigator : public People
{
private:


public:

	Navigator() : People() {};
	~Navigator() {};
	void recieveSpaceshipError(string);
	void sendErrorMessage(string);
	
};

#endif