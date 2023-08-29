#include "Sphere.h"

Sphere::Sphere(Point _center, 
        float _radius, 
        Color _color, 
        float _diffuseCoefficient, 
        float _specularCoefficient,
        float _ambientCoefficient,
        float _reflectionCoefficient,
        float _transmissionCoefficient,
        float _rugosityCoefficient) 
        : 
        center(_center),
        radius(_radius),
        color(_color),
        diffuseCoefficient(_diffuseCoefficient),
        specularCoefficient(_specularCoefficient),
        ambientCoefficient(_ambientCoefficient),
        reflectionCoefficient(_reflectionCoefficient),
        transmissionCoefficient(_transmissionCoefficient),
        rugosityCoefficient(_rugosityCoefficient) {}


