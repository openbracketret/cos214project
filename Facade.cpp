#include "Facade.h"
#include "SpaceshipFactory.h"
#include "FrigateFactory.h"
#include "BattleshipFactory.h"
#include "FighterTransporterFactory.h"
#include "SpaceStationFactory.h"
#include "ExplorationVesselFactory.h"
#include "People.h"
#include "PeopleFactory.h"
#include "CommsFactory.h"
#include "NavigatorFactory.h"
#include "FighterFactory.h"
#include "EngineerFactory.h"
#include "CaptainFactory.h"
#include "CommanderOfTheFleetFactory.h"
#include "DoctorFactory.h"
#include "ChiefEngineerFactory.h"

#include <iostream>
#include <algorithm>

Facade::Facade(){
    planets = new PlanetQueue();
}

Facade::~Facade(){

}

void Facade::createFleet(int number){

    SpaceshipFactory** spaceshipFactory = new SpaceshipFactory*[5];
    spaceshipFactory[0] = new SpaceStationFactory;
    spaceshipFactory[1] = new BattleshipFactory;
    spaceshipFactory[2] = new ExplorationVesselFactory;
    spaceshipFactory[3] = new FighterTransporterFactory;
    spaceshipFactory[4] = new FrigateFactory;

    spacestation = spaceshipFactory[0]->spaceShipFactoryMethod("Spacestation");
    fleet.push_back(spacestation);

    int lpCount = 0;
    while (lpCount < number){
        int select;
        string nameSelect;
        cout << "Enter type of spaceship you want to create:" << endl;
        cout << "1: Battleship" << endl;
        cout << "2: Exploration Vessel" << endl;
        cout << "3: Fighter Transporter" << endl;
        cout << "4: Frigate" << endl;
        cin >> select;

        if (select < 1 || select > 4){
            cout << "Please reenter your selection" << endl;
            continue;
        }


        cout << "Enter spaceship name" << endl;
        cin >> nameSelect;

        switch(select){
            case 1:
                fleet.push_back(spaceshipFactory[1]->spaceShipFactoryMethod(nameSelect));
                break;
            case 2:
                fleet.push_back(spaceshipFactory[2]->spaceShipFactoryMethod(nameSelect));
                break;
            case 3:
                fleet.push_back(spaceshipFactory[3]->spaceShipFactoryMethod(nameSelect));
                break;
            case 4:
                fleet.push_back(spaceshipFactory[4]->spaceShipFactoryMethod(nameSelect));
                break;
        }

        lpCount++;
    }

}

void Facade::createPeople(int number){

    PeopleFactory** pf = new PeopleFactory*[8];
    pf[0] = new CommanderOfTheFleetFactory;
    pf[1] = new NavigatorFactory;
    pf[2] = new FighterFactory;
    pf[3] = new EngineerFactory;
    pf[4] = new CaptainFactory;
    pf[5] = new CommsFactory;
    pf[6] = new DoctorFactory;
    pf[7] = new CheifEngineerFactory;

    commanderOfFleet = pf[0]->create();
    people.push_back(commanderOfFleet);

    int lpCount = 0;

    while (lpCount < number){
        int select;
        
        cout << "Enter type of person you want to create: "<<endl;
        cout << "1: Navigator" << endl;
        cout << "2: Fighter" << endl;
        cout << "3: Engineer" << endl;
        cout << "4: Captain" << endl;
        cout << "5: Comms" << endl;
        cout << "6: Doctor" << endl;
        cout << "7: Chief Engineer" << endl;

        if (select < 1 || select > 7){
            cout << "Selection incorrect" << endl;
            continue;
        }
        People* temp;
        switch (select){
            case 1:
                temp = pf[1]->create();
                people.push_back(temp);
                peopleTracker.push_back(temp);
                break;
            case 2:
                temp = pf[2]->create();
                people.push_back(temp);
                peopleTracker.push_back(temp);
                break;
            case 3:
                temp = pf[3]->create();
                people.push_back(temp);
                peopleTracker.push_back(temp);
                break;
            case 4:
                temp = pf[4]->create();
                people.push_back(temp);
                peopleTracker.push_back(temp);
                break;
            case 5:
                temp = pf[5]->create();
                people.push_back(temp);
                peopleTracker.push_back(temp);
                break;
            case 6:
                temp = pf[6]->create();
                people.push_back(temp);
                peopleTracker.push_back(temp);
                break;
            case 7:
                temp = pf[7]->create();
                people.push_back(temp);
                peopleTracker.push_back(temp);
                break;
        }
        lpCount++;
    }
}

Spaceship* Facade::getSpaceshipWithName(string name){
    vector<Spaceship*>::iterator it = fleet.begin();

    for (it = fleet.begin(); it != fleet.end(); ++it){
        if ((*it)->getName() == name){
            return *it;
        }
    }
    return nullptr;

}

vector<People*> Facade::getPeopleOnShip(Spaceship* s){
    return s->getPeople();
}

