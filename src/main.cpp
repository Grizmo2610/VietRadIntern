#include <iostream>
#include "BasicOperations/ArithmeticOperators.h"
#include "BasicOperations/LogicalOperators.h"
#include "BasicOperations/Loop.h"
#include "BasicOperations/StatementOperator.h"
#include "BasicOperations/UserInput.h"
using namespace std;



int main() {
    cout << "Arithmetic Operators"<< endl;
    ArithmeticOperators();

    cout << "_________________" <<endl;

    cout << "logical Operators" <<endl;
    logicalOperators();

    cout << "________________" <<endl;

    cout << "Loop" <<endl;
    loop();

    cout << "________________" <<endl;
    statementOperator();

    cout << "________________" <<endl;
    userInput();
    return 0;
}
