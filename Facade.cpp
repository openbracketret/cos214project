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

Facade::Facade(){

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

        switch (select){
            case 1:
                people.push_back(pf[1]->create());
                break;
            case 2:
                people.push_back(pf[2]->create());
                break;
            case 3:
                people.push_back(pf[3]->create());
                break;
            case 4:
                people.push_back(pf[4]->create());
                break;
            case 5:
                people.push_back(pf[5]->create());
                break;
            case 6:
                people.push_back(pf[6]->create());
                break;
            case 7:
                people.push_back(pf[7]->create());
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

    
}