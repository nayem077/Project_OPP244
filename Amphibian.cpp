#include "Amphibian.h"
#include <iostream>

Amphibian::Amphibian(std::string name, int age, char gender, bool isAquatic)
    : Animal(name, age, gender), isAquatic(isAquatic) {}

void Amphibian::eat() const {
    std::cout << "Amphibian " << name << " is eating.\n";
}

void Amphibian::makeSound() const {
    std::cout << "Amphibian " << name << " is making a sound.\n";
}

bool Amphibian::getIsAquatic() const {
    return isAquatic;
}

void Amphibian::setIsAquatic(bool isAquatic) {
    this->isAquatic = isAquatic;
}
