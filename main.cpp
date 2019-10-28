#include "Armory.h"
#include "Battleship.h"
#include "BattleshipFactory.h"
#include "Bridge.h"
#include "Captain.h"
#include "ChiefEngineer.h"
#include "CommanderOfTheFleet.h"
#include "Comms.h"
#include "Critter.h"
#include "Doctor.h"
#include "ExplorationVessel.h"
#include "Engineer.h"
#include "ExplorationVesselFactory.h"
#include "Fighter.h"
#include "FighterBay.h"
#include "FighterTransporter.h"
#include "FighterTransporterFactory.h"
#include "Frigate.h"
#include "FrigateFactory.h"
#include "LevelOne.h"
#include "LevelTwo.h"
#include "LevelThree.h"
#include "Navigator.h"
#include "People.h"
#include "PeopleFactory.h"
#include "SickBay.h"
#include "SleepingQuarters.h"
#include "Spaceship.h"
#include "SpaceshipDecorator.h"
#include "SpaceshipFactory.h"
#include "SpaceshipTransporter.h"
#include "SpaceshipTransporterFactory.h"
#include "Spacestation.h"
#include "SpaceStationFactory.h"
#include "ThreatLevel.h"
#include "TransportBay.h"
#include "State.h"
#include "CaptainsLog.h"
#include "Memento.h"
#include "Planet.h"
#include "PeopleFactory.h"
#include "CaptainFactory.h"
#include "ChiefEngineerFactory.h"
#include "DoctorFactory.h"
#include "EngineerFactory.h"
#include "FighterFactory.h"
#include "RefuelStation.h"
#include "MiningStrategy.h"
#include "TradingStrategy.h"
#include "NavigatorFactory.h"
#include "Facade.h"
#include "Retreat.h"
#include "MiningStrategy.h"


int main () {

    Facade* f = new Facade();

    f->createFleet(2);
    f->increaseThreat();
    f->printThreat();
    f->createPeople(3);
    cout << "****BOARDING SHIP *****" << endl;
    f->beginBoarding(3,f->getSpaceshipWithName());
    cout << "*****BOARDING COMPLETE" << endl;
    cout << "********CAPTAINS LOG" << endl;
    f->printCaptainsLog(f->getSpaceshipWithName());
    cout << "****DONE CAPTAINS LOG" << endl;
    f->createPlanets(2);

    Planet* temp = f->popPlanet();
    cout << "*****VISITNG PLANET" << endl;
    f->visitPlanetWithSpaceship(f->getSpaceshipWithName(), temp);
    cout << "*******STRATEGY " << endl;
    f->selectStrategy(f->getSpaceshipWithName(), new MiningStrategy());
    f->executeStrategy(f->getSpaceshipWithName());
    cout << "******DONE WITH STRATEGY" << endl;

    cout << "*****DO COMMAND" << endl;
    f->doCommand("retreat", f->getSpaceshipWithName());
    cout << "****DONE WITH COMMAND" << endl;

    return 0;
}