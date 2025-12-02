//main.cpp
#include <iostream>
#include "RPG.h"
#include "Game.h"
#include "Game.cpp"


using namespace std;

int main(){
Game myGame;

int num_players = 10;
myGame.generatePLayers(num_players);

/*
myGame.gameLoop();
*/

while(live_players.size()>1){
        battleRound();
    }

myGame.printFinalResults();

    return 0;
}