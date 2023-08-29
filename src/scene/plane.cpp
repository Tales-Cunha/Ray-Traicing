Plane::Plane(
    Point _planePoint, 
    Vector _normalVector, 
    Color _color, 
    float _diffuseCoefficient, 
    float _specularCoefficient,
    float _ambientCoefficient,
    float _reflectionCoefficient,
    float _transmissionCoefficient,
    float _rugosityCoefficient) : 

    planePoint(_planePoint),
    normalVector(_normalVector),
    color(_color),
    diffuseCoefficient(_diffuseCoefficient),
    specularCoefficient(_specularCoefficient),
    ambientCoefficient(_ambientCoefficient),
    reflectionCoefficient(_reflectionCoefficient),
    transmissionCoefficient(_transmissionCoefficient),
    rugosityCoefficient(_rugosityCoefficient) {}
