#include "Animal.h"

Animal::Animal(std::string name, int age, char gender)
    : name(name), age(age), gender(gender) {}

std::string Animal::getName() const {
    return name;
}

void Animal::setName(std::string name) {
    this->name = name;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int age) {
    this->age = age;
}

char Animal::getGender() const {
    return gender;
}

void Animal::setGender(char gender) {
    this->gender = gender;
}

