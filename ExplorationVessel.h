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

    /** Paramaterised constructor
     */
        ExplorationVessel(string name) : Spaceship(name){};
    /** Add a component to the vessel
     * @param s - spaceship component to be added
     */
        virtual void addComponent(Spaceship* comp) {
        if (space == 0){
            space = comp;
        } else {
            space->addComponent(comp);
        }
        };
    /** Add a visitor to the vessel and planet
     * @param p - planet to be visited
     */
        void visit(Planet* p);

    /** Get type of spaceship - ExplorationVessel = 2
     * @return int - 2
     */
        int getType(){return 2;};
    /** stub for increaseThreatLevel */
        void increaseThreatLevel() {};
    /** stub for decreaseThreatLevel */
        void decreaseThreatLevel() {};
    /** stub for printThreatLevel */
        void printThreatLevel() {};
    /** stub for selectStrategy */
        void selectStrategy() {};
    /** stub for executeStrategy */
        void executeStrategy() {};
        void addShip(Spaceship* s){
            space->addShip(s);
        };
        double getResources(double a, double b){
            space->getResources(a,b);
        };

};

#endif