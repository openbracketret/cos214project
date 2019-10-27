#ifndef REFUEL_STATION_H
#define REFUEL_STATION_H
//TODO: Add component method
#include "SpaceshipDecorator.h"

using namespace std;
/** @brief Refuel station class
 */
class RefuelStation : public SpaceshipDecorator
{
private:

public:
/** Default constructor
 */
	RefuelStation();
/** Default desctructor
 */
    ~RefuelStation();
    /** Refuel spaceships that have used all their resources
        *@param s - spaceship to be refueled
    */
    void refuelSpaceship(Spaceship* s);
    void visit(Planet* p){};
};

#endif