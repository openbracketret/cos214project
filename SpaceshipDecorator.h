#ifndef SPACESHIPDECORATOR_H
#define SPACESHIPDECORATOR_H

#include "Spaceship.h"
/** @brief Spaceship Decorator class
 */
class SpaceshipDecorator : public Spaceship {

    public:
    /** Default Constructor
     */
        SpaceshipDecorator();
        /** Add a component to the spaceship
            @param comp The component to be added
            */
        virtual void addComponent(Spaceship* comp);

    protected:
    /** default desctructor
     */
        ~SpaceshipDecorator() {delete space;};

    private:
        Spaceship* space;/**<The added decorator component*/

};

#endif