#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string n, int a);
    std::string getName();
    void setName(std::string n);
    int getAge();
};

#endif // PERSON_H
