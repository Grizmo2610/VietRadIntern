# include <iostream>
# include "Loop.h"
# include "ArithmeticOperators.h"
# include "UserInput.h"

using namespace std;

void userInput() {
    int a, b;
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter Second Number:";
    cin >> b;
    printf("%d + %d = %d", a, b, addition(a, b));

    cout << endl;
    cout << "Numbers from " << a << " to " << b << endl;
    printNumberInRange(a, b);
}