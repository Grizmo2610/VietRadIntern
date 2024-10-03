#include <iostream>
#include "Inheritance.h"

void Animal::makeSound() {
    std::cout << "Animal makes a sound." << std::endl;
}

void Dog::makeSound() {
    std::cout << "Dog barks." << std::endl;
}
