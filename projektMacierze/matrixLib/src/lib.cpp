#include "lib.h"


// instrukcja wypisywana po podaniu blednych wartosci lub po wyborze "help" jako parametru
void help() {
    cout << "Dzialanie wybieramy podajac jego nazwe jako parametr funkcji main\n"
            "Dostepne opcje to:\n"
            "addMatrix - dodawanie macierzy\n"
            "subtractMatrix - odejmowanie macierzy\n"
            "multiplyMatrix - mnozenie macierzy\n"
            "multiplyByScalar - mnozenie macierzy przez skalar\n"
            "transpozeMatrix - transponowanie macierzy\n"
            "powerMatrix - podnoszenie macierzy do potegi - wymagany dodatkowy parametr - wartosc wykladnika\n"
            "determinantMatrix - obliczanie wyznacznika macierzy\n"
            "matrixIsDiagonal - sprawdzenie czy macierz jest diagonalna\n"
            "swap - zamiana wartosci dwoch liczb\n"
            "sortRow - sortowanie tablicy jednowymiarowej\n"
            "sortRowsInMatrix - sortowanie rosnace wierszy macierzy\n\n"
            "Pierwszy krok to wybranie typu danych ktore trafia do macierzy,\n"
            "wyboru dokonujemy wpisujac \"int\" lub \"double\","
            "nastepnie podajemy wymiary macierzy - dodatnie liczby calkowite.\n\n"
            "Kolejny krok to wprowadzenie danych do macierzy, sa one wczytywane wierszami.\n\n";
    exit(0);
}

double** makeDoubleMatrix(int rows, int cols) {
    double** matrix;
    matrix = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[cols];
    }
    return matrix;
}

int** makeIntMatrix(int rows, int cols) {
    int** matrix;
    matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

void deleteMatrix(double** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void printMatrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void getValues(double** matrix, int rows, int cols) {
    double input;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "[" << i << "][" << j << "] = ";
            if (cin >> input) {
                matrix[i][j] = input;
            } else {
                cout << "Wprowadzono niepoprawna wartosc!" << endl;
                exit(0);
            }
        }
    }
}

void getValues(int** matrix, int rows, int cols) {
    int input;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "[" << i << "][" << j << "] = ";
            if (cin >> input) {
                matrix[i][j] = input;
            } else {
                cout << "Wprowadzono niepoprawna wartosc!" << endl;
                exit(0);
            }
        }
    }
}


//dodawanie macierzy
double** addMatrix(double** matrixA, double** matrixB, int rows, int cols) {
    double** resultMatrix;
    resultMatrix = makeDoubleMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return resultMatrix;
}

int** addMatrix(int** matrixA, int** matrixB, int rows, int cols) {
    int** resultMatrix;
    resultMatrix = makeIntMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return resultMatrix;
}



//odejmowanie macierzy
double** subtractMatrix(double** matrixA, double** matrixB, int rows, int cols) {
    double** resultMatrix;
    resultMatrix = makeDoubleMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return resultMatrix;
}

int** subtractMatrix(int** matrixA, int** matrixB, int rows, int cols) {
    int** resultMatrix;
    resultMatrix = makeIntMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return resultMatrix;
}

//mnożenie macierzy
double** multiplyMatrix(double** matrixA, double** matrixB, int rowsA, int colsA, int colsB) {
    double** resultMatrix;
    resultMatrix = makeDoubleMatrix(rowsA, colsB);

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return resultMatrix;
}

int** multiplyMatrix(int** matrixA, int** matrixB, int rowsA, int colsA, int colsB) {
    int** resultMatrix;
    resultMatrix = makeIntMatrix(rowsA, colsB);

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return resultMatrix;
}

//mnożenie macierzy przez skalar
double** multiplyByScalar(double** matrix, int rows, int cols, double scalar) {
    double** resultMatrix;
    resultMatrix = makeDoubleMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrix[i][j] * scalar;
        }
    }
    return resultMatrix;
}

int** multiplyByScalar(int** matrix, int rows, int cols, int scalar) {
    int** resultMatrix;
    resultMatrix = makeIntMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrix[i][j] * scalar;
        }
    }
    return resultMatrix;
}

//transponowanie macierzy
double** transpozeMatrix(double** matrix, int rows, int cols) {
    double** resultMatrix;
    resultMatrix = makeDoubleMatrix(cols, rows);

    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            resultMatrix[i][j] = matrix[j][i];
        }
    }
    return resultMatrix;
}

int** transpozeMatrix(int** matrix, int rows, int cols) {
    int** resultMatrix;
    resultMatrix = makeIntMatrix(cols, rows);

    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            resultMatrix[i][j] = matrix[j][i];
        }
    }
    return resultMatrix;
}

