#ifndef JIPPV2_CIRCLE_H
#define JIPPV2_CIRCLE_H

#include "GeometricShape.h"
#include <iostream>

using namespace std;

class Circle: public GeometricShape {
private:
    int radius;
public:
    void setRadius(int r);
    Circle(string n = "default", string c = "default", int r = 1);
    double circumference();
    double area();
    void printCircleData();
};


#endif //JIPPV2_CIRCLE_H
