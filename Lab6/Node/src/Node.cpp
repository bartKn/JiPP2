#include <iostream>
#include "Node.h"

using namespace std;

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double pointsDistance(Node& a, Node& b) {
    return sqrt(pow((a.x - b.x), 2.0) + pow((a.y - b.y), 2.0));
}
