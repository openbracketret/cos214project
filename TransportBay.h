#ifndef TRANSPORTBAY_H
#define TRANSPORTBAY_H

#include "SpaceshipDecorator.h"

class TransportBay : public SpaceshipDecorator {
    public:
        TransportBay();
        ~TransportBay();
};

#endif