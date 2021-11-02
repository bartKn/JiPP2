#include <iostream>
#include "../header/Cuboid.h"
#include "../header/Sphere.h"
#include "../header/QuadraticFunction.h"
#include "../header/Student.h"

using namespace std;

void zad1() {
    Cuboid cuboid;
    cout << "Pole powierzchni: " << cuboid.calculateSurface() << endl << endl;
    cout << "Zmiana wartosci" << endl;
    cuboid.setX(1);
    cuboid.setY(2);
    cuboid.setZ(3);
    cout << "x = " << cuboid.getX() << endl;
    cout << "y = " << cuboid.getY() << endl;
    cout << "z = " << cuboid.getZ() << endl;
    cout << "Pole powierzchni: " << cuboid.calculateSurface() << endl;
}

void zad2() {
    Sphere sphere;
    sphere.setRadius(2);
    cout << "Obj kuli o promieniu " << sphere.getRadius() << " = " << sphere.volume() << endl;
}

void zad3() {
    int a, b, c;
    QuadraticFunction function;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    function.setA(a);
    function.setB(b);
    function.setC(c);
    function.printFunction();
}

void zad4() {
    Student student;
    student.setName("Bart");
    student.setSurname("Kn");
    student.setID(12345);
    student.setNumOfQuestions(56);
    student.setNumOfCorrectAnswers(37);
    cout << "Imie - " << student.getName();
    cout << "\nNazwisko - " << student.getSurname();
    cout << "\nNumer - " << student.getIDnumber();
    cout << "\nWynik - " << student.percentageScore() << "%\n";
}

int main() {
    //zad1();
    //zad2();
    //zad3();
    zad4();
}
