#ifndef SCENE_H
#define SCENE_H

#include <vector>
#include "../vector/vector.h"
#include "../point/point.h"
class Scene
{
public:
    struct Light
    {
        Point location;
        Vector intensity;

        Light(const Point &loc, const Vector &intensity) : location(loc), intensity(intensity) {}
    };

    Scene(const Vector &ambientColor);

    void addLight(const Light &light);

    const Vector &getAmbientColor() const;
    const std::vector<Light> &getLights() const;

private:
    Vector ambientColor;
    std::vector<Light> lights;
};

#endif // SCENE_H
