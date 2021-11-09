#include "Point.h"

Point2::Point2(double x, double y, string name) : name(name) {
    *this->x = x;
    *this->y = y;
}

Point2::Point2(string name) : name(name) {
    *x = *y = 0;
}

double Point2::getX() {
    return *x;
}

void Point2::setX(double x) {
    *this->x = x;
}

double Point2::getY() {
    return *y;
}

void Point2::setY(double y) {
    *this->y = y;
}

void Point2::printData() const {
    cout << "Point " << name << " (x = " << *x << ", y = " << *y << ")\n";
}

void Point2::setName(string name) {
    this->name = name;
}

bool Point2::operator==(const Point2 &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           name == rhs.name;
}

bool Point2::operator!=(const Point2 &rhs) const {
    return !(rhs == *this);
}

const string &Point2::getName() const {
    return name;
}

Point2::~Point2() {
    delete x;
    delete y;
}

Point2::Point2(Point2 &point) {
    name = point.name;
    x = new double;
    y = new double;
    *x = *point.x;
    *y = *point.y;
}
