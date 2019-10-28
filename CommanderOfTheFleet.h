#ifndef CommanderOfTheFleet_H
#define CommanderOfTheFleet_H

#include <string>
#include <vector>
#include "People.h"
#include "Command.h"

using namespace std;
/** @brief Commander of the fleet class. A singleton
 */
class CommanderOfTheFleet : public People
{
private:
	static CommanderOfTheFleet* commander;/**<Saved instance of the commander*/

protected:
/** Default constructor
 */
	CommanderOfTheFleet();
/** Virtual default destructor
 */
	virtual ~CommanderOfTheFleet();
/** Parameterised constructor. In order to prevent copies being created
 */
	CommanderOfTheFleet(const CommanderOfTheFleet&);
/** Overridden = operator. Protects the singleton
 * @param CommanderOfTheFleet& - a reference to the commander
 * @return CommanderOfTheFleet&
 */
	CommanderOfTheFleet& operator=(const CommanderOfTheFleet&);


public:
/** Creates or returns a single instance of the commander
 * @return CommanderOfTheFleet*
 */
	static CommanderOfTheFleet* instance();
	/** Receive an error from the spaceship
	 * @param message - the message recieved
	 */
	void recieveSpaceshipError(string);
	/** Send an error to the spaceship
	 * @param message - The message to be sent
	 */
	void sendErrorMessage(string);
	/**get type of person */
	string getType() {return "commanderofthefleet";};

	/** Execute a command
	 * @param type - the command type
	 */
	void doCommand(string, Spaceship*);

	
};

#endif