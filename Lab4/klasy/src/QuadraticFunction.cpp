#include <iostream>
#include "../header/QuadraticFunction.h"

using namespace std;

void QuadraticFunction::setA(int a) {
    this->a = a;
}

void QuadraticFunction::setB(int b) {
    this->b = b;
}

void QuadraticFunction::setC(int c) {
    this->c = c;
}

int QuadraticFunction::getA() {
    return a;
}

int QuadraticFunction::getB() {
    return b;
}

int QuadraticFunction::getC() {
    return c;
}

void QuadraticFunction::printFunction() {
    cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
}
