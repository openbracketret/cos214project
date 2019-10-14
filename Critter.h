#ifndef CRITTER_H
#define CRITTER_H

#include <string>

class Critter {

    public:
        /** Default constructor to create critters. Randomly assignes resources and affinity to the critter 
         */
        Critter();
        /** isAngry() returns true if the critter is hostile
         */
        bool isAngry();
        /** stealResources() If the critter is captured you will be able to take all the resources that the critter holds
         * This function returns -1 if the critter is not captured and instantly makes the critter hostile
         */
        int stealResources();



    private:
        int health; /**<Current health of critter */
        int resources; /**<How many resources the critter has */
        int affinity; /**<The critters currents affinity. < 50 Means the critter is an enemy */
        std::string name; /**<The name of the critter */
        bool captured; /**<The current captured state of the critter */

};

#endif