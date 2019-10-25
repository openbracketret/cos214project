#ifndef Captain_H
#define Captain_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class Captain : public People
{
private:


public:

	Captain() : People() {};
	~Captain() {};
	void recieveSpaceshipError(string);
	void sendErrorMessage(string);
	
};

#endif