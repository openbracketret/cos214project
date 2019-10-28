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
    /** Virtual addShip
     */
        virtual void addShip(Spaceship*);

        /** virtual addPerson */
        virtual void addPerson(People* p) {};

    protected:
    /** default desctructor
     */
        ~SpaceshipDecorator() {};
        
            /** stub resource collection */
        virtual double getResources(double a, double b){
            space->getResources(a,b);
        };
            /** stub for visit */
        void visit(Planet* p){
            space->visit(p);
        };

    private:


};

#endif