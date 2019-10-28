#ifndef FIGHTERTRANSPORTER_H
#define FIGHTERTRANSPORTER_H

#include "Spaceship.h"
#include "People.h"
/** @brief Fighter Transporter class
 */
class FighterTransporter : public Spaceship {
    public:
    /** Default constructor
     */
        FighterTransporter();

    /** Parameterised constructor
     * @name holds name of the ship
     */
        FighterTransporter(string name);

    /** Default desctructor
     */
        ~FighterTransporter();
    /** Add a component to the spaceship
     * @param s - the component being added
     */
        virtual void addComponent(Spaceship* comp) {
        if (space == 0){
            space = comp;
        } else {
            space->addComponent(comp);
        }
        };

    /** Get the type of spaceship - FighterTransporter = 3
     * @return int - 3
     */
        int getType(){return 3;};
    /** add fighters to added to persons vector 
     * @param p person to be added
    */
        void addPerson(People* p);
    /** add fighters to be removed persons vector 
     * @param p person to be removed
    */
        void removePerson(People* p);
        void addShip(Spaceship* s){
            space->addShip(s);
        };
        double getResources(double a, double b){
            space->getResources(a,b);
        };

        /** stub for addPerson */
        void addPerson(People* p)
        {space->addPerson(p);};

            /** stub for visit */
        void visit(Planet* p){
            space->visit(p);
        };

    private:
        vector<People*> persons;/**<Vector of people that the transporter is currently holding*/
        int maxCapacity;/**<Max capacity that the transporter can hold*/
        int currentCapacity;/**<Current amount of people aboard the transport bay*/
};


#endif