void Facade::sendErrorMessageToShip(People* person, string message){
    person->sendErrorMessage(message);
}

People* Facade::getDoctorOnShip(Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();
    vector<People*>::iterator it;

    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == "doctor"){
            return (*it);
        }
    }
    return nullptr;
}

People* Facade::getEngineerOnShip(Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();
    vector<People*>::iterator it;

    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == "engineer"){
            return (*it);
        }
    }
    return nullptr;
}

People* Facade::getCommsOnShip(Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();
    vector<People*>::iterator it;

    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == "comms"){
            return (*it);
        }
    }
    return nullptr;
}

People* Facade::getChiefEngineerOnShip(Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();
    vector<People*>::iterator it;

    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == "doctor"){
            return (*it);
        }
    }
    return nullptr;
}

People* Facade::getFighterOnShip(Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();
    vector<People*>::iterator it;

    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == "fighter"){
            return (*it);
        }
    }
    return nullptr;
}

People* Facade::getNavigatorOnShip(Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();
    vector<People*>::iterator it;

    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == "navigator"){
            return (*it);
        }
    }
    return nullptr;
}

People* Facade::getCaptainOnShip(Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();
    vector<People*>::iterator it;

    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == "captain"){
            return (*it);
        }
    }
    return nullptr;
}

void Facade::logMessage(Spaceship* spaceship, string message){
    spaceship->addLog(message);
}

void Facade::beginBoarding(int number, Spaceship* spaceship){
    int lpCount = 0;

    while (lpCount < number){
        int select;
        cout << "Enter type of person you want to board the ship: "<< endl;
        cout << "1: Navigator" << endl;
        cout << "2: Fighter" << endl;
        cout << "3: Engineer" << endl;
        cout << "4: Captain" << endl;
        cout << "5: Comms" << endl;
        cout << "6: Doctor" << endl;
        cout << "7: Chief Engineer" << endl;
        cin >> select;
        string type = "";

        if (select < 1 || select > 7){
            cout << "Invalid selection" << endl;
            continue;
        }

        switch(select){
            case 1:
                type = "navigator";
                break;
            case 2:
                type = "fighter";
                break;
            case 3:
                type = "engineer";
                break;
            case 4:
                type = "captain";
                break;
            case 5:
                type = "comms";
                break;
            case 6:
                type = "doctor";
                break;
            case 7:
                type = "chiefengineer";
                break;
        }

        bool found = false;
        vector<People*>::iterator it;

        for (it = peopleTracker.begin(); it != peopleTracker.end(); ++it){
            if ((*it)->getType() == type){
                found = true;
                boardPersonToShip((*it), spaceship);
            }
        }
        if (found == false){
            cout << "There are no more people of " << type << " available" << endl;
            continue;
        }

        if (peopleTracker.empty()){
            cout << "There are no more people available to be loaded" << endl;
            break;
        }
        
        lpCount++;
    }

}

void Facade::boardPersonToShip(People* person, Spaceship* spaceship){
    vector<People*>::iterator it = find(peopleTracker.begin(), peopleTracker.end(), person);
    if (it != peopleTracker.end()){
        spaceship->addPassenger(*it);
        peopleTracker.erase(it);
        cout << "Person boarded successfully" << endl;
    }
}

void Facade::removeTypeFromShip(string type, Spaceship* spaceship){
    vector<People*> temp = spaceship->getPeople();

    vector<People*>::iterator it;
    bool found = false;
    for (it = temp.begin(); it != temp.end(); ++it){
        if ((*it)->getType() == type){
            found = true;
            spaceship->removePassenger((*it));
            peopleTracker.push_back(*it);
            return;
        }
    }
    cout << "That type of person is not aboard the specified ship" << endl;
}

void Facade::increaseThreat() {
    spacestation->increaseThreatLevel();
}

void Facade::decreaseThreat() {
    spacestation->decreaseThreatLevel();
}

void Facade::printThreat() {
    spacestation->printThreatLevel();
}

void Facade::printCaptainsLog(Spaceship* spaceship){
    spaceship->printCaptainsLog();
}

void Facade::selectStrategy(Spaceship* spaceship, Strategy* strat){
    spaceship->selectStrategy(strat);
}

void Facade::executeStrategy(Spaceship* spaceship){
    spaceship->executeStrategy();
}

void Facade::doCommand(string type, Spaceship* spaceship){
    People* t = CommanderOfTheFleet::instance();
    t->beginCommand(type, spaceship);
}

void Facade::createPlanets(int number){
    int lpCount = 0;

    while (lpCount < number){
        string tempString = "" + lpCount;
        Planet* temp = new Planet(tempString);
        planets->enqueue(temp);
    }
}

Planet* Facade::popPlanet() {
    return planets->dequeue();
}

void Facade::visitPlanetWithSpaceship(Spaceship* spaceship, Planet* plan){
    plan->accept(spaceship);
}