#ifndef ANIMAL_H
#define ANIMAL_H

namespace Polymorphism{
    class Animal {
    public:
        virtual void makeSound();
    };

    class Dog : public Animal {
    public:
        void makeSound() override;
    };

        class Cat : public Animal {
        public:
            void makeSound() override;
        };
}


#endif // ANIMAL_H
