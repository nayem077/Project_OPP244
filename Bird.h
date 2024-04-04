#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
protected:
    double wingspan;
public:
    Bird(std::string name, int age, char gender, double wingspan);
    void eat() const override;
    void makeSound() const override;
    // Getters and setters
    double getWingspan() const;
    void setWingspan(double wingspan);
};

#endif // BIRD_H
