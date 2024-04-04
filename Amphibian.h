#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H

#include "Animal.h"

class Amphibian : public Animal {
protected:
    bool isAquatic;
public:
    Amphibian(std::string name, int age, char gender, bool isAquatic);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    bool getIsAquatic() const;
    void setIsAquatic(bool isAquatic);
};

#endif // AMPHIBIAN_H
