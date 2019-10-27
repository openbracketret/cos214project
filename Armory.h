#ifndef ARMORY_H
#define ARMORY_H

#include "SpaceshipDecorator.h"

/** @brief Armory class
 */
class Armory : public SpaceshipDecorator {
    public:
    /** Default constructor
     */
        Armory();
    /** Default destructor
     */
        ~Armory();
        void visit(Planet* p){};
};

#endif