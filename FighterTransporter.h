#ifndef FIGHTERTRANSPORTER_H
#define FIGHTERTRANSPORTER_H

#include "Spaceship.h"
/** @brief Fighter Transporter class
 */
class FighterTransporter : public Spaceship {
    public:
    /** Default constructor
     */
        FighterTransporter() {};
    /** Default desctructor
     */
        ~FighterTransporter() {};
    /** Add a component to the spaceship
     * @param s - the component being added
     */
        virtual void addComponent(Spaceship*) {};
};


#endif