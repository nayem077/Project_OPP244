#include "Eagle.h"
#include <iostream>

Eagle::Eagle(std::string name, int age, char gender, bool isPredator) 
    : Bird(name, age, gender, wingspan), isPredator(isPredator) {}

void Eagle::eat() const {
    std::cout << "Eagle " << name << " is eating.\n";
}

void Eagle::makeSound() const {
    std::cout << "Eagle " << name << " is making a sound.\n";
}

bool Eagle::getIsPredator() const {
    return isPredator;
}

void Eagle::setIsPredator(bool isPredator) {
    this->isPredator = isPredator;
}
