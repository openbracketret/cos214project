#ifndef TRANSPORTBAY_H
#define TRANSPORTBAY_H

#include "SpaceshipDecorator.h"
#include "Memento.h"
#include <vector>

using namespace std;
/** @brief Transport bay class
 */
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
        /** default destructor
         */
        ~TransportBay();
        int getCurrentCapacity();
        void setCurrentCapacity(int i){currentCapacity = i;};
        int getMaxCapacity();
        void setMaxCapacity(int i){maxCapacity = i;};
        /** Method to add spaceships into the transport bay
         * @param spaceship Spaceship to be added 
         */
        void addShip(Spaceship*);
        /** Method to remove a specific spaceship from the transport bay
         * @param spaceship Spaceship to be removed from the transport bay
         */
        void removeShip(Spaceship*);
        /** Create memento
         * @param s - vector of spaceships to save
         * @return Memento*
         */
        Memento* createMemento(vector<Spaceship*> s);
        /** Reinstate memento
         * @param mem - Memento to be recalled
         */
        void reinstateMemento(Memento* mem);
        void visit(Planet* p){};
        void addShip(Spaceship* s){
            space->addShip(s);
        };
            /** stub resource collection */
        double getResources(double a, double b);

    private:
        friend class Memento;
        vector<Spaceship*> ships;/**<Vector of spaceships that the transport bay is currently holding*/
        int maxCapacity;/**<Max capacity that the transport bay can hold*/
        int currentCapacity;/**<Current amount of ships aboard the transport bay*/
        
};

#endif