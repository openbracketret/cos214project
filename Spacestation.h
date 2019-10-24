#ifndef SPACESTATION_H
#define SPACESTATION_H

#include "Spaceship.h"

#include <iostream>

class SpaceStation : public Spaceship {
    public:
        static SpaceStation* instance();
        Spaceship* getSpaceStation();
        void updateSpaceStation(SpaceStation*);
        void addComponent(Spaceship*);

    protected:
        SpaceStation(const SpaceStation&);
        SpaceStation();
        virtual ~SpaceStation();
        SpaceStation& operator=(const SpaceStation&);


    private:
        static SpaceStation* spaceStation;
};

#endif