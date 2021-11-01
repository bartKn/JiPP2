#include <iostream>
#include "../header/Cuboid.h"
#include "../header/Sphere.h"

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

int main() {
    //zad1();
    zad2();
}
