#ifndef JIPPV2_CUBOID_H
#define JIPPV2_CUBOID_H


class Cuboid {
public:
    Cuboid();
    void setX(int x_);
    void setY(int y_);
    void setZ(int z_);
    int getX();
    int getY();
    int getZ();
    int getSurfaceArea();
    int calculateSurface();

private:
    int x, y, z;

};


#endif //JIPPV2_CUBOID_H
