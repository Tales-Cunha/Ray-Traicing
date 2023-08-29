#ifndef SPHERE_H
#define SPHERE_H

#include "../scene/color.h"
#include "../point/point.h"

#include "../scene/color.h"
class Sphere {
public:
    Point center = Point(0, 0, 0);
    Color color = Color(0, 0, 0);
    float radius;
    float diffuseCoefficient;
    float specularCoefficient;
    float ambientCoefficient;
    float reflectionCoefficient;
    float transmissionCoefficient;
    float rugosityCoefficient;

    Sphere (Point _center, 
        float _radius, 
        Color _color, 
        float _diffuseCoefficient, 
        float _specularCoefficient,
        float _ambientCoefficient,
        float _reflectionCoefficient,
        float _transmissionCoefficient,
        float _rugosityCoefficient);
    
    double intercept (Point &point,Vector &vector);
};

#endif /* SPHERE_H */
SPHERE_H
