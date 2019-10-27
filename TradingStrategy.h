#ifndef TRADINGSTRATEGY_H
#define TRADINGSTRATEGY_H

#include "TradingStrategy.h"

using namespace std;

/** @brief Trading strategy class
 */
class TradingStrategy {
    public:
        /**overloaded execute for trading for resources*/
        virtual double execute(double a, double b);
        /**default destructor*/
        ~TradingStrategy();
};

#endif