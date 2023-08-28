#include "camera.h"
#include "../vector/vector.h"
#include "../vector/vector.h"
Camera::Camera (int _screenWidth, int _screenHeight, float _distanceScreen, Vector _vectorUp, Point _localization, Point _target) 
    :
    screenWidth(_screenWidth),
    screenHeight(_screenHeight),
    distanceScreen(_distanceScreen),
    vectorUp(_vectorUp),
    localization(_localization),
    target(_target){
    
    vectorTarget = Vector(target.x - localization.x, target.y - localization.y, target.z - localization.z);
    
    vectorW = vectorTarget;
    vectorW = vectorW*-1;
    vectorW = vectorW.normalize();

    vectorX = vectorW.cross(vectorUp);
    vectorX = vectorX.normalize();

    vectorY = vectorW.cross(vectorX);
    vectorY = vectorY.normalize();

    
}
