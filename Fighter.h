#ifndef Fighter_H
#define Fighter_H

#include <string>
#include <vector>
#include "People.h"
#include "Memento.h"

using namespace std;

class Fighter : public People
{
private:


public:

	Fighter() : People() {};
	~Fighter() {};
	void recieveSpaceshipError(string);
	void sendErrorMessage(string);
	
	
};

#endif