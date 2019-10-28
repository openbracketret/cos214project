#ifndef SICKBAY_H
#define SICKBAY_H
//TODO: ADDCOMPONENT??
#include "SpaceshipDecorator.h"
/** @brief Sickbay class
 */
class SickBay : public SpaceshipDecorator{

    public:
    /** Default constructor
     */
        SickBay();
    /** Default desctructor
     */
        ~SickBay();
        void visit(Planet* p){};
        void addShip(Spaceship* s){
            space->addShip(s);
        };

        /** stub for addPerson */
        void addPerson(People* p)
        {space->addPerson(p);};
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