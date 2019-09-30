#ifndef SPACESHIPDECORATOR_H
#define SPACESHIPDECORATOR_H

#include "Spaceship.h"

class SpaceshipDecorator : public Spaceship {

    public:
        SpaceshipDecorator();
        /**Add a component to the spaceship
            */
        virtual void addComponent(Spaceship* comp);

    protected:
        ~SpaceshipDecorator() {delete space;};

    private:
        Spaceship* space;/**<The added decorator component*/

};

#endif