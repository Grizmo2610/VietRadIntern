#include <iostream>
#include "Polymorphism.h"

namespace Polymorphism {
    void Animal::makeSound() {
        std::cout << "Animal makes a sound." << std::endl;
    }

    void Dog::makeSound() {
        std::cout << "Dog barks." << std::endl;
    }

    void Polymorphism::Cat::makeSound() {
        std::cout << "Cat meows." << std::endl;
    }
}
