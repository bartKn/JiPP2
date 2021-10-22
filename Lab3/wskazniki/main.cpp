#include <iostream>

using namespace std;

void average(int* ptrx, int* ptry) {
    cout << "srednia: " << ((double)*ptrx + (double)*ptry) / 2 << endl;
}

void printGreaterThan0(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void sortWithPointers(int* a, int* b, int* c) {
    int aBuffer = *a;
    int bBuffer = *b;
    int cBuffer = *c;

    if (*a < *b) {
        if (*a < *c) {
            if (*b < *c) {
                *a = aBuffer;
                *b = bBuffer;
                *c = cBuffer;
            } else {
                *b = cBuffer;
                *c = bBuffer;
            }
        } else {
            *a = cBuffer;
            *b = aBuffer;
            *c = bBuffer;
        }
    } else {
        if (*a > *c) {
            if (*b > *c) {
                *a = cBuffer;
                *b = bBuffer;
                *c = aBuffer;
            } else {
                *a = bBuffer;
                *b = cBuffer;
                *c = aBuffer;
            }
        } else {
            *a = bBuffer;
            *b = aBuffer;
        }
    }
}

void swapWithPointer(int x, int* w) {
    *w = x;
}

void zadanie1() {
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    int* ptrx;
    int* ptry;
    ptrx = &x;
    ptry = &y;
    average(ptrx, ptry);
}

void zadanie2() {
    int size = 5;
    int* arr;
    arr = new int [size];
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". = ";
        cin >> arr[i];
    }
    printGreaterThan0(arr, size);
    delete[] arr;
}

void zadanie3() {
    int a = 5;
    int b = 1;
    int c = 3;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl << "sort" << endl;
    sortWithPointers(&a, &b, &c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

void zadanie4() {
    int x = 5;
    int y = 3;
    cout << "x = " << x << endl;
    cout << "value at " << &y << " = " << y << endl;
    cout << "put x at " << &y << endl;
    swapWithPointer(x, &y);
    cout << "value at " << &y << " = " << y << endl;
}

int main() {
    //zadanie1();
    //zadanie2();
    //zadanie3();
    zadanie4();
    return 0;
}


