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
};

#endif