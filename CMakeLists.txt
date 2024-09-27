cmake_minimum_required(VERSION 3.29)
project(Intern)

set(CMAKE_CXX_STANDARD 20)

add_executable(Intern src/main.cpp
        src/BasicOperations/ArithmeticOperators.h
        src/BasicOperations/ArithmeticOperators.cpp
        src/BasicOperations/LogicalOperators.h
        src/BasicOperations/LogicalOperators.cpp
        src/BasicOperations/Loop.h
        src/BasicOperations/Loop.cpp
        src/BasicOperations/StatementOperator.h
        src/BasicOperations/StatemendOperator.cpp
        src/BasicOperations/UserInput.h
        src/BasicOperations/UserInput.cpp
)
