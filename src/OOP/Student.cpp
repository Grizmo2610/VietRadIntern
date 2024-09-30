#include "Student.h"

Student::Student(int id, string name, int age, string major, double gpa) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->major = major;
    this->gpa = gpa;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setName(string name) {
    this->name = name;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setMajor(string major) {
    this->major = major;
}

void Student::setGpa(double gpa) {
    this->gpa = gpa;
}

int Student::getId() {
    return this->id;
}

string Student::getName() {
    return this->name;
}

int Student::getAge() {
    return this->age;
}

string Student::getMajor() {
    return this->major;
}

double Student::getGpa() {
    return this->gpa;
}

string Student::toString() {
    return name + "(" + to_string(id) + ") - age: " + to_string(age) + ", gpa: " + to_string(gpa) + "\n";
}
