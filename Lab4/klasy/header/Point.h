#ifndef JIPPV2_POINT_H
#define JIPPV2_POINT_H

class Point {
public:
    Point(float xCoord = 0, float yCoord = 0);
    void setX(float xCoord);
    void setY(float yCoord);
    float getX();
    float getY();

private:
    float x;
    float y;
};

#endif //JIPPV2_POINT_H
