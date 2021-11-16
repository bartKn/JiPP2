#ifndef JIPPV2_VECTOR_H
#define JIPPV2_VECTOR_H

#include <math.h>

class Vector{
private:
    double x, y;

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
