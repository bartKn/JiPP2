#include <iostream>
#include "Node.h"

using namespace std;

int main() {
    Node a(0, 0);
    Node b(3, 4);
    cout << pointsDistance(a, b) << endl;
}

