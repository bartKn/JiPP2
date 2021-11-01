#include "../header/Cuboid.h"
#include <iostream>

using namespace std;

Cuboid::Cuboid():
    x(2),
    y(3),
    z(4)
    {
        cout << "Klasa utworzona, wartosci zmiennych: " << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
}

void Cuboid::setX(int x_) {
    this->x = x_;
}

void Cuboid::setY(int y_) {
    this->y = y_;
}

void Cuboid::setZ(int z_) {
    this->z = z_;
}

int Cuboid::getX() {
    return x;
}

int Cuboid::getY() {
    return y;
}

int Cuboid::getZ() {
    return z;
}

int Cuboid::calculateSurface() {
    return 2 * (x * y + x * z + y * z);
}
