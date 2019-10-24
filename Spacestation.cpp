#include "Spacestation.h"
#include "LevelOne.h"

using namespace std;

SpaceStation::SpaceStation() {
    threat = new LevelOneThreat();
}

SpaceStation::SpaceStation(const SpaceStation& s){}

SpaceStation::~SpaceStation(){
    delete spaceStation;
}

SpaceStation& SpaceStation::operator=(const SpaceStation& s){} 

SpaceStation* SpaceStation::instance() {
    if (spaceStation == nullptr){
        spaceStation = new SpaceStation();
    }
    return spaceStation;
}

void SpaceStation::increaseThreatLevel() {
    threat = threat->increaseThreatLevel();
}

void SpaceStation::decreaseThreatLevel() {
    threat = threat->decreaseThreatLevel();
}

void SpaceStation::printThreatLevel() {
    threat->print();
}