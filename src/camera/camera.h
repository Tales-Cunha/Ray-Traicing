#ifndef CAMERA_H
#define CAMERA_H

#include "../point/point.h"
#include "../vector/vector.h"

class Camera {
public:
    int screenWidth;
    int screenHeight;
    float distanceScreen;

    Point localization = Point(0,0,0);
    Point target = Point(0,0,0);

    Vector vectorTarget = Vector(0,0,0);
    Vector vectorUp = Vector(0,0,0);

    Vector vectorW = Vector(0,0,0); 
    Vector vectorX = Vector(0,0,0);
    Vector vectorY = Vector(0,0,0);
    
    Camera(int _screenWidth, int _screenHeight, float _distanceToScreen, Vector _vectorUp, Point _localization, Point _target);
};

#endif /* CAMERA_H */
