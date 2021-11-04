#include "../header/Figure.h"
#include <iostream>

using namespace std;

Figure::Figure(int vertices):
    numOfVertices(vertices)
{
    verticesArray = new Point[numOfVertices];
}

Figure::~Figure() {
    delete[] verticesArray;
}

void Figure::setData() {
    float xCoord, yCoord;
    for (int i = 0; i < numOfVertices; ++i) {
        cout << i + 1 << ". x = ";
        cin >> xCoord;
        verticesArray[i].setX(xCoord);
        cout << i + 1 << ". y = ";
        cin >> yCoord;
        verticesArray[i].setY(yCoord);
    }
}

void Figure::printData() {
    for (int i = 0; i < numOfVertices; ++i) {
        cout << i+ 1 << ".\tx = " << verticesArray[i].getX() << "\ty = " << verticesArray[i].getY() << endl;
    }
}

