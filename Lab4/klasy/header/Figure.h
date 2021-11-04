#ifndef JIPPV2_FIGURE_H
#define JIPPV2_FIGURE_H
#include "Point.h"

class Figure
        :private Point {
public:
    Figure(int vertices = 0);
    ~Figure();
    void setData();
    void printData();


private:
    int numOfVertices;
    Point* verticesArray;
};


#endif //JIPPV2_FIGURE_H
