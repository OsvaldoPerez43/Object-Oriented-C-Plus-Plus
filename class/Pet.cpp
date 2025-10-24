#include <iostream>
#include <string>
#include "Pet.h"

Pet::Pet(){
    name = "unkown";
    age = 0;
    owner = "unknown";
    isHouseTrained = false;
}

Pet::Pet(string name, int age, string owner, bool isHouseTrained){
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

void Pet::updateName(string new_name){
    name = new_name;
}

void Pet::setHouseTrained(){
    if(isHouseTrained){
        isHouseTrained = true;
    }else{
        isHouseTrained = false;
    }
}

bool Pet::getIsHouseTrained() const {
    return isHouseTrained;
}

void Pet::updateAge(){
    age++;
}

string Pet::getName() const{
    return name;
}

int Pet::getAge() const{
    return age;
}

void Pet::updateOwner(string adopter){
    owner = adopter;
}

string Pet::getOwner() const{
    return owner;
}


