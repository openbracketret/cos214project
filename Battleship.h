#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "Spaceship.h"
/** @brief Battleship class
 */
class Battleship : public Spaceship{

    public:
    /** Default constructor
     */
        Battleship() : Spaceship() {};
    /** Default desctructor
     */

    /** Paramaterised constructor
     */
    Battleship(string name) : Spaceship(name){};  

        ~Battleship() {};
    /** Add a component
     */
        virtual void addComponent(Spaceship* comp) {
        if (space == 0){
            space = comp;
        } else {
            space->addComponent(comp);
        }
        };

    /** Get the type of spaceship Battleship = 1
     * @return int - 1
     */
        int getType(){return 1;};
    /** stub for visit */
        void visit(Planet* p){
            space->visit(p);
        };
    /** stub for increaseThreatLevel */
        void increaseThreatLevel() {};
    /** stub for decreaseThreatLevel */
        void decreaseThreatLevel() {};
    /** stub for printThreatLevel */
        void printThreatLevel() {};
        /** execute strategy */
        void executeStrategy(){
            space->executeStrategy();
        };
        /** select strategy */
        void selectStrategy(Strategy* s){
            space->selectStrategy(s);
        }
        void addShip(Spaceship* s){
            space->addShip(s);
        };
            /** stub resource collection */
        double getResources(double a, double b){
            space->getResources(a,b);
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
    
};

#endif