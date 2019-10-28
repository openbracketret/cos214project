#ifndef ARMORY_H
#define ARMORY_H

#include "SpaceshipDecorator.h"
#include "Memento.h"

/** @brief Armory class
 */
class Armory : public SpaceshipDecorator {
    public:
    /** Default constructor
     */
        Armory();
    /** Default destructor
     */
        ~Armory();

        void addShip(Spaceship* s){
            space->addShip(s);
        };
            /** stub resource collection */
        double getResources(double a, double b){
            space->getResources(a,b);
        };
            /** stub for visit */
        void visit(Planet* p){
            space->visit(p);
        };
        /** create memento stub */
        Memento* createMemento(vector<Spaceship*> s)
        {
            space->createMemento(s);
        };
        /** reinstate memento */
        void reinstateMemento(Memento* mem){
            space->reinstateMemento(mem);
        };
        /** execute strategy */
        void executeStrategy(){
            space->executeStrategy();
        };
        /** select strategy */
        void selectStrategy(Strategy* s){
            space->selectStrategy(s);
        }
};

#endif