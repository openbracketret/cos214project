#ifndef FRIGATE_H
#define FRIGATE_H

#include "Spaceship.h"
/** @brief Frigate class
 */
class Frigate : public Spaceship {

    public:
/** Default constructor
 */
        Frigate() {};
    /** Default desctructor
     */
        ~Frigate() {};
    /** Add a component to the spaceship
     * @param s - component being added
     */
        virtual void addComponent(Spaceship*) {};
};

#endif