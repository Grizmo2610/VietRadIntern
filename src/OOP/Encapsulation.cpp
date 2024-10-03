#include "Encapsulation.h"

Person::Person(std::string n, int a) : name(n), age(a) {}

std::string Person::getName() {
    return name;
}

void Person::setName(std::string n) {
    name = n;
}

int Person::getAge() {
    return age;
}
