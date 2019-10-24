#include "LevelOne.h"
#include "LevelTwo.h"
#include <iostream>

using namespace std;

LevelOneThreat::LevelOneThreat() : ThreatLevel() {

}

LevelOneThreat::~LevelOneThreat() {

}

ThreatLevel* LevelOneThreat::increaseThreatLevel() {
    return new LevelTwoThreat();
}

ThreatLevel* LevelOneThreat::decreaseThreatLevel() {
    cout << "This is the minimum threat level" << endl;
}

void LevelOneThreat::print() {
    cout << "The spacestation is currently at threat level one." << endl;
}