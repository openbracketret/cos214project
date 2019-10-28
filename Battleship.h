#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "Spaceship.h"
/** @brief Battleship class
 */
class Battleship : public Spaceship{

    public:
    /** Default constructor
     */
        Battleship() : Spaceship() {};
    /** Default desctructor
     */

    /** Paramaterised constructor
     */
    Battleship(string name) : Spaceship(name){};  

        ~Battleship() {};
    /** Add a component
     */
        virtual void addComponent(Spaceship* comp) {
        if (space == 0){
            space = comp;
        } else {
            space->addComponent(comp);
        }
        };

    /** Get the type of spaceship Battleship = 1
     * @return int - 1
     */
        int getType(){return 1;};
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
    /** stub for addPerson */
        void addPerson(People* p)
        {space->addPerson(p);};
    
};

#endif