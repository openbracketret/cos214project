#ifndef FACADE_H
#define FACADE_H

#include <vector>
#include "Spaceship.h"
#include "People.h"
#include "CommanderOfTheFleet.h"
#include "PlanetQueue.h"

using namespace std;

/** @brief Facade class
 */

class Facade {

    public:
        Facade();
        ~Facade();
    /** Begin creation of a fleet
     * @param number - The amount of ships to create in the fleet
     */
        void createFleet(int);

    /** Create planets
     * @param number - The number of planets to create
     */
        void createPlanets(int);

    /** Get the people contained in a spaceship
     * @param s - spaceship to get people from
     * @return vector<People*>
     */
        vector<People*> getPeopleOnShip(Spaceship*);



    private:
        vector<Spaceship*> fleet;
        Spaceship* spacestation;
        People* commanerOfFleet;
        PlanetQueue* planets;



};

#endif