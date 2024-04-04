#include <iostream>
#include "Amphibian.h"
#include "Animal.h"
#include "Arthropod.h"
#include "Bird.h"
#include "Fish.h"
#include "Insect.h"
#include "Mammal.h"
#include "Reptile.h"

int main() {
    // Creating instances of each class and testing their functionality
    Amphibian frog("Frog", 2, 'M', true);
    frog.eat();
    frog.makeSound();
    std::cout << std::endl;

  //  Animal genericAnimal("Generic Animal", 5, 'F');
  //  genericAnimal.eat();
   // std::cout << std::endl;

    Arthropod spider("Spider", 1, 'M', 8);
    spider.eat();
    spider.makeSound();
    std::cout << std::endl;

    Bird eagle("Eagle", 10, 'M', true);
    eagle.eat();
    eagle.makeSound();
    std::cout << std::endl;

    Fish salmon("Salmon", 3, 'F', true);
    salmon.eat();
    salmon.makeSound();
    std::cout << std::endl;

    Insect bee("Bee", 1, 'F', true);
    bee.eat();
    bee.makeSound();
    std::cout << std::endl;

    Mammal lion("Lion", 7, 'M', true);
    lion.eat();
    lion.makeSound();
    std::cout << std::endl;

    Reptile snake("Snake", 4, 'F', true);
    snake.eat();
    snake.makeSound();
    std::cout << std::endl;

    return 0;
}
