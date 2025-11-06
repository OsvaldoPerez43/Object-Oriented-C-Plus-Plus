//game.h
#ifndef GAME_H
#define GAME_H

#include "RPG.h"
#include <set>
#include <vector>
#include <iostream>

using namespace std;

class Game {
    public: 
        Game();

        void generatePLayers(int);
        int selectPlayer();
        void endRound(RPG *winner, RPG *loser, int loserindex);
        void battleRound();
        void gameLoop();
        void printFinalResults();
        ~Game();
    private:
        vector<RPG*> players;
        set<int> live_players;



};

#endif