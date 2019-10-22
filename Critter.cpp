#include "Critter.h"

#include <cstdlib>
#include <ctime>

using namespace std;


Critter::Critter() {

    srand((unsigned)time(0));
    affinity = (rand()%100)+1;
    srand((unsigned)time(0));
    resources = ((rand()%1000))+1;
    name = resources;
    captured = false;
    health = 100;

}

bool Critter::isAngry() {
    if (affinity < 50){
        return true;
    } else {
        return false;
    }
}

int Critter::stealResources() {
    if (captured == false){
        affinity = 0;
        return -1;
    } else {
        int ret = resources;
        resources = 0;
        return ret;
    }
}