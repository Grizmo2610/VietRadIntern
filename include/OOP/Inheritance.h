#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    void makeSound();
};

class Dog : public Animal {
public:
    void makeSound();
};

#endif // ANIMAL_H
