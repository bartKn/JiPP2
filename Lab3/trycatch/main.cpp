#include <iostream>

using namespace std;

void zad1() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    try {
        double c = (double)a / (double)b;
        int cToInt = c;
        if (c - cToInt != 0){
            throw "b nie dzieli a";
        }
        cout << a << " / " << b << " = " << c << endl;
    } catch (const char* msg){
        cout << msg << endl;
    }
}

void zad2() {
    string text;
    cout << "- ";
    cin >> text;
    int length = text.length();
    char* charArr;
    charArr = new char[length + 1];
    strcpy(charArr, text.c_str());

    try {
        for (int i = 0; i < length; ++i) {
            if ((int)charArr[i] < 48 || (int)charArr[i] > 57) {
                throw "Niedozwolony znak";
            }
        }
        long pattern = 2147483647;
        long charConversion = atol(charArr);
        if (charConversion > pattern) {
            throw "Liczba jest zbyt duża";
        }
        int number = stoi(text);
        cout << number;

    } catch (const char* msg) {
        cout << msg << endl;
    }
    delete[] charArr;
}

int main() {
    //zad1();
    zad2();
    return 0;
}


