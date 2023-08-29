#include "scene.h"

Scene::Scene(const Vector &ambientColor) : ambientColor(ambientColor) {}

void Scene::addLight(const Light &light)
{
    lights.push_back(light);
}

const Vector &Scene::getAmbientColor() const
{
    return ambientColor;
}

const std::vector<Scene::Light> &Scene::getLights() const
{
    return lights;
}
