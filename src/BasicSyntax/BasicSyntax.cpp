#include <iostream>
#include <string>
using namespace std;

void hello(const string& name) {
    cout << "Hello " << name << endl;
}

int main() {
    // hello("'Grizmo'");
    // hello("Hoang Tu");
    cout << "Hello World!" << endl;

    int age = 21;
    double gpa = 4.0;
    string name = "Grizmo";
    char grade = 'A';
    bool gender = true; // true is male, false is female

    cout << "Hello everyone, my name is: " << name << endl;
    cout << "I\'m a student at VNU Hanoi University of Science" << endl;
    if (gender) {
        cout << "I'm a boy" << endl;
    }else {
        cout << "I'm a girl" << endl;
    }
    cout << "My GPA is: " << gpa << endl;
    cout << "Which is a " << grade << " type student" << endl;
    return 0;
}
