#ifndef SPACESHIPTRANSPORTER_H
#define SPACESHIPTRANSPORTER_H

#include "Spaceship.h"
/** @brief Spaceship Transporter class
 */
class SpaceshipTransporter : public Spaceship {
    public:
    /** default constructor
     */
        SpaceshipTransporter() : Spaceship(){};
    /** parameterized constructor
     */
        SpaceshipTransporter(string name) : Spaceship(name){};
    /** default desctructor
     */
        ~SpaceshipTransporter() {};
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
    /** add component to spaceship
     * @param s - component to be added
     */
        virtual void addComponent(Spaceship* comp) {
        if (space == 0){
            space = comp;
        } else {
            space->addComponent(comp);
        }
        };
        void addShip(Spaceship* s){
            space->addShip(s);
        };

        /** stub for addPerson */
        void addPerson(People* p)
        {space->addPerson(p);};
};

#endif