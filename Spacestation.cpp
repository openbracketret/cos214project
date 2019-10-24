#include "Spacestation.h"

using namespace std;

SpaceStation::SpaceStation() {
    //TODO: WHAT MUST GET SET IN HERE?
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