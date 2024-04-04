#include "Arthropod.h"
#include <iostream>

Arthropod::Arthropod(std::string name, int age, char gender, int numberOfLegs)
    : Animal(name, age, gender), numberOfLegs(numberOfLegs) {}

void Arthropod::eat() const {
    std::cout << "Arthropod " << name << " is eating.\n";
}

void Arthropod::makeSound() const {
    std::cout << "Arthropod " << name << " is making a sound.\n";
}

int Arthropod::getNumberOfLegs() const {
    return numberOfLegs;
}

void Arthropod::setNumberOfLegs(int numberOfLegs) {
    this->numberOfLegs = numberOfLegs;
}
