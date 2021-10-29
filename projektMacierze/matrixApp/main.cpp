#include <iostream>
#include <string>
#include "lib.h"

using namespace std;

bool isNumber(const string& str);
void getDimensions(int* rows, int* cols, const string& matrixNum);

int main(int argc, char *argv[]) {
    if (argc == 1) help();
    string userInput(argv[1]);

    string dataTypeChoice;

    if (userInput != "help") {
        cout << "Wybierz typ danych znajdujacych sie w macierzy int / double" << endl << "> ";
        if (!(cin >> dataTypeChoice)) {
            cout << "Wprowadzona wartosc jest niepoprawna!";
            exit(0);
        }
    }

    int rowsA = 0, rowsB = 0, colsA = 0, colsB = 0;

    if (userInput == "addMatrix") {
        getDimensions(&rowsA, &colsA, " ");
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);
            int** matrixB = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci dla pierwszej macierzy" << endl;
            getValues(matrixA, rowsA, colsA);
            cout << "Podaj wartosci dla drugiej macierzy" << endl;
            getValues(matrixB, rowsA, colsA);

            cout << "Pierwsza wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);
            cout << endl << "Druga wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            int** resultMatrix = addMatrix(matrixA, matrixB, rowsA, colsA);

            cout << endl << "Po dodaniu" << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(matrixB, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);
            double** matrixB = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci dla pierwszej macierzy" << endl;
            getValues(matrixA, rowsA, colsA);
            cout << "Podaj wartosci dla drugiej macierzy" << endl;
            getValues(matrixB, rowsA, colsA);

            cout << "Pierwsza wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);
            cout << endl << "Druga wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            double** resultMatrix = addMatrix(matrixA, matrixB, rowsA, colsA);

            cout << endl << "Po dodaniu" << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(matrixB, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }


    } else if (userInput == "subtractMatrix") {
        getDimensions(&rowsA, &colsA, " ");
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);
            int** matrixB = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci dla pierwszej macierzy" << endl;
            getValues(matrixA, rowsA, colsA);
            cout << "Podaj wartosci dla drugiej macierzy" << endl;
            getValues(matrixB, rowsA, colsA);

            cout << "Pierwsza wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);
            cout << endl << "Druga wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            int** resultMatrix = subtractMatrix(matrixA, matrixB, rowsA, colsA);

            cout << endl << "Po odjeciu" << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(matrixB, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);
            double** matrixB = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci dla pierwszej macierzy" << endl;
            getValues(matrixA, rowsA, colsA);
            cout << "Podaj wartosci dla drugiej macierzy" << endl;
            getValues(matrixB, rowsA, colsA);

            cout << "Pierwsza wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);
            cout << endl << "Druga wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            double** resultMatrix = subtractMatrix(matrixA, matrixB, rowsA, colsA);

            cout << endl << "Po odjeciu" << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(matrixB, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }

    } else if (userInput == "multiplyMatrix") {
        getDimensions(&rowsA, &colsA, " pierwszej ");
        getDimensions(&rowsB, &colsB, " drugiej ");
        if (colsA != rowsB) {
            cout << "Liczba kolumn pierwszej macierzy musi byc rowna liczbie wierszy drugiej macierzy!" << endl;
            exit(0);
        }
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);
            int** matrixB = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci dla pierwszej macierzy" << endl;
            getValues(matrixA, rowsA, colsA);
            cout << "Podaj wartosci dla drugiej macierzy" << endl;
            getValues(matrixB, rowsA, colsA);

            cout << "Pierwsza wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);
            cout << endl << "Druga wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            int** resultMatrix = multiplyMatrix(matrixA, matrixB, rowsA, colsA, colsB);

            cout << endl << "Po pomnozeniu" << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(matrixB, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);
            double** matrixB = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci dla pierwszej macierzy" << endl;
            getValues(matrixA, rowsA, colsA);
            cout << "Podaj wartosci dla drugiej macierzy" << endl;
            getValues(matrixB, rowsA, colsA);

            cout << "Pierwsza wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);
            cout << endl << "Druga wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            double** resultMatrix = multiplyMatrix(matrixA, matrixB, rowsA, colsA, colsB);

            cout << endl << "Po pomnozeniu" << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(matrixB, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }

    } else if (userInput == "multiplyByScalar") {
        getDimensions(&rowsA, &colsA, " ");
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int scalar;
            cout << "Podaj wartosc skalara: ";
            if (!(cin >> scalar)) {
                cout << "Podano nieprawidlowa wartosc!";
                exit(0);
            }
            int** matrixA = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            int** resultMatrix = multiplyByScalar(matrixA, rowsA, colsA, scalar);

            cout << endl << "Po pomnozeniu przez " << scalar << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double scalar;
            cout << "Podaj wartosc skalara: ";
            if (!(cin >> scalar)) {
                cout << "Podano nieprawidlowa wartosc!";
                exit(0);
            }
            double** matrixA = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            double** resultMatrix = multiplyByScalar(matrixA, rowsA, colsA, scalar);

            cout << endl << "Po pomnozeniu przez " << scalar << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    } else if (userInput == "transpozeMatrix") {
        getDimensions(&rowsA, &colsA, " ");
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            int** resultMatrix = transpozeMatrix(matrixA, rowsA, colsA);
            cout << endl << "Macierz po transponowaniu:" << endl;
            printMatrix(resultMatrix, colsA, rowsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            double** resultMatrix = transpozeMatrix(matrixA, rowsA, colsA);
            cout << endl << "Macierz po transponowaniu:" << endl;
            printMatrix(resultMatrix, colsA, rowsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    } else if (userInput == "powerMatrix") {
        unsigned int exponent = 0;
        if (argc > 2) {
            string secondInput = argv[2];
            if (isNumber(secondInput)) {
                exponent = stoi(secondInput);
            } else {
                cout << "Wprowadzono bledny parametr!" << endl;
                help();
            }
        } else {
            cout << "Wprowadzono bledny parametr!" << endl;
            help();
        }

        getDimensions(&rowsA, &colsA, " ");
        if (rowsA != colsA) {
            cout << "Potegowac mozna tylko macierze kwadratowe!" << endl;
            exit(0);
        }
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            cout << endl << "Po podniesieniu do " << exponent << " potegi:" << endl;
            int** resultMatrix = powerMatrix(matrixA, rowsA, colsA, exponent);
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            cout << endl << "Po podniesieniu do " << exponent << " potegi:" << endl;
            double** resultMatrix = powerMatrix(matrixA, rowsA, colsA, exponent);
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
            deleteMatrix(resultMatrix, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    } else if (userInput == "determinantMatrix") {
        getDimensions(&rowsA, &colsA, " ");
        if (rowsA != colsA) {
            cout << "Aby policzyc wyznacznik, macierz musi byc kwadratowa!" << endl;
            exit(0);
        }
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            int determinant;
            determinant = determinantMatrix(matrixA, rowsA, colsA);
            cout << endl << "Wyznacznik tej macierzy = " << determinant << endl;

            deleteMatrix(matrixA, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            double determinant;
            determinant = determinantMatrix(matrixA, rowsA, colsA);
            cout << endl << "Wyznacznik tej macierzy = " << determinant << endl;

            deleteMatrix(matrixA, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    }  else if (userInput == "matrixIsDiagonal") {
        getDimensions(&rowsA, &colsA, " ");
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            bool isDiagonal;
            isDiagonal = matrixIsDiagonal(matrixA, rowsA, colsA);
            if (isDiagonal) cout << endl << "Macierz jest diagonalna" << endl;
            else cout << endl << "Macierz nie jest diagonalna" << endl;

            deleteMatrix(matrixA, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            bool isDiagonal;
            isDiagonal = matrixIsDiagonal(matrixA, rowsA, colsA);
            if (isDiagonal) cout << endl << "Macierz jest diagonalna" << endl;
            else cout << endl << "Macierz nie jest diagonalna" << endl;

            deleteMatrix(matrixA, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    } else if (userInput == "swap") {
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int a, b;
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "Po zamianie" << endl;
            swap(a, b);
            cout << "a = " << a << endl << "b = " << b << endl;
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double a, b;
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "Po zamianie" << endl;
            swap(a, b);
            cout << "a = " << a << endl << "b = " << b << endl;
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    } else if (userInput == "sortRow") {
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int size;
            cout << "Rozmiar tablicy: ";
            cin >> size;
            int* array;
            array = new int[size];
            for (int i = 0; i < size; ++i) {
                cout << i + 1 << ". = ";
                cin >> array[i];
            }

            int* resultArray = sortRow(array, size);
            cout << "Po posortowaniu" << endl;
            for (int i = 0; i < size; ++i) {
                cout << resultArray[i] << " ";
            }
            cout << endl;
            delete[] array;
            delete[] resultArray;
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            int size;
            cout << "Rozmiar tablicy: ";
            cin >> size;
            double *array;
            array = new double[size];
            for (int i = 0; i < size; ++i) {
                cout << i + 1 << ". = ";
                cin >> array[i];
            }

            double *resultArray = sortRow(array, size);
            cout << "Po posortowaniu" << endl;
            for (int i = 0; i < size; ++i) {
                cout << resultArray[i] << " ";
            }
            cout << endl;
            delete[] array;
            delete[] resultArray;
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    } else if (userInput == "sortRowsInMatrix") {
        getDimensions(&rowsA, &colsA, " ");
        if (dataTypeChoice == "int" || dataTypeChoice == "i") {
            int** matrixA = makeIntMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            int** resultMatrix = sortRowsInMatrix(matrixA, rowsA, colsA);
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
        } else if (dataTypeChoice == "double" || dataTypeChoice == "d") {
            double** matrixA = makeDoubleMatrix(rowsA, colsA);

            cout << "Podaj wartosci znajdujace sie w macierzy" << endl;
            getValues(matrixA, rowsA, colsA);

            cout << "Wprowadzona macierz:" << endl;
            printMatrix(matrixA, rowsA, colsA);

            double** resultMatrix = sortRowsInMatrix(matrixA, rowsA, colsA);
            cout << "Macierz po posortowaniu" << endl;
            printMatrix(resultMatrix, rowsA, colsA);

            deleteMatrix(matrixA, rowsA);
        } else {
            cout << "Blad przy wyborze typu danych!";
            help();
        }
    } else if (userInput == "help") {
        help();
    } else {
        cout << "Wprowadzony parametr jest bledny!" << endl;
        help();
    }
}

bool isNumber(const string& str) {
    for (char i : str) {
        if (isdigit(i) == false) return false;
    }
    return true;
}

void getDimensions(int* rows, int* cols, const string& matrixNum) {
    string input;
    cout << "Ilosc wierszy" << matrixNum << "macierzy = ";
    cin >> input;
    if (isNumber(input)) {
        *rows = stoi(input);
        input.clear();
    } else {
        cout << "Wymiary musza byc liczbami naturalnymi!" << endl;
        exit(0);
    }

    cout << "Ilosc kolumn" << matrixNum << "macierzy = ";
    cin >> input;
    if (isNumber(input)) {
        *cols = stoi(input);
        input.clear();
    } else {
        cout << "Wymiary musza byc liczbami naturalnymi!" << endl;
        exit(0);
    }
    if (*rows < 1 || *cols < 1) {
        cout << "Wprowadzono niepoprawne wartosci!" << endl;
        help();
    }
}




