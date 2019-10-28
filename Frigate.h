#ifndef FRIGATE_H
#define FRIGATE_H

#include "Spaceship.h"
/** @brief Frigate class
 */
class Frigate : public Spaceship {

    public:
/** Default constructor
 */
        Frigate() : Spaceship() {};

    /** Paramaterised constructor
     */
        Frigate(string name): Spaceship(name){};
    /** Default desctructor
     */
        ~Frigate() {};
    /** Add a component to the spaceship
     * @param s - component being added
     */
        virtual void addComponent(Spaceship* comp) {
        if (space == 0){
            space = comp;
        } else {
            space->addComponent(comp);
        }
        };

    /** Get the type of spaceship - Frigate = 4
     * @return int - 4
     */
        int getType(){return 4;};
    /** stub for visit */
        void visit(Planet* p){};
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
            /** stub for visit */
        void visit(Planet* p){
            space->visit(p);
        };

/** stub for addPerson */
        void addPerson(People* p)
        {space->addPerson(p);};
        
            /** stub resource collection */
        double getResources(double a, double b){
            space->getResources(a,b);
        };
};

#endif