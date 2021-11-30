#ifndef JIPPV2_SQUARE_H
#define JIPPV2_SQUARE_H

#include "GeometricShape.h"
#include <iostream>

using namespace std;

class Square: public GeometricShape {
private:
    int a;

public:
    Square(string n = "default", string c = "default", int a_ = 1);
    void printSquareData();
    int perimeter();
    int area();
};


#endif //JIPPV2_SQUARE_H
