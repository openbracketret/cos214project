#ifndef EXPLORATIONVESSEL_H
#define EXPLORATIONVESSEL_H

#include "Spaceship.h"
/** @brief Exploration Vessel class
 */
class ExplorationVessel : public Spaceship {

    public:
    /** Default constructor
     */
        ExplorationVessel() {};
    /** Default desctructor
     */
        ~ExplorationVessel() {};
    /** Add a component to the vessel
     * @param s - spaceship component to be added
     */
        virtual void addComponent(Spaceship*) {};

};

#endif