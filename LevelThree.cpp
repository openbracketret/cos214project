#include "LevelThree.h"
#include "LevelTwo.h"
#include <iostream>

using namespace std;

LevelThreeThreat::LevelThreeThreat() : ThreatLevel() {

}

LevelThreeThreat::~LevelThreeThreat() {

}

ThreatLevel* LevelThreeThreat::increaseThreatLevel() {
    cout << "This is the highest threat level" << endl;
}

ThreatLevel* LevelThreeThreat::decreaseThreatLevel() {
    return new LevelTwoThreat();
}

void LevelThreeThreat::print() {
    cout << "The spacestation is currently at threat level THREE." <<endl;
}