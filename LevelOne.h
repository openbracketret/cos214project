#ifndef LEVELONE_H
#define LEVELONE_H

#include "ThreatLevel.h"
/** @brief Level One Threat class
 */
class LevelOneThreat : public ThreatLevel {

    public:
    /** Default contructor
     */
        LevelOneThreat();
    /** Default desctructor
     */
        ~LevelOneThreat();
    /** Increase the threat level
     * @return the new threat level
     */
        ThreatLevel* increaseThreatLevel();
    /** Decrase the threat level
     * @return new threat level
     */
        ThreatLevel* decreaseThreatLevel();
    /** Print the current threat level
     */
        void print();

};

#endif