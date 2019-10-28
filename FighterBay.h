#ifndef FIGHTERBAY_H
#define FIGHTERBAY_H

#include "SpaceshipDecorator.h"
#include "Fighter.h"
#include <vector>

using namespace std;
/** @brief Fighterbay class
 */
class FighterBay : public SpaceshipDecorator {

    public:
    /** Default constructor
     */
        FighterBay() {};
    /** Default desctructor
     */
        ~FighterBay() {};

        /** Method to add fighters into the fighter bay
         * @param f - Fighter being added
         */
        void addFighter(Fighter*);
        /** Method to remove a specific fighter from the fighter bay
         * @param f - Fighter being removed
         */
        void removeFighter(Fighter*);
        void visit(Planet* p){};
        void addShip(Spaceship* s){
            space->addShip(s);
        };
            /** stub resource collection */
        double getResources(double a, double b){
            space->getResources(a,b);
        };

    private:
        vector<Fighter*> fighters;/**<Fighters currently in the fighterbay*/


};

#endif