#ifndef EAGLE_H
#define EAGLE_H

#include "Bird.h"

class Eagle : public Bird {
public:
    Eagle(std::string name, int age, char gender, bool isPredator);

    void eat() const override;
    void makeSound() const override;

    bool getIsPredator() const;
    void setIsPredator(bool isPredator);

private:
    bool isPredator;
};

#endif // EAGLE_H
