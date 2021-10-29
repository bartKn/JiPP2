#ifndef MATRICES_LIB_H
#define MATRICES_LIB_H

#include <iostream>

using namespace std;

void help();
double** makeDoubleMatrix(int rows, int cols);
int** makeIntMatrix(int rows, int cols);
void deleteMatrix(double** matrix, int rows);
void deleteMatrix(int** matrix, int rows);
void printMatrix(double** matrix, int rows, int cols);
void printMatrix(int** matrix, int rows, int cols);
void getValues(double** matrix, int rows, int cols);
void getValues(int** matrix, int rows, int cols);

double** addMatrix(double** matrixA, double** matrixB, int rows, int cols);
int** addMatrix(int** matrixA, int** matrixB, int rows, int cols);
double** subtractMatrix(double** matrixA, double** matrixB, int rows, int cols);
int** subtractMatrix(int** matrixA, int** matrixB, int rows, int cols);
double** multiplyMatrix(double** matrixA, double** matrixB, int rowsA, int colsA, int colsB);
int** multiplyMatrix(int** matrixA, int** matrixB, int rowsA, int colsA, int colsB);
double** multiplyByScalar(double** matrix, int rows, int cols, double scalar);
int** multiplyByScalar(int** matrix, int rows, int cols, int scalar);
double** transpozeMatrix(double** matrix, int rows, int cols);
int** transpozeMatrix(int** matrix, int rows, int cols);
double** powerMatrix(double** matrix, int rows, int cols, unsigned int exponent);
int** powerMatrix(int** matrix, int rows, int cols, unsigned int exponent);
double determinantMatrix(double** matrix, int rows, int cols);
int determinantMatrix(int** matrix, int rows, int cols);
void getCofactor(double** matrix, double** tempMatrix, int p, int q, int n);
void getCofactor(int** matrix, int** tempMAtrix, int p, int q, int n);
bool matrixIsDiagonal(double** matrix, int rows, int cols);
bool matrixIsDiagonal(int** matrix, int rows, int cols);
void swap(double& num1, double& num2);
void swap(int& num1, int& num2);
double* sortRow(double* array, int size);
int* sortRow(int* array, int size);
double** sortRowsInMatrix(double** matrix, int rows, int cols);
int** sortRowsInMatrix(int** matrix, int rows, int cols);

#endif
