#ifndef CommanderOfTheFleet_H
#define CommanderOfTheFleet_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class CommanderOfTheFleet : public People
{
private:
	static CommanderOfTheFleet* commander;

protected:
	CommanderOfTheFleet();
	virtual ~CommanderOfTheFleet();
	CommanderOfTheFleet(const CommanderOfTheFleet&);
	CommanderOfTheFleet& operator=(const CommanderOfTheFleet&);


public:

	static CommanderOfTheFleet* instance();
	
};

#endif