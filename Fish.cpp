#include "Fish.h"
#include <iostream>

Fish::Fish(std::string name, int age, char gender, bool isSaltwater)
    : Animal(name, age, gender), isSaltwater(isSaltwater)
{
}

void Fish::eat() const
{
    std::cout << "Fish " << name << " is eating.\n";
}

void Fish::makeSound() const
{
    std::cout << "Fish " << name << " is making a sound.\n";
}

bool Fish::getIsSaltwater() const
{
    return isSaltwater;
}

void Fish::setIsSaltwater(bool isSaltwater)
{
    this->isSaltwater = isSaltwater;
}
