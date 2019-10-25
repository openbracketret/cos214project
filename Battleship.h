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
        ~Battleship() {};
    /** Add a component
     */
        virtual void addComponent(Spaceship*) {};
};

#endif