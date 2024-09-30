#include <cstdio>
#include <iostream>

using namespace std;
void randomMatrix(int** matrix, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

void printMatrix(int** matrix, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%02d", matrix[i][j]);
            if (j < c - 1) {
                cout << " ";
            }
        }
        if (i < r - 1) {
            cout << "\n";
        }
    }
    cout << endl;
}

int** addMatrix(int** matrix1, int** matrix2, int r, int c) {
    int** result = new int*[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return result;
}

int** subMatrix(int** matrix1, int** matrix2, int r, int c) {
    int** result = new int*[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    return result;
}

int** transpose(int** matrix, int r, int c){
    int** transposed = new int*[c];
    for (int i = 0; i < c; i++) {
        transposed[i] = new int[r];
    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }
    return transposed;
}

void freeMatrix(int** matrix, int r) {
    for (int i = 0; i < r; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

