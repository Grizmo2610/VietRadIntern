#include <iostream>
#include "LogicalOperators.h"

int max(int a, int b) {
    if (a > b) {
        return a;
    }return a;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }return b;
}

int abs(int number) {
    if (number < 0) {
        return number * -1;
    }return number;
}

bool inRange(int a, int b, double x, bool bound) {
    if (bound == true){
        return 1.0 * a <= x and x <= 1.0 * b;
    }return 1.0 * a < x and x < 1.0 *b;
}

void logicalOperators() {
    int a = 5;
    int b = 10;
    printf("max(%d, %d) = %d\n", a, b, max(a, b));
    printf("min(%d, %d) = %d\n", a, b, min(a, b));

    double firstNumber = 5.5;
    double secondNumber = 4.0;
    double thirdNumber = 5.0;
    double fourthNumber = 10.1;

    printf("%.2f is %s range (%d, %d)\n", firstNumber, !inRange(a, b, firstNumber, false) ? "not in" : "in", a, b);
    printf("%.2f is %s range (%d, %d)\n", secondNumber, !inRange(a, b, secondNumber, false) ? "not in" : "in", a, b);
    printf("%.2f is %s range (%d, %d)\n", thirdNumber, !inRange(a, b, thirdNumber, true) ? "not in" : "in", a, b);
    printf("%.2f is %s range (%d, %d)\n", fourthNumber, !inRange(a, b, fourthNumber, true) ? "not in" : "in", a, b);
}
