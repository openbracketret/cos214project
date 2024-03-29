#ifndef SPACESTATION_H
#define SPACESTATION_H

#include "Spaceship.h"
#include "ThreatLevel.h"

#include <iostream>
/** @brief Spacestation class. A singleton
 */
class SpaceStation : public Spaceship {
    public:
    /** Create or get instance of spacestation
     * @return SpaceStation
     */
        static SpaceStation* instance();
    /** Get spacestation instance
     * @return Spaceship*
     */
        Spaceship* getSpaceStation();
    /** Update the spacestation
     * @param s - updated spacestation
     */
        void updateSpaceStation(SpaceStation* s);
    /** Add component to spaceship
     * @param comp - component to be added
     */
         virtual void addComponent(Spaceship* comp) {
        if (space == 0){
            space = comp;
        } else {
            space->addComponent(comp);
        }
        };
    /** Increase threat level of spacestation
     */
        void increaseThreatLevel();
    /** Decrease threat level of spacespation
     */
        void decreaseThreatLevel();
    /** Print the current threat level of the space station
     */
        void printThreatLevel();
    
        /** execute strategy */
        void executeStrategy(){
            space->executeStrategy();
        };
        /** select strategy */
        void selectStrategy(Strategy* s){
            space->selectStrategy(s);
        } 
        /** Add Spaceship
        *@param s Spaceship to be added
        */ 
        void addShip(Spaceship* s){
            space->addShip(s);
        };     
            /** stub resource collection */
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
                /** create memento stub */
        Memento* createMemento(vector<Spaceship*> s)
        {
            space->createMemento(s);
        };
        /** reinstate memento */
        void reinstateMemento(Memento* mem){
            space->reinstateMemento(mem);
        };

    protected:
    /** Paramaterised constructor
     */
        SpaceStation(const SpaceStation&);
    /** Default constructor
     */
        SpaceStation();
    /** Virtual default desctructor
     */
        virtual ~SpaceStation();
    /** Overridden = operator
     */
        SpaceStation& operator=(const SpaceStation&);


    private:
        static SpaceStation* spaceStation;/**< the spacestation instace*/
        ThreatLevel* threat;/**<Pointer to spacestation threat level*/
};

#endif