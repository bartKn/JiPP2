#ifndef JIPPV2_VECTOR_H
#define JIPPV2_VECTOR_H

#include <iostream>
#include <math.h>

using namespace std;

class Vector{
private:
    double x, y;
    friend Vector operator*(const double& lhs, const Vector& rhs);
    friend ostream& operator<<(ostream& os, const Vector& v);

public:
    Vector();

    Vector(double x, double y);

    double length();

    void print();

    Vector operator+(const Vector &rhs) const;

    Vector operator-(const Vector &rhs) const;

    Vector operator!() const;

    bool operator==(const Vector &rhs) const;

    Vector operator*(const double& s) const;

    double operator&(const Vector& rhs) const;
};



#endif //JIPPV2_VECTOR_H
