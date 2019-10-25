#include "LevelTwo.h"
#include "LevelOne.h"
#include "LevelThree.h"
#include <iostream>

using namespace std;

LevelTwoThreat::LevelTwoThreat() : ThreatLevel() {

}

LevelTwoThreat::~LevelTwoThreat() {

}

ThreatLevel* LevelTwoThreat::increaseThreatLevel() {
    return new LevelThreeThreat();
}

ThreatLevel* LevelTwoThreat::decreaseThreatLevel() {
    return new LevelOneThreat();
}

void LevelTwoThreat::print() {
    cout << "The spacestation is currently at threat level TWO" << endl;
}