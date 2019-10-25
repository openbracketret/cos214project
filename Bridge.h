#ifndef BRIDGE_H
#define BRIDGE_H

#include "SpaceshipDecorator.h"
#include "Strategy.h"

class Bridge : public SpaceshipDecorator {

    public:
        Bridge();
        ~Bridge();
        void getResources();
    private:
        Strategy* strategy;

};

#endif