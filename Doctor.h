#ifndef Doctor_H
#define Doctor_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class Doctor : public People
{
private:


public:

	Doctor() : People() {};
	~Doctor() {};
	void recieveSpaceshipError(string);
	void sendErrorMessage(string);
	
};

#endif