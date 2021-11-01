#ifndef JIPPV2_SPHERE_H
#define JIPPV2_SPHERE_H


class Sphere {
public:
    Sphere();
    double volume();
    void setRadius(int radius);
    int getRadius();

private:
    int radius;
};


#endif //JIPPV2_SPHERE_H
