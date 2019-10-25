#ifndef BRIDGE_H
#define BRIDGE_H

#include "SpaceshipDecorator.h"
/** @brief Bridge class
 */
class Bridge : public SpaceshipDecorator {

    public:
    /** Default constructor
     */
        Bridge();
    /** Default destructor
     */
        ~Bridge();
        void getResources();
    private:
        Strategy* strategy;

};

#endif