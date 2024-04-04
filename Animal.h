#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string name;
    int age;
    char gender;
public:
    Animal(std::string name, int age, char gender);
    virtual void eat() const = 0;
    virtual void makeSound() const = 0;
    virtual ~Animal() = default;
    // Getters and setters
    std::string getName() const;
    void setName(std::string name);
    int getAge() const;
    void setAge(int age);
    char getGender() const;
    void setGender(char gender);
};

#endif // ANIMAL_H
