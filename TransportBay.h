#ifndef TRANSPORTBAY_H
#define TRANSPORTBAY_H

#include "SpaceshipDecorator.h"
#include "Memento.h"
#include <vector>

using namespace std;

class TransportBay : public SpaceshipDecorator {
    private:
        int maxCapacity;
        int currentCapacity;
    public:
        TransportBay();
        ~TransportBay();
        int getCurrentCapacity();
        int setCurrentCapacity(int i){currentCapacity = i;};
        int getMaxCapacity();
        int setMaxCapacity(int i){maxCapacity = i;};
        /** Method to add spaceships into the transport bay
         */
        void addShip(Spaceship*);
        /** Method to remove a specific spaceship from the transport bay
         */
        void removeShip(Spaceship*);


    private:
        vector<Spaceship*> ships;/**<Vector of spaceships that the transport bay is currently holding*/
        
};

#endif