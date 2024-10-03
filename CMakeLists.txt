cmake_minimum_required(VERSION 3.29)
project(Intern)

set(CMAKE_CXX_STANDARD 20)
enable_testing()

file(GLOB SOURCES "src/*.cpp")

target_link_libraries(OpenCV ${OpenCV_LIBS})
find_package(OpenCV REQUIRED)

include_directories(include/Array
        include/BasicOperations
        include/OOP
        include/DSA
        include/Exception
        include/File
        include/StandardLibrary
        ${OpenCV_INCLUDE_DIRS}
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
        src/OOP/Encapsulation.cpp
        src/OOP/Inheritance.cpp
        src/OOP/Polymorphism.cpp
        src/OOP/Abstraction.cpp
)

add_executable(DSA
        src/DSA/DSA.cpp
        src/DSA/VectorTest.cpp
        src/DSA/AlgorithmImplementation.cpp
        src/DSA/BST.cpp
        src/DSA/BSTTest.cpp
)

add_executable(Leetcode
        src/Leetcode/main.cpp
)

add_executable(Exception
        src/Exception/ExceptionTest.cpp
)

add_executable(File
        src/FileHandling/FileTest.cpp
        src/FileHandling/File.cpp
)

add_executable(STL
        src/StandardLibrary/IteratorTest.cpp
        src/StandardLibrary/STLTest.cpp
        src/StandardLibrary/STLTest.cpp
)

add_executable(OpenCV src/OpenCV/main.cpp)
