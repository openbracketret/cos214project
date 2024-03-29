#ifndef SLEEPINGQUARTERS_H
#define SLEEPINGQUARTERS_H
//TODO: ADD COMPONENT METHOD
#include "SpaceshipDecorator.h"
/** @brief Sleeping quarters class
 */
class SleepingQuarters : public SpaceshipDecorator {

    public:
    /** default constructor
     */
        SleepingQuarters();
    /** default desctructor
     */
        ~SleepingQuarters();
        void visit(Planet* p){};
        void addShip(Spaceship* s){
            space->addShip(s);
        };
            /** stub resource collection */
        double getResources(double a, double b){
            space->getResources(a,b);
        };

    /** stub for addPerson */
        void addPerson(People* p)
        {space->addPerson(p);};
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