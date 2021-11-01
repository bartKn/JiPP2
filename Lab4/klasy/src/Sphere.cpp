#include "../header/Sphere.h"
#include <math.h>

#define PI 3.14159265358979323846

Sphere::Sphere() {

}

void Sphere::setRadius(int radius) {
    this->radius = radius;
}

int Sphere::getRadius() {
    return radius;
}

double Sphere::volume() {
    return 4./3 * PI * pow(radius, 3);
}
