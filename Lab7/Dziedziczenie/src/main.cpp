#include <iostream>
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {
    cout << "Circle" << endl;
    Circle circle("first", "black", 4);
    circle.printCircleData();
    cout << "circumference - " << circle.circumference() << endl;
    cout << "area - " << circle.area() << endl;

    cout << endl << "Square" << endl;
    Square square("second", "white", 3);
    square.printSquareData();
    cout << "perimeter - " << square.perimeter() << endl;
    cout << "area - " << square.area() << endl;



}
