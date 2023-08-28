#include "../point/point.h"
#include "../vector/vector.h"
#include "camera.h"
#include <iostream>

int main() {
    int screenWidth = 50;
    int screenHeight = 50;
    float distanceScreen = 150;

    Vector vectorUp(1, 1, 1);
    Point localization(0, 0, 10);
    Point target(0, 0, 0);

    Camera camera(screenWidth, screenHeight, distanceScreen, vectorUp, localization, target);

    std::cout << "Camera Information:\n";
    std::cout << "Screen Width: " << camera.screenWidth << "\n";
    std::cout << "Screen Height: " << camera.screenHeight << "\n";
    std::cout << "Distance to Screen: " << camera.distanceScreen << "\n";
    
    std::cout << "\nVector W: " << camera.vectorW.x << " " << camera.vectorW.y << " " << camera.vectorW.z << "\n";
    std::cout << "Vector X: " << camera.vectorX.x << " " << camera.vectorX.y << " " << camera.vectorX.z << "\n";
    std::cout << "Vector Y: " << camera.vectorY.x << " " << camera.vectorY.y << " " << camera.vectorY.z << "\n";
    std::cout << "Vector Target: " << camera.vectorTarget.x << " " << camera.vectorTarget.y << " " << camera.vectorTarget.z << "\n";

    return 0;
}

