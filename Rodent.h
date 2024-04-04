#ifndef RODENT_H
#define RODENT_H

#include "Mammal.h"

class Rodent : public Mammal {
protected:
    bool isDomesticated;
public:
    Rodent(std::string name, int age, char gender, bool hasFur, bool isDomesticated);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    bool getIsDomesticated() const;
    void setIsDomesticated(bool isDomesticated);
};

#endif // RODENT_H
