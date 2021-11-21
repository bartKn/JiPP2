#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include <math.h>


class Node {
private:
    double x, y;

protected:
    friend double pointsDistance(Node& a , Node& b);

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    double getX() const;

    double getY() const;
};



#endif //JIPP2_NODE_H

