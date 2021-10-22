#include <iostream>
#include <ctime>

using namespace std;

int randomNum(int bottom, int top) {
    return rand() % (top + 1 - bottom) + bottom;
}

int findMax(int* arr, int size) {
    int max = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void swapArr(int* arr, int size) {
    int buffer;
    int lastIndex = size - 1;
    for (int i = 0; i < size / 2; ++i) {
        buffer = arr[i];
        arr[i] = arr[lastIndex];
        arr[lastIndex] = buffer;
        lastIndex -= 1;
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(nullptr));
    int size = 10;
    int* arr;
    arr = new int [size];
    for (int i = 0; i < size; ++i) {
        arr[i] = randomNum(0, 100);
    }
    printArr(arr, size);
    cout << endl;
    cout << "max = " << findMax(arr, size) << endl;
    cout << "swap" << endl;
    swapArr(arr, size);
    printArr(arr, size);
    delete[] arr;

    return 0;
}


