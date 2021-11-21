#ifndef JIPPV2_TRIANGLE_H
#define JIPPV2_TRIANGLE_H

#include "Node.h"
#include <iostream>

using namespace std;

class Triangle: private Node{
private:
    Node nodes[3];
    string name;
    friend ostream& operator<<(ostream& os, const Triangle& triangle);
    friend double pointsDistance(Node& a , Node& b);

public:

    Triangle(Node a, Node b, Node c, string _name = "default");
    void display();
    double distance(int firstPointIndex, int secondPointIndex);
};


#endif //JIPPV2_TRIANGLE_H
