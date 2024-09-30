cmake_minimum_required(VERSION 3.29)
project(Intern)

set(CMAKE_CXX_STANDARD 20)

include_directories(include/Array
                    include/BasicOperations
                    include/OOP
                    include/DSA
                    include/Exception
)

add_executable(BasicOperations
        src/BasicOperations/ArithmeticOperators.cpp
        src/BasicOperations/LogicalOperations.cpp
        src/BasicOperations/Loop.cpp
        src/BasicOperations/StatementOperator.cpp
        src/BasicOperations/UserInput.cpp
        src/BasicOperations/BasicOperations.cpp
)

add_executable(Array
        src/Array/array.cpp
        src/Array/Array1D.cpp
        src/Array/Matrix.cpp
)

add_executable(OOP
        src/OOP/OOPTest.cpp
        src/OOP/Student.cpp
)

add_executable(DSA
        src/DSA/DSA.cpp
        src/DSA/VectorTest.cpp
        src/DSA/AlgorithmImplentation.cpp
        src/DSA/BST.cpp
        src/DSA/BSTTest.cpp
)

add_executable(Leetcode
        src/Leetcode/main.cpp
)

add_executable(Exception
        src/Exception/ExceptionTest.cpp
)

file(GLOB SOURCES "src/*.cpp")