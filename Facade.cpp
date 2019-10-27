#include "Facade.h"
#include "SpaceshipFactory.h"
#include "FrigateFactory.h"
#include "BattleshipFactory.h"
#include "FighterTransporterFactory.h"
#include "SpaceStationFactory.h"
#include "ExplorationVesselFactory.h"
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
                fleet.push_back(spaceshipFactory[2]->spaceShipFactoryMethod(nameSelect));
                break;
            case 4:
                fleet.push_back(spaceshipFactory[2]->spaceShipFactoryMethod(nameSelect));
                break;
        }

        lpCount++;
    }

}