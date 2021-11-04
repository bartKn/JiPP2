#include "../header/Point.h"
#include <math.h>

Point::Point(float xCoord, float yCoord):
    x(xCoord),
    y(yCoord)
{
}

void Point::setX(float xCoord) {
    this->x = xCoord;
}

void Point::setY(float yCoord) {
    this->y = yCoord;
}

float Point::getX() {
    return x;
}

float Point::getY() {
    return y;
}
