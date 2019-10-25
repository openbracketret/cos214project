#ifndef ChiefEngineer_H
#define ChiefEngineer_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class ChiefEngineer : public People
{
private:


public:

	ChiefEngineer() : People() {};
	~ChiefEngineer() {};
	void recieveSpaceshipError(string);
	void sendErrorMessage(string);
	
};

#endif