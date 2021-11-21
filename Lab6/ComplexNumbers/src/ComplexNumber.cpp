#include "ComplexNumber.h"
#include <iostream>

using namespace std;

ComplexNumber::ComplexNumber(double x, double y): a(x), b(y) {}

void ComplexNumber::print() {
    if(b > 0) {
        cout << a << " + " << b << "i" << endl;
    } else if (b == 0) {
        cout << a << endl;
    } else {
        cout << a << " - " << -b << "i" << endl;
    }
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &rhs) const {
    return ComplexNumber(this->a + rhs.a, this->b + rhs.b);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &rhs) const {
    return ComplexNumber(this->a - rhs.a, this->b - rhs.b);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &rhs) const {
    double a1a2 = (this->a * rhs.a);
    double a1b1 = (this->a * rhs.b);
    double b1a2 = (this->b * rhs.a);
    double b1b2 = -(this->b * rhs.b);
    return ComplexNumber(a1a2+b1b2, a1b1+b1a2);
}

ComplexNumber ComplexNumber::operator&(const double &x) const {
    return ComplexNumber(this->a * x, this->b * x);
}

ComplexNumber operator&(const double &lhs, const ComplexNumber &rhs) {
    return ComplexNumber(rhs.a * lhs, rhs.b * lhs);
}

bool ComplexNumber::operator==(const ComplexNumber &rhs) const {
    if ((this->a == rhs.a) && (this->b == rhs.b)) return true;
    return false;
}




