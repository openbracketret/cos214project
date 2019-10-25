#ifndef STRATEGY_H
#define STRATEGY_H

using namespace std;

/** @brief Strategy class
 */
class Strategy {
    public:
            /**execute that is overloaded by concreteStrategy*/
        virtual double execute(double a, double b) = 0;
            /** Default destructor
            */
        ~Strategy();
};

#endif