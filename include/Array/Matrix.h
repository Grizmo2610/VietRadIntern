#ifndef MATRIX_H
#define MATRIX_H

void randomMatrix(int** matrix, int r, int c);

void printMatrix(int** matrix, int r, int c);

int** addMatrix(int** matrix1, int** matrix2, int r, int c);

int** subMatrix(int** matrix1, int** matrix2, int r, int c);

void freeMatrix(int** matrix, int r);

int** transpose(int** matrix, int r, int c);
#endif //MATRIX_H
