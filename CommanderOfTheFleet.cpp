#include "CommanderOfTheFleet.h"
#include <iostream>
#include "Spaceship.h"
#include "Retreat.h"
#include "Invade.h"
#include "Mine.h"

CommanderOfTheFleet* CommanderOfTheFleet::commander;

CommanderOfTheFleet::CommanderOfTheFleet() : People(){
    
}

CommanderOfTheFleet::CommanderOfTheFleet(const CommanderOfTheFleet&s){}
CommanderOfTheFleet& CommanderOfTheFleet::operator=(const CommanderOfTheFleet&s){}
CommanderOfTheFleet::~CommanderOfTheFleet(){}

CommanderOfTheFleet* CommanderOfTheFleet::instance(){
    if (commander == 0){
        commander = new CommanderOfTheFleet();
    }
    return commander;
}

void CommanderOfTheFleet::recieveSpaceshipError(string message){
    cout << "Commander of the fleet has been notified of: " << message << endl;
}

void CommanderOfTheFleet::sendErrorMessage(string message){
    onboard->broadcast(message);
}

void CommanderOfTheFleet::doCommand(string type, Spaceship* s){
    if (type == "retreat"){
        Retreat* t = new Retreat(s);
        t->execute();
    } else if (type == "invade"){
        Invade* t = new Invade(s);
        t->execute();
    } else if (type == "mine"){
        Mine* t = new Mine(s);
        t->execute();
    }
}