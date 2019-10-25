#ifndef TRANSPORTBAY_H
#define TRANSPORTBAY_H

#include "SpaceshipDecorator.h"
#include "Memento.h"
#include <vector>

using namespace std;

class TransportBay : public SpaceshipDecorator {
    public:
        /**
         * Default constructor for the transport bay
         */
        TransportBay();
        /** Parameterised constructor to set transport bay max capacity
         * @param maxCapacity 
         */
        TransportBay(int);
        ~TransportBay();
        int getCurrentCapacity();
        int setCurrentCapacity(int i){currentCapacity = i;};
        int getMaxCapacity();
        int setMaxCapacity(int i){maxCapacity = i;};
        /** Method to add spaceships into the transport bay
         * @param spaceship Spaceship to be added 
         */
        void addShip(Spaceship*);
        /** Method to remove a specific spaceship from the transport bay
         * @param spaceship Spaceship to be removed from the transport bay
         */
        void removeShip(Spaceship*);


    private:
        vector<Spaceship*> ships;/**<Vector of spaceships that the transport bay is currently holding*/
        int maxCapacity;/**<Max capacity that the transport bay can hold*/
        int currentCapacity;/**<Current amount of ships aboard the transport bay*/
        
};

#endif