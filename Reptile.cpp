#include "Reptile.h"
#include <iostream>

Reptile::Reptile(std::string name, int age, char gender, bool isColdBlooded)
    : Animal(name, age, gender), isColdBlooded(isColdBlooded) {}

void Reptile::eat() const {
    std::cout << "Reptile " << name << " is eating.\n";
}

void Reptile::makeSound() const {
    std::cout << "Reptile " << name << " is making a sound.\n";
}

bool Reptile::getIsColdBlooded() const {
    return isColdBlooded;
}

void Reptile::setIsColdBlooded(bool isColdBlooded) {
    this->isColdBlooded = isColdBlooded;
}
