#include <iostream>
#include "../header/Cuboid.h"
#include "../header/Sphere.h"
#include "../header/QuadraticFunction.h"
#include "../header/Student.h"
#include "../header/Point.h"

using namespace std;

void zad2_1() {
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

void zad2_2() {
    Sphere sphere;
    sphere.setRadius(2);
    cout << "Obj kuli o promieniu " << sphere.getRadius() << " = " << sphere.volume() << endl;
}

void zad2_3() {
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

void zad2_4() {
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

void zad5_1() {
    pointData pnt1, pnt2;
    pnt1.xCoordinate = 2;
    pnt1.yCoordinate = 5;
    pnt2.xCoordinate = 5;
    pnt2.yCoordinate = 9;
    Point point(pnt1, pnt2);
    cout << point.lenght();
}

void zad5_2() {

}

int main() {
    //zad2_1();
    //zad2_2();
    //zad2_3();
    //zad2_4();
    //zad5_1();
    zad5_2();
}
