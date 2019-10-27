#ifndef FIGHTERTRANSPORTER_H
#define FIGHTERTRANSPORTER_H

#include "Spaceship.h"
/** @brief Fighter Transporter class
 */
class FighterTransporter : public Spaceship {
    public:
    /** Default constructor
     */
        FighterTransporter() : Spaceship() {};

    /** Parameterised constructor
     */
        FighterTransporter(string name) : Spaceship(name){};
    /** Default desctructor
     */
        ~FighterTransporter() {};
    /** Add a component to the spaceship
     * @param s - the component being added
     */
        virtual void addComponent(Spaceship*) {};

    /** Get the type of spaceship - FighterTransporter = 3
     * @return int - 3
     */
        int getType(){return 3;};
};


#endif