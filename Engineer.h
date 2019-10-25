#ifndef Engineer_H
#define Engineer_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class Engineer : public People
{
private:


public:

	Engineer() : People() {};
	~Engineer() {};
	void recieveSpaceshipError(string);
	void sendErrorMessage(string);	
};

#endif