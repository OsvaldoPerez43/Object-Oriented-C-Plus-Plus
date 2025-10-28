#ifndef CHARMANDER_H
#define CHARMANDER_H

#include <string>
#include <vector>
using namespace std;
#include "Pokemon.h"

class Charmander : public Pokemon{
    public:
        //constructor
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);
        //mutator functions
        void speak()/*overide*/;
        void printStats()/*overide*/;
    private:
        vector<string> skills;
        string name;
        int hp;
        int att;
        int defense;


};

#endif
