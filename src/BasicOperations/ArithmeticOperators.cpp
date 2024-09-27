#include "ArithmeticOperators.h"
#include <iostream>

// Integer number
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int modulo(int a, int b) {
    return a / b;
}

// Double number
double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double division(double a, double b) {
    return a / b;
}

double multiplication(double a, double b) {
    return a * b;
}


#include <cstdio>

void ArithmeticOperators() {
    int a = 6;
    int b = 10;
    double c = 12.5;
    double d = 33.33;

    // Integer numbers
    // Addition
    printf("%d + %d = %d\n", a, b, addition(a, b));

    // Subtraction
    printf("%d - %d = %d\n", a, b, subtraction(a, b));

    // Multiplication
    printf("%d * %d = %d\n", a, b, multiplication(a, b));

    // Division
    printf("%d / %d = %d\n", b, a, division(b, a));

    // Modulus
    printf("%d %% %d = %d\n", b, a, modulo(b, a));  // Lưu ý %% để in ra dấu %

    // Real number
    // Addition
    printf("%.2f + %.2f = %.2f\n", c, d, addition(c, d));

    // Subtraction
    printf("%.2f - %.2f = %.2f\n", d, c, subtraction(d, c));

    // Multiplication
    printf("%.2f * %.2f = %.2f\n", c, d, multiplication(c, d));

    // Division
    printf("%.2f / %.2f = %.2f\n", c, d, division(c, d));
}