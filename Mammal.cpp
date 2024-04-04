#include "Mammal.h"
#include <iostream>

Mammal::Mammal(std::string name, int age, char gender, bool hasFur)
    : Animal(name, age, gender), hasFur(hasFur) {}

void Mammal::eat() const {
    std::cout << "Mammal " << name << " is eating.\n";
}

void Mammal::makeSound() const {
    std::cout << "Mammal " << name << " is making a sound.\n";
}

bool Mammal::getHasFur() const {
    return hasFur;
}

void Mammal::setHasFur(bool hasFur) {
    this->hasFur = hasFur;
}
