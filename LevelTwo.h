#ifndef LEVELTWO_H
#define LEVELTWO_H

#include "ThreatLevel.h"

class LevelTwoThreat : public ThreatLevel {

    public:
        LevelTwoThreat();
        ~LevelTwoThreat();
        ThreatLevel* increaseThreatLevel();
        ThreatLevel* decreaseThreatLevel();
        void print();
};

#endif