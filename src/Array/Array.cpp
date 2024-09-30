#include <iostream>
#include "Array1D.h"
#include "Matrix.h"
using namespace std;

int main() {
    cout << "===ARRAY=====" << endl;
    int size = (rand() % 100 + 1) / 2;
    int* arr = new int[size];
    randomArray(arr, size);

    cout << "Size of array: " << size << endl;
    cout << "__________________" <<endl;

    cout << "Print array: " << endl;
    printArray(arr, size);
    cout << "__________________" <<endl;

    printf("Max in array is: %d\n", maxInArray(arr, size));
    cout << "__________________" <<endl;

    printf("Min in array is: %d\n", minInArray(arr, size));
    cout << "__________________" <<endl;

    printf("Sum array is: %d\n", sumArray(arr, size));
    cout << "__________________" <<endl;

    cout << "Sort array" << endl;
    sortArray(arr, size);
    printArray(arr, size);
    cout << "__________________" <<endl;

    delete[] arr;

    cout << "=====MATRIX=====" << endl;
    int r = rand() % 10 + 2, c = rand() % 10 + 2;
    int **matrix1 = new int *[r]; // Tạo mảng con trỏ
    for (int i = 0; i < r; ++i) {
        matrix1[i] = new int[c];
    }

    printf("Size of matrix: (r, c) = (%d, %d)\n", r, c);
    cout << "__________________" <<endl;

    cout << "Print matrix: " << endl;
    randomMatrix(matrix1, r, c);
    printMatrix(matrix1, r, c);

    int **matrix2 = new int *[r];
    for (int i = 0; i < r; ++i) {
        matrix2[i] = new int[c];
    }
    randomMatrix(matrix2, r, c);
    printf("Size of matrix2: (r, c) = (%d, %d)\n", r, c);
    cout << "__________________" <<endl;

    cout << "Print matrix2: " << endl;
    printMatrix(matrix2, r, c);
    cout << "__________________" <<endl;

    int** additionMatrix = addMatrix(matrix1, matrix2, r, c);
    cout << "Addition matrix of matrix 1 and 2:" << endl;
    printMatrix(additionMatrix, r, c);
    cout << "__________________" <<endl;

    int** subtractionMatrix = subMatrix(matrix1, matrix2, r, c);
    cout << "Subtraction matrix of matrix 1 and 2:" << endl;
    printMatrix(additionMatrix, r, c);
    cout << "__________________" <<endl;


    int** transposedMatrix = transpose(matrix1, r, c);
    cout<<"Transpose matrix of matrix 1:"<<endl;
    printMatrix(transposedMatrix, c, r);

    freeMatrix(matrix1, r);
    freeMatrix(matrix2, r);
    return 0;
}
