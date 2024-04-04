#include "Rodent.h"
#include <iostream>

Rodent::Rodent(std::string name, int age, char gender, bool hasFur, bool isDomesticated)
    : Mammal(name, age, gender, hasFur), isDomesticated(isDomesticated) {}

void Rodent::eat() const {
    std::cout << "Rodent " << name << " is eating.\n";
}

void Rodent::makeSound() const {
    std::cout << "Rodent " << name << " is making a sound.\n";
}

bool Rodent::getIsDomesticated() const {
    return isDomesticated;
}

void Rodent::setIsDomesticated(bool isDomesticated) {
    this->isDomesticated = isDomesticated;
}
