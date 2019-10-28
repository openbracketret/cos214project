#ifndef MININGSTRATEGY_H
#define MININGSTRATEGY_H

#include "Strategy.h"

using namespace std;

/** @brief MiningStrategy class
 */
class MiningStrategy : public Strategy{
    public:
        /** overloaded execute for mining resources 
         * @param a mining rate of the planet
         * @param b tiem spent on mining
        */
        virtual double execute(double a, double b);
        /** default destructor */
        ~MiningStrategy();
};

#endif