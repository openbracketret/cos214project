#ifndef LEVELONE_H
#define LEVELONE_H

#include "ThreatLevel.h"

class LevelOneThreat : public ThreatLevel {

    public:
        LevelOneThreat();
        ~LevelOneThreat();
        ThreatLevel* increaseThreatLevel();
        ThreatLevel* decreaseThreatLevel();
        void print();

};

#endif