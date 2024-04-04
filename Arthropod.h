#ifndef ARTHROPOD_H
#define ARTHROPOD_H

#include "Animal.h"

class Arthropod : public Animal {
protected:
    int numberOfLegs;
public:
    Arthropod(std::string name, int age, char gender, int numberOfLegs);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    int getNumberOfLegs() const;
    void setNumberOfLegs(int numberOfLegs);
};

#endif // ARTHROPOD_H
