#include <iostream>
#include "Student.h"

void objectAndClass() {
    Student student1(123, "John Doe", 20, "Computer Science", 3.8);

    cout << student1.toString();

    student1.setGpa(3.9);
    cout << "Updated GPA: " << student1.getGpa() << endl;
}

int main() {
    objectAndClass();

    return 0;
}
