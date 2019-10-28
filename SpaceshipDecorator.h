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

    protected:
    /** default desctructor
     */
        ~SpaceshipDecorator() {};
        void addShip(Spaceship* s){
            space->addShip(s);
        };
            /** stub resource collection */
        virtual double getResources(double a, double b){
            space->getResources(a,b);
        };
        

    private:
        
        virtual void visit(Planet* p){};

};

#endif