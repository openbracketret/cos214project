#ifndef THREATLEVEL_H
#define THREATLEVEL_H

class ThreatLevel {

    public:
        ThreatLevel();
        ~ThreatLevel();
        virtual ThreatLevel* increaseThreatLevel();
        virtual ThreatLevel* decreaseThreatLevel();
        virtual void print();

};

#endif