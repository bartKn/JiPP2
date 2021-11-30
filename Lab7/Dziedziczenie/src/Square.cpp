#include "Square.h"

Square::Square(string n, string c, int a_) {
name = n;
color = c;
a = a_;
}

void Square::printSquareData() {
    printShapeData();
    cout << "a = " << a << endl;
}

int Square::perimeter() {
    return 4 * a;
}

int Square::area() {
    return a*a;
}
