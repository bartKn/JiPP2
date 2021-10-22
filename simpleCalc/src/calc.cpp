#include "calc.h"
#include <iostream>

using namespace std;

void printHelp() {
    cout << "Simple calculator\n"
            "simpleCalc [nazwa działania]\n"
            "\n"
            "Działania:\n"
            "add [a] [b]\n"
            "   Dodawanie dwóch liczb ([a] i [b]) całkowitych.\n"
            "subtract [a] [b]\n"
            "   Odejmowanie dwóch liczb ([a] i [b]) całkowitych.\n"
            "volume [a] [b] [h1] [h2]\n"
            "   Obliczenie objętości graniastosłupa mającego w podstawie trapez  o podstawach [a] [b] i wysokości [h1]\n"
            "   oraz o wysokości graniastosłupa [h2].\n"
            "help\n"
            "   Wyświetlenie dokumentacji\n";
}

void add(int a, int b, int num) {
    if (num != 4) {
        cout << "Niewłaściwa ilość parametrów\n";
        printHelp();
    } else {
        cout << a << " + " << b << " = " << a + b <<  endl;
    }
}

void subtract(int a, int b, int num) {
    if (num != 4) {
        cout << "Niewłaściwa ilość parametrów\n";
        printHelp();
    } else {
        cout << a << " - " << b << " = " << a - b <<  endl;
    }
}

void volume(float a, float b, float h1, float h2, int num) {
    if (num != 6) {
        cout << "Niewłaściwa ilość parametrów\n";
        printHelp();
    } else {
        cout << "v = " << ((a + b) * h1) / 2 * h2 << endl;
    }
}

