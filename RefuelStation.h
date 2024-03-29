#ifndef REFUEL_STATION_H
#define REFUEL_STATION_H
//TODO: Add component method
#include "SpaceshipDecorator.h"

using namespace std;
/** @brief Refuel station class
 */
class RefuelStation : public SpaceshipDecorator
{
private:

public:
/** Default constructor
 */
	RefuelStation();
/** Default desctructor
 */
    ~RefuelStation();
    /** Refuel spaceships that have used all their resources
        *@param s - spaceship to be refueled
    */
    void refuelSpaceship(Spaceship* s);
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
                /** execute strategy */
        void executeStrategy(){
            space->executeStrategy();
        };
        /** select strategy */
        void selectStrategy(Strategy* s){
            space->selectStrategy(s);
        }
};

#endif