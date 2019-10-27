#ifndef SPACESHIPTRANSPORTER_H
#define SPACESHIPTRANSPORTER_H

#include "Spaceship.h"
/** @brief Spaceship Transporter class
 */
class SpaceshipTransporter : public Spaceship {
    public:
    /** default constructor
     */
        SpaceshipTransporter() {};
    /** default desctructor
     */
        ~SpaceshipTransporter() {};
        void visit(Planet* p){};
    /** add component to spaceship
     * @param s - component to be added
     */
        virtual void addComponent(Spaceship*) {};
};

#endif