#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>
#include <vector>
#include "People.h"
#include "CaptainsLog.h"

class Planet;

using namespace std;
/** @brief Spaceship class
 */
class Spaceship {

    public:
    /** default constructor
     */
        Spaceship() {};
    /** Paramaterised constructor
     */
        Spaceship(string n) {name = n;};
        /** Pure virtual method for decorator to add components to the spaceship
         */
        virtual void addComponent(Spaceship*) = 0;

    /** Default desctructor
     */
        virtual ~Spaceship() {};

        int getDisplacement() {return displacement;};
        void setDisplacement(int d) {displacement = d;};
        int getPower() {return power;};
        void setPower(int v) {power = v;};
        int getThrust() {return thrust;};
        void setThrust(int v) {thrust = v;};
        int getMaxSpeed() {return maxSpeed;};
        void setMaxSpeed(int v) {maxSpeed = v;};
        int getStallSpeed() {return stallSpeed;};
        void setStallSpeed(int v) {stallSpeed = v;};
        int getCurrentCapacity() {return currentCapacity;};
        void setCurrentCapacity(int p) {currentCapacity = p;};
        int getPassengerCapacity() {return passengerCapacity;};
        void setPassengerCapacity(int p) {passengerCapacity = p;};
        int getMaxFuel(){return maxFuel;};
        void setMaxFuel(int i){maxFuel=i;};
        void addFuel(int a) {fuel += a;};
        void addEnergy(int e){energy += e;};
        void decreaseFuel(int a){fuel -= a;};
        void decreaseEnergy(int e){energy -= e;};
        int getFuel() {return fuel;};
        int getEnergy() {return energy;};
        string getName(){return name;};
        virtual void increaseThreatLevel();
        virtual void decreaseThreatLevel();
        virtual void printThreatLevel();
        virtual void visit(Planet* p) {};
        virtual void selectStrategy(Strategy*);
        virtual void executeStrategy();
        /** Add passenger to spaceship
         * @param p - Person to be added
         */
        virtual void addPassenger(People*);
        /** Remove passenger from spaceship
         * @param p - person to be removed
         */
        virtual void removePassenger(People*);
        /** Register passenger for messages
         * @param p - person being added
         * @return id for
         */
        virtual int enterShip(People*);
        /** Deregister for messages
         * @param id - id of person
         */
        virtual void exitShip(int);
        /** Broadcast message to passenger
         * @param message - message to be broadcast
         */
        void broadcast(string);
        /** Print the captains log
         */
        void printCaptainsLog();
        /** Add message to the log
         * @param message - message to added to log
         */
        void addLog(string);
        /** Get the type of the spaceship
         * @return int - the type of spaceship
         */
        virtual int getType() {return 0;};
        /** Get the people aboard the ship
         * @return vector<People*>
         */
        vector<People*> getPeople() {return passengers;};


    private:
        double resources;/**<Number of resources on the ship*/
        int displacement;/**<displacement of spaceship*/
        int power;/**<power of spaceship */
        int thrust;/**<thrust*/
        int maxSpeed;/**<Maxiumum Speed*/
        int stallSpeed; /**<Stalling speed*/
        int currentCapacity; /**<Current amount of crew members*/
        int passengerCapacity; /**<Maximum passengers*/
        int fuel; /**<Fuel level*/
        int maxFuel; /**Max fuel level*/
        int energy; /**<Energy Level*/
        string name; /**<Spaceships name*/
        int nextID; /**<ID to apply to passenger*/

        vector<People*> passengers; /**<Vector of passengers currently aboard the ship */
        CaptainsLog* log; /**<Captains log of the ship*/


};

#endif