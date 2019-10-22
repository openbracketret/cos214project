#ifndef FIGHTERBAY_H
#define FIGHTERBAY_H

#include "SpaceshipDecorator.h"
#include "Fighter.h"
#include <vector>

using namespace std;

class FighterBay : public SpaceshipDecorator {

    public:
        FighterBay();
        ~FighterBay();

        /** Method to add fighters into the fighter bay
         */
        void addFighter(Fighter*);
        /** Method to remove a specific fighter from the fighter bay
         */
        void removeFighter(Fighter*);


    private:
        vector<Fighter*> fighters;/**<Fighters currently in the fighterbay*/


};

#endif