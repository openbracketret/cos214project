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
    /**resource collection*/
        double getResources(double a, double b);
        void visit(Planet* p){};
    private:
        Strategy* strategy;

    //TODO: Actually implement the selectStrategy and executeStrategy methods here

};

#endif