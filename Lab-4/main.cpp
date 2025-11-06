//main.cpp
#include <iostream>
#include "RPG.h"
#include "Game.h"


using namespace std;

int main(){
Game myGame;
int num_players = 10;
myGame.generatePLayers(num_players);

myGame.gameLoop();

myGame.printFinalResults();

    return 0;
}