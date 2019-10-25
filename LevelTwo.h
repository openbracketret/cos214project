#ifndef LEVELTWO_H
#define LEVELTWO_H

#include "ThreatLevel.h"
/** @brief Level Two Threat class
 */
class LevelTwoThreat : public ThreatLevel {

    public:
    /** Default constructor
     */
        LevelTwoThreat();
    /** Default destructor
     */
        ~LevelTwoThreat();
    /** Increase threat level
     * @return new threat level
     */
        ThreatLevel* increaseThreatLevel();
    /** Decrase threat level
     * @return new threat level
     */
        ThreatLevel* decreaseThreatLevel();
    /** Print threat level
     */
        void print();
};

#endif