#ifndef LEVELTHREE_H
#define LEVELTHREE_H

#include "ThreatLevel.h"
/** @brief Level Three Threat class
 */
class LevelThreeThreat : public ThreatLevel{

    public:
    /** Default constructor
     */
        LevelThreeThreat();
    /** Default desctructor
     */
        ~LevelThreeThreat();
    /** Increase threat level
     * @return new threat level
     */
        ThreatLevel* increaseThreatLevel();
    /** Decrease threat level
     * @return new threat level
     */
        ThreatLevel* decreaseThreatLevel();
    /** Print current threat level
     */
        void print();

};

#endif