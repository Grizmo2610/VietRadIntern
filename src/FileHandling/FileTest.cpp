#include <iostream>

#include "WritingFile.h"
using namespace std;

void test_writing() {
    string filename = "C:/HoangTu/Programing/C/VietRad/Intern/test.txt";
    string content = "Hello I am Grizmo.\nI am a student";
    writeContent(filename, content);
}

void test_reading() {
    string filename = "C:/HoangTu/Programing/C/VietRad/Intern/test.txt";
    string content = readContent(filename);
    cout << content << endl;
}

int main() {
    cout << "=====TEST WRITING FILE=====" << endl;
    test_writing();
    cout << "---------------------------" << endl;

    cout << "=====TEST READING FILE=====" << endl;
    test_reading();
    cout << "---------------------------" << endl;
    return 0;
}