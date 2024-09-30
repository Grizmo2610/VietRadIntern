#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v, bool forEach = true){
    if (forEach) {
        for (int number: v) {
            cout << number << " ";
        }
    }else {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
}

vector<int> append(vector<int>& v, int number) {
    v.push_back(number);
    return v;
}

void vectorTest() {
    cout << "=====VECTOR=====" <<endl;
    cout << "Testing vector operations" << endl;
    vector<int> v = {1, 2, 3, 4, 5};
    printVector(v);

    cout <<"__________________" <<endl;
}