#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include <math.h>


class Node {
private:
    friend double pointsDistance(Node& a , Node& b);
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);
};



#endif //JIPP2_NODE_H

