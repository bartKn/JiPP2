#ifndef JIPPV2_POINT_H
#define JIPPV2_POINT_H

#include <iostream>

using namespace std;

class Point2 {
private:
    double *x = new double;
    double *y = new double;
    string name;

public:
    ~Point2();

    Point2(Point2 &point);
    /**
     * Create point in passed place
     * @param x x coordinate of point
     * @param y y coordinate of point
     * @param name name of point
     */
    Point2(double x, double y, string name);

    /**
     * Create point in 0, 0
     * @param name name of point
     */
    Point2(string name);

    /**
     * Update name of point
     * @param name new point name
     */
    void setName(string name);

    /**
     * Get value of x
     * @return x
     */
    double getX();

    /**
     * Update x value
     * @param x new x value
     */
    void setX(double x);

    /**
     * Get value of y
     * @return y
     */
    double getY();

    /**
     * Update y value
     * @param y new y value
     */
    void setY(double y);

    /**
     * Print data about point (x and y)
     */
    void printData() const;

    bool operator==(const Point2 &rhs) const;

    bool operator!=(const Point2 &rhs) const;

    Point2 operator+=(const Point2 &rhs) const;

    Point2 operator+=(const double &rhs) const;

    const string &getName() const;

};



#endif //JIPPV2_POINT_H
