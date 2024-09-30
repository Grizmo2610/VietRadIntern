#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string major;
    double gpa;

public:
    Student(int id, string name, int age, string major, double gpa);

    void setId(int id);
    void setName(string name);
    void setAge(int age);
    void setMajor(string major);
    void setGpa(double gpa);

    int getId();
    string getName();
    int getAge();
    string getMajor();
    double getGpa();


    string toString();
};

#endif // STUDENT_H
