//main.cpp
#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

int main(){

    cout <<"Pet:\n";
    Pet unknown = Pet();
    cout << unknown.getName() << endl;
    cout << unknown.getAge() << endl;
    cout<< unknown.getOwner() << endl;
    cout << unknown.getIsHouseTrained() << endl;

    cout << "Pet: \n";

    Pet dog = Pet("Daisy", 10,"Bob",true);
    cout <<"\n";
    cout << "Dog's age: " << dog.getAge() << endl;

    cout << "Dog's name: " << dog.getName() << endl;

    cout <<"Dog's Owner: " << dog.getOwner() << endl;

    dog.setHouseTrained();
    cout << "Dog is house trained: " << (dog.getIsHouseTrained()? "Yes" : "No") << endl;
    cout << "\n";

    cout << "Dog change: \n";
    dog.updateName("Leo");
    dog.updateAge();
    dog.updateOwner("Chris");
    dog.setHouseTrained();

        cout <<"\n";

    cout << "Dog's age: " << dog.getAge() << endl;
    cout << "Dog's name: " << dog.getName() << endl;
    cout <<"Dog's Owner: " << dog.getOwner() << endl;
    dog.setHouseTrained();
    cout << "Dog is house trained: " << (dog.getIsHouseTrained()? "Yes" : "No") << endl;
}

