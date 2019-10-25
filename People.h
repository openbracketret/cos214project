#ifndef People_H
#define People_H

#include <string>
#include <vector>

using namespace std;

class Spaceship;
class People
{
	public:

		People() {};
		virtual ~People() {};
		virtual void recieveSpaceshipError(string) = 0;
		virtual void sendErrorMessage(string) = 0;
		void boardShip(Spaceship*);
		void leaveShip();

	protected:
		int id; /**<ID variable used for uniquely identifying which person is being registered with the Mediator(Spaceship)*/
		Spaceship* onboard;/**<Which spaceship this person is onboard*/


	private:

	
};

#endif