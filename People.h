#ifndef People_H
#define People_H

#include <string>
#include <vector>

using namespace std;

class Spaceship;
/** @brief People class
 */
class People
{
	public:
/** Default constructor
 */
		People() {};
	/** Virtual default desctructor
	 */
		virtual ~People() {};
	/** Pure virtual recieve error method
	 * @param message - message being recieved
	 */
		virtual void recieveSpaceshipError(string) = 0;
	/** Pure virtual send error message
	 * @param message - message being sent
	 */
		virtual void sendErrorMessage(string) = 0;
	/** Board ship. Register with spaceship
	 * @param spaceship - spaceship being registered
	 */
		void boardShip(Spaceship*);
	/** Leave ship. Deregister with spaceship
	 */
		void leaveShip();
	/** Getting type of the person */
		virtual string getType() = 0;

	protected:
		int id; /**<ID variable used for uniquely identifying which person is being registered with the Mediator(Spaceship)*/
		Spaceship* onboard;/**<Which spaceship this person is onboard*/


	private:

	
};

#endif