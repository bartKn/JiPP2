#include <iostream>
#include <math.h>
#include "Cuboid.h"
#include "Sphere.h"
#include "QuadraticFunction.h"
#include "Student.h"
#include "Point.h"
#include "Figure.h"

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

float length(Point pnt1, Point pnt2) {
    return sqrt(pow((pnt1.getX() - pnt2.getX()), 2) + pow((pnt1.getY() - pnt2.getY()), 2));
}

void zad5_1() {
    Point point1(2, 5);
    Point point2(5, 9);
    cout << length(point1, point2) << endl;
    point1.setX(0);
    point1.setY(0);
    point2.setX(3);
    point2.setY(4);
    cout << length(point1, point2);
}



void zad5_2() {
    Figure figure1(4);
    figure1.setData();
    figure1.printData();
}

int main() {
    //zad2_1();
    //zad2_2();
    //zad2_3();
    //zad2_4();
    //zad5_1();
    zad5_2();
}
