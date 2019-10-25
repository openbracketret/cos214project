#ifndef Comms_H
#define Comms_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class Comms : public People
{
private:


public:

	Comms() : People() {};
	~Comms() {};
	void recieveSpaceshipError(string);
	void sendErrorMessage(string);
	
};

#endif