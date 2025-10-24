//Pet.h
#ifndef Pet_H
#define Pet_H

#include <string>

using namespace std;

class Pet{
    public:
        Pet();
        Pet(string name, int age, string owner, bool isHouseTrained);

        void updateName(string new_name);
        void updateAge();
        void updateOwner(string adopter);
        void setHouseTrained();


        string getName() const;
        int getAge() const;
        string getOwner() const;
        bool getIsHouseTrained() const;

    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained;

};


#endif