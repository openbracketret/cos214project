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
        virtual void addComponent(Spaceship*) {};

    /** Get the type of spaceship Battleship = 1
     * @return int - 1
     */
        int getType(){return 1;};
        void visit(Planet* p){};
};

#endif