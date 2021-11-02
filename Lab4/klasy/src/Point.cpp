#include "../header/Point.h"
#include <math.h>

Point::Point(pointData pnt1, pointData pnt2):
    point1(pnt1),
    point2(pnt2)
{
}

int Point::lenght() {
    return sqrt(pow((point1.xCoordinate - point2.xCoordinate),2) + pow((point1.yCoordinate - point2.yCoordinate),2));
}