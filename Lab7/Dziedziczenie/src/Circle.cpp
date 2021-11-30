#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(string n, string c, int r): radius(r) {
name = n;
color = c;
}

double Circle::circumference() {
    return 2*3.14*radius;
}

double Circle::area() {
    return 3.13*radius*radius;
}

void Circle::printCircleData() {
    printShapeData();
    cout << "radius - " << radius << endl;
}


