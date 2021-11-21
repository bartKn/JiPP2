#include <iostream>
#include <ComplexNumber.h>

using namespace std;

int main() {
    ComplexNumber num1(5, 2);
    ComplexNumber num2(3, -7);
    ComplexNumber num3;

    cout << "num1 = ";
    num1.print();

    cout << "num2 = ";
    num2.print();

    cout << "num1 + num2 = ";
    num3 = num1 + num2;
    num3.print();

    cout << "num1 - num2 = ";
    num3 = num1 - num2;
    num3.print();

    cout << "num1 * num2 = ";
    num3 = num1 * num2;
    num3 = num2 * num1;
    num3.print();

    cout << "num1 * 3 = ";
    num3 = num1 & 3;
    num3 = 3 & num1;
    num3.print();

    cout << "num1 == num2 = ";
    if (num1==num2) cout << "true" << endl;
    else cout << "false" << endl;
}