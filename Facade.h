#ifndef FACADE_H
#define FACADE_H

#include <vector>
#include "Spaceship.h"
#include "People.h"
#include "CommanderOfTheFleet.h"
#include "PlanetQueue.h"
#include "Spacestation.h"
#include "Critter.h"
#include "Strategy.h"

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
        Spaceship* getSpaceshipWithName();

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

    /** Log a message to the captains log of specified ship
     * @param spaceship - The spaceship to log the message to
     * @param message - the message to me logged
     */
        void logMessage(Spaceship*, string);

    /** Load a person onto the given ship
     * @param person - the person to board to the ship
     * @param spaceship - the spaceship to load the passenger to
     */
        void boardPersonToShip(People*, Spaceship*);

    /** Start loading a ship with people
     * @param number - the number of people to load
     * @param spaceship - the spaceship to load people into
     */
        void beginBoarding(int, Spaceship*);

    /** Remove a type of person from a ship
     * @param type - the type of person
     * @param spaceship - the spaceship to remove the person from
     */
        void removeTypeFromShip(string type, Spaceship* spaceship);

    /** Increase the threat level of the fleet
     */
        void increaseThreat();

    /** Decrase the threat level the fleet
     */
        void decreaseThreat();

    /** Print out the current threat level of the fleet
     */
        void printThreat();

    /** Print captains log of specified ship
     * @param spaceship - the spaceship specified
     */
        void printCaptainsLog(Spaceship*);

    /** Change strategy of selected ship
     * @param spaceship - the spaceship to change strategy
     * @param strat - the selected strategy
     */
        void selectStrategy(Spaceship*, Strategy*);

    /** Execute the selected strategy of the selected ship
     * @param spaceship - the spaceship that will execute the strategy
     */
        void executeStrategy(Spaceship*);

    /** Execute a command from the commander
     * @param type - the command to execute
     * @param spaceship - the spaceship that the command executes on
     */
        void doCommand(string type, Spaceship*);

    /** pop off a planet from the queue
     * @return Planet*
     */
        Planet* popPlanet();

    /** Visit a planet
     * @param spaceship - the spaceship to visit the planet with
     * @param plan - the planet to be visited
     */
        void visitPlanetWithSpaceship(Spaceship*, Planet*);

    /** Create some critters
     * @param number - the number of critters to create
     */
        void createCritters(int);

    /** Get a random critter from the list
     * @return Critter*
     */
        Critter* getSomeCritter();

    /** Remove specific critter from list
     * @param crit - the critter to be removed
     */
        void removeCritter(Critter*);


    private:
        vector<Spaceship*> fleet;
        Spaceship* spacestation;
        People* commanderOfFleet;
        PlanetQueue* planets;
        vector<People*> people;
        vector<People*> peopleTracker;
        vector<Critter*> critters;
        



};

#endif