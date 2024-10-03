#include "IteratorTest.h"
#include <vector>
#include <iostream>
using namespace std;

void printArray(int* arr, int size) {
    int* begin = arr;
    int* end = arr + size;
    for (int* i = begin; i != end; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

void printVector(vector<int>& vec) {
    for (vector<int>::const_iterator  it = vec.cbegin(); it != vec.cend(); it++) {
        cout << *it << " ";
    }

    std::cout << std::endl;
}


void iteratorTest() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Test array" << endl;
    printArray(arr, 10);

    vector<int> myVector = {10, 20, 30, 40, 50};
    cout << "Test array" << endl;
    printVector(myVector);
}