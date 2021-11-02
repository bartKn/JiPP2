#ifndef JIPPV2_POINT_H
#define JIPPV2_POINT_H

struct pointData {
    int xCoordinate;
    int yCoordinate;
};

class Point {
public:
    Point(pointData pnt1, pointData pnt2);
    pointData point1;
    pointData point2;
    int lenght();
};


#endif //JIPPV2_POINT_H
