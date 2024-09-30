#include <iostream>
#include "ArithmeticOperators.h"
#include "LogicalOperators.h"
#include "Loop.h"
#include "StatementOperator.h"
#include "UserInput.h"

using namespace std;

int main(){
    cout << "=====BASIC OPERATIONS=====" << endl;

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