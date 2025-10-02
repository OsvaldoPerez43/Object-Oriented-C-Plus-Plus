#include "RPG.h"

//Overload constructor
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

//default construcotr
RPG::RPG(){
    name="NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50;
    level = 1;

}

// accesor funnctions
string RPG::getName() const{
    return name;
}

int RPG::getHitsTaken() const{
    return hits_taken;
}

float RPG::getLuck() const{
    return luck;
}

float RPG::getExp() const{
    return exp;
}

int RPG::getLevel() const{
    return level;
}

/*
* @brief sets hits_taken to new_hits
*/

void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

/*
* @brief returns wether hits_taken is less than MAX_HITS_TAKEN
* In other words, a player is alive as long as they have not been hits MAX_HITS_TAKEN times.
*
* @return true: player is alive
* @return false: player is unalive
*/

bool RPG::isAlive() const{
    return hits_taken < MAX_HITS_TAKEN;
}