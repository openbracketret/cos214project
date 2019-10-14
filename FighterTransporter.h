#ifndef FIGHTERTRANSPORTER_H
#define FIGHTERTRANSPORTER_H

#include "Spaceship.h"

class FighterTransporter : public Spaceship {
    public:
        FighterTransporter();
        virtual void addComponent(Spaceship*);
};


#endif