//main.cpp
#include <iostream>
#include "RPG.h"

using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(),p1.getExp(),p1.getLevel());

    //Print the same for p2
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(),p2.getExp(),p2.getLevel());

    //Call sethitstaken(new_hit) on either p1 and p2
    p2.setHitsTaken(MAX_HITS_TAKEN);

    cout << "\nP2 hits taken ";
    cout << p2.getHitsTaken() << endl;
    //Print out the hits_taken

    cout << "0 is dead, 1 is alive\n";
    //Call isAlive() on both p1 and p2

    cout << "P1: " << p1.isAlive() << "\n";
    cout << "P2: " << p2.isAlive() << "\n";

    return 0;
}