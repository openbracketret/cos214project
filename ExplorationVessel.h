#ifndef EXPLORATIONVESSEL_H
#define EXPLORATIONVESSEL_H
#include "CommanderOfTheFleet.h"

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
    /** visitor function to be used to observer planets
     *  @param p - planet to be visited
    */
        virtual double visit(Planet* p);
};

#endif