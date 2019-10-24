#include "CommanderOfTheFleet.h"

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