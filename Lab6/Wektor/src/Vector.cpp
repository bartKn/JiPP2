#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::print() {
    cout << "[ " << x << ", " << y << " ]" << endl;
 }

Vector Vector::operator+(const Vector &rhs) const {
        return Vector(this->x + rhs.x, this->y + rhs.y);
}

Vector Vector::operator-(const Vector &rhs) const {
    return Vector(this->x - rhs.x, this->y - rhs.y);
}

Vector Vector::operator!() const {
    return Vector(-this->x, -this->y);
}

bool Vector::operator==(const Vector &rhs) const {
    if ((this->x == rhs.x) && (this->y == rhs.y)) {
        return true;
    } else {
        return false;
    }
}

Vector Vector::operator*(const double& s) const {
    return Vector(this->x * s, this->y * s);
}

double Vector::operator&(const Vector &rhs) const {
    return ((this->x * rhs.x) + (this->y * rhs.y));
}



