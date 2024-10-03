#include <iostream>
#include "Student.h"
#include "Encapsulation.h"
#include "Inheritance.h"
#include "Polymorphism.h"
#include "Abstraction.h"
void objectAndClass() {
    Student student1(123, "John Doe", 20, "Computer Science", 3.8);

    cout << student1.toString();

    student1.setGpa(3.9);
    cout << "Updated GPA: " << student1.getGpa() << endl;
}

void encapsulation() {
    Person p1("Alice", 30);
    std::cout << "Name: " << p1.getName() << ", Age: " << p1.getAge() << std::endl;
}

void inheritance() {
    Dog dog;
    dog.makeSound();
}

void playSound(Animal* a) {
    a->makeSound();
}

void abstraction() {
    Shape* shape;

    Circle circle;
    Square square;

    shape = &circle;
    shape->draw();  // Vẽ hình tròn

    shape = &square;
    shape->draw();  // Vẽ hình vuông
}

int main() {
    cout << "=====Test Object and Class=====" << endl;
    objectAndClass();
    cout << "_________________________" << endl;

    cout << "\n=====Test Encapsulation======" << endl;
    encapsulation();
    cout << "_________________________" << endl;

    cout << "\n=====Test Inheritance=====" << endl;
    inheritance();
    cout << "_________________________" << endl;

    cout << "\n=====Test Abtractio=====" << endl;
    abstraction();
    cout << "_________________________" << endl;
    return 0;
}
