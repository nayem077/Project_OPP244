#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal {
protected:
    bool isSaltwater;
public:
    Fish(std::string name, int age, char gender, bool isSaltwater);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    bool getIsSaltwater() const;
    void setIsSaltwater(bool isSaltwater);
};

#endif // FISH_H
