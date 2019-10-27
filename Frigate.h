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
        virtual void addComponent(Spaceship*) {};

    /** Get the type of spaceship - Frigate = 4
     * @return int - 4
     */
        int getType(){return 4;};
        void visit(Planet* p){};
};

#endif