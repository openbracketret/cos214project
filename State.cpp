#include "State.h"

State::State(vector<Spaceship*> s){
    for (int i=0; i<s.size(); i++) 
        ships.push_back(s[i]); 
}

State::~State(){
    for(int i=0;i<ships.size();i++){
        delete ships[i];
        ships.erase(ships.begin());
    }
}