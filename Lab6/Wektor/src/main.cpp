#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    Vector v1(1,2);
    Vector v2(3,-5);
    Vector v3;

    cout << "v1 = ";
    v1.print();
    cout << "v2 = ";
    v2.print();

    cout << "v1 + v2 = ";
    v3 = v1 + v2;
    v3.print();

    cout << "v1 - v2 = ";
    v3 = v1 - v2;
    v3.print();

    cout << "v1 * 3 = ";
    v3 = v1 * 3;
    v3.print();

    cout << "v1 * v2 = ";
    double result = v1 & v2;
    cout << result << endl;

    cout << "v1 == v2 ";
    if (v1==v2) cout << "true" << endl;
    else cout << "false" << endl;

    cout << "przeciazanie <<" << endl;

    cout << "v1.print() - ";
    v1.print();
    cout << "cout << v1 - ";
    cout << v1;


}
