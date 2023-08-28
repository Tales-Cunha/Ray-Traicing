#ifndef POINT_H
#define POINT_H

#include "../vector/vector.h"

class Point {
public:
    double x, y, z;
    
    Point (double x, double y, double z);
    Point sumVectorToPoint(const Vector &other) const;
    Vector getVectorToPoint(const Point &other) const;
};

#endif /* POINT3D_H */