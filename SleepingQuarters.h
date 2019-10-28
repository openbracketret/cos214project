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

    /** stub for addPerson */
        void addPerson(People* p)
        {space->addPerson(p);};

};

#endif