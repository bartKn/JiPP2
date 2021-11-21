#include "Triangle.h"
#include "Node.h"
#include <iostream>

using namespace std;

Triangle::Triangle(Node a, Node b, Node c, string _name): name(_name) {
    nodes[0] = a;
    nodes[1] = b;
    nodes[2] = c;
}

void Triangle::display() {
    cout << "name - " << name << endl;
    cout << "node1 - x = " << nodes[0].getX() << " y = " << nodes[0].getY() << endl;
    cout << "node2 - x = " << nodes[1].getX() << " y = " << nodes[1].getY() << endl;
    cout << "node3 - x = " << nodes[2].getX() << " y = " << nodes[2].getY() << endl;
}

ostream& operator<<(ostream& os, const Triangle& triangle) {
    os << "name - " << triangle.name << endl;
    os << "node1 - x = " << triangle.nodes[0].getX() << " y = " << triangle.nodes[0].getY() << endl;
    os << "node2 - x = " << triangle.nodes[1].getX() << " y = " << triangle.nodes[1].getY() << endl;
    os << "node3 - x = " << triangle.nodes[2].getX() << " y = " << triangle.nodes[2].getY() << endl;
    return os;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    return pointsDistance(nodes[firstPointIndex], nodes[secondPointIndex]);
}
