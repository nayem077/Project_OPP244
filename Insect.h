#ifndef INSECT_H
#define INSECT_H

#include "Animal.h"

class Insect : public Animal {
protected:
    bool hasWings;
public:
    Insect(std::string name, int age, char gender, bool hasWings);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    bool getHasWings() const;
    void setHasWings(bool hasWings);
};

#endif // INSECT_H
