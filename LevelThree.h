#ifndef LEVELTHREE_H
#define LEVELTHREE_H

#include "ThreatLevel.h"

class LevelThreeThreat : public ThreatLevel{

    public:
        LevelThreeThreat();
        ~LevelThreeThreat();
        ThreatLevel* increaseThreatLevel();
        ThreatLevel* decreaseThreatLevel();
        void print();

};

#endif