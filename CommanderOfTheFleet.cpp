#include "CommanderOfTheFleet.h"

CommanderOfTheFleet::CommanderOfTheFleet(){

}

CommanderOfTheFleet::CommanderOfTheFleet(const CommanderOfTheFleet&s){}
CommanderOfTheFleet& CommanderOfTheFleet::operator=(const CommanderOfTheFleet&s){}
CommanderOfTheFleet::~CommanderOfTheFleet(){}

CommanderOfTheFleet* CommanderOfTheFleet::instance(){
    if (commander == nullptr){
        commander = new CommanderOfTheFleet();
    }
    return commander;
}