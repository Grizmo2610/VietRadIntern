#include <iostream>
#include "Loop.h"

#include <math.h>
#include <valarray>

using namespace std;

void printOddNumber(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void printNumberInRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void printCollatz(int number) {
    int n = number;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }else {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
    cout << endl;
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }return true;
}

void printNumber(int bound, int number) {
    for (int i = 0; i < bound; i++) {
        if (i == number) {
            break;
        }
        cout << i << " ";
    }
    cout << endl;
}

void printContinue(int bound, int number) {
    for (int i = 0; i < bound; i++) {
        if (i == number) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
}

void loop() {
    int a = 10, b = 200;
    printf("Print numbers from %d to %d\n", a, b);
    printNumberInRange(a, b);

    printf("Print odd numbers from %d to %d\n", a, b);
    printOddNumber(a, b);

    int number = 234554;
    printf("Print collatz from %d \n", number);
    printCollatz(number);

    int num = 2413;
    printf("%d %s prime number\n",  num, isPrime(num) ? "is" : "is not");

    int bound = 10;
    int breakNumber = 4;
    printf("Print numbers from 0 to %d in range (0; %d)\n", breakNumber, bound);
    printNumber(bound, breakNumber);

    int continueNumber = 5;
    printf("Print numbers from 0 to %d and not print %d\n", bound, breakNumber);
    printContinue(bound, continueNumber);

}