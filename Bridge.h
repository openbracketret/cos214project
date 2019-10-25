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
        Bridge(Strategy* s);
    /** Default destructor
     */
        ~Bridge();
    /**resource collection*/
        double getResources(double a, double b);
    private:
        Strategy* strategy;

};

#endif