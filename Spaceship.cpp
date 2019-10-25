#include "Spaceship.h"
#include <iostream>
#include <algorithm>


void Spaceship::addPassenger(People* p){
    if (currentCapacity < passengerCapacity){
        p->boardShip(this);
        passengers.push_back(p);
        currentCapacity++;
        log->logEvent("Passenger boarded");
    } else {
        cout << "Spaceship is currently full" << endl;
    }
}

void Spaceship::removePassenger(People* p){
    vector<People*>::iterator it = find(passengers.begin(), passengers.end(), p);
    if (it != passengers.end()){
        p->leaveShip();
        passengers.erase(it);
        currentCapacity--;
        log->logEvent("Passenger left ship");
    }   
}

int Spaceship::enterShip(People* p){
    return ++nextID;
}

void Spaceship::exitShip(int id) {
    //TODO: Does this function need any logic due to removePassenger??
}

void Spaceship::printCaptainsLog() {
    log->printLogs();
}

void Spaceship::broadcast(string message){
    vector<People*>::iterator it;

    log->logEvent("Error: " + message + " occured on the ship");

    for (it = passengers.begin(); it != passengers.end(); ++it){
        (*it)->recieveSpaceshipError(message);
    }
}

void Spaceship::addLog(string message){
    log->logEvent(message);
}