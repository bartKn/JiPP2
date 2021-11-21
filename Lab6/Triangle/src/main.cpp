#include <iostream>
#include "Triangle.h"
#include "Node.h"

using namespace std;

int main() {
    Node a, b(5,8), c(1,16);
    Triangle triangle(a, b, c, "First triangle");
    triangle.display();
    cout << triangle;
    cout << "Distance between first and second point is = " << triangle.distance(0, 1);
}
