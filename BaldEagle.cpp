#include "BaldEagle.h"
#include <iostream>

BaldEagle::BaldEagle(std::string name, int age, char gender, bool isPredator, bool isEndangered)
    : Eagle(name, age, gender, isPredator), isEndangered(isEndangered) {}

void BaldEagle::eat() const {
    std::cout << "Bald Eagle " << name << " is eating.\n";
}

void BaldEagle::makeSound() const {
    std::cout << "Bald Eagle " << name << " is making a sound.\n";
}

bool BaldEagle::getIsEndangered() const {
    return isEndangered;
}

void BaldEagle::setIsEndangered(bool isEndangered) {
    this->isEndangered = isEndangered;
}
