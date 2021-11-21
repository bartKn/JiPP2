#ifndef JIPPV2_COMPLEXNUMBER_H
#define JIPPV2_COMPLEXNUMBER_H


class ComplexNumber {
private:
    //a+bi
    double a;
    double b;
    friend ComplexNumber operator&(const double &lhs, const ComplexNumber &rhs);

public:
    ComplexNumber(double x = 0, double y = 0);
    void print();

    ComplexNumber operator+(const ComplexNumber &rhs) const;

    ComplexNumber operator-(const ComplexNumber &rhs) const;

    ComplexNumber operator*(const ComplexNumber &rhs) const;

    ComplexNumber operator&(const double &x) const;

    bool operator==(const ComplexNumber &rhs) const;




};


#endif //JIPPV2_COMPLEXNUMBER_H
