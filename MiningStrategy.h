#ifndef MININGSTRATEGY_H
#define MININGSTRATEGY_H

#include "Strategy.h"

using namespace std;

/** @brief MiningStrategy class
 */
class MiningStrategy {
    public:
        /**overloaded execute for mining resources*/
        virtual double execute(double a, double b);
        /**default destructor*/
        ~MiningStrategy();
};

#endif