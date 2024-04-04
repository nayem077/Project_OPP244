#include "Bird.h"
#include <iostream>

Bird::Bird(std::string name, int age, char gender, double wingspan)
    : Animal(name, age, gender), wingspan(wingspan) {}

void Bird::eat() const {
    std::cout << "Bird " << name << " is eating.\n";
}

void Bird::makeSound() const {
    std::cout << "Bird " << name << " is making a sound.\n";
}

double Bird::getWingspan() const {
    return wingspan;
}

void Bird::setWingspan(double wingspan) {
    this->wingspan = wingspan;
}
