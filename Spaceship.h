#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>

class Spaceship {

    public:
        Spaceship();
        Spaceship(string n) {name = n;};

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
        int getCrewCapacity() {return crewCapacity;};
        void setCrewCapacity(int p) {crewCapacity = p;};
        int getPassengerCapacity() {return passengerCapacity;};
        void setPassengerCapacity(int p) {passengerCapacity = p;};
        void addFuel(int a) {fuel += a;};
        void addEnergy(int e){energy += e;};
        void decreaseFuel(int a){fuel -= a;};
        void decreaseEnergy(int e){energy -= e;};
        int getFuel() {return fuel;};
        int getEnergy() {return energy;};

    private:
        int displacement;/**<displacement of spaceship*/
        int power;/**<power of spaceship */
        int thrust;/**<thrust*/
        int maxSpeed;/**<Maxiumum Speed*/
        int stallSpeed; /**<Stalling speed*/
        int crewCapacity; /**<Maximum crew members*/
        int passengerCapacity; /**<Maximum passengers*/
        int fuel; /**<Fuel level*/
        int energy; /**<Energy Level*/
        string name; /**<Spaceships name*/

};

#endif