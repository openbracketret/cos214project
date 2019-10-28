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
        virtual void addPerson(People* p)=0;

    protected:
    /** default desctructor
     */
        ~SpaceshipDecorator() {};
        void addShip(Spaceship* s){
            space->addShip(s);
        };
        

    private:
        
        virtual void visit(Planet* p){};

};

#endif