#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>
#include <vector>
#include "People.h"

using namespace std;

class Spaceship {

    public:
        Spaceship() {};
        Spaceship(string n) {name = n;};
        /** Pure virtual method for decorator to add components to the spaceship
         */
        virtual void addComponent(Spaceship*) = 0;

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

        virtual void addPassenger(People*);
        virtual void removePassenger(People*);
        virtual int enterShip(People*);
        virtual void exitShip(int);
        void broadcast(string);
        


    private:
        int resources;/**<Number of resources on the ship*/
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

};

#endif