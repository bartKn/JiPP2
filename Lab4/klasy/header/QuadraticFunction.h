#ifndef JIPPV2_QUADRATICFUNCTION_H
#define JIPPV2_QUADRATICFUNCTION_H


class QuadraticFunction {
public:
    void setA(int a);
    void setB(int b);
    void setC(int c);
    int getA();
    int getB();
    int getC();
    void printFunction();

private:
    int a, b, c;
};


#endif //JIPPV2_QUADRATICFUNCTION_H
