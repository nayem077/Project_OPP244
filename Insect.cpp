#include "Insect.h"
#include <iostream>

Insect::Insect(std::string name, int age, char gender, bool hasWings)
    : Animal(name, age, gender), hasWings(hasWings) {}

void Insect::eat() const {
    std::cout << "Insect " << name << " is eating.\n";
}

void Insect::makeSound() const {
    std::cout << "Insect " << name << " is making a sound.\n";
}

bool Insect::getHasWings() const {
    return hasWings;
}

void Insect::setHasWings(bool hasWings) {
    this->hasWings = hasWings;
}
