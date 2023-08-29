#ifndef PLANE_H
#define PLANE_H

#include "../scene/color.h"
#include "../point/point.h"
#include "../vector/vector.h"

class Plane {
public:
    Point planePoint = Point(0, 0, 0);
    Vector normalVector = Vector(0, 0, 0);
    Color color = Color(0, 0, 0);

    float diffuseCoefficient;
    float specularCoefficient;
    float ambientCoefficient;
    float reflectionCoefficient;
    float transmissionCoefficient;
    float rugosityCoefficient;

    Plane (Point planePoint, 
        Vector normalVector, 
        Color color, 
        float diffuseCoefficient, 
        float specularCoefficient,
        float ambientCoefficient,
        float reflectionCoefficient,
        float transmissionCoefficient,
        float rugosityCoefficient);

};

#endif /* PLANE_H */