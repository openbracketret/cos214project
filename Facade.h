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

    /** Get a spaceship with a specific name
     * @param name - the name of the spaceship
     * @return Spaceship*
     */
        Spaceship* getSpaceshipWithName(string);

    /** Begin creation of people
     * @param number - int the number of people to create
     */
        void createPeople(int);
    
    /** Send an error message from a person to the ship they are onboard
     * @param person - the person sending the error message
     * @param message - string - the message being sent
     */
        void sendErrorMessageToShip(People*, string);

    /** Get a doctor aboard a ship
     * @param spaceship - The spaceship to get a doctor from
     * @return People* - the doctor on the ship
     */
        People* getDoctorOnShip(Spaceship*);

    /** Get an engineer aboard the ship
     * @param spaceship - the spaceship to get an engineer from
     * @return People* - The engineer
     */
        People* getEngineerOnShip(Spaceship*);

    /** Get comms on aboard a ship
     * @param spaceship - the ship to get a comms from
     * @return People* - the comms
     */
        People* getCommsOnShip(Spaceship*);

    /** Get a chief enginner aboard a ship
     * @param spaceship - the ship to get the chief from
     * @return People* - the chief engineer
     */
        People* getChiefEngineerOnShip(Spaceship*);

    /** Get a fighter aboard the ship
     * @param spaceship - the the ship to get the fighter from
     * @return People* - the fighter from the ship
     */
        People* getFighterOnShip(Spaceship*);

    /** Get a navigator aboard the ship
     * @param spaceship - The ship to get the navigator from
     * @return People* - the navigator 
     */
        People* getNavigatorOnShip(Spaceship*);

    /** Get a captain aboard a ship
     * @param spaceship - the spaceship to get the captin from
     * @return People* - the captain
     */
        People* getCaptainOnShip(Spaceship*);



    private:
        vector<Spaceship*> fleet;
        Spaceship* spacestation;
        People* commanderOfFleet;
        PlanetQueue* planets;
        vector<People*> people;



};

#endif