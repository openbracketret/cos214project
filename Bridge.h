#ifndef BRIDGE_H
#define BRIDGE_H

#include "SpaceshipDecorator.h"
#include "Strategy.h"
/** @brief Bridge class
 */
class Bridge : public SpaceshipDecorator {

    public:
    /** Default constructor
     */
        Bridge();
    /** Paramaterised constructor
     */
        Bridge(Strategy* s);
    /** Default destructor
     */
        ~Bridge();
    /** resource collection */
        double getResources(double a, double b);
            /** stub for visit */
        void visit(Planet* p){
            space->visit(p);
        };
        void addShip(Spaceship* s){
            space->addShip(s);
        };
        /** stub for addPerson */
        void addPerson(People* p)
        {
            space->addPerson(p);};
                /** create memento stub */
        Memento* createMemento(vector<Spaceship*> s)
        {
            space->createMemento(s);
        };
        /** reinstate memento */
        void reinstateMemento(Memento* mem){
            space->reinstateMemento(mem);
        };
    private:
        Strategy* strategy;

    //TODO: Actually implement the selectStrategy and executeStrategy methods here

};

#endif