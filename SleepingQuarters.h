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

};

#endif