//podnoszenie macierzy do potęgi
double** powerMatrix(double** matrix, int rows, int cols, unsigned int exponent) {
    double** resultMatrix;
    resultMatrix = makeDoubleMatrix(rows, cols);

    if (exponent == 0) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == j) {
                    resultMatrix[i][j] = 1;
                } else {
                    resultMatrix[i][j] = 0;
                }
            }
        }
        return resultMatrix;
    } else if (exponent == 1) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                resultMatrix[i][j] = matrix[i][j];
            }
        }
        return resultMatrix;
    } else {
        resultMatrix = multiplyMatrix(matrix, matrix, rows, cols, cols);
        exponent -= 1;
        while (exponent > 1) {
            resultMatrix = multiplyMatrix(matrix, resultMatrix, rows, cols, cols);
            exponent -= 1;
        }
        return resultMatrix;
    }
}

int** powerMatrix(int** matrix, int rows, int cols, unsigned int exponent) {
    int** resultMatrix;
    resultMatrix = makeIntMatrix(rows, cols);

    if (exponent == 0) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == j) {
                    resultMatrix[i][j] = 1;
                } else {
                    resultMatrix[i][j] = 0;
                }
            }
        }
        return resultMatrix;
    } else if (exponent == 1) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                resultMatrix[i][j] = matrix[i][j];
            }
        }
        return resultMatrix;
    } else {
        resultMatrix = multiplyMatrix(matrix, matrix, rows, cols, cols);
        exponent -= 1;
        while (exponent > 1) {
            resultMatrix = multiplyMatrix(matrix, resultMatrix, rows, cols, cols);
            exponent -= 1;
        }
        return resultMatrix;
    }
}

//wyznacznik macierzy

void getCofactor(double** matrix, double** tempMatrix, int p, int q, int n) {
    int i = 0;
    int j = 0;

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (row != p && col != q) {
                tempMatrix[i][j++] = matrix[row][col];

                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

double determinantMatrix(double** matrix, int rows, int cols) {
    double determinant = 0;

    if (rows == 1) {
        return matrix[0][0];
    }

    double** tempMatrix;
    tempMatrix = makeDoubleMatrix(rows, cols);

    int sign = 1;

    for (int i = 0; i < rows; ++i) {
        getCofactor(matrix, tempMatrix, 0, i, rows);
        determinant += sign * matrix[0][i] * determinantMatrix(tempMatrix, rows - 1, cols - 1);
        sign = -sign;
    }

    return determinant;
}


void getCofactor(int** matrix, int** tempMatrix, int p, int q, int n) {
    int i = 0;
    int j = 0;

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (row != p && col != q) {
                tempMatrix[i][j++] = matrix[row][col];

                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}


int determinantMatrix(int** matrix, int rows, int cols) {
    int determinant = 0;

    if (rows == 1) {
        return matrix[0][0];
    }

    int** tempMatrix;
    tempMatrix = makeIntMatrix(rows, cols);

    int sign = 1;

    for (int i = 0; i < rows; ++i) {
        getCofactor(matrix, tempMatrix, 0, i, rows);
        determinant += sign * matrix[0][i] * determinantMatrix(tempMatrix, rows - 1, cols - 1);
        sign = -sign;
    }

    return determinant;
}

//czy diagonalna
bool matrixIsDiagonal(double** matrix, int rows, int cols) {
    bool isDiagonal = true;
    if (rows != cols) {
        isDiagonal = false;
    } else {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == j) continue;
                else if (matrix[i][j] != 0) {
                    isDiagonal = false;
                    break;
                }
            }
        }
    }
    return isDiagonal;
}

bool matrixIsDiagonal(int** matrix, int rows, int cols) {
    bool isDiagonal = true;
    if (rows != cols) {
        isDiagonal = false;
    } else {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == j) continue;
                else if (matrix[i][j] != 0) {
                    isDiagonal = false;
                    break;
                }
            }
        }
    }
    return isDiagonal;
}

//swap
void swap(double & num1, double & num2) {
    double temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap(int & num1, int & num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

//sortowanie bąbelkowe
double* sortRow(double* array, int size) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < size - 1; ++i) {
            if (array[i] > array[i+1]) {
                swap(array[i], array[i+1]);
                swapped = true;
            }
        }
    } while (swapped);

    double* resultArr;
    resultArr = new double[size];

    for (int i = 0; i < size; ++i) {
        resultArr[i] = array[i];
    }
    return resultArr;
}

int* sortRow(int* array, int size) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < size - 1; ++i) {
            if (array[i] > array[i+1]) {
                swap(array[i], array[i+1]);
                swapped = true;
            }
        }
    } while (swapped);

    int* resultArr;
    resultArr = new int[size];

    for (int i = 0; i < size; ++i) {
        resultArr[i] = array[i];
    }
    return resultArr;
}

//sortowanie wierszym macierzy
double** sortRowsInMatrix(double** matrix, int rows, int cols) {
    double** resultMatrix;
    resultMatrix = makeDoubleMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        resultMatrix[i] = sortRow(matrix[i], cols);
    }
    return resultMatrix;
}

int** sortRowsInMatrix(int** matrix, int rows, int cols) {
    int** resultMatrix;
    resultMatrix = makeIntMatrix(rows, cols);

    for (int i = 0; i < rows; ++i) {
        resultMatrix[i] = sortRow(matrix[i], cols);
    }
    return resultMatrix;
}

