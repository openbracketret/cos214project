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

        void addShip(Spaceship* s){
            space->addShip(s);
        };
            /** stub resource collection */
        double getResources(double a, double b){
            space->getResources(a,b);
        };
            /** stub for visit */
        void visit(Planet* p){
            space->visit(p);
        };
};

#endif