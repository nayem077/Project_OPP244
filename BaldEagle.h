#ifndef BALDEAGLE_H
#define BALDEAGLE_H

#include "Eagle.h"

class BaldEagle : public Eagle {
public:
    BaldEagle(std::string name, int age, char gender, bool isPredator, bool isEndangered);

    void eat() const override;
    void makeSound() const override;

    bool getIsEndangered() const;
    void setIsEndangered(bool isEndangered);

private:
    bool isEndangered;
};

#endif // BALDEAGLE_H
