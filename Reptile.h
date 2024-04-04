#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
protected:
    bool isColdBlooded;
public:
    Reptile(std::string name, int age, char gender, bool isColdBlooded);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    bool getIsColdBlooded() const;
    void setIsColdBlooded(bool isColdBlooded);
};

#endif // REPTILE_H
