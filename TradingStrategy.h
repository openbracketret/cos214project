#ifndef TRADINGSTRATEGY_H
#define TRADINGSTRATEGY_H

#include "TradingStrategy.h"
#include "Strategy.h"


using namespace std;

/** @brief TradingStrategy class
 */
class TradingStrategy : public Strategy{
    public:
        /** default constructor */
        TradingStrategy();
        /** overloaded execute for trading for resources
         * @param a is credits for resources.
         * @param b is exchange rate for the  resources
        */
        virtual double execute(double a, double b);
        /**default destructor*/
        ~TradingStrategy();
};

#endif