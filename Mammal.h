#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
protected:
    bool hasFur;
public:
    Mammal(std::string name, int age, char gender, bool hasFur);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    bool getHasFur() const;
    void setHasFur(bool hasFur);
};

#endif // MAMMAL_